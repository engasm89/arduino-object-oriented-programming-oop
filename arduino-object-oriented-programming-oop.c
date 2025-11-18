/*
 * Course: Arduino Object Oriented Programming Oop
 * Platform: Arduino
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "Arduino Object Oriented Programming Oop" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Arduino)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/arduino-object-oriented-programming-oop/
 * Repository: https://github.com/engasm89/arduino-object-oriented-programming-oop
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

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

// Program entry point point demonstrating OOP style in C
// Main routine: orchestrates the arduino object oriented programming oop scenario
int main(void) { // Main function implementation function
  Sensor temp = {"Temp", 25, sensor_read, sensor_print}; // Initialize sensor instance
  for (int i = 0; i < 5; ++i) { // Loop for multiple reads
    temp.read(&temp); // Call read method via function pointer
    temp.print(&temp); // Call print method via function pointer
  } // End loop
  return 0; // Exit successfully
} // End of main function

