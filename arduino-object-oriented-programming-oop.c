/*
 * Course: Arduino Object Oriented Programming Oop
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: Arduino Object Oriented Programming Oop
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for outputs

// Define a sensor "object" using struct and function pointers
typedef struct Sensor { // Begin Sensor struct
  const char *name; // Sensor name string
  int value; // Current sensor value
  void (*read)(struct Sensor *self); // Method to read sensor
  void (*print)(struct Sensor *self); // Method to print sensor
} Sensor; // End Sensor type

// Implement read method
void sensor_read(Sensor *self) { // Begin read implementation
  self->value += 1; // Increment value to simulate update
} // End read

// Implement print method
void sensor_print(Sensor *self) { // Begin print implementation
  printf("%s=%d\n", self->name, self->value); // Print name and value
} // End print

// Entry point demonstrating OOP style in C
// Main routine: orchestrates the arduino object oriented programming oop scenario
int main(void) { // Begin main function
  Sensor temp = {"Temp", 25, sensor_read, sensor_print}; // Initialize sensor instance
  for (int i = 0; i < 5; ++i) { // Loop for multiple reads
    temp.read(&temp); // Call read method via function pointer
    temp.print(&temp); // Call print method via function pointer
  } // End loop
  return 0; // Exit success
} // End main

