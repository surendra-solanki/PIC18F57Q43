#include <SPI.h>
char val='S';
char value;
void setup() {
Serial.begin(9600);
digitalWrite(SS,HIGH);
SPI.begin();
//SPI.setClockDivider(SPI_CLOCK_DIV16);
SPI.beginTransaction(SPISettings(100000, MSBFIRST, SPI_MODE0));
}

void loop() {
  digitalWrite(SS,LOW);
  value = SPI.transfer(val);
  Serial.print(value);
  digitalWrite(SS,HIGH);
  delay(100);
}
