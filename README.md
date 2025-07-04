# MCXW71 Zephyr Sniffer and Sensor Logger

This project is a firmware application built using the Zephyr RTOS for the MCXW71 development board. It demonstrates a multi-functional device that simultaneously acts as a radio sniffer for both Bluetooth Low Energy (BLE) and IEEE 802.15.4 networks, while also logging data from on-board sensors.

## Features 

* **Dual Radio Sniffing:**
    * Detects and logs the RSSI (Received Signal Strength Indication) and address of nearby BLE devices.
    * Captures and logs the RSSI of incoming IEEE 802.15.4 packets.
* **Sensor Data Logging:**
    * Reads from the NXP FXOS8700 accelerometer and logs the X, Y, and Z axis values.
    * Reads from the AMS TSL2591 light sensor and logs the ambient light in lux.
* **System Status:**
    * Includes a heartbeat LED that toggles periodically to provide a visual indication that the application is running.
* **Logging:**
    * Uses the Zephyr logging subsystem to output all information, making it easy to monitor the device's activity through a serial console.

---

## Hardware Requirements 

This application is designed to run on a development board equipped with the following components. The device tree aliases used in the code are:

* **MCU:** A board supported by Zephyr with BLE and 802.15.4 radio capabilities.
* **Accelerometer:** 
xp,fxos8700
* **Light Sensor:** ms,tsl2591
* **LED:** A user-configurable LED, referenced via the led0 alias.

---

## Getting Started 

This project is intended to be built with the Zephyr RTOS build system.

### Prerequisites

* You must have a working Zephyr development environment set up. If you don't, please follow the official [Zephyr Getting Started Guide](https://docs.zephyrproject.org/latest/getting_started/index.html).

### Building and Flashing

1.  **Clone the repository:**
    sh
    git clone <your-repository-url>
    cd <your-repository-directory>
    

2.  **Build the application for your board.** Replace your_board_name with the appropriate target board for your hardware (e.g., 
xp_mcxw71_mcux).
    sh
    west build -b your_board_name
    

3.  **Flash the application to your device:**
    sh
    west flash
    

---

## Usage 

Once the firmware is running on the device, connect to the board's serial port using a terminal emulator (e.g., PuTTY, minicom, or the west tool) to view the log output.

You should see output similar to the following, with the heartbeat message and sensor readings appearing every 2 seconds. BLE and 802.15.4 messages will appear as they are detected.

*** Booting Zephyr OS build zephyr-vX.X.X ***
[00:00:00.010,000] 


---

## License

This project is licensed under the Apache 2.0 License. See the LICENSE file for details.