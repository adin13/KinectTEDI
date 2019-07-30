const int pos5 =  2;
const int neg5 =  3;
bool    fHasLooped  = false;


void setup() {
  pinMode(pos5, OUTPUT);
  pinMode(neg5, OUTPUT);
}
int i = 0;
int thresh = 19;
void loop() {
  if ( fHasLooped == false ){
   

  for(int i=0;i<=20;i++){
  digitalWrite(pos5, LOW); 
  digitalWrite(neg5, HIGH);
    delayMicroseconds(50); 
  digitalWrite(pos5, LOW); 
  digitalWrite(neg5, LOW);
    delayMicroseconds(40); 
  digitalWrite(pos5, HIGH); 
  digitalWrite(neg5, LOW);
    delayMicroseconds(50);
  digitalWrite(pos5, LOW); 
  digitalWrite(neg5, LOW);
  delay(40);
  }
  fHasLooped = true;
  }
}
    
  
  
