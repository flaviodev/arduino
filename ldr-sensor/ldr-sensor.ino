 
int ledPin = 7; 
int ldrPin = 0; //LDR Sensor
int ldrValue = 0; 
 
void setup() {
 pinMode(ledPin,OUTPUT);
 Serial.begin(9600); 
}
 
void loop() {
  ldrValue = analogRead(ldrPin); //0 e 1023
 
  if (ldrValue>= 1010) 
    digitalWrite(ledPin,HIGH);
  else 
    digitalWrite(ledPin,LOW);
 
 Serial.println(ldrValue);
 delay(100);
}
