#include <ELECHOUSE_CC1101.h

#define size 1
byte TX_buffer[size] = {0};

void setup() 
{
  Serial.begin(9600);
  ELECHOUSE_cc1101.Init(F_433);
  Serial.println("CC110 Initialized...");
}

void loop() 
{
  TX_buffer[0] = 5;
  ELECHOUSE_cc1101.SendData(TX_buffer, size);
  Serial.println("Sent: 5");
  delay(1000); //delay 1 second, change to analog read
}
