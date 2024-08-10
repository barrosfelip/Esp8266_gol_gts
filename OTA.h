#if defined(ESP8266)
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#elif defined(ESP32)
#include <WiFi.h>
#include <ESPmDNS.h>
#include <WiFiUdp.h>
#endif
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
const char* ssid = "REDE DO ROTEADOR";
const char* password = "SENHA";

const char *Apssid = "GOL GTS";
const char *Appassword = "SENHA";             


void conectNet() {

  Serial.println("Booting");

  WiFi.mode(WIFI_AP_STA); 

  WiFi.begin(ssid, password);
  delay(1000);
  int i;
  while (WiFi.status() != WL_CONNECTED || i < 10) {  
    i++;
    Serial.println("Tentando conectar " + i);
    delay(3000);
    //ESP.restart();
  }
  
  WiFi.softAP(Apssid, Appassword);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("Access Point IP address: ");
  Serial.println(myIP);

  ArduinoOTA.begin();
  ArduinoOTA.onStart([]() {
  });

  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
   });

  ArduinoOTA.onEnd([]() {

  });

}