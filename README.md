# MCXW71 BLE and IEEE 802.15.4 Sniffer

A Zephyr RTOS firmware application for the NXP FRDM-MCXW71 development board that acts as a dual-radio sniffer for Bluetooth Low Energy (BLE) and IEEE 802.15.4 networks. It also reads on-board sensors (accelerometer and ambient light) and provides a visual heartbeat LED indicator.

## Features

- **BLE Passive Scanning**: Detects nearby BLE advertisement packets and logs the advertiser address and RSSI (Received Signal Strength Indication).
- **IEEE 802.15.4 Promiscuous Mode**: Captures all 802.15.4 traffic on the default network interface by enabling promiscuous mode and listening for scan result events.
- **Sensor Data Logging**:
  - NXP FXOS8700 accelerometer: logs X, Y, and Z axis values in m/s^2.
  - AMS TSL2591 light sensor: logs ambient light in lux.
- **Heartbeat LED**: Toggles an LED every 2 seconds to indicate the application is running.
- **Zephyr Logging Subsystem**: All output is routed through the Zephyr logging framework for structured serial console output.

## Hardware Requirements

- **Board**: [NXP FRDM-MCXW71](https://www.nxp.com/design/design-center/development-boards-and-designs/general-purpose-mcus/frdm-development-board-for-mcxw71x-and-mcxw72x-mcus:FRDM-MCXW71) (Zephyr board name: `frdm_mcxw71`)
- **MCU**: NXP MCXW71 with dual-radio support (BLE and IEEE 802.15.4)
- **Sensors** (optional, directly connected via I2C):
  - NXP FXOS8700 accelerometer at I2C address `0x1E`
  - AMS TSL2591 ambient light sensor at I2C address `0x29`
- **LED**: Any GPIO-connected LED mapped to the `led0` device tree alias (the FRDM-MCXW71 board has one by default)

If sensors are not present, the firmware will log warnings at startup and skip sensor reads. The sniffer functions will still operate.

## Prerequisites

1. **Zephyr SDK**: Install the Zephyr development environment by following the official [Zephyr Getting Started Guide](https://docs.zephyrproject.org/latest/develop/getting_started/index.html).

2. **West**: Ensure the `west` meta-tool is installed and your Zephyr workspace is initialized:
   ```sh
   pip install west
   west init ~/zephyrproject
   cd ~/zephyrproject
   west update
   ```

3. **Environment Variables**: Set the following environment variables (or configure them in your shell profile):
   ```sh
   export ZEPHYR_BASE=~/zephyrproject/zephyr
   export ZEPHYR_SDK_INSTALL_DIR=~/zephyr-sdk-<version>
   ```

4. **Board Support**: The FRDM-MCXW71 board support must be available in your Zephyr installation. If using MCUXpresso, also set:
   ```sh
   export MCUX_VENV_PATH=/path/to/.mcuxpressotools/.venv/Scripts
   ```

## Building

Build the firmware for the FRDM-MCXW71 board:

```sh
cd mcxw71_sniffer
west build -b frdm_mcxw71
```

To perform a clean rebuild:

```sh
west build -b frdm_mcxw71 --pristine
```

If you are using CMake presets (for example with MCUXpresso IDE), debug and release presets are provided in `CMakePresets.json`.

## Flashing

Flash the compiled firmware to the board over the on-board debug probe:

```sh
west flash
```

If you have multiple debug probes connected, specify the runner or serial number as needed. Consult `west flash --help` for options.

## Usage

### Serial Console Output

Connect to the board's serial port at 115200 baud using any terminal emulator (minicom, PuTTY, screen, or the built-in west tool):

```sh
# Using west
west espressif monitor
# Or using minicom (Linux)
minicom -D /dev/ttyACM0 -b 115200
# Or using screen (macOS/Linux)
screen /dev/ttyACM0 115200
```

You should see output similar to:

```
*** Booting Zephyr OS build v4.2.0 ***
[00:00:00.010,000] <inf> sniffer_app: Multi-Sniffer and Sensor Logger Initializing...
[00:00:00.015,000] <inf> sniffer_app: Heartbeat LED configured successfully.
[00:00:00.020,000] <inf> sniffer_app: BLE sniffer started successfully
[00:00:00.025,000] <inf> sniffer_app: 802.15.4 sniffer started in promiscuous mode
[00:00:02.010,000] <inf> sniffer_app: --- Heartbeat ---
[00:00:02.015,000] <inf> sniffer_app: Accel X: 0.12, Y: -0.03, Z: 9.78 (m/s^2)
[00:00:02.020,000] <inf> sniffer_app: Ambient Light: 245 Lux
[00:00:02.100,000] <inf> sniffer_app: BLE device found: FA:KE:AD:DR:ES:S0 (random) (RSSI -65)
```

### Interpreting Output

- **Heartbeat**: Appears every 2 seconds confirming the main loop is running.
- **BLE device found**: Shows the Bluetooth address (public or random) and signal strength of each detected BLE advertiser.
- **802.15.4 scan result**: Indicates an IEEE 802.15.4 packet was captured in promiscuous mode.
- **Accel X/Y/Z**: Accelerometer readings in m/s^2.
- **Ambient Light**: Light level in lux from the TSL2591 sensor.

## Pin and Interface Configuration

The device tree overlay (`boards/app.overlay`) configures the following:

| Peripheral | Interface | Address / Alias |
|---|---|---|
| Heartbeat LED | GPIO | `led0` alias (board default) |
| FXOS8700 Accelerometer | I2C (`i2c0`) | `0x1E` |
| TSL2591 Light Sensor | I2C (`i2c0`) | `0x29` |
| BLE Radio | On-chip | Managed by Zephyr BT subsystem |
| IEEE 802.15.4 Radio | On-chip | Managed by Zephyr net subsystem |

To change the I2C bus or sensor addresses, edit `boards/app.overlay`. If your board has a different I2C controller, update the `&i2c0` node reference accordingly.

## Kconfig Options

Key configuration options are set in `prj.conf`:

| Option | Value | Purpose |
|---|---|---|
| `CONFIG_BT` | y | Enable Bluetooth subsystem |
| `CONFIG_BT_OBSERVER` | y | Enable BLE observer (passive scanning) role |
| `CONFIG_NET_L2_IEEE802154` | y | Enable IEEE 802.15.4 L2 layer |
| `CONFIG_NET_PROMISCUOUS_MODE` | y | Allow promiscuous mode on network interfaces |
| `CONFIG_FXOS8700` | y | Enable FXOS8700 accelerometer driver |
| `CONFIG_TSL2591` | y | Enable TSL2591 light sensor driver |
| `CONFIG_GPIO` | y | Enable GPIO for LED control |
| `CONFIG_I2C` | y | Enable I2C for sensor communication |

## Project Structure

```
mcxw71_sniffer/
├── CMakeLists.txt          # Zephyr CMake build file
├── CMakePresets.json        # CMake presets for debug/release builds
├── mcux_include.json        # MCUXpresso environment configuration
├── prj.conf                 # Zephyr Kconfig options
├── sample.yaml              # Zephyr sample metadata
├── boards/
│   ├── app.overlay          # Device tree overlay for sensors and LED
│   └── ucans32k1sic.overlay # Overlay for UCANS32K1SIC board variant
├── src/
│   └── main.c               # Application source code
└── .vscode/                 # VS Code / MCUXpresso IDE settings
```

## License

This project is licensed under the Apache 2.0 License. See the [LICENSE](LICENSE) file for details.
