# demo-arduino
## 声明
这是用 Arduino 对传感器进行测试的样例。在 Arduino UNO R3调试过。您要在生产环境中使用，或是其它版本，我不能保证好用，也不承担任何责任。
## 传感器/模块说明
### Blink
发光二级管

### DHT11
廉价的温/湿度传感器
从左到右(有孔那面)依次是:

PIN|Fun|Description
---|---|---------
PIN1|VCC|正极,3V~5.5V
PIN2|DATA|数据输出
PIN3|NC|无用
PIN4|GND|负极

### Buzzer
有源蜂鸣器

### HC-SR04
超声波测距模块

PIN|Fun|Description
---|---|---------
PIN1|VCC|正极,5V
PIN2|TRIG|发出探测
PIN3|ECHO|接收数据
PIN4|GND|负极
