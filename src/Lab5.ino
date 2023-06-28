
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