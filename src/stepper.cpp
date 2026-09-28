#include "stepper.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <Arduino.h>

#define STEPPER_DIR 5 // 
#define STEPPER_STEP 4 // 

void stepperCW(int steps) {
    // Implementation for stepping clockwise
    digitalWrite(STEPPER_DIR, HIGH); // Set the direction pin high for clockwise rotation
    for (int i = 0; i < steps; ++i) {
        // Code to move the stepper motor one step clockwise
        digitalWrite(STEPPER_STEP, HIGH); // Set the GPIO pin high
        delay(1); // Add a small delay
        digitalWrite(STEPPER_STEP, LOW); // Set the GPIO pin low
        delay(1); // Add a small delay
    }
}

void stepperCCW(int steps) {
    // Implementation for stepping counter-clockwise
    digitalWrite(STEPPER_DIR, LOW); // Set the direction pin low for counter-clockwise rotation
    for (int i = 0; i < steps; ++i) {
        // Code to move the stepper motor one step counter-clockwise
        digitalWrite(STEPPER_STEP, HIGH); // Set the GPIO pin high
        delay(1); // Add a small delay
        digitalWrite(STEPPER_STEP, LOW); // Set the GPIO pin low
        delay(1); // Add a small delay
    }
}