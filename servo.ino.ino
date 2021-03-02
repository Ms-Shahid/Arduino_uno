#include<Servo.h>
Servo srvo;   //create a srvo object of servo lib
int pos;      //direction


void setup() {
  srvo.attach(4);   
  /*connect the arrow wire to GPIO pin
  middle one to +5v and last one to gnd*/
}

void loop() {

  //here we will turn the motor clockwise 
  for(pos =0; pos<180; pos++){
    srvo.write(pos);
    delay(15);
  }
  delay(1000);
  
  //anti-clockwise
  for(pos = 180; pos>=0; pos--){
    srvo.write(pos);
    delay(15);
  }
  delay(1000);

}
