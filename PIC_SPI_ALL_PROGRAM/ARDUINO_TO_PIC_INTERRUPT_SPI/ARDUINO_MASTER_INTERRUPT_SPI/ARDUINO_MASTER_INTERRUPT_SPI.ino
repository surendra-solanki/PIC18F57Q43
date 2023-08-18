#include <SPI.h>

char val = 'p';
char Data ;

void setup()
{
Serial.begin(9600);
digitalWrite(SS,HIGH);
SPI.begin();
//SPI.setClockDivider(SPI_CLOCK_DIV16);
SPI.beginTransaction(SPISettings(100000, MSBFIRST, SPI_MODE0));
}

 
void loop() {
  digitalWrite(SS,LOW);
    Data=SPI.transfer(val);
//    Serial.print(val);
    Serial.print(Data);
//  }
  digitalWrite(SS,HIGH);
}
 
     
