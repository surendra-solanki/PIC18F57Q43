#include<Wire.h>
char valueNew; 

void setup() {
Wire.begin();
Serial.begin(9600);
//Wire.onRequest(requestEvent);
}

void loop() {

  Wire.beginTransmission(44);  
  Wire.write("SS");
  Wire.endTransmission();
  delay(500);
  
}

//void requestEvent()
//{
//  Wire.write("hello ");
//}
