#include <Servo.h>
Servo servo;
int servoPin = 9;

void setup() {
  // put your setup code here, to run once:
servo.attach(servoPin);
Serial.begin(9600);
}

void loop() {
  for(int i =0;i<=180; i=i+20)
  {
    servo.write(i);
    delay(1000);
  }
  int val =servo.read();
  Serial.println(val);
  
  // put your main code here, to run repeatedly:

}
