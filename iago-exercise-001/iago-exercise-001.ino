#define blueLed 2

void setup() {
  pinMode(blueLed,OUTPUT);
}

void loop() {
  digitalWrite(blueLed,HIGH);
  delay(200);
  digitalWrite(blueLed,LOW);
  delay(200);
}
