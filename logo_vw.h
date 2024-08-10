#define WiFi_Logo_width 60
#define WiFi_Logo_height 60
const uint8_t logo_vw[] PROGMEM = { 
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFE, 0x01, 0xFC, 0x07, 0x00, 0x00, 0x00, 0x80, 0x3F, 0x00, 
  0xC0, 0x1F, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x00, 0x00, 0x3F, 0x00, 0x00, 
  0x00, 0xC0, 0x03, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 
  0x00, 0xE0, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 
  0x00, 0x3C, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x1E, 0x00, 0xFF, 
  0x07, 0x80, 0x07, 0x00, 0x80, 0x07, 0x00, 0xFE, 0x07, 0x00, 0x0E, 0x00, 
  0x80, 0x07, 0x00, 0xFE, 0x03, 0x00, 0x1E, 0x00, 0x80, 0x03, 0x00, 0xFE, 
  0x03, 0x02, 0x1C, 0x00, 0xC0, 0x01, 0x07, 0xFC, 0x03, 0x06, 0x1C, 0x00, 
  0xE0, 0xC0, 0x0F, 0xFC, 0x03, 0x1F, 0x70, 0x00, 0x70, 0xC0, 0x0F, 0xFC, 
  0x81, 0x3F, 0x70, 0x00, 0x70, 0xC0, 0x1F, 0xF8, 0x81, 0x3F, 0xE0, 0x00, 
  0x78, 0xC0, 0x1F, 0xF8, 0xC0, 0x7F, 0xE0, 0x00, 0x38, 0xC0, 0x3F, 0x70, 
  0xC0, 0x3F, 0xE0, 0x01, 0x18, 0xC0, 0x3F, 0x70, 0xC0, 0x3F, 0xC0, 0x01, 
  0x18, 0xC0, 0x3F, 0x20, 0xC0, 0x3F, 0xC0, 0x01, 0x1C, 0xC0, 0x3F, 0x20, 
  0xE0, 0x1F, 0x80, 0x01, 0x0C, 0x80, 0x7F, 0x00, 0xF0, 0x0F, 0x80, 0x03, 
  0x0E, 0x80, 0xFF, 0x00, 0xF0, 0x0F, 0x80, 0x03, 0x0E, 0x04, 0xFF, 0x00, 
  0xF8, 0x0F, 0x00, 0x03, 0x0E, 0x04, 0xFF, 0x00, 0xF8, 0x07, 0x00, 0x03, 
  0x06, 0x04, 0xFE, 0x01, 0xFC, 0x03, 0x01, 0x03, 0x06, 0x04, 0xFC, 0x03, 
  0xFC, 0x03, 0x03, 0x03, 0x06, 0x0C, 0xFC, 0x03, 0xFC, 0x83, 0x03, 0x07, 
  0x06, 0x1C, 0xFC, 0x03, 0xFC, 0x81, 0x03, 0x07, 0x06, 0x3C, 0xF8, 0x03, 
  0xFC, 0x80, 0x03, 0x07, 0x06, 0x3C, 0xF8, 0x03, 0xFC, 0xC0, 0x01, 0x03, 
  0x06, 0x3C, 0xF0, 0x01, 0xFC, 0xC0, 0x01, 0x03, 0x0E, 0x3C, 0xE0, 0x00, 
  0x78, 0xC0, 0x01, 0x03, 0x0E, 0x38, 0xE0, 0x00, 0x38, 0xE0, 0x81, 0x03, 
  0x0C, 0x38, 0x40, 0x00, 0x30, 0xE0, 0x81, 0x03, 0x0C, 0x78, 0x40, 0x00, 
  0x30, 0xF0, 0x81, 0x01, 0x1C, 0xF8, 0x00, 0x20, 0x00, 0xF0, 0xC0, 0x01, 
  0x18, 0xF0, 0x00, 0x60, 0x00, 0xF8, 0xC0, 0x01, 0x38, 0xF0, 0x01, 0x70, 
  0x00, 0x78, 0xC0, 0x01, 0x38, 0xE0, 0x01, 0x70, 0x00, 0x7C, 0xE0, 0x01, 
  0x78, 0xC0, 0x03, 0xF8, 0x00, 0x3C, 0xE0, 0x00, 0x70, 0xC0, 0x03, 0xFC, 
  0x01, 0x3C, 0x70, 0x00, 0x70, 0xC0, 0x03, 0xFC, 0x01, 0x1E, 0x70, 0x00, 
  0xE0, 0x80, 0x03, 0xFC, 0x03, 0x0E, 0x38, 0x00, 0xC0, 0x03, 0x06, 0xFC, 
  0x03, 0x03, 0x1C, 0x00, 0x80, 0x03, 0x0C, 0xFE, 0x03, 0x03, 0x1E, 0x00, 
  0x80, 0x07, 0x08, 0xFE, 0x87, 0x00, 0x0E, 0x00, 0x00, 0x07, 0x00, 0xFF, 
  0x07, 0x00, 0x0F, 0x00, 0x00, 0x3C, 0x00, 0xF8, 0x01, 0x80, 0x03, 0x00, 
  0x00, 0x38, 0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x00, 0x38, 0x00, 0x00, 
  0x00, 0xE0, 0x01, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 
  0x00, 0xC0, 0x07, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xC0, 0x1F, 0x00, 
  0xC0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0xF8, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0xFC, 0xFF, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 
  };


  const uint8_t gts[] PROGMEM = {  0xE0, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0x01, 0xFE, 0x0F, 0xF0, 
  0xFF, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x01, 0x06, 
  0x0C, 0x1C, 0x80, 0x03, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 
  0x01, 0x06, 0x0C, 0x0E, 0x00, 0x07, 0x06, 0x00, 0x00, 0x00, 0x00, 0x10, 
  0x00, 0x00, 0x01, 0x06, 0x0C, 0x03, 0x00, 0x0E, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x10, 0x00, 0x00, 0x01, 0x06, 0x0C, 0x03, 0x00, 0x0C, 0x03, 0xFF, 
  0xFF, 0x7F, 0xE0, 0x1F, 0xF8, 0xFF, 0x01, 0x06, 0x0C, 0x83, 0x3F, 0x1C, 
  0x03, 0xFF, 0xFF, 0x7F, 0xE0, 0x1F, 0xF8, 0xFF, 0x01, 0x06, 0x0C, 0x83, 
  0x3F, 0x1C, 0x03, 0xE3, 0xFF, 0x70, 0x60, 0x1C, 0xF0, 0xFF, 0x00, 0x06, 
  0x0C, 0x03, 0x1F, 0x0C, 0x03, 0xE3, 0xE0, 0x70, 0x60, 0x38, 0x00, 0x00, 
  0x07, 0x06, 0x0C, 0x01, 0x00, 0x38, 0x03, 0xE3, 0xE0, 0x70, 0x60, 0x38, 
  0x00, 0x00, 0x07, 0x06, 0x0C, 0x01, 0x00, 0x78, 0x03, 0xE3, 0xE0, 0x70, 
  0x60, 0x78, 0x00, 0x00, 0x07, 0x06, 0x8C, 0x00, 0x00, 0xF8, 0x03, 0xE3, 
  0xE0, 0x70, 0x60, 0xE0, 0xFF, 0x03, 0x0E, 0x06, 0x8C, 0x80, 0x1F, 0xF0, 
  0x03, 0xE3, 0xE0, 0x70, 0x60, 0xE0, 0xFF, 0x07, 0x0E, 0x06, 0x8C, 0xC0, 
  0x3F, 0xF0, 0x03, 0xFF, 0xE0, 0x70, 0x60, 0xF8, 0xFF, 0x07, 0x0E, 0x06, 
  0xFC, 0x80, 0x3F, 0xF0, 0x03, 0xFE, 0xE0, 0x70, 0x60, 0xF8, 0xFF, 0x03, 
  0x0E, 0x06, 0xFC, 0x00, 0x1F, 0xF0, 0x07, 0x00, 0xE0, 0x70, 0x60, 0x18, 
  0x00, 0x00, 0x07, 0x06, 0x8C, 0x01, 0x00, 0xB8, 0x0E, 0x00, 0xE0, 0x70, 
  0x60, 0x18, 0x00, 0x00, 0x07, 0x06, 0x8C, 0x01, 0x00, 0x3C, 0x3C, 0x00, 
  0xE0, 0x70, 0x60, 0x18, 0x00, 0xE0, 0x01, 0x06, 0xFC, 0x0F, 0x00, 0x1F, 
  0xF8, 0xFF, 0xFF, 0xF0, 0x7F, 0xF8, 0xFF, 0xFF, 0x00, 0xFE, 0xFF, 0xFF, 
  0xFF, 0x0F, 0xE0, 0xFF, 0xFF, 0xF0, 0x7F, 0xF8, 0xFF, 0x3F, 0x00, 0xFE, 
  0x07, 0xF8, 0xFF, 0x01,};
