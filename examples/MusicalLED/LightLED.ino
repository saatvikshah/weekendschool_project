#include "Utilities.h"

void setup() {
    begin();
    marioMelody();
}

void loop() {
    turnLedOn();
    delay(seconds(1));
    turnLedOff();
    delay(seconds(1));
}