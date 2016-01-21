// 材料: 有源蜂鸣器1只

/*
 * 材料: 
 * Arduino UNO R3 *1
 * 有源蜂鸣器 *1
 * 发光二级管 *1
 * 杜邦线若干
 * 接线:
 * buzPin 接蜂鸣器正极
 * ledPin 接发光二级管长脚
 * 蜂鸣器GND 和 发光二级管短脚分别接 Arduino 板 GND
 */
 
#define buzPin 7
#define ledPin 8

void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =0;i<=2;i++) {
    digitalWrite(buzPin,HIGH);
    digitalWrite(ledPin,HIGH);
    delay(100);
    digitalWrite(buzPin,LOW);
    digitalWrite(ledPin,LOW);
    delay(100);
  }

  for(int i =0;i<=4;i++) {
    digitalWrite(buzPin,HIGH);
    digitalWrite(ledPin,HIGH);
    delay(50);
    digitalWrite(buzPin,LOW);
    digitalWrite(ledPin,LOW);
    delay(50);
  }
}
