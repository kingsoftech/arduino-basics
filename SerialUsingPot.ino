int potPin = 0;
char userInput;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    userInput = Serial.read();
    if(userInput =='g')
    {
     int potVal = map(analogRead(potPin),0,1023,0,255);
     Serial.println(potVal);
    }
  }
  
}
