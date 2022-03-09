# SparkFun_Qwiic_OLED_Arduino_Library

A new Arduino library to support SparkFun's qwiic OLED boards

Currently in Development - Alpha
========================================

## Demos
The following demos work on validated hardware (see below)
* Example 1 - Hello
* Example 4 - Cube
## Features
### Implemented
* Fast data transfers/updates to OLED device 
  * Only transfers needed bytes
  * 2x to 6x performance gains over current Micro OLED libray. Massive gains over "hyperdisplay"
* C++ / Platform neutral implementation
* Pixel set
* General lines
* Fast horizontal lines
* Fast vertical lines
* Rectangles (fast)
* Filled rectangles (fast)
* Circles
* Filled Circles
### To Be Implemented
* Fonts
* Bitmap images
* Arduino Objects - right now mostly C++
### Known Issues
* Filled circles being clipped/not drawn based on positon 
* Narrow OLED - some pixels - max X are not getting erased at times 
  * See on nrf5280 and ESP32
## Hardware
### Tested/Working
* Qwiic Micro OLED
* Qwiic "narrow OLED"
* Qwiic Transparent OLED
* Artemis
* SAMD51
* ESP32
* STM32
* SAMD21
* nrf5280
### To Be Tested/Supported
* RP2040
* Teensy
* Redboard
