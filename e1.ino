//turning led on and off with a button
const int pin=10;
const int but=9;
bool press=true;
unsigned long Time;
void setup() {
  pinMode(pin, OUTPUT);
  pinMode(but, INPUT);

}

void loop() {

  if(press==true)
  {
    digitalWrite(pin, HIGH);
  }
  if(press==false)
  {
    digitalWrite(pin, LOW);
  }
  if(Time+100<millis())
  {
    if(digitalRead(but)==HIGH)
    {
      press=!press;
      Time = millis();
    }
  }
}
