#define LED_RED 5
#define LED_GREEN 4

void setup() {
  Serial.begin(9600);
  delay(2000);
  int bigArray[] = {2, 3, 1, 3, 1, 2, 3, 2, 1, 2,
                    3, 1, 1, 2, 3, 1, 2, 3, 1, 2,
                    1, 3, 2, 1, 2, 3, 2, 3, 1, 1,
                    2, 3, 2, 1, 3, 1, 2, 1, 3, 2,
                    1, 3, 1, 2, 2, 3, 1, 3, 2, 1};
  int patternArray[] = {1, 2, 3};
  int patternCount = 0;
  bool redLight = true;
  for(int i = 0 ; i<50 ; i++){
    if(bigArray[i]==patternArray[0]){
      if(bigArray[i+1]==patternArray[1]){
        if(bigArray[i+2]==patternArray[2]){
          patternCount++;
          digitalWrite(LED_GREEN, HIGH);
          delay(1500);
          digitalWrite(LED_GREEN, LOW);
          delay(500);
          redLight = false;
        }
      }
    }
  }
  if(redLight){
    digitalWrite(LED_RED, HIGH);
    delay(1500);
    digitalWrite(LED_RED, LOW);
  }
  Serial.print("Pattern found count: ");
  Serial.print(patternCount);
}

void loop() {
  // put your main code here, to run repeatedly:

}
