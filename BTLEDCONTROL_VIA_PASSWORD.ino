#include"BluetoothSerial.h"

BluetoothSerial SerialBT;
const int ledPin=2;
String pass = "mine";

void setup() {
SerialBT.begin("ESP32-BLUETOTH");
pinMode(ledPin, OUTPUT);
Serial.begin(115200);
  // put your setup code here, to run once:

}

void loop() {
  if(SerialBT.available()){
    if(Serial.available ())
    {
      String readData = Serial.readString();
      if(readData == pass)
      {
          Serial.print("Correct password");
          char c = SerialBT.read();
          if(c == '1')
          {
             digitalWrite(ledPin, HIGH);
          }
          else if(c == '0')
          {
        digitalWrite(ledPin, LOW);
         }
      }
        else
        {
          Serial.println("Password Incorrect");
        }
    }
  
  }
  // put your main code here, to run repeatedly:

}
