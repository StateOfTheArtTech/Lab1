#define ARRAY_LENGTH 50

int gRandomIntegers[ARRAY_LENGTH] = {257, 489, 712, 124, 876, 345, 678, 901, 432, 654,
                                  123, 765, 987, 543, 210, 876, 456, 789, 234, 567,
                                  890, 321, 678, 432, 789, 567, 123, 876, 345, 678,
                                  901, 234, 765, 876, 543, 789, 321, 654, 987, 345,
                                  210, 654, 789, 432, 987, 876, 567, 234, 901, 321};
size_t gArraySize = sizeof(gRandomIntegers)/sizeof(gRandomIntegers[0]);
int *gSecMax = gRandomIntegers + gArraySize;

void setup() {
  int tempMax = 0;
  int tempSecMax = 0;
  Serial.begin(9600);
  delay(2000);
  for(int i = 0 ; i < ARRAY_LENGTH; i++){
    if(gRandomIntegers[i]>tempMax){
      tempSecMax = tempMax;
      tempMax = gRandomIntegers[i];
      Serial.print("MAX: ");
      Serial.print(tempMax);
      Serial.print(", SEC MAX: ");
      Serial.println(tempSecMax);
    }
  }
  *gSecMax = tempSecMax;
  Serial.print("Second Largest Value in Array: ");
  Serial.print(*gSecMax);
}

void loop() {
  // put your main code here, to run repeatedly:

}
