
LIGHT

The sensor is a variable resistor called a  photo-resistor. 
The resistor value will change with the amount of light
A lot of light and resistance will decrease  so that the voltage over the wresistor will increase
and the voltage over the fixed 2.2Kohm resisitor will increase. the voltage changes from 0 to 5V.

Arduino has 6 analog to digital convertors (ADC). The voltage value can be read on pin A0 from
0 to 1024. 

We read the value of the ADC, and then play a diferent sound file.
The sound file was recorded using a mobile phone to WAV and then converted to MP$ by VLC media player

The sound files are played using an DFPlayer. Using the serial port from the arduino, commands can be send to the DFplayer
For example "play" adnd "stop". After starting the play, we must wait a few seconds for the audio to complete.

The files must be named 0001.mp3 to 0005.mp3

0001.mp3 far away 
0002.mp3 stil far away
0003.mp3 just right
0004.mp3 to close
0005.mp3 very close

There is a switch and a USB connector. when a conputer is connected to the USB port and the switch is set in "ON" position, then powr onthe Arduno, the dfplayer will act an an USB drive and files can be moved from the PC to the dfplayer. 
This mmakes it conventient to change files and not need to take out the SD card.  After transfer, the swiych must be set ot OFF and the Arduno reset.



