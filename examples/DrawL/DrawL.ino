#include "Utilities.h"

void setup() {
    begin();
    delay(seconds(2));
}

bool do_once() {
    moveForward(4);
    turnRight(90);
    moveForward(2);
}

void loop() {
    static bool _ = do_once();
}
