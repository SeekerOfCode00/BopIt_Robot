#include <Arduino.h>
#include "stepper.hpp"

#define STEPPER_DIR 5 // Direction pin for the stepper motor
#define STEPPER_STEP 4 // Step pin for the stepper motor

void setup() {
    pinMode(STEPPER_DIR, OUTPUT);
    pinMode(STEPPER_STEP, OUTPUT);

    stepperCW(1); // Move the stepper motor 200 steps clockwise
}

void loop() {
    delay(5000); // Wait for 5 seconds
    stepperCCW(10); // Move the stepper motor 200 steps counter-clockwise
    delay(1000);
    stepperCW(10); // Move the stepper motor 200 steps clockwise
}
