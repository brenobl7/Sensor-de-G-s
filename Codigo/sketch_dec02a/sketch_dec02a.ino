int verd = 11;
int azul = 12;
int verm = 13;
int sens = A0;
int gas = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(verd, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verm, OUTPUT); 
}

void loop()
{
  gas=analogRead(sens);
  Serial.println(gas);
  delay(500);
  
  if (gas >= 610) {
    digitalWrite(verd, LOW);
    digitalWrite(azul, LOW);
    digitalWrite(verm, HIGH);
  }
  else if(gas >= 490) {
    digitalWrite(verd, LOW);
    digitalWrite(azul, LOW);
    digitalWrite(verm, HIGH);  
    delay(50);
    digitalWrite(verm, LOW);
    delay(50);
  }
  else if(gas >= 380) {
    digitalWrite(verd, LOW);
    digitalWrite(verm, LOW);
    digitalWrite(azul, HIGH);
  }
  else if(gas >= 307) {
    digitalWrite(verd, LOW);
    digitalWrite(verm, LOW);
    digitalWrite(azul, HIGH);
    delay(50);
    digitalWrite(azul, LOW);
    delay(50);
  }
  else if(gas <= 306) {
    digitalWrite(verd, HIGH);
    digitalWrite(azul, LOW);
    digitalWrite(verm, LOW);
  }
}
