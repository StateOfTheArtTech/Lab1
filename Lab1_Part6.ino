#define RED_LED 5
#define GREEN_LED 4
const int buttonPin = 2; 
volatile bool buttonState = false; 

void stopPattern() {
  buttonState = !buttonState;
}

void setup() {
  pinMode(buttonPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), stopPattern, RISING);
}

void loop() {
  if(!buttonState){
    digitalWrite(RED_LED, HIGH);
    delay(500);
    digitalWrite(RED_LED,LOW);
    delay(500);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, HIGH);
    delay(500);
    digitalWrite(RED_LED,LOW);
    digitalWrite(GREEN_LED,LOW);
    delay(500);
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, HIGH);
    delay(500);
    digitalWrite(RED_LED,LOW);
    digitalWrite(GREEN_LED,LOW);
    delay(500);
    digitalWrite(GREEN_LED, HIGH);
    delay(500);
    digitalWrite(GREEN_LED,LOW);
    delay(500);
    digitalWrite(RED_LED, HIGH);
    delay(500);
    digitalWrite(RED_LED,LOW);
    delay(500);
  }else{
    //do nothing
  }

}
