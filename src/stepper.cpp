#include "stepper.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <Arduino.h>

#define STEPPER_DIR 5 // 
#define STEPPER_STEP 4 //
#define RPM_1 2500 //
#define RPM_5 500 //
#define RPM_6_25 400 //

void stepperCW(int steps) {
    // Implementation for stepping clockwise
    digitalWrite(STEPPER_DIR, LOW); // Set the direction pin high for clockwise rotation
    for (int i = 0; i < steps; ++i) {
        // Code to move the stepper motor one step clockwise
        digitalWrite(STEPPER_STEP, HIGH); // Set the GPIO pin high
        delayMicroseconds(RPM_6_25); // Add a small delay
        digitalWrite(STEPPER_STEP, LOW); // Set the GPIO pin low
        delayMicroseconds(RPM_6_25); // Add a small delay
    }
}

void stepperCCW(int steps) {
    // Implementation for stepping counter-clockwise
    digitalWrite(STEPPER_DIR, HIGH); // Set the direction pin low for counter-clockwise rotation
    for (int i = 0; i < steps; ++i) {
        // Code to move the stepper motor one step counter-clockwise
        digitalWrite(STEPPER_STEP, HIGH); // Set the GPIO pin high
        delayMicroseconds(RPM_6_25); // Add a small delay
        digitalWrite(STEPPER_STEP, LOW); // Set the GPIO pin low
        delayMicroseconds(RPM_6_25); // Add a small delay
    }
}