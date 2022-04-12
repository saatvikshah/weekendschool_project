#include "Utilities.h"

/**
- Play mario melody during the start.
- Turn LED on for 1 second, then off for 2 seconds, then back to on again.
**/

void setup() {
    begin();
    marioMelody();
}

void loop() {
    turnLedOn();
    delay(seconds(1));
    turnLedOff();
    delay(seconds(2));
}
