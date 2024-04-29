const int ledPin = 2;

void setup() {
Serial.begin(115200);
pinMode(ledPin, OUTPUT);
Serial.println("Please enter your password...");
}

void loop() {
    if(Serial.available()){
      String dAvailable = Serial.readString();
      if(dAvailable == "pass"){
        Serial.println("Password is correct");
        Serial.println("Please wait a moment...");
        delay(2000);
        Serial.println("About to blink...");
            digitalWrite(ledPin, LOW);
            delay(2000);
            Serial.println("Now blinking...");
            digitalWrite(ledPin, HIGH);
            delay(2000);
            digitalWrite(ledPin, LOW);
            delay(2000);
            digitalWrite(ledPin, HIGH);
            delay(2000);
            digitalWrite(ledPin, LOW);
            delay(2000);
            digitalWrite(ledPin, HIGH);
            delay(2000);
            digitalWrite(ledPin, LOW);
            delay(2000);
            digitalWrite(ledPin, HIGH);
            delay(2000);
            digitalWrite(ledPin, LOW);
            delay(2000);
            digitalWrite(ledPin, HIGH);
            delay(2000);
            digitalWrite(ledPin, LOW);
            delay(2000);
            digitalWrite(ledPin, HIGH);
            delay(2000);
            digitalWrite(ledPin, LOW);
            delay(2000);
        Serial.println("Blinking is complete...Thank you");
      }
      else if(dAvailable != "pass"){
        Serial.println("Wrong password");
        Serial.println("Please try again");
      }
      else{
        Serial.print("You entered nothing!");
      }
    }

}
