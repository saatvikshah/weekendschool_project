#include "Utilities.h"

/**
- Draw M shape 3 times
**/

int count;
int ShapeCount = 3;

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
    count = 1;
    delay(seconds(2));
}

void loop() {
    if (count <= ShapeCount) {
        drawM();
        count = count + 1;
    }
}