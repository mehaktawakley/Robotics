;.
//#define LS 11;
//#define RS 10;
int LM1 = 9;
int RM1 = 6;
int LM2 = 5;
int RM2 = 3;

void setup() {
  // put your setup code here, to run once:
// pinMode(LS ,INPUT);
// pinMode(RS , INPUT);
 pinMode(LM1 , OUTPUT);
 pinMode(RM1 , OUTPUT);
 pinMode(LM2 , OUTPUT);
 pinMode(RM2 , OUTPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

 /*Serial.println("1. FORWARD");
 Serial.println("2. LEFT");
 Serial.println("3. RIGHT");
 Serial.println("4. BACKWARD");
 Serial.println("5. STOP"); */ 
 if (Serial.available()>0)
 {
  String val = Serial.readString();
  Serial.println("MOVE:");
  Serial.println(val);

  if (val == "FORWARD")
  {
    forward();    
  }

  else if (val == "LEFT")
  {
    left();
   
  }

  else if (val == "RIGHT")
  {
    right();
    forward();
  }

  else if(val == "BACKWARD")
  {
    digitalWrite(LM1 , LOW);
    digitalWrite(LM2 , HIGH);
    digitalWrite(RM1 , LOW);
    digitalWrite(RM2 , HIGH);
  }

  else if(val == "STOP")
  {
    digitalWrite(LM1 , LOW);
    digitalWrite(LM2 , LOW);
    digitalWrite(RM1 , LOW);
    digitalWrite(RM2 , LOW);
  }

  else
  {
    Serial.println("INVALID");
    digitalWrite(LM1 , LOW);
    digitalWrite(LM2 , LOW);
    digitalWrite(RM1 , LOW);
    digitalWrite(RM2 , LOW);
  }
 }
}

void forward()
{
    digitalWrite(LM1 , HIGH);
    digitalWrite(LM2 , LOW);
    digitalWrite(RM1 , HIGH);
    digitalWrite(RM2 , LOW); 
};


void left()
{
    digitalWrite(LM1 , LOW);
    digitalWrite(LM2 , LOW);
    digitalWrite(RM1 , HIGH);
    digitalWrite(RM2 , LOW);
    delay(2); 
};


void right()
{
    digitalWrite(LM1 , HIGH);
    digitalWrite(LM2 , LOW);
    digitalWrite(RM1 , LOW);
    digitalWrite(RM2 , LOW);
    delay(2);
};

