#include "Arduino_LED_Matrix.h"

ArduinoLEDMatrix matrix;

uint32_t frame1[3] = {0x10810818, 0x81481281, 0x18108108};
uint32_t frame2[3] = {0x0F006006, 0x00600600, 0x600600F0};
uint32_t frame3[3] = {0x10810818, 0x81481281, 0x18108108};
uint32_t frame4[3] = {0x0F006006, 0x00600601, 0x601E00C0};
uint32_t frame5[3] = {0x06009010, 0x81081F81, 0x08108108};

void setup() {
  matrix.begin();
}

void loop() {
  int interval = 1000;

  matrix.loadFrame(frame1);
  delay(interval);
  matrix.loadFrame(frame2);
  delay(interval);
  matrix.loadFrame(frame3);
  delay(interval);
  matrix.loadFrame(frame4);
  delay(interval);
  matrix.loadFrame(frame5);
  delay(interval);
}
