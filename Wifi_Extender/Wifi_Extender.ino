#include <WiFi.h>

const char *ssid = "Source";
const char *password = "pass";

const char *ap_ssid = "ESPwifi";
const char *ap_password = "pass2";

const int wifiStatusLED = 13;
const int hotspotStatusLED = 12;


void setup() {
      
      Serial.begin(115200);
      pinMode(wifiStatusLED,OUTPUT);
      pinMode(hotspotStatusLED,OUTPUT);

    //Configuring ESP as wifi receiver.
      Serial.println("ESP Connecting to:  ");
      Serial.print(ssid);
      delay(1000);
      WiFi.begin(ssid, password); //Start connecting to wifi

    //Checking whether ESP is connected to Wifi
        while(WiFi.status() != WL_CONNECTED){
          Serial.println("Connecting...");
          delay(1000);

        }
        Serial.println("ESP connected to the Network");
        digitalWrite(wifiStatusLED, HIGH);
        delay(2000);
        digitalWrite(wifiStatusLED, LOW);
    //Configuring ESP as the WIFI extender
    Serial.println("Extending the Wifi...");
    delay(1000);
    WiFi.softAP(ap_ssid, ap_password);
    IPAddress ESPaddress = WiFi.softAPIP();
    Serial.println("ESP IP address is:  ");
        delay(1000);
    Serial.println(ESPaddress);
        delay(1000);
        digitalWrite(hotspotStatusLED, HIGH);
        Serial.println("Wifi successfully extended");

}

void loop() {
  // put your main code here, to run repeatedly:

}
