#define LED_RED 5
#define LED_GREEN 4

void setup() {
  Serial.begin(9600);
  delay(2000);
  char randomLetters[] = {'S', 'E', 'G', 'H', 'R', 'W', 'X', 'Y', 'U', 'J',
                          'K', 'L', 'P', 'Q', 'M', 'N', 'O', 'A', 'B', 'C',
                          'D', 'V', 'F', 'I', 'T', 'Z', 'A', 'B', 'C', 'D',
                          'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
                          'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X'};
  int redCount = 0;
  int greenCount = 0;
  int blueCount = 0;
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  for(int i = 0; i < 50; i++){
    if(randomLetters[i] == 'R'){
      redCount++;
      Serial.println("RED FOUND");
      digitalWrite(LED_RED, HIGH);
      delay(500);
      digitalWrite(LED_RED, LOW);
    }
    else if(randomLetters[i] == 'G'){
      Serial.println("GREEN FOUND");
      greenCount++;
      digitalWrite(LED_GREEN, HIGH);
      delay(500);
      digitalWrite(LED_GREEN, LOW);
    }
    else if(randomLetters[i] == 'B'){
      Serial.println("BLUE FOUND");
      blueCount++;
    }
    else{
      //Do nothing
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
