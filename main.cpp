#include<Arduino.h>
// Pin definitions for traffic light LEDs
const int redPin = 13;
const int yellowPin = 12;
const int greenPin = 11;

void setup() {
  // Initialize LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  // Start serial communication
  Serial.begin(9600);  // Baud rate should match the Python script's baud rate
}

void loop() {
  // Check if data is available from the Python script
  if (Serial.available()) {
    char signal = Serial.read();  // Read the incoming signal ('R', 'Y', or 'G')

    // Turn off all LEDs first
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);

    // Check the signal and turn on the corresponding LED
    if (signal == 'R') {
      digitalWrite(redPin, HIGH);  // Red signal ON
      delay(5000);  // Keep red light on for 5 seconds
    } 
    else if (signal == 'Y') {
      digitalWrite(yellowPin, HIGH);  // Yellow signal ON
      delay(2000);  // Keep yellow light on for 2 seconds
    } 
    else if (signal == 'G') {
      digitalWrite(greenPin, HIGH);  // Green signal ON
      delay(5000);  // Keep green light on for 5 seconds
    }
  }
}