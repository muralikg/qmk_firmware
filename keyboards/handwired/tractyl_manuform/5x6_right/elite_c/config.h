/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define PRODUCT Tractyl Manuform(5x6) Elite C

// wiring of each half
#define MATRIX_COL_PINS \
    { D4, D7, E6, B4, B5, B7 }
#define MATRIX_ROW_PINS \
    { F7, F6, F5, F4, F1, F0 }

#define DIODE_DIRECTION COL2ROW

// WS2812 RGB LED strip input and number of LEDs
#define RGB_DI_PIN      D3
#define RGBLED_NUM      20
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT \
    { 10, 10 }
#define RGBLIGHT_LIMIT_VAL 80

// #define AUDIO_PIN       C6

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2
// #define EE_HANDS

#define ENCODERS_PAD_A \
    { D5 }
#define ENCODERS_PAD_B \
    { C7 }

/* PMW33XX Settings */
#define PMW33XX_CS_PIN B6

#define TAPPING_TERM 175
#define MASTER_RIGHT

#define FB_ERM_LRA 0
#define FB_BRAKEFACTOR 6 /* For 1x:0, 2x:1, 3x:2, 4x:3, 6x:4, 8x:5, 16x:6, Disable Braking:7 */
#define FB_LOOPGAIN 0 /* For  Low:0, Medium:1, High:2, Very High:3 */
#define RATED_VOLTAGE 3
#define V_RMS 2.3
#define V_PEAK 1.5
/* Library Selection */
#define LIB_SELECTION 4
#define DRV_GREETING 85
#define DRV_MODE_DEFAULT 125
#define NO_HAPTIC_MOD
#define NO_HAPTIC_ALPHA
#define NO_HAPTIC_NUMERIC
#define NO_HAPTIC_LOCKKEYS
#define NO_HAPTIC_NAV
#define NO_HAPTIC_PUNCTUATION



#define CHARYBDIS_DRAGSCROLL_REVERSE_Y