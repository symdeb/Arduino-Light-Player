
# ARDUINO LIGHT DFPLAYER

The sensor is a variable resistor called a photo-resistor or LDR.  
The resistor value will change with the amount of light. 
A high amount of light and the LDR resistance will decrease so that the voltage over the fixed resistor will increase and thus the voltage over the fixed resisitor will increase. 
The voltage changes from 0 to 5V. Arduino has 6 analog to digital convertors (ADC). The voltage value can be read on pin A0 and the value range from from 0 to 1023 

We read the value of the ADC, and then play a diferent sound file.

The sound files are played using an DFPlayer. Using the serial port from the arduino, commands can be send to the DFplayer
For example "play" and "stop". After starting the play, we must wait a few seconds for the audio to complete.

The files must be named 0001.mp3 to 0005.mp3 and placed in a subfolder on the SD card.
The SD card must be FAT formatted.

The usage of the files are as follows:

- 0001.mp3 far away 
- 0002.mp3 stil far away
- 0003.mp3 just right
- 0004.mp3 to close
- 0005.mp3 very close

Updating MP3 files can be done using the USB connector. 

1. Set the switch is set in "ON" position
2. Connect a computer is to the DFPlayer USB connector
3. Connect powerto the Arduino
4. The dfplayer will act an an USB drive and files can be moved from the PC to the dfplayer. 
5. Disconnect the usb connectors
6. Set the switch to  "OFF"
7. Power on the Arduino.
** List of materials **

* [uno] - Arduino Uno 
* [speaker] - 2W or more speaker (3W recommended)
* [dfplayer] - DFplayer Mini
* [usb] - USB type B connector
* [switch] - Mini Push Button Switch Latching type - DPDT
* [resistors] - Some resistors
* [sensor] - LDR photo resistor

[uno]:  https://www.arduino.cc/	
[sensor]:https://en.wikipedia.org/wiki/Photoresistor
[speaker]: https://www.amazon.com/2w-speaker/s?k=2w+speaker
[usb]: https://www.molex.com/molex/products/datasheet.jsp?part=active/0670687041_IO_CONNECTORS.xml
[dfplayer]: https://www.e-switch.com/product-catalog/pushbutton/product-lines/tl2230-series-pushbutton-switches
[sensor]: https://en.wikipedia.org/wiki/Photoresistor
[switch]: https://www.e-switch.com/product-catalog/pushbutton/product-lines/tl2230-series-pushbutton-switches
	 
