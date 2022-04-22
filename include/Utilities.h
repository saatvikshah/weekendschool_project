#pragma once

#include "CytronMakerSumo.h"

// TODO: Keep only API visible here, move implementation details to a cpp or `Utilities_Impl.h` that can be `#include'd`

// Constants

int LEDPin = A4;

// Functions

inline void begin() {
    MakerSumo.begin();
}

inline void marioMelody() {
    int melodyPitch[] = {NOTE_E5, NOTE_E5, 0, NOTE_E5, 0, NOTE_C5, NOTE_E5, 0, NOTE_G5};
    int melodyDuration[] = {10, 10, 10, 10, 10, 10, 10, 10, 10};
    int notesLen = sizeof(melodyDuration) / sizeof(melodyDuration[0]);
    MakerSumo.playMelody(melodyPitch, melodyDuration, notesLen);
}

inline void turnLedOn() {
    digitalWrite(LEDPin, HIGH);
}

inline void turnLedOff() {
    digitalWrite(LEDPin, LOW);
}


inline int seconds(int value) {
    return value * 1000;
}

inline int halfSeconds(int value) {
    return value * 500;
}

inline int milliseconds(int value) {
    return value;
}

inline void waitSeconds(int value) {
    delay(seconds(value));
}

inline void resetMotors() {
    MakerSumo.setMotorSpeed(MOTOR_L, 0);
    MakerSumo.setMotorSpeed(MOTOR_R, 0);
    delay(halfSeconds(1));
}

inline void moveForward(int units) {
    static constexpr int LeftMotorForwardSpeed = 95;
    static constexpr int RightMotorForwardSpeed = 95;
    MakerSumo.setMotorSpeed(MOTOR_L, LeftMotorForwardSpeed);
    MakerSumo.setMotorSpeed(MOTOR_R, RightMotorForwardSpeed);
    delay(halfSeconds(units));
    resetMotors();
}

/**
 TurnConstant needs to be tuned based on motors + surface used.
 The smaller the angle, the higher the constant needed (eg. 6 for 45 degree,
 and 4.5 for 90 degree, so will need to setup a decaying mechanism?);
  TODO: Ensure constants are setup for both robots and works for all problem solutions.
**/

inline void turnRight(int degrees) {
    static constexpr float TurnConstant = 5.5;
    static constexpr int TurnSpeed = 50;
    static const int TurnDuration = TurnConstant * degrees;
    MakerSumo.turnRight(TurnSpeed);
    delay(milliseconds(TurnDuration));
    resetMotors();
}

inline void turnLeft(int degrees) {
    static constexpr float TurnConstant = 5.5;
    static constexpr int TurnSpeed = 50;
    static const int TurnDuration = TurnConstant * degrees;
    MakerSumo.turnLeft(TurnSpeed);
    delay(milliseconds(TurnDuration));
    resetMotors();
}
