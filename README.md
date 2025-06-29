# Gas Detection System

An IoT-based gas detection system using ESP32, MQ-2 sensor, LED, buzzer, and Blynk integration.

## Features

- Real-time gas leak detection
- LED and buzzer alerts
- Blynk mobile notification
- Power cutoff safety control (optional)
- PCB design included

## Components

- ESP32
- MQ-2 Gas Sensor
- Buzzer
- Red and Green LEDs
- Optional: Relay for safety power cut
- Blynk App (for remote alerts)

## Code

Find the Arduino code in the `firmware/` directory.

## Setup Instructions

1. Install Arduino IDE and ESP32 board package.
2. Add your Blynk Auth Token, WiFi SSID, and Password in `blynk_config.h`.
3. Upload the sketch to ESP32.
4. Power on and monitor alerts via Serial Monitor or Blynk app.

This project is licensed under the MIT License.

