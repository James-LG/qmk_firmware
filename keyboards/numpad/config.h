// Copyright 2022 James La Novara-Gsell (@James-LG)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#define MATRIX_ROWS 12
#define MATRIX_COLS 18

// #define MATRIX_ROW_PINS { B12, B13, B14, B15, A8, A15 }
// #define MATRIX_COL_PINS { B10, B2, B1, B0, A7, A6, A5, A4, A3, A2, A1, A0, C15, C14, C13, B4, B5, B8, NO_PIN, NO_PIN, NO_PIN, NO_PIN }

#define MATRIX_ROW_PINS { B12, B13, B14, B15, A8, A15 }
#define MATRIX_COL_PINS \
    { B10, B1, B0, A7, A6, A5, A4, A3, A2, A1, A0, C15, C14, C13, B4, B5, B8, B9 }

#define MATRIX_ROW_PINS_RIGHT { NO_PIN, B12, B13, B14, B15, A8 }
#define MATRIX_COL_PINS_RIGHT { B1, B0, A7, A6, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN, NO_PIN }

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COL 0
#define BOOTMAGIC_LITE_ROW_RIGHT 7
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

#define DRIVER_COUNT 2
#define DRIVER_ADDR_1 0b1010000
#define DRIVER_ADDR_2 0b1010011

#define DRIVER_1_LED_TOTAL 64
#define DRIVER_2_LED_TOTAL 44
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)
#define RGB_MATRIX_SPLIT { 64, 44 }

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP

#define RGB_MATRIX_STARTUP_HUE 169
#define RGB_MATRIX_STARTUP_SAT 255
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_CYCLE_ALL
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN A10    // USART TX pin
#define SERIAL_USART_RX_PIN A9     // USART RX pin
//#define USART1_REMAP             // Remap USART TX and RX pins on STM32F103 MCUs, see table below.
//#define SERIAL_USART_PIN_SWAP    // Swap TX and RX pins if keyboard is master halve.
                                   // Check if this feature is necessary with your keyboard design and available on the mcu.
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: 460800 baud
                                   //  1: 230400 baud (default)
                                   //  2: 115200 baud
                                   //  3: 57600 baud
                                   //  4: 38400 baud
                                   //  5: 19200 baud
#define SERIAL_USART_DRIVER SD1    // USART driver of TX and RX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_RX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT 20    // USART driver timeout. default 20

#define SPLIT_HAND_PIN B3
#define SPLIT_HAND_PIN_LOW_IS_LEFT // High = right hand, low = left hand
// #define SPLIT_USB_DETECT
// #define MASTER_LEFT

// #define SPLIT_TRANSPORT_MIRROR   // Only needed for interactive RGB
// #define SPLIT_LAYER_STATE_ENABLE // Only needed for interactive RGB

#define DEBOUNCE 20
// #define DEBUG_MATRIX_SCAN_RATE
