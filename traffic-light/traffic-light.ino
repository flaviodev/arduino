uint8_t resetCounter __attribute__ ((section (".noinit")));

#define redLedTrafficLightA 2 
#define yellowLedTrafficLightA 3
#define greenLedTrafficLightA 4

#define redLedTrafficLightB 5 
#define yellowLedTrafficLightB 6
#define greenLedTrafficLightB 7

#define greenTime 10000
#define yellowTime 3000

void setup(){  

  resetCounter = resetCounter + 1;

  Serial.begin(9600);
  Serial.println("resetCounter: ");
  Serial.print(resetCounter);
  Serial.print(" -> ");
  Serial.print(resetCounter % 2);

  configurePorts();
}

int isNormalMode() {
  return resetCounter % 2;
}

void configurePorts() {
  
    pinMode(redLedTrafficLightA, OUTPUT);
    pinMode(yellowLedTrafficLightA, OUTPUT);
    pinMode(greenLedTrafficLightA, OUTPUT);

    pinMode(redLedTrafficLightB, OUTPUT);
    pinMode(yellowLedTrafficLightB, OUTPUT);
    pinMode(greenLedTrafficLightB, OUTPUT);      
}

void loop(){

  if(isNormalMode())
    applyNormalMode();
  else
    applySuspendedMode();
       
}

void applySuspendedMode() {
  
    digitalWrite(yellowLedTrafficLightA,HIGH);
    digitalWrite(yellowLedTrafficLightB,HIGH);

    delay(1000);
     
    digitalWrite(yellowLedTrafficLightA,LOW);
    digitalWrite(yellowLedTrafficLightB,LOW);

    delay(500);
}

void applyNormalMode() {
  
    digitalWrite(redLedTrafficLightA,LOW);
    digitalWrite(yellowLedTrafficLightA,LOW);
    digitalWrite(greenLedTrafficLightA,HIGH);

    digitalWrite(redLedTrafficLightB,HIGH);
    digitalWrite(yellowLedTrafficLightB,LOW);
    digitalWrite(greenLedTrafficLightB,LOW);

    delay(greenTime);
    
    digitalWrite(redLedTrafficLightA,LOW);
    digitalWrite(yellowLedTrafficLightA,HIGH);
    digitalWrite(greenLedTrafficLightA,LOW);

    delay(yellowTime);

    digitalWrite(redLedTrafficLightA,HIGH);
    digitalWrite(yellowLedTrafficLightA,LOW);
    digitalWrite(greenLedTrafficLightA,LOW);

    digitalWrite(redLedTrafficLightB,LOW);
    digitalWrite(yellowLedTrafficLightB,LOW);
    digitalWrite(greenLedTrafficLightB,HIGH);
    
    delay(greenTime);

    digitalWrite(redLedTrafficLightB,LOW);
    digitalWrite(yellowLedTrafficLightB,HIGH);
    digitalWrite(greenLedTrafficLightB,LOW);

    delay(yellowTime);
}
