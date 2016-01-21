void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =0;i<=2;i++) {
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(100);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delay(100);
  }

  for(int i =0;i<=4;i++) {
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    delay(25);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delay(25);
  }
}
