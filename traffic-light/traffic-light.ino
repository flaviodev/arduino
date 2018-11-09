int redLed = 2;
int yellowLed = 3;
int greenLed = 4;


void setup(){
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
}


void loop(){
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,LOW);
    digitalWrite(greenLed,HIGH);
    delay(3000);
    
    digitalWrite(redLed,LOW);
    digitalWrite(yellowLed,HIGH);
    digitalWrite(greenLed,LOW);
    delay(2000); 

    digitalWrite(redLed,HIGH);
    digitalWrite(yellowLed,LOW);
      digitalWrite(greenLed,LOW);
    delay(3000); 
}
