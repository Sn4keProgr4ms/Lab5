/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/admin/Desktop/Remys_Labs/Lab5/src/Lab5.ino"

void setup();
void loop();
#line 2 "/Users/admin/Desktop/Remys_Labs/Lab5/src/Lab5.ino"
int maxValue = 0;
int minValue = 4095;
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
void setup() {
  pinMode(A5, INPUT);
  pinMode(D5, OUTPUT);
}


void loop() {
  int value = analogRead(A5);
  maxValue = max(maxValue, value);
  minValue = min(minValue, value);
  int mapValue = map(value, 0, 4095, 0, 255);
  analogWrite(D5, mapValue);
}