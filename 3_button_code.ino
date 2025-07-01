
const int b1 = 2;  
const int ledPin = 13;    

int b1State = 0;  

const int b2 = 4;  
const int ledPin2 = 12;    

int b2State = 0; 

const int b3 = 7;  
const int ledPin3 = 8;    

int b3State = 0;  
/////////////////////////////////////////
void setup() {

  pinMode(ledPin, OUTPUT);
  
  pinMode(b1 , INPUT);
  
   pinMode(ledPin2, OUTPUT);
  
  pinMode(b2 , INPUT);
  
  pinMode(ledPin3, OUTPUT);
  
  pinMode(b3 , INPUT);
  
}

void loop() {
 
int b1State = digitalRead(b1);


  if (b1State == HIGH) {
    
    digitalWrite(ledPin, HIGH);
  } else {
    
    digitalWrite(ledPin, LOW);
  }  
    
int b2State = digitalRead(b2);


  if (b2State == HIGH) {
    
    digitalWrite(ledPin2, HIGH);
  } else {
    
    digitalWrite(ledPin2, LOW);
    
 int b3State = digitalRead(b3);


  if (b3State == HIGH) {
    
    digitalWrite(ledPin3, HIGH);
  } else {
    
    digitalWrite(ledPin3, LOW);
  }  
  }
}

