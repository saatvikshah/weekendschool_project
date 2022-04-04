#pragma once

#include "CytronMakerSumo.h"

// Constants

int LEDPin = A4;

// Functions

void begin() {
    MakerSumo.begin();
}

void marioMelody() {
    int melodyPitch[] = {NOTE_E5, NOTE_E5, 0, NOTE_E5, 0, NOTE_C5, NOTE_E5, 0, NOTE_G5};
    int melodyDuration[] = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    int notesLen = sizeof(melodyDuration) / sizeof(melodyDuration[0]);
    MakerSumo.playMelody(melodyPitch, melodyDuration, notesLen);
}

void turnLedOn() {
    digitalWrite(LEDPin, HIGH);
}

void turnLedOff() {
    digitalWrite(LEDPin, LOW);
}



int seconds(int value) {
    return value * 1000;
}