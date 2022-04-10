#include "Utilities.h"

bool drawingComplete;

// Function holding core drawing logic
void drawL() {
    moveForward(4);
    turnRight(90);
    moveForward(2);
}

void setup() {
    begin();
    drawingComplete = false;
    delay(seconds(2));
}

void loop() {
    if(!drawingComplete) {
        drawL();
        drawingComplete = true;
    }
}