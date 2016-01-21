#include <DHT.h>

#define DHTPIN 6
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup(){
  Serial.begin(9600);
  Serial.println("DHT11 test start!");

  dht.begin();
}
void loop(){
  delay(2000);
  
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  float f=dht.readTemperature(true);
  if (! isnan(h) && !isnan(t) ) {
    Serial.print("Temperature: ");
    Serial.print(t,1);  // 第二个参数为保留几个小数位
    Serial.print(" *C\t");
    
    Serial.print("Humidity: ");
    Serial.print(h,1);
    Serial.print(" %\n");
  } else {
    Serial.println("failed to read from DHT sensor!");
  }
}
