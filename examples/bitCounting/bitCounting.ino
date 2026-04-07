#include <Shifter_74HC595.h>
using namespace Shifter_74HC595;
Shifter_74HC595::Shifter_74HC595_settings MSRS;

byte leds = 0;

void setup(){
  MSRS.dontReverse = 0;
  Shifter_74HC595::setupPins(MSRS);
  Shifter_74HC595::shiftValue(MSRS, 0);
}
void loop(){
  leds++;
  Shifter_74HC595::shiftValue(MSRS, leds);
  delay(500);
}