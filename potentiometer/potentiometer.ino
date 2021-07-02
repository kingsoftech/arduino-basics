int potentiometerPin = A0;
void setup() {
  // put your setup code here, to run once:
 
  Serial.begin(9600);
}

void loop() {
  float value = analogRead(potentiometerPin);
  // put your main code here, to run repeatedly:
  Serial.println(value);
}
