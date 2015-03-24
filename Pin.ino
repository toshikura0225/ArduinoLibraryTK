/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
#include "DigitalInputPin.h"
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

DigitalInputPin dip(2);

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
}

bool flag = true;
// the loop routine runs over and over again forever:
void loop() {

  int a = dip.IsShifted();
  if( a != -1)
  {
    Serial.print(a);
  }
}
