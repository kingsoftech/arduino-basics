float temp;
int ledPin = 7;
void setup() {
  // put your setup code here, to run once:

pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  temp = analogRead(A0);
  // put your main code here, to run repeatedly:
  temp = temp*0.48828125;
  Serial.print("TEMPERATURE: ");
  Serial.print(temp);
  Serial.print("*C");
  Serial.println();
  delay(1000);
  if(temp>43)
  {
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin,LOW);
  }
  

}
