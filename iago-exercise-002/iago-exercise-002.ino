#define buzzer 2

void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {
  tone(buzzer, 1000); // Send 1KHz sound signal...
  delay(200);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(200);        // ...for 1sec
}
