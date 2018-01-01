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

//int knob = A0;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  /*int val = analogRead(knob);
  val = map(val,1,1023,1,10); 
  Serial.println("Val:");
  Serial.println(val);
  Serial.println("Knob:")
  Serial.println(knob);
  ////delay(1000);*/
 
  if(Serial.available()>0)
  {


  
  
  String val = Serial.readString();
  Serial.println(val);
    if (val=="0")
    {
      zero_high();
      //delay(1000);
      //zero_low();
      //delay(100);
   }
  
   else if (val=="1")
   {
      one_high();
      //Serial.println(13);
      //delay(1000);
      //one_low();
      //delay(100);
   }
    
   else if (val=="2")
   {
      two_high();
      //delay(1000);
      //two_low();
      //delay(100);
   }
  
   else if (val=="3")
   {
      three_high();
      //delay(1000);
      //three_low();
      //delay(100);
   }
    
   else if (val=="4")
   {
      four_high();
      //delay(1000);
      //four_low();
      //delay(100);
   }
    
   else if (val=="5")
   {
      five_high();
      //delay(1000);
      //five_low();
      //delay(100);
   }
  
   else if (val=="6")
   {
      six_high();
      //delay(1000);
      //six_low();
      //delay(100);
   }
    
   else if (val=="7")
   {
      seven_high();
      //delay(1000);
      //seven_low();
      //delay(100);
   }
    
   else if (val=="8")
   {
      eight_high();
      //delay(1000);
      //eight_low();
      //delay(100);
   }
    
   else if (val=="9")
   {
      nine_high();
      //delay(1000);
      //nine_low();
      //delay(100);
   }
  else if(val=="blink"){
    blink();
  }
   else
   {
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
   }
  }

  
}


void zero_high()
{
   digitalWrite(13,HIGH);
   digitalWrite(10,HIGH);
   digitalWrite(8,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(7,HIGH);
}
void zero_low()
{
   digitalWrite(13,LOW);
   digitalWrite(10,LOW);
   digitalWrite(8,LOW);
   digitalWrite(11,LOW);
   digitalWrite(12,LOW);
   digitalWrite(7,LOW);
}
void one_high()
{
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}
void one_low()
{
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

void two_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
}
void two_low()
{
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
}

void three_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
}
void three_low()
{
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
}


void four_high()
{
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}
void four_low()
{
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}

void five_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
}
void five_low()
{
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
}

void six_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
}
void six_low()
{
  digitalWrite(7,LOW);
  digitalWrite(13,LOW);
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
}
void seven_high()
{
  digitalWrite(7,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
}
void seven_low()
{
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
}
void eight_high()
{
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
}
void eight_low()
{
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  digitalWrite(8,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
}
void nine_high()
{
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}
void nine_low()
{
  digitalWrite(13,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}

  
void blink(){
  if(digitalRead(13)==1){
    for(int i=0;i<10000;i++){
    digitalWrite(13,LOW);
    delay(100);
    digitalWrite(13,HIGH);
    delay(100);
    }
  }
  if(digitalRead(12)==1){
    digitalWrite(12,LOW);
    delay(100);
    digitalWrite(12,HIGH);
    delay(100);
  }
  if(digitalRead(11)==1){
    digitalWrite(11,LOW);
    delay(100);
    digitalWrite(11,HIGH);
    delay(100);
  }
  if(digitalRead(10)==1){
    digitalWrite(10,LOW);
    delay(100);
    digitalWrite(10,HIGH);
    delay(100);
  }
  if(digitalRead(9)==1){
    digitalWrite(9,LOW);
    delay(100);
    digitalWrite(9,HIGH);
    delay(100);
  }
  if(digitalRead(8)==1){
    digitalWrite(8,LOW);
    delay(100);
    digitalWrite(8,HIGH);
    delay(100);
  }
  if(digitalRead(7)==1){
    digitalWrite(7,LOW);
    delay(100);
    digitalWrite(7,HIGH);
    delay(100);
  }
}

