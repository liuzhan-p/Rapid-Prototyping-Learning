
A simple embedded systems project built with an **ESP32** and a **128×64 SSD1306 OLED display** using the Arduino framework.

The dashboard continuously displays real-time system information from the ESP32, providing a lightweight monitoring interface. The project was developed and tested using the **Wokwi online simulator**, and the code is fully compatible with a physical ESP32 development board.


## Features

- Real-time system uptime
- CPU frequency monitoring
- Free heap memory display
- ESP32 SDK version display
- OLED dashboard interface
- Automatic screen refresh

---

## Hardware

- ESP32 Dev Module
- SSD1306 OLED Display (128×64)
- I²C Communication

---

## Software

- Arduino Framework
- Adafruit SSD1306 Library
- Adafruit GFX Library
- Wokwi Simulator

---

## Wiring

| OLED | ESP32 |
|------|--------|
| VCC | 3V3 |
| GND | GND |
| SDA | GPIO21 |
| SCL | GPIO22 |

---

## Project Structure

```text
ESP32-System-Dashboard/
│
├── README.md
├── sketch.ino
├── diagram.json
├── wokwi.toml
│
├── images/
│   ├── simulation.png
│
```

---

## System Information Displayed

The dashboard displays:

- Running Time (seconds)
- CPU Frequency
- Free Heap Memory
- ESP32 SDK Version

---

## Skills Demonstrated

- Embedded Programming
- ESP32 Development
- Arduino Framework
- I²C Communication
- OLED Display Programming
- Real-Time Data Display

---

## Simulation

This project was developed and tested using the **Wokwi online simulator**.

The program can be uploaded directly to a physical ESP32 development board connected to an SSD1306 OLED display without modification.

---

