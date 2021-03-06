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
  // initialize digital pin LED_BUILTIN as an output.
  int i;
  for(i=1;i<8;i++){
  pinMode(i, OUTPUT);
  }
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

void zero(){
  digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
     
  delay(1000);                       // wait for a second
  }
void one(){
  digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1,  LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4,  LOW);
  digitalWrite(5,  LOW);
  digitalWrite(6,  LOW);
     
  delay(1000);                       // wait for a second
  }
  void two(){
  digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
     
  delay(1000);                       // wait for a second
  }void three(){
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
     
  delay(1000);                       // wait for a second
  }
  void four(){
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
     
  delay(1000);                       // wait for a second
  }
  void five(){
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
     
  delay(1000);                       // wait for a second
  }
  void six(){
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
     
  delay(1000);                       // wait for a second
  }
  void seven(){
  digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
     
  delay(1000);                       // wait for a second
  }
  void eight(){
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
     
  delay(1000);                       // wait for a second
  }
  void nine(){
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
     
  delay(1000);                       // wait for a second
  }
















  
