
#include <SPI.h>
char ReceiveData;
char SendData = 'W';

void setup() {
Serial.begin(9600);
pinMode(MISO,INPUT);  //MISO
//SPCR |= _BV(SPE);
SPCR =64;
//SPI.setClockDivider(SPI_CLOCK_DIV16);//divide the clock by 8
SPI.beginTransaction(SPISettings(500000, MSBFIRST, SPI_MODE0)) ;
SPI.attachInterrupt();
}

 ISR(SPI_STC_vect){
  
      ReceiveData =SPDR;
      Serial.print(ReceiveData);
      if(ReceiveData == '\n')
      {
        SPDR = SendData; 
//        for(int i=0;i<sizeof(SendData);i++)
//        {
//              SPDR = SendData[i];
//              Serial.print(SendData[i]);
//        }
      }
 }

 
void loop() {
  //delay(1000);
}

//void setup (void) {
//   Serial.begin(9600); //set baud rate to 115200 for usart
//   digitalWrite(SS, HIGH); // disable Slave Select
//   pinMode(SS,INPUT);
//   SPI.begin ();
//   SPI.setClockDivider(SPI_CLOCK_DIV64);//divide the clock by 8
//}
//
//void loop (void) {
//         
//   digitalWrite(SS, LOW); // enable Slave Select
//   for (int i=0;i<sizeof(SendData);i++)
//   {
//        ReceiveData = SPI.transfer(SendData[i]);
//        Serial.print(ReceiveData);
//   }
//
//   digitalWrite(SS, HIGH); // disable Slave Select
////   delay(1000);
//}
