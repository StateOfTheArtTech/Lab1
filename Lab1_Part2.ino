#include <math.h>
#define ARRAY_SIZE 360
#define DEGREE_TO_RADIAN_FACTOR 0.01745

double cosResults[ARRAY_SIZE] = {0}; 

double cosDegrees(double value){
  return cos(value*DEGREE_TO_RADIAN_FACTOR);
}

void setup() {
  Serial.begin(9600);
  delay(2000);
  for(int i=0;i<ARRAY_SIZE;i++){
    cosResults[i]=cosDegrees(i);
    Serial.print(i);
    Serial.print(":");
    Serial.println(cosResults[i]);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
