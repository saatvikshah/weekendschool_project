#include "Utilities.h"

void setup() {
    begin();
}

void level_one() {
    moveForward(4);
    turnRight(135);
    moveForward(4);
    turnLeft(135);
    moveForward(4);
    marioMelody();
}

bool do_once() {
    int counter = 0;
    while (counter < 9) {
        if (counter % 3 == 0) {
            moveForward(4);
            turnRight(135);
            moveForward(4);
            turnLeft(135);
            moveForward(4);
        }
        if (counter % 2 == 0) {
            moveForward(4);
            turnRight(90);
            moveForward(2);
        }
        if ((counter % 3 != 0) && (counter % 2 != 0)) {
            turnLedOn();
            turnLedOff();
        }
    }
}

void loop() {
    static bool _ = do_once();
}
