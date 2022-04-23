#include "Utilities.h"

/**
- Play mario melody during the start.
- Turn LED on for 1 second, then off for 1 seconds, then back to on again.
**/

void setup() {
    begin();
}

bool do_once() {
    marioMelody();
    while (true) {
        turnLedOn();
        delay(seconds(1));
        turnLedOff();
        delay(seconds(1));
    }
}

void loop() {
    static bool _ = do_once();
}