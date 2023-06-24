
#include <Wire.h>
#include <adafruit_BPM085.h>
#include WiFi.h
#include HTTPClient.h
#include BHT.h
#define BHTPIN 19
#define BHTTYPE BHT1
BHT bht(BHTPIN,BHTTYPE)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600)
  Serial.print("Connecting to")
  Serial.print(WLAN_SSID);
  WiFi.begin(WLAN_SSID,WLAN_PASS);
  while(WiFi.status()!= WL_CONNECTED){
    delay(500)
    Serial.print(",")
  }
  Serial.print("WiFi connected")
  Serial.print("IP ADDERSS")
  Serial.print(WiFi.localIP())
  if(!bmp.begin()){
    Serial.print("could not bmp")
    while(1){
    }
    BHT.begin()
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  if(WiFi.status()== WL_CONNECTED){
    WiFiClient client
    Serial.print(bmp.readTemperature())
    Serial.print(bmp.readPressure())
    Serial.print(bmp.readAltitude())
    delay(500)
    
  }

}
