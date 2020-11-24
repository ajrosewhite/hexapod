#include <Servo.h>
Servo pan;
int servoPin = 9; // PWM 9
int potPin = 0;   // A0
int potValue = 0;

void setup() {
  pan.attach(9);
}

void loop() {
  potValue = analogRead(potPin);
  potValue = map(potValue, 0, 1023, 120, 80);
  pan.write(potValue);
  delay(15);
}
