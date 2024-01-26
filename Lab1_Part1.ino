
#include <EEPROM.h>
#define ARRAY_SIZE 512
#define EEPROM_START_ADDR 0

unsigned long result[512] = {0};


unsigned long twice_square(unsigned long value){
  return 2*value*value;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for(int i=0;i<ARRAY_SIZE;i++){
    result = twice_square(i);
    EEPROM.put(EEPROM_START_ADDR + i*sizeof(unsigned long), result);
  }
  for(int i=0;i<ARRAY_SIZE; i++){
    EEPROM.get(EEPROM_START_ADDR + i*sizeof(unsigned long), result);
    Serial.print(i);
    Serial.print(":");
    Serial.println(result);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
