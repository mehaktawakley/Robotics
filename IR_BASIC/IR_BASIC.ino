//#include <IRremote.h>

int sensor = 6;
//int LED=13;
int obstacle = HIGH;
int delayRead =100;
void setup() 
{

   pinMode(sensor ,INPUT);
   pinMode(13 ,OUTPUT);
   pinMode(12 ,OUTPUT);
   pinMode(11 ,OUTPUT);
   pinMode(10 ,OUTPUT);
   pinMode(9 ,OUTPUT);
   pinMode(8 ,OUTPUT);
   pinMode(7 ,OUTPUT);
   Serial.begin(9600);

}

void loop() {

   obstacle = digitalRead(sensor);
   Serial.println(digitalRead(sensor));

   // isObstacle ==low there is obstacle infront of sensor
  if (obstacle == LOW) {
    digitalWrite(13 ,HIGH);
    digitalWrite(12 ,HIGH);
    digitalWrite(11 ,LOW);
    digitalWrite(10 ,LOW);
    digitalWrite(9 ,HIGH);
    digitalWrite(8 ,LOW);
    digitalWrite(7 ,HIGH);

    Serial.println("LOW");
  }
  else
  {
    digitalWrite(13 ,LOW);
    digitalWrite(12 ,LOW);
    digitalWrite(11 ,HIGH);
    digitalWrite(10 ,HIGH);
    digitalWrite(9 ,HIGH);
    digitalWrite(8 ,HIGH);
    digitalWrite(7 ,LOW);
    
    Serial.println("HIGH");
  }

  delay(delayRead);
}
