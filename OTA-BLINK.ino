#include <ArduinoOTA.h>

#define LED 2
   
void setup() {
  
  ArduinoOTA.onError([](ota_error_t error) { ESP.restart(); });
  ArduinoOTA.begin();  
  
  //pinMode(LED,OUTPUT);
  //digitalWrite(LED,0);
  Serial.begin(115200);
}

void loop() {
  
  ArduinoOTA.handle();
  
  //digitalWrite(LED, HIGH);
  delay(500);
  //digitalWrite(LED, LOW);
  delay(500);
  Serial.println("Selam WiFidan kod yuklendi");
}
