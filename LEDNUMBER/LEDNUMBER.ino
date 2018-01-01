int val; 
int pinA = 2; 
int pinB = 3; 
int pinC = 4; 
int pinD = 5; 
int pinE = 6; 
int pinF = 7; 
int pinG = 8;
int pinA0 = A0;
  
void setup() {                 

  pinMode(pinA, OUTPUT);      
  pinMode(pinB, OUTPUT);      
  pinMode(pinC, OUTPUT);      
  pinMode(pinD, OUTPUT);      
  pinMode(pinE, OUTPUT);      
  pinMode(pinF, OUTPUT);      
  pinMode(pinG, OUTPUT);      
} 

void loop() { 

  val=map(analogRead(A0),0,1024,0,9); 

  if (val==0){ 

    digitalWrite(pinA, HIGH);    
    digitalWrite(pinB, HIGH);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, HIGH);    
    digitalWrite(pinE, HIGH);    
    digitalWrite(pinF, HIGH);    
    digitalWrite(pinG, LOW);  

  } 

  if (val==1){ 

   
    digitalWrite(pinA, LOW);    
    digitalWrite(pinB, HIGH);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, LOW);    
    digitalWrite(pinE, LOW);    
    digitalWrite(pinF, LOW);    
    digitalWrite(pinG, LOW); 
  } 

  if (val==2){ 

     
    digitalWrite(pinA, HIGH);    
    digitalWrite(pinB, HIGH);    
    digitalWrite(pinC, LOW);    
    digitalWrite(pinD, HIGH);    
    digitalWrite(pinE, HIGH);    
    digitalWrite(pinF, LOW);    
    digitalWrite(pinG, HIGH); 
  } 

  if (val==3){ 

 
    digitalWrite(pinA, HIGH);    
    digitalWrite(pinB, HIGH);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, HIGH);    
    digitalWrite(pinE, LOW);    
    digitalWrite(pinF, LOW);    
    digitalWrite(pinG, HIGH); 
  } 

  if (val==4){ 

   
    digitalWrite(pinA, LOW);    
    digitalWrite(pinB, HIGH);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, LOW);    
    digitalWrite(pinE, LOW);    
    digitalWrite(pinF, HIGH);    
    digitalWrite(pinG, HIGH);  
  } 

  if (val==5){ 

     
    digitalWrite(pinA, HIGH);    
    digitalWrite(pinB, LOW);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, HIGH);    
    digitalWrite(pinE, LOW);    
    digitalWrite(pinF, HIGH);    
    digitalWrite(pinG, HIGH);   
  } 
  if (val==6){ 

     
    digitalWrite(pinA, HIGH);    
    digitalWrite(pinB, LOW);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, HIGH);    
    digitalWrite(pinE, HIGH);    
    digitalWrite(pinF, HIGH);    
    digitalWrite(pinG, HIGH);  
  } 

  if (val==7){ 

     
    digitalWrite(pinA, HIGH);    
    digitalWrite(pinB, HIGH);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, LOW);    
    digitalWrite(pinE, LOW);    
    digitalWrite(pinF, LOW);    
    digitalWrite(pinG, LOW);  
  } 

  if (val==8){ 

     
    digitalWrite(pinA, HIGH);    
    digitalWrite(pinB, HIGH);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, HIGH);    
    digitalWrite(pinE, HIGH);    
    digitalWrite(pinF, HIGH);    
    digitalWrite(pinG, HIGH);   
  } 

  if (val==9){ 

     
    digitalWrite(pinA, HIGH);    
    digitalWrite(pinB, HIGH);    
    digitalWrite(pinC, HIGH);    
    digitalWrite(pinD, LOW);    
    digitalWrite(pinE, LOW);    
    digitalWrite(pinF, HIGH);    
    digitalWrite(pinG, HIGH);   
  } 

} 
