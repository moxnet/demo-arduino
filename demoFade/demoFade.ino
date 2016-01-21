
int brightness = 0;
int fadeAmount = 5;

int type = 1;
void setup() {
  pinMode(13,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  analogWrite(9,brightness);
  if (type > 0) {
    digitalWrite(13,HIGH);
  } else {
    digitalWrite(13,LOW);
  }
  type *= -1;
  
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >=255) {
    fadeAmount *= -1;
  }
  delay(30);
}
