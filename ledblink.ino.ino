int ledPin = 3;
int button = 2;
void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(button, INPUT_PULLUP);  
 
}

void loop() {

   int buttonState = digitalRead(button);
   digitalWrite(ledPin, buttonState);
}
