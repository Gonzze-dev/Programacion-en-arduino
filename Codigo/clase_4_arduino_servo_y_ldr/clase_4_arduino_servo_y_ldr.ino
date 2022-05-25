/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
#define pinServo 8
#define pinLDR A0
int potpin = 8;  // analog pin used to connect the potentiometer

int val;    // variable to read the value from the analog pin

void setup() 
{
  Serial.begin(9600);
  myservo.attach(pinServo);  // attaches the servo on pin 9 to the servo object
  
}

void loop() {
  int valor = analogRead(pinLDR);
  int angulo = map(valor, 0, 1023, 0, 180); 
  myservo.write(angulo);
  delay(250);
  
}
