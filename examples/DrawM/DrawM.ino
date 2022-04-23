#include "Utilities.h"

/**
- Draw M shape 3 times
**/

void setup() {
    begin();
}

bool do_once() {
    int count = 0;
    while (count < 3) {
        // core drawing logic
        moveForward(3);
        turnRight(135);
        moveForward(2);
        turnLeft(90);
        moveForward(2);
        turnRight(135);
        moveForward(3);
        //
        count = count + 1;
        // Give some time to re-adjust the robot if needed.
        waitSeconds(5);
    }
}

void loop() {
    static bool _ = do_once();
}
