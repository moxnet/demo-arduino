
int initPin = 2;
int pinAccount = 6;
int type = 1;


void setup() {
  for(int i=0; i< pinAccount;i++) {
    int pin = initPin + i;
    pinMode(pin,OUTPUT);
  }
}

void loop() {

    for(int j=0;j<10;j++) {
        if(j == 0) {
          type *= -1;
          for(int i=0;i< 5;i++) {
            int pin = initPin + pinAccount -1;
            digitalWrite(initPin,HIGH);
            digitalWrite(pin,HIGH);
            delay(20);
            
            digitalWrite(initPin,LOW);
            digitalWrite(pin,LOW);
            delay(20);
          }
        }
      
        for(int i=0;i< pinAccount;i++) {
          int pin = initPin + i;
          digitalWrite(pin,HIGH);
          delay(50);
          digitalWrite(pin,LOW);
        }

        if (type < 0) {
          for(int i=pinAccount;i>0 ;i--) {
            int pin = initPin + i;
            digitalWrite(pin,HIGH);
            delay(50);
            digitalWrite(pin,LOW);
          }
        }
    }
}
