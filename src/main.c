/*
 * Copyright (c) 2024 Google LLC
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file main.c
 * @brief Multi-functional device firmware for Zephyr RTOS.
 *
 * This application demonstrates a device that simultaneously acts as a radio
 * sniffer for both Bluetooth Low Energy (BLE) and IEEE 802.15.4 networks,
 * while also logging data from on-board sensors (accelerometer and light)
 * and providing a visual heartbeat via an LED.
 *
 * This implementation incorporates fixes for modern Zephyr APIs, particularly
 * for network management event callbacks. It requires the appropriate device
 * tree overlays and Kconfig settings to be enabled for all hardware components.
 */

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/version.h>

/* Peripherals */
#include <zephyr/drivers/gpio.h>
#include <zephyr/drivers/sensor.h>

/* Networking & Radio */
#include <zephyr/bluetooth/bluetooth.h>
#include <zephyr/bluetooth/hci.h>
#include <zephyr/net/net_if.h>
#include <zephyr/net/net_mgmt.h>
#include <zephyr/net/net_pkt.h>
#include <zephyr/net/ieee802154.h>
#include <zephyr/net/ieee802154_mgmt.h>


/* Register the logging module once */
LOG_MODULE_REGISTER(sniffer_app, LOG_LEVEL_INF);

/* --- Configuration --- */
#define MAIN_LOOP_SLEEP_MS 2000 /* Sleep duration for the main loop (in ms) */

/* --- Device Tree Aliases --- */

/* Heartbeat LED */
#if DT_HAS_ALIAS(led0)
static const struct gpio_dt_spec heartbeat_led = GPIO_DT_SPEC_GET(DT_ALIAS(led0), gpios);
#else
#warning "led0 alias not defined in device tree. Heartbeat LED will be disabled."
#define heartbeat_led (const struct gpio_dt_spec){0}
#endif

/* Accelerometer Sensor */
#if DT_HAS_ALIAS(fxos8700)
static const struct device *const accel_dev = DEVICE_DT_GET(DT_ALIAS(fxos8700));
#else
#warning "fxos8700 alias not defined in device tree. Accelerometer will be disabled."
#define accel_dev NULL
#endif

/* Light Sensor */
#if DT_HAS_ALIAS(tsl2591)
static const struct device *const light_dev = DEVICE_DT_GET(DT_ALIAS(tsl2591));
#else
#warning "tsl2591 alias not defined in device tree. Light sensor will be disabled."
#define light_dev NULL
#endif


/* --- BLE Sniffer --- */

/**
 * @brief Callback function for BLE scan results.
 *
 * This function is invoked for each BLE advertisement packet received.
 * It logs the advertiser's address and the RSSI.
 */
static void ble_scan_cb(const bt_addr_le_t *addr, int8_t rssi, uint8_t type,
            struct net_buf_simple *ad)
{
    char addr_str[BT_ADDR_LE_STR_LEN];
    bt_addr_le_to_str(addr, addr_str, sizeof(addr_str));
    LOG_INF("BLE device found: %s (RSSI %d)", addr_str, rssi);
}

/**
 * @brief Initializes and starts the BLE scanner.
 */
static int ble_sniffer_init(void)
{
    struct bt_le_scan_param scan_param = {
        .type       = BT_LE_SCAN_TYPE_PASSIVE,
        .options    = BT_LE_SCAN_OPT_NONE,
        .interval   = BT_GAP_SCAN_FAST_INTERVAL,
        .window     = BT_GAP_SCAN_FAST_WINDOW,
    };
    int err;

    err = bt_enable(NULL);
    if (err) {
        LOG_ERR("Bluetooth init failed (err %d)", err);
        return err;
    }

    err = bt_le_scan_start(&scan_param, ble_scan_cb);
    if (err) {
        LOG_ERR("Starting scanning failed (err %d)", err);
        return err;
    }

    LOG_INF("BLE sniffer started successfully");
    return 0;
}


/* --- 802.15.4 Sniffer --- */

static struct net_mgmt_event_callback mgmt_cb;

/**
 * @brief Callback for IEEE 802.15.4 scan result events.
 *
 * The function signature matches the Zephyr net_mgmt_event_handler_t typedef:
 *   void (*)(struct net_mgmt_event_callback *cb,
 *            uint32_t mgmt_event,
 *            struct net_if *iface)
 *
 * Additional event info is accessed via cb->info and cb->info_length,
 * NOT passed as extra function arguments.
 */
static void ieee802154_handler(struct net_mgmt_event_callback *cb,
                   uint32_t mgmt_event,
                   struct net_if *iface)
{
    if (mgmt_event != NET_EVENT_IEEE802154_SCAN_RESULT) {
        return;
    }

    /* The scan result info is available through cb->info */
    if (cb->info == NULL || cb->info_length == 0) {
        return;
    }

    LOG_INF("802.15.4 scan result received on iface %p", iface);
}

/**
 * @brief Initializes the 802.15.4 sniffer.
 *
 * Sets up the network management event callback for scan results and
 * enables promiscuous mode on the default IEEE 802.15.4 interface so
 * that all traffic is captured.
 */
static void ieee802154_sniffer_init(void)
{
    struct net_if *iface = net_if_get_default();

    if (!iface) {
        LOG_ERR("Could not get default network interface");
        return;
    }

    /* Register for IEEE 802.15.4 scan result events */
    net_mgmt_init_event_callback(&mgmt_cb, ieee802154_handler,
                       NET_EVENT_IEEE802154_SCAN_RESULT);
    net_mgmt_add_event_callback(&mgmt_cb);

    /* Enter promiscuous mode to capture all traffic */
    if (net_if_set_promisc(iface) != 0) {
        LOG_ERR("Failed to set promiscuous mode on 802.15.4 interface");
        return;
    }

    LOG_INF("802.15.4 sniffer started in promiscuous mode");
}


/* --- Sensor Handling --- */

/**
 * @brief Fetches and logs data from the accelerometer.
 */
static void log_accelerometer_data(void)
{
    if (!accel_dev || !device_is_ready(accel_dev)) {
        return;
    }

    struct sensor_value acc[3];
    int ret;

    ret = sensor_sample_fetch(accel_dev);
    if (ret < 0) {
        LOG_ERR("Failed to fetch accelerometer sample: %d", ret);
        return;
    }

    ret = sensor_channel_get(accel_dev, SENSOR_CHAN_ACCEL_XYZ, acc);
    if (ret < 0) {
        LOG_ERR("Failed to get accelerometer data: %d", ret);
        return;
    }

    LOG_INF("Accel X: %.2f, Y: %.2f, Z: %.2f (m/s^2)",
        sensor_value_to_double(&acc[0]),
        sensor_value_to_double(&acc[1]),
        sensor_value_to_double(&acc[2]));
}

/**
 * @brief Fetches and logs data from the light sensor.
 */
static void log_light_data(void)
{
    if (!light_dev || !device_is_ready(light_dev)) {
        return;
    }

    struct sensor_value light;
    int ret;

    ret = sensor_sample_fetch(light_dev);
    if (ret < 0) {
        LOG_ERR("Failed to fetch light sensor sample: %d", ret);
        return;
    }

    ret = sensor_channel_get(light_dev, SENSOR_CHAN_LIGHT, &light);
    if (ret < 0) {
        LOG_ERR("Failed to get light sensor data: %d", ret);
        return;
    }

    LOG_INF("Ambient Light: %d Lux", light.val1);
}


/* --- Main Application --- */

int main(void)
{
    int ret;
    bool led_is_ready = false;

    LOG_INF("*** Booting Zephyr OS build %s ***", KERNEL_VERSION_STRING);
    LOG_INF("Multi-Sniffer and Sensor Logger Initializing...");

    /* --- Initialize Hardware --- */
    if (heartbeat_led.port && device_is_ready(heartbeat_led.port)) {
        ret = gpio_pin_configure_dt(&heartbeat_led, GPIO_OUTPUT_ACTIVE);
        if (ret == 0) {
            led_is_ready = true;
            LOG_INF("Heartbeat LED configured successfully.");
        } else {
            LOG_ERR("Failed to configure heartbeat LED (err %d)", ret);
        }
    }

    /* Check sensor readiness safely */
    if (accel_dev && !device_is_ready(accel_dev)) {
        LOG_ERR("Accelerometer device not ready.");
    }
    if (light_dev && !device_is_ready(light_dev)) {
        LOG_ERR("Light sensor device not ready.");
    }


    /* --- Initialize Sniffers --- */
    ble_sniffer_init();
    ieee802154_sniffer_init();

    /* --- Main Loop --- */
    while (1) {
        /* 1. Heartbeat LED */
        if (led_is_ready) {
            gpio_pin_toggle_dt(&heartbeat_led);
            LOG_INF("--- Heartbeat ---");
        }

        /* 2. Log Sensor Data */
        log_accelerometer_data();
        log_light_data();

        /* 3. Sleep */
        k_msleep(MAIN_LOOP_SLEEP_MS);
    }

    return 0;
}