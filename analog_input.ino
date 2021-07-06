int buttonPin = A0;
int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue =analogRead(buttonPin);
sensorValue = constrain(sensorValue,750,900);
int ledLevel = map(sensorValue, 750,900, 255,0);
Serial.println(ledLevel);



analogWrite(ledPin, ledLevel);
} 
