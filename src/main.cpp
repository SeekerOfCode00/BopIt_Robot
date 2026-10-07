#include <Arduino.h>
#include <stdio.h>
#include "stepper.hpp"
#include "solenoid.hpp"
#include "linearActuator.hpp"

#define SOLENOID_PIN 6 // Direction pin for the stepper motor
#define STEPPER_DIR 5 // Direction pin for the stepper motor
#define STEPPER_STEP 4 // Step pin for the stepper motor

void setup() {
    pinMode(STEPPER_DIR, OUTPUT);
    pinMode(STEPPER_STEP, OUTPUT);
    pinMode(SOLENOID_PIN, OUTPUT);
    linearActuatorInit();
}

void loop() {
    linearActuator(EXTEND_TARGET);
    delay(2000);
    linearActuator(RETRACT_TARGET);
    delay(2000);
}
