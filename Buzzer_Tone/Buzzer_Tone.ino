int buzzerPin = 12;
void setup() {}
void loop() {
  tone (buzzerPin, 100);
  delay (1000);
  tone (buzzerPin, 300);
  delay (1000);
  tone (buzzerPin, 500);
  delay (1000);
  tone (buzzerPin, 7000);
  delay (1000);
}
