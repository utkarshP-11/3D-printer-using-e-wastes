#include <AccelStepper.h>

// Define pin connections for ESP32
const int dirPin = 25;  // You can choose any suitable GPIO pin
const int stepPin = 26; // You can choose any suitable GPIO pin

// Define motor interface type
#define motorInterfaceType 1

// Creates an instance
AccelStepper myStepper(motorInterfaceType, stepPin, dirPin);

void setup() {
    // Set motor parameters for smooth movement
    myStepper.setMaxSpeed(1);      // Adjust maximum speed (steps per second)
    myStepper.setAcceleration(0);  // Adjust acceleration (steps per second squared)
    
    myStepper.moveTo(150);           // Set initial target position
}

void loop() {
    // Change direction when target position is reached
    if (myStepper.distanceToGo() == 0) {
        myStepper.moveTo(-myStepper.currentPosition());
    }

    // Move the motor
    myStepper.run();
}
