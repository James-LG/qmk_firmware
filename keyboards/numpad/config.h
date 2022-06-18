// Copyright 2022 James La Novara-Gsell (@James-LG)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


// This is a 7-bit address, that gets left-shifted and bit 0
// set to 0 for write, 1 for read (as per I2C protocol)
// The address will vary depending on your wiring:
// 0b1110100 AD <-> GND
// 0b1110111 AD <-> VCC
// 0b1110101 AD <-> SCL
// 0b1110110 AD <-> SDA
#define DRIVER_ADDR_1 0b1110100

#define DRIVER_COUNT 1
#define DRIVER_1_LED_TOTAL 1
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL)

#define ENABLE_RGB_MATRIX_CYCLE_ALL

#define RGB_MATRIX_STARTUP_HUE  169
#define RGB_MATRIX_STARTUP_SAT  255
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_ALL


#define I2C_DRIVER I2CD1



/* key matrix size */
#define MATRIX_ROWS 10 // Rows are doubled-up
#define MATRIX_COLS 4

#define MATRIX_COL_PINS { B1, B0, A7, A6}
#define MATRIX_ROW_PINS { B12, B13, B14, B15, A8 }

#define MATRIX_COL_PINS_RIGHT { B1, B0, A7, A6}
#define MATRIX_ROW_PINS_RIGHT { B12, B13, B14, B15, A8 }

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN A10
#define SERIAL_USART_RX_PIN A9

// #define SPLIT_HAND_PIN B3 // High = right hand, low = left hand
// #define SOFT_SERIAL_PIN A9
// #define MASTER_LEFT

// #define SPLIT_TRANSPORT_MIRROR // Only needed for interactive RGB

// Default communication speed is 137kbps

