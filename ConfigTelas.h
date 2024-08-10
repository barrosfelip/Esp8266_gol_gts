#include "images.h"
#include "logo_vw.h"

SSD1306Wire display(0x3c, D5, D6);  // ADDRESS, SDA, SCL  -  SDA and SCL usually populate automatically based on your board's pins_arduino.h e.g. https://github.com/esp8266/Arduino/blob/master/variants/nodemcu/pins_arduino.h
OLEDDisplayUi ui     ( &display );

void drawFrame1(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) {
    display->drawXbm((x + 34), (y - 0), 60, 60, logo_vw);
}
void drawFrame2(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) {
  display->drawXbm((x + 8), (y + 14), 112, 20, gts);
  display->setTextAlignment(TEXT_ALIGN_CENTER);
  display->setFont(ArialMT_Plain_10);
  display->drawString(64 + x, 44 + y, "Vol kswagen");
}
void drawFrame3(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) {
  ui.disableIndicator();
  now=millis();
  carregaHora();
  display->setFont(DSEG7_Modern_Regular_36);
  
  display->setTextAlignment(TEXT_ALIGN_CENTER);
  display->drawString(64 + x, 8 + y, timeStamp);
}

void drawFrame4(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) {

  display->setTextAlignment(TEXT_ALIGN_LEFT);
  display->setFont(ArialMT_Plain_10);
  display->drawStringMaxWidth(0 + x, 10 + y, 128, "Lorem ipsum\n dolor sit amet, consetetur sadipscing elitr, sed diam nonumy eirmod tempor invidunt ut labore.");
}

void drawFrame5(OLEDDisplay *display, OLEDDisplayUiState* state, int16_t x, int16_t y) {

}

int frameCount = 3;
FrameCallback frames[] = { drawFrame1, drawFrame2, drawFrame3, drawFrame4, drawFrame5 };

void msOverlay(OLEDDisplay *display, OLEDDisplayUiState* state) {
  display->setTextAlignment(TEXT_ALIGN_RIGHT);
  display->setFont(ArialMT_Plain_10);

}

OverlayCallback overlays[] = { msOverlay };
int overlaysCount = 1;

void iniTela(){
  ui.setTargetFPS(60);
  ui.setActiveSymbol(activeSymbol);
  ui.setInactiveSymbol(inactiveSymbol);
  ui.setIndicatorPosition(RIGHT);
  ui.setIndicatorDirection(LEFT_RIGHT);
  ui.setFrameAnimation(SLIDE_DOWN);
  ui.setFrames(frames, frameCount);
  ui.setOverlays(overlays, overlaysCount);
  ui.init();
}

void LimpaTela (){
  display.setColor(BLACK);
  display.fillRect(0, 50, display.width(), 10);
  display.setColor(WHITE);
}

void TelaWifi(String texto) {

  LimpaTela ();

  display.drawXbm(34, 5, 60, 36, WiFi_Logo_bits);
  display.setTextAlignment(TEXT_ALIGN_CENTER);
  display.setFont(ArialMT_Plain_10);
  display.drawString(64, 50, texto);
  display.display();

}




