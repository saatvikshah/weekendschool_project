#include "Utilities.h"

/**
- Draw M shape 3 times
**/

void drawM() {
    moveForward(3);
    turnRight(45);
    moveForward(2);
    turnLeft(90);
    moveForward(2);
    turnRight(135);
    moveForward(3);
}

void setup() {
    begin();
    delay(seconds(2));
}

bool do_once() {
    const int DRAW_COUNT = 3;
    int count = 0;
    while (count < DRAW_COUNT) {
        drawM();
        count = count + 1;
    }
}

void loop() {
    static bool _ = do_once();
}
