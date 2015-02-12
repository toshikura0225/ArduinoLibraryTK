/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
#include "DigitalInputPin.h"
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

DigitalInputPin dip(12);

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

bool flag = true;
// the loop routine runs over and over again forever:
void loop() {
  flag = !flag;
  if(flag)
  {
	  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  else
  {
	  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  }
  
  delay(500);               // wait for a second
  
  Serial.write(dip.GetState()+'0'); // 1バイトのデータを送信
  Serial.write(','); // 1バイトのデータを送信
  Serial.write(dip.IsShifted()+'0'); // 1バイトのデータを送信
  Serial.write(','); // 1バイトのデータを送信
}
