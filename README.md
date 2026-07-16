# PC-Based Data Acquisition System using LPC2129 ARM7

##  Overview
The PC-Based Data Acquisition System is an embedded systems project developed using the LPC2129 ARM7 microcontroller. The system acquires real-time sensor data, processes it using Embedded C, and enables monitoring of sensor values during debugging in the Keil µVision environment. The project demonstrates sensor interfacing, analog data acquisition, and communication using UART and SPI protocols.

##  Objective
To acquire, process, and monitor real-time sensor data using the LPC2129 ARM7 microcontroller while implementing UART and SPI communication protocols.

##  Technologies Used
- Embedded C
- ARM7 (LPC2129)
- UART Communication
- SPI Communication
- Analog-to-Digital Data Acquisition
- Embedded Systems

##  Hardware Components
- Rhydolabz LPC2129 ARM7 Development Board
- Temperature Sensor
- LDR (Light Dependent Resistor)
- Potentiometer

##  Software Tools
- Keil µVision
- Flash Magic
- Embedded C

##  Features
- Real-time temperature monitoring
- Light intensity monitoring using LDR
- Potentiometer value acquisition
- Analog sensor data acquisition
- UART communication
- SPI communication
- Real-time monitoring during debugging in Keil µVision

##  Working Principle
1. The LPC2129 ARM7 microcontroller acquires data from connected sensors.
2. Sensor values are processed using Embedded C.
3. UART and SPI protocols are used for communication with peripheral devices.
4. The acquired sensor values are monitored in the Keil µVision debugging environment.

##  Parameters Monitored
- Temperature
- Light Intensity (LDR)
- Potentiometer Value
- Analog Sensor Values

##  Source Code
The repository contains:
- Main application
- UART driver
- SPI driver
- Delay functions
- Header files
- Sensor interfacing modules

##  My Contribution
- Developed Embedded C firmware for the LPC2129 ARM7 microcontroller.
- Implemented UART and SPI communication protocols.
- Interfaced temperature, LDR, and potentiometer sensors.
- Processed analog sensor data.
- Tested and verified sensor readings using the Keil µVision debugging environment.

##  Future Enhancements
- Real-time graphical visualization of sensor data
- Data logging and storage
- Wireless monitoring using IoT
- Cloud-based data visualization
