int redPin = 2;
int yellowPin = 4;
int greenPin = 3;
int buttonPin = 5;
int state = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin,OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop()
{
digitalWrite(redPin, HIGH);
delay(10000);
digitalWrite(redPin,LOW);
digitalWrite(greenPin, HIGH);
delay(10000);
digitalWrite(greenPin,LOW);

digitalWrite(yellowPin, HIGH);
delay(10000);
digitalWrite(yellowPin,LOW);

}

 void setLights(int red,int yellow, int green)
 {
  digitalWrite(redPin, red);
  digitalWrite(yellowPin, yellow);
  digitalWrite(greenPin, green);
 }
