//two leds with different delays using milliss
const int pin1=10;
const int pin2=4;
bool led1=true;
bool led2=true;
unsigned long Time1;
unsigned long Time2;
void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  Time1=millis();
}

void loop() {
  if(Time1+1000<millis())
  {
    led1=!led1;
    Time1=millis();
  }
  if(Time2+2000<millis())
  {
    led2=!led2;
    Time2=millis();
  }
  if(led1==true)
  {
    digitalWrite(pin1, HIGH);
  }
  else
  {
    digitalWrite(pin1, LOW);
  }
  if(led2==true)
  {
    digitalWrite(pin2, HIGH);
  }
  else
  {
    digitalWrite(pin2, LOW);
  }
}