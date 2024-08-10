#include <Wire.h> 
#include "SSD1306Wire.h" 
#include "OLEDDisplayUi.h"
#include "DSEG7Classic-BoldFont.h"
#include "OTA.h"
#include "clock.h"
#include "ConfigTelas.h"

void setup() { 
  Serial.begin(115200);

  iniTela();
  TelaWifi( "Conectando Wifi ...");
  conectNet();
  if(WiFi.status() == WL_CONNECTED){
    TelaWifi( "Conectado");
  } else {
    TelaWifi( "Sem conexão");
  }
  atualizaHora();
  delay (2000);
}

void loop() {
  
  int remainingTimeBudget = ui.update();

  if (remainingTimeBudget > 0) {
    delay(remainingTimeBudget);
  }

  ArduinoOTA.handle(); 
}
