/* Copyright 2025 Luca Mazzilli
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define MATRIX_UNSELECT_DRIVE_HIGH

// not needed
// #define SN32F2XX_LED_MATRIX_ROWS_HW (SN32F2XX_RGB_MATRIX_ROWS * SN32F2XX_RGB_MATRIX_ROW_CHANNELS)
// #define SN32F2XX_RGB_MATRIX_ROW_CHANNELS 3
// #define SN32F2XX_RGB_MATRIX_ROWS 8 // 2 more rows than key matrix (for underglow)
// #define SN32F2XX_RGB_MATRIX_COLS 21
// #define SN32F2XX_RGB_MATRIX_COL_PINS MATRIX_COL_PINS

/* Configure the effects:                                              */
#define RGB_MATRIX_TYPING_HEATMAP_DECREASE_DELAY_MS 50

/* RGB LED Config */
#define SN32F2XX_RGB_MATRIX_ROW_PINS \
   { \
    C0,  C1,  C3, \
    C4,  C5,  C6, \
    C7,  C8,  C9, \
    C10, C11, C12, \
    B6,  B7,  B8, \
    B9,  B10, B11, \
    NO_PIN,  NO_PIN,  NO_PIN, \
    NO_PIN,  NO_PIN,  NO_PIN, \
   }
/*
    REMOVED row 7 and 8 because A15 breaks red on row 2 (C7) \
    D4,  B15, D3, \
    D5,  A15, D6  \
*/

// note the underglow is mapped partially on row 7 and row 7
// in keyboard.json i had to map MATRIX_ROW_PINS adding 2 ending 0 in array to be able to use 8 rows =>  "rows": [ "C15", "D11", "D10", "D9",  "D8", "D7", "NO_PIN", "NO_PIN" ]

// this is what i empirically mapped:
// (r) (g) (b)
// C0, C1, C3,    RBG row 1 (keys)
// C4, C5, C6,    RBG row 2 (keys)
// C7, C8, C9     RBG row 3 (keys)
// C10, C11, C12, RBG row 4 (keys and 1 underglow - led DL23 on PCB)
// B6, B7, B8,    RBG row 5 (keys)
// B9, B10, B11,  RBG row 6 (keys and 7 underglow - led DL37 to DL42, and DL24 on PCB)
// D4, B15, D3,   RBG row 7 (21 underglow - led DL1, DL25 to DL36, DL43 to DL50 on PCB)
// D5, A15, D6    RBG row 8 (21 underglow - led DL2 to DL24 on PCB)

// #define UNUSED_PINS { C13, C14 } //P2.13, P2.14 have no trace on PCB

/* Configure transistor logic for RGB matrix */
#define SN32F2XX_PWM_OUTPUT_ACTIVE_LEVEL SN32F2XX_PWM_OUTPUT_ACTIVE_HIGH
#define SN32F2XX_RGB_OUTPUT_ACTIVE_LEVEL SN32F2XX_RGB_OUTPUT_ACTIVE_LOW
#define SN32F2XX_PWM_DIRECTION ROW2COL // different from DIODE_DIRECTION which is COL2ROW
// 105 keys + 50 underglow (1 led in row 4 + 7 led in row 6 + 21 underglow in row 7 and 21 underglow in row 8
#define RGB_MATRIX_LED_COUNT (155)
