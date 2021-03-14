/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  int i;
   for(i=1;i<=7;i++)
  pinMode(i, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  zero();
  one();
  two();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();
}
void zero()
{
  for(int i=1;i<=7;i++)
  {
    if(i==7)
    digitalWrite(i,LOW);
    else
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
 void one()
{
  for(int i=1;i<=7;i++)
  {
    if(i==2 || i==3)
    digitalWrite(i,HIGH);
    else
    digitalWrite(i, LOW);
  }
  delay(1000);
 }
 void three()
{
  for(int i=1;i<=7;i++)
  {
    if(i==5 || i==6)
    digitalWrite(i,LOW);
    else
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
 void two()
{
  for(int i=1;i<=7;i++)
  {
    if(i==3 || i==6)
    digitalWrite(i,LOW);
    else
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
 void four()
{
  for(int i=1;i<=7;i++)
  {
    if(i==1 || i==4 || i==5)
    digitalWrite(i,LOW);
    else
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
 void five()
{
  for(int i=1;i<=7;i++)
  {
    if(i==2 || i==5)
    digitalWrite(i,LOW);
    else
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
 void six()
{
  for(int i=1;i<=7;i++)
  {
    if(i==2)
    digitalWrite(i,LOW);
    else
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
 void seven()
{
  for(int i=1;i<=7;i++)
  {
    if(i==4 || i==5 || i==6 || i==7)
    digitalWrite(i,LOW);
    else
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
 void eight()
{
  for(int i=1;i<=7;i++)
  {
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
 void nine()
{
  for(int i=1;i<=7;i++)
  {
    if(i==5)
    digitalWrite(i,LOW);
    else
    digitalWrite(i, HIGH);
  }
  delay(1000);
 }
  
