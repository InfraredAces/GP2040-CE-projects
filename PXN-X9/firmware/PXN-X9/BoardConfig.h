/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"

#define BOARD_CONFIG_LABEL "PXN-X9"

// Main pin mapping Configuration
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_25 GpioAction::BUTTON_PRESS_UP     // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_24 GpioAction::BUTTON_PRESS_DOWN   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_RIGHT  // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_LEFT   // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define GPIO_PIN_00 GpioAction::BUTTON_PRESS_B1     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_B2     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_R2     // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_L2     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_01 GpioAction::BUTTON_PRESS_B3     // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_29 GpioAction::BUTTON_PRESS_B4     // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_28 GpioAction::BUTTON_PRESS_R1     // R1     | RB     | R       | R1       | 6      | P3     |
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_L1     // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_23 GpioAction::BUTTON_PRESS_S1     // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define GPIO_PIN_22 GpioAction::BUTTON_PRESS_S2     // S2     | Start  | Plus    | Start    | 10     | Start  |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_L3     // L3     | LS     | LS      | L3       | 11     | LS     |
#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_R3     // R3     | RS     | RS      | R3       | 12     | RS     |
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_A1     // A1     | Guide  | Home    | PS       | 13     | ~      |
// #define GPIO_PIN_XX GpioAction::BUTTON_PRESS_A2     // A2     | ~      | Capture | ~        | 14     | ~      |

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_SPACE         // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_S             // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT  HID_KEY_D             // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT   HID_KEY_A             // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1   HID_KEY_J             // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_K             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_L             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_SEMICOLON     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_U             // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_I             // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_O             // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_P             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_4             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_6             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_1             // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_3             // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_5             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_2             // A2     | ~      | Capture | ~        | 14     | ~      |

// Settings
#define DEFAULT_PS4CONTROLLER_TYPE PS4_ARCADESTICK
#define DEFAULT_INPUT_MODE_R1 INPUT_MODE_XBONE

// Joystick Slider Add-on
#define JSLIDER_ENABLED 1
#define GPIO_PIN_19 GpioAction::SUSTAIN_DP_MODE_LS
#define GPIO_PIN_18 GpioAction::SUSTAIN_DP_MODE_RS
#define SLIDER_SOCD_SLOT_DEFAULT SOCD_MODE_NEUTRAL

// RGB LED
#define BOARD_LEDS_PIN 6
#define LED_BRIGHTNESS_MAXIMUM 250
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 2
#define LEDS_BASE_ANIMATION_INDEX 1

#define LEDS_BUTTON_B3   0
#define LEDS_BUTTON_B4   1
#define LEDS_BUTTON_R1   2
#define LEDS_BUTTON_L1   3
#define LEDS_BUTTON_B1   7
#define LEDS_BUTTON_B2   6
#define LEDS_BUTTON_R2   5
#define LEDS_BUTTON_L2   4

// // Display Settings
#define HAS_I2C_DISPLAY 1
#define I2C_SDA_PIN 8
#define I2C_SCL_PIN 9
#define DISPLAY_FLIP 2
#define DISPLAY_INVERT 0
#define DISPLAY_SAVER_TIMEOUT 0
#define BUTTON_LAYOUT BUTTON_LAYOUT_STICK
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_VEWLIX
#define SPLASH_MODE SPLASH_MODE_NONE
#define SPLASH_CHOICE SPLASH_CHOICE_MAIN
#define SPLASH_DURATION 2000 // Duration in milliseconds

// PS Passthrough Add-on
#define PSPASSTHROUGH_ENABLED 1
#define PSPASSTHROUGH_PIN_DPLUS 14

// Xbox One Passthrough Add-on
#define XBONEPASSTHROUGH_ENABLED 1

// Keyboard Mapping Configuration
#define KEYBOARD_HOST_ENABLED 1
#define KEYBOARD_HOST_PIN_DPLUS 14
#define KEYBOARD_HOST_PIN_5V -1

#endif