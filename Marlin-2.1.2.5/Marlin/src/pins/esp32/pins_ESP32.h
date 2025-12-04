#pragma once

#define BOARD_INFO_NAME "Espressif ESP32"

//
// 1. DISABLE THE VIRTUAL I2S PINS (You don't need them)
//
// (We just won't include the code for them)

//
// 2. DEFINE YOUR REAL MOTOR PINS (Update these to YOUR wiring!)
//
// X Axis
#define X_STEP_PIN      26  // Change to where your X Step wire is
#define X_DIR_PIN       25  // Change to where your X Dir wire is
#define X_ENABLE_PIN    33  // Change to where your X Enable wire is

// Y Axis
#define Y_STEP_PIN      27
#define Y_DIR_PIN       26
#define Y_ENABLE_PIN    25

// Z Axis
#define Z_STEP_PIN      14
#define Z_DIR_PIN       12
#define Z_ENABLE_PIN    13

// Extruder (E0)
#define E0_STEP_PIN     16
#define E0_DIR_PIN      17
#define E0_ENABLE_PIN   5

//
// 3. LIMIT SWITCHES (Inputs)
//
#define X_MIN_PIN       34
#define Y_MIN_PIN       35
#define Z_MIN_PIN       39

//
// 4. TEMPERATURE & HEATERS
//
#define TEMP_0_PIN      36  // Hotend Thermistor
#define HEATER_0_PIN    2   // Hotend Mosfet/Relay

#define TEMP_BED_PIN    39  // Bed Thermistor (If you have one)
#define HEATER_BED_PIN  4   // Bed Mosfet (If you have one)

//
// 5. FAN
//
#define FAN0_PIN        15  // Part cooling fan

//
// 6. SPI for SD CARD (Standard VSPI)
//
#define SDSS            5
#define MOSI_PIN        23
#define MISO_PIN        19
#define SCK_PIN         18