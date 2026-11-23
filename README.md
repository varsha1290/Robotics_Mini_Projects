# Robotics Mini Projects

A portfolio of **83 mini-projects** covering Arduino, sensors, mobile robotics, IoT, communication protocols, Raspberry Pi, computer vision, ROS 2, and simulation. Two additional vehicle-monitoring projects are listed in the automotive section.

This repository is organized as one collection. Each project will have its own folder containing relevant source code and engineering documentation.

## Project Index

### 01. Arduino Basics

| No. | Project | Short description |
|---:|---|---|
| 1 | LED Blinking | Turns an LED ON and OFF at a repeating interval using a microcontroller output pin. |
| 2 | Traffic Light Controller | Sequences red, yellow, and green LEDs to represent a traffic signal cycle. |
| 3 | Push-Button LED Control | Uses a push button as a digital input to switch an LED. |
| 4 | Buzzer Alarm | Drives a buzzer to generate an audible alert. |
| 5 | RGB LED Controller | Controls red, green, and blue channels to create different colours. |
| 6 | 7-Segment Display Counter | Displays changing numeric values on a seven-segment display. |
| 7 | LCD 16×2 Display | Displays text and values on a 16-column, 2-row character LCD. |
| 8 | Serial Monitor Sensor Reading | Sends sensor readings from a microcontroller to a computer over serial communication. |
| 9 | Potentiometer-Based LED Control | Reads an analogue potentiometer and uses its value to control LED behaviour. |
| 10 | Servo Motor Control | Generates servo control signals to position a hobby servo at commanded angles. |
| 11 | Relay-Based Appliance Control | Uses a relay module as an electrically controlled switch for a load. |

### 02. Sensors and Instrumentation

| No. | Project | Short description |
|---:|---|---|
| 12 | Ultrasonic Distance Measurement | Measures distance by timing the echo of an ultrasonic pulse. |
| 13 | IR Obstacle Detection | Detects nearby objects using an infrared emitter and receiver module. |
| 14 | Height Measurement Using Ultrasonic Sensor | Estimates an object's height from ultrasonic distance measurements and a reference distance. |
| 15 | LDR Automatic Street Light | Uses light intensity from an LDR to switch a lamp or LED automatically. |
| 16 | PIR Motion Detection | Detects changes in infrared radiation caused by movement in its field of view. |
| 17 | Rain Detection System | Detects water or rainfall using a rain sensor module. |
| 18 | Soil Moisture Monitoring | Measures relative soil moisture using a soil-moisture sensor. |
| 19 | Temperature Monitoring Using LM35 | Reads temperature from an LM35 analogue temperature sensor. |
| 20 | Temperature and Humidity Using DHT11/DHT22 | Measures ambient temperature and relative humidity using a DHT sensor. |
| 21 | Flame Detection Alarm | Detects flame-associated infrared radiation and activates an alarm output. |
| 22 | Gas Leakage Detection (MQ-2) | Monitors combustible-gas/smoke response from an MQ-2 sensor and raises an alert. |
| 23 | Water Level Monitoring | Detects or estimates the water level in a tank or container. |
| 24 | Touch Sensor Switch | Uses a touch-sensitive module as an input to control an output. |
| 25 | Sound Detection System | Detects sound level changes using a microphone sensor module. |
| 26 | Vibration Detection System | Detects vibration or impact using a vibration sensor. |
| 27 | RFID Access Control | Reads RFID tags/cards and uses the identifier in a basic access-control decision. |
| 28 | Fingerprint-Based Door Lock | Uses a fingerprint sensor to authenticate a user before operating a lock. |
| 29 | Load Measurement Using Load Cell | Measures force or weight using a load cell and signal-conditioning interface. |

### 03. Mobile Robotics

| No. | Project | Short description |
|---:|---|---|
| 30 | Line Follower Robot | Follows a marked path by reading line sensors and controlling its drive motors. |
| 31 | Obstacle Avoidance Robot | Detects obstacles and changes its movement to avoid collisions. |
| 32 | Bluetooth-Controlled Robot Car | Receives movement commands over Bluetooth and drives a mobile robot. |
| 33 | IR Remote-Controlled Robot | Uses an infrared remote and receiver to control robot movement. |
| 34 | Voice-Controlled Robot Car | Converts voice commands into movement instructions for a robot car. |
| 35 | Smartphone-Controlled Robot | Uses a phone interface to send motion commands to a mobile robot. |
| 36 | Wall-Following Robot | Uses distance sensing to maintain a target gap from a wall. |
| 37 | Fire-Fighting Robot | Detects a fire-related signal and approaches or responds using a suppression mechanism. |
| 38 | Robotic Arm Using Servo Motors | Uses servo-driven joints to position a simple multi-axis robotic arm. |
| 39 | 4-Wheel Drive Robot | Uses four driven wheels for basic mobile-platform movement and control. |

### 04. IoT and Automation

| No. | Project | Short description |
|---:|---|---|
| 40 | IoT Temperature Monitoring | Sends temperature readings to a network service or dashboard for remote viewing. |
| 41 | IoT Home Automation | Controls home loads through a connected microcontroller and remote interface. |
| 42 | Smart Dustbin | Detects fill level or nearby users and automates a dustbin function. |
| 43 | Smart Parking System | Detects parking-space occupancy and reports available spaces. |
| 44 | Smart Street Light | Adjusts street-light operation using ambient light and/or activity detection. |
| 45 | Smart Irrigation System | Uses soil or environmental measurements to control irrigation. |
| 46 | GPS Tracking System | Reads GNSS position data and makes location information available for tracking. |
| 47 | Gas Leakage Alert Using IoT | Sends a gas-sensor alarm or status to a remote monitoring interface. |
| 48 | Water Tank Level Monitoring with IoT | Publishes tank-level information for remote monitoring. |
| 49 | Weather Monitoring Station | Collects environmental readings such as temperature and humidity for display or logging. |
| 50 | Remote Relay Control | Switches a relay-controlled output using a network-connected command interface. |
| 51 | RFID Attendance System | Records attendance events based on RFID card/tag reads. |
| 52 | Smart Energy Meter | Measures electrical parameters or energy consumption and presents the readings. |
| 53 | ESP32 Web Server | Hosts a small web interface on an ESP32 for monitoring or controlling connected functions. |
| 54 | ESP32-CAM Surveillance System | Uses an ESP32-CAM to capture or stream camera images over a network. |
| 55 | Bluetooth Sensor Monitoring | Sends sensor readings over Bluetooth for viewing on another device. |
| 56 | UART Communication Between Arduino and ESP32 | Exchanges serial data between an Arduino board and an ESP32. |
| 57 | I2C Sensor Interfacing | Connects and reads an I2C-compatible sensor using the shared two-wire bus. |
| 58 | SPI Display Interfacing | Communicates with a display using the SPI serial peripheral interface. |
| 59 | Bluetooth HC-05 Communication | Establishes serial wireless communication using an HC-05 Bluetooth module. |
| 60 | Wi-Fi Communication Using ESP32 | Connects an ESP32 to a Wi-Fi network to exchange data. |

### 05. Communication Protocols

| No. | Project | Short description |
|---:|---|---|
| 61 | CAN Bus Communication Demo | Demonstrates CAN message transmission and reception between compatible nodes. |
| 62 | ESP-NOW Wireless Communication | Exchanges short data packets between ESP devices using ESP-NOW. |

### 06. Raspberry Pi and Computer Vision

| No. | Project | Short description |
|---:|---|---|
| 63 | Raspberry Pi GPIO LED Control | Controls an LED using Raspberry Pi GPIO. |
| 64 | Raspberry Pi Sensor Monitoring | Reads sensor data using Raspberry Pi interfaces and displays or logs the readings. |
| 65 | Raspberry Pi Camera Streaming | Captures camera frames on a Raspberry Pi and streams them to a client. |
| 66 | Face Detection Using OpenCV | Locates face regions in images or video frames using OpenCV detection methods. |
| 67 | Face Recognition Attendance System | Matches detected faces against enrolled identities and records attendance events. |
| 68 | Object Detection Using YOLO | Runs a YOLO object-detection model to identify and locate objects in images or video. |
| 69 | QR Code Scanner | Detects and decodes QR codes from a camera or image input. |
| 70 | Hand Gesture Recognition | Interprets hand landmarks or image features to classify gestures. |
| 71 | Raspberry Pi Web Dashboard | Presents Raspberry Pi sensor or system information through a browser-based dashboard. |

### 07. ROS 2 and Simulation

| No. | Project | Short description |
|---:|---|---|
| 72 | ROS 2 Turtlesim Project | Uses the ROS 2 Turtlesim environment to learn basic robot movement and topics. |
| 73 | ROS 2 Publisher and Subscriber | Creates ROS 2 nodes that publish and subscribe to messages on a topic. |
| 74 | ROS 2 Mobile Robot Simulation | Models and simulates a mobile robot within a ROS 2 workflow. |
| 75 | Gazebo Robot Simulation | Loads a robot model into Gazebo to explore simulated physics and sensors. |
| 76 | ROS 2 Teleoperation | Sends remote velocity commands to control a robot through ROS 2. |

### 08. Advanced Robotics

| No. | Project | Short description |
|---:|---|---|
| 77 | IMU-Based Orientation Measurement | Uses inertial sensor readings to estimate orientation or motion. |
| 78 | PID Line Follower | Applies proportional-integral-derivative control to improve line-following behaviour. |
| 79 | LiDAR Obstacle Detection | Processes LiDAR range data to identify obstacles around a robot. |
| 80 | Ultrasonic Multi-Sensor Mapping | Combines multiple ultrasonic distance readings to build a simple local representation of nearby obstacles. |
| 81 | Camera-Based Object Tracking | Detects an object in camera frames and tracks its position over time. |

### 09. Vehicle and Automotive Projects

| Project | Short description |
|---|---|
| Smart Vehicle Black Box | Reconstructed project concept combining vehicle sensors, camera/GPS data, event detection, and recording or alert functions. |
| Smart Vehicle Monitoring | Reconstructed monitoring system concept using a Raspberry Pi, sensors, camera, and web dashboard to observe vehicle conditions. |

> The 83 numbered entries above follow the supplied project list. The two named vehicle projects were provided separately as additional projects, so they are listed outside the numbered count.

## Repository Structure

```text
Robotics_Mini_Projects/
├── README.md
├── 01_Arduino_Basics/
├── 02_Sensors_and_Instrumentation/
├── 03_Mobile_Robotics/
├── 04_IoT_and_Automation/
├── 05_Communication_Protocols/
├── 06_Raspberry_Pi_and_Computer_Vision/
├── 07_ROS2_and_Simulation/
├── 08_Advanced_Robotics/
└── 09_Vehicle_and_Automotive_Projects/
```

## Project Folder Contents

As projects are added, their folders will include relevant items such as:
- Project-specific README and objective
- Reconstructed source code and configuration
- Components and connection/wiring guide
- Working principle and implementation notes
- Software setup and run instructions
- Test procedure and results record

Not every project uses the same hardware or software, so files will be tailored to the individual project.

## Provenance, Validation, and Safety

Original source files, photographs, and test records were not available for the reconstruction work. Newly written code and documents are therefore labelled **reconstructed reference implementations**. They must not be mistaken for the original historical files.

Code upload does not mean hardware validation. Test results will remain marked as not tested until a physical test is actually performed and recorded. Safety-critical systems, mains-connected loads, vehicle electronics, motors, batteries, and high-voltage circuits require appropriate protection, qualified review, and safe test procedures.

## Repository Goal

Build a clear, technically useful portfolio that documents the concepts, implementation approach, interfaces, and learning outcomes across embedded systems and robotics.
