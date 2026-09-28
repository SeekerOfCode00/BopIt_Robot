#include "solenoid.hpp"
#include <Arduino.h>

#define SOLENOID_PIN 6

void solenoid(int pulse) {
    digitalWrite(SOLENOID_PIN, HIGH); // Activate the solenoid
    delay(pulse); // Keep it activated for the specified pulse duration
    digitalWrite(SOLENOID_PIN, LOW); // Deactivate the solenoid
}