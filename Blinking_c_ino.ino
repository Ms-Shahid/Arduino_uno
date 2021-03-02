const int Speed = 500;
const int OFF = 500;
void setup(){
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop(){
  for(int i = 13; i >8; i--){
    digitalWrite(i,HIGH);
    delay(Speed);
    digitalWrite(i,LOW);
    delay(OFF);
   
  }
  
  for(int i = 8; i < 13; i++){
    digitalWrite(i,HIGH);
    delay(Speed);
    digitalWrite(i,LOW);
    delay(OFF);
    
  }
}
