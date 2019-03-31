# Analog converter on I2C ADS1115

https://www.banggood.com/I2C-ADS1115-16-Bit-ADC-4-Channel-Module-With-Programmable-Gain-Amplifier-For-Arduino-RPi-p-1110588.html?cur_warehouse=CN


http://henrysbench.capnfatz.com/henrys-bench/arduino-voltage-measurements/arduino-ads1115-module-getting-started-tutorial/

## Description:

For microcontrollers without an analog-to-digital converter or when you want a higher-precision ADC, the ADS1115 provides 16-bit precision at 860 samples/second over I2C. The chip can be configured as 4 single-ended input channels, or two differential channels. As a nice bonus, it even includes a programmable gain amplifier, up to x16, to help boost up smaller single/differential signals to the full range. We like this ADC because it can run from 2V to 5V power/logic, can measure a large range of signals and its super easy to use. It is a great general purpose 16 bit converter.

The chip's fairly small so it comes on a breakout board with ferrites to keep the AVDD and AGND quiet. Interfacing is done via I2C. The address can be changed to one of four options (see the datasheet table 5) so you can have up to 4 ADS1115's connected on a single 2-wire I2C bus for 16 single ended inputs.

## Feature:

Wide supply range: 2.0V to 5.5V
Low current consumption: Continuous Mode: Only 150uA Single-Shot Mode: Auto Shut-Down
Programmable data rate: 8SPS to 860SPS
Internal Low-drift voltage reference
Internal oscillator
Internal PGA
I2C interface: Pin-Selectable Addresses
Four Single-ended or two differential inputs
Programmable comparator
This board/chip uses I2C 7-bit addresses between 0x48-0x4B, selectable with jumpers

