#include "DFPlayer_Mini_Mp3.h"


 void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 mp3_set_serial (Serial); //set Serial for DFPlayer-mini mp3 module
 mp3_set_volume (30);

 mp3_stop ();
 
}

void loop()
{
  // put your main code here, to run repeatedly:

 int sensorValue = analogRead(A0);
 
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.print(voltage);
  Serial.print("\n");

  float target = 2.5;
  
  float toofar = 1 ;
  float target_min = 2;
  float target_max = 2.8 ; 
  float closer = 3.5;
    
  Serial.print("too far = ");
  Serial.print(toofar);
  Serial.print("\n");
  Serial.print("target min = ");
  Serial.print(target_min);
  Serial.print("\n");
  Serial.print("target max = ");
  Serial.print(target_max);
  Serial.print("\n");
  Serial.print("closer = ");
  Serial.print(closer);
  Serial.print("\n");
 

  if (voltage < toofar)  
  {
    mp3_play (1);
    delay (5000);    
  }
  
  if ((voltage >= toofar) && (voltage <= target_min) )
  {
    mp3_play (2);
    delay (5000);     
  }

  if ((voltage > target_min) && (voltage < target_max) )
  {
    mp3_play (3);
    delay (5000);     
  }

  if ((voltage >= target_max) && (voltage <= closer ))
  {
    mp3_play (4);
    delay (5000);     
  }

  if ((voltage > closer))
  {
    mp3_play (5);
    delay (5000);     
  }

  delay (2000);
 
  mp3_stop ();

}
