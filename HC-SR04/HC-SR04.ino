
// PIN1 VCC
// PIN2 TRIG 发射
// PIN3 ECHO 接收
// GND  接地

#define TRIGPIN 12
#define ECHOPIN 13


void setup(){
  Serial.begin(9600);
  Serial.println("HC-SR04 test start!");

  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
}

void loop(){
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  float distance = pulseIn(ECHOPIN, HIGH);
  if (! isnan(distance) ){

    distance = distance / 58;

    Serial.print(distance, 2);
    Serial.print(" CM\n");
    
  }

  delay(100);
  
}
