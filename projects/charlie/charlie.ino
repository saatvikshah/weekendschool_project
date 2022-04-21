#include "Utilities.h"

void setup() {
    begin();
}

void level_one() {
    turnLedOn();
    moveForward(4);
    turnRight(135);
    moveForward(4);
    turnLedOff();
}

void level_two() {
    int counter = 0;
    while (counter < 5) {
        moveForward(4);
        turnRight(135);
        moveForward(4);
        if (counter % 2 == 0) {
            turnLedOn();
            turnLedOff();
        } else {
            marioMelody();
        }
    }
}

bool do_once() {
}

void loop() {
    static bool _ = do_once();
}
