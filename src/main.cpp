#include <Arduino.h>
#include <stdio.h>
#include "stepper.hpp"
#include "solenoid.hpp"

#define SOLENOID_PIN 6 // Direction pin for the stepper motor
#define STEPPER_DIR 5 // Direction pin for the stepper motor
#define STEPPER_STEP 4 // Step pin for the stepper motor

void setup() {
    pinMode(STEPPER_DIR, OUTPUT);
    pinMode(STEPPER_STEP, OUTPUT);
    pinMode(SOLENOID_PIN, OUTPUT);
}

void loop() {
    for (int i = 0; i < 3; i++) { // pulse solenoid 3 times
        solenoid(50); // Activate solenoid for 50 ms
        delay(500); // Wait for 1 second
    }
    delay(2000); // Wait for 2 seconds before the next loop
}
