
char value;
char Data[]=("HI I'M SLAVE\n");
void setup() {
Serial.begin(9600);
Serial.write("HI I'M SLAVE\n");
}

void loop() 
{                   
    while(Serial.available()>0)
    {
        value = Serial.read();
        Serial.print(value);
        if(value == '\n')
        {
          for(int i=0;i<sizeof(Data);i++)
          {
           Serial.write(Data[i]); 
          }
         
//         delay(500);
        }
    }
}
