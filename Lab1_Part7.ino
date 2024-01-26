#define RED_LED 5
#define GREEN_LED 4
const int buttonPin1 = 2; 
const int buttonPin2 = 3; 
volatile bool buttonState = false; 
volatile int operationCounter = 0;

void incrementOperation() {
  operationCounter++;
}

void setup() {
  int firstArray[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int secondArray[10]={2, 5, 7, 8, 3, 1, 0, 9, 4, 6};
  int thirdArray[10]={0};
  pinMode(buttonPin1, INPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin1), incrementOperation, RISING);

}

void loop() {
  // put your main code here, to run repeatedly:

}
