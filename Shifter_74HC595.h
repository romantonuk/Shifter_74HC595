#ifndef Shifter_74HC595_h
#define Shifter_74HC595_h

#include "Arduino.h"
#include "independent_libs/digitalWriteFast.h"

namespace Shifter_74HC595{
  struct Shifter_74HC595_settings{
    int latchPin = 5;       // Latch pin of 74HC595 is connected to Digital pin 5
    int clockPin = 6;       // Clock pin of 74HC595 is connected to Digital pin 6
    int dataPin = 4;        // Data pin of 74HC595 is connected to Digital pin 4
    byte dontReverse = 1;   // If 1 have output as Q0-Q7 and not Q7-Q0
  };

  void setupPins(Shifter_74HC595_settings s) {
    // Set all the pins of 74HC595 as OUTPUT
    pinModeFast(s.latchPin, OUTPUT);
    pinModeFast(s.clockPin, OUTPUT);
    pinModeFast(s.dataPin, OUTPUT);
  }
  void shiftValue(Shifter_74HC595_settings s, byte val) {
    digitalWriteFast(s.latchPin, LOW);
    shiftOutFast(s.dataPin, s.clockPin, s.dontReverse, val);
    digitalWrite(s.latchPin, HIGH);
  }
}

#endif