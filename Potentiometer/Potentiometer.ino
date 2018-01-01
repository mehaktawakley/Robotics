int pin=11;
int knob=A0;

void setup() {
  // put your setup code here, to run once:
 pinMode(pin ,OUTPUT);
 Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
 int val=analogRead(knob);
 Serial.println("\n Knob: ");
 Serial.println(val);
 val = map(val,1,1023,1,255);
 analogWrite(pin,val);
 Serial.println(val);
 delay(500);
 }
