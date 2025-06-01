#include "numpad.h"

const is31fl3733_led_t PROGMEM g_is31fl3733_leds[IS31FL3733_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 * https://www.lumissil.com/assets/pdf/core/IS31FL3733B_DS.pdf
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */

    // CS1
    {0, SW2_CS1,  SW1_CS1,  SW3_CS1},    // 0, SW1-3
    {0, SW5_CS1,  SW4_CS1,  SW6_CS1},    // 1, SW4-6
    {0, SW8_CS1,  SW7_CS1,  SW9_CS1},    // 2, SW7-9
    {0, SW11_CS1,  SW10_CS1,  SW12_CS1}, // 3, SW10-12

    // CS2
    {0, SW2_CS2,  SW1_CS2,  SW3_CS2},    // 4, SW1-3
    {0, SW5_CS2,  SW4_CS2,  SW6_CS2},    // 5, SW4-6
    {0, SW8_CS2,  SW7_CS2,  SW9_CS2},    // 6, SW7-9
    {0, SW11_CS2,  SW10_CS2,  SW12_CS2}, // 7, SW10-12

    // CS3
    {0, SW2_CS3,  SW1_CS3,  SW3_CS3},    // 8, SW1-3
    {0, SW5_CS3,  SW4_CS3,  SW6_CS3},    // 9, SW4-6
    {0, SW8_CS3,  SW7_CS3,  SW9_CS3},    // 10, SW7-9
    {0, SW11_CS3,  SW10_CS3,  SW12_CS3}, // 11, SW10-12

    // CS4
    {0, SW2_CS4,  SW1_CS4,  SW3_CS4},    // 12, SW1-3
    {0, SW5_CS4,  SW4_CS4,  SW6_CS4},    // 13, SW4-6
    {0, SW8_CS4,  SW7_CS4,  SW9_CS4},    // 14, SW7-9
    {0, SW11_CS4,  SW10_CS4,  SW12_CS4}, // 15, SW10-12

    // CS5
    {0, SW2_CS5,  SW1_CS5,  SW3_CS5},    // 16, SW1-3
    {0, SW5_CS5,  SW4_CS5,  SW6_CS5},    // 17, SW4-6
    {0, SW8_CS5,  SW7_CS5,  SW9_CS5},    // 18, SW7-9
    {0, SW11_CS5,  SW10_CS5,  SW12_CS5}, // 19, SW10-12

    // CS6
    {0, SW2_CS6,  SW1_CS6,  SW3_CS6},    // 20, SW1-3
    {0, SW5_CS6,  SW4_CS6,  SW6_CS6},    // 21, SW4-6
    {0, SW8_CS6,  SW7_CS6,  SW9_CS6},    // 22, SW7-9
    {0, SW11_CS6,  SW10_CS6,  SW12_CS6}, // 23, SW10-12

    // CS7
    {0, SW2_CS7,  SW1_CS7,  SW3_CS7},    // 24, SW1-3
    {0, SW5_CS7,  SW4_CS7,  SW6_CS7},    // 25, SW4-6
    {0, SW8_CS7,  SW7_CS7,  SW9_CS7},    // 26, SW7-9
    {0, SW11_CS7,  SW10_CS7,  SW12_CS7}, // 27, SW10-12

    // CS8
    {0, SW2_CS8,  SW1_CS8,  SW3_CS8},    // 28, SW1-3
    {0, SW5_CS8,  SW4_CS8,  SW6_CS8},    // 29, SW4-6
    {0, SW8_CS8,  SW7_CS8,  SW9_CS8},    // 30, SW7-9
    {0, SW11_CS8,  SW10_CS8,  SW12_CS8}, // 31, SW10-12

    // CS9
    {0, SW2_CS9,  SW1_CS9,  SW3_CS9},    // 32, SW1-3
    {0, SW5_CS9,  SW4_CS9,  SW6_CS9},    // 33, SW4-6
    {0, SW8_CS9,  SW7_CS9,  SW9_CS9},    // 34, SW7-9
    {0, SW11_CS9,  SW10_CS9,  SW12_CS9}, // 35, SW10-12

    // CS10
    {0, SW2_CS10,  SW1_CS10,  SW3_CS10},    // 36, SW1-3
    {0, SW5_CS10,  SW4_CS10,  SW6_CS10},    // 37, SW4-6
    {0, SW8_CS10,  SW7_CS10,  SW9_CS10},    // 38, SW7-9
    {0, SW11_CS10,  SW10_CS10,  SW12_CS10}, // 39, SW10-12

    // CS11
    {0, SW2_CS11,  SW1_CS11,  SW3_CS11},    // 40, SW1-3
    {0, SW5_CS11,  SW4_CS11,  SW6_CS11},    // 41, SW4-6
    {0, SW8_CS11,  SW7_CS11,  SW9_CS11},    // 42, SW7-9
    {0, SW11_CS11,  SW10_CS11,  SW12_CS11}, // 43, SW10-12

    // CS12
    {0, SW2_CS12,  SW1_CS12,  SW3_CS12},    // 44, SW1-3
    {0, SW5_CS12,  SW4_CS12,  SW6_CS12},    // 45, SW4-6
    {0, SW8_CS12,  SW7_CS12,  SW9_CS12},    // 46, SW7-9
    {0, SW11_CS12,  SW10_CS12,  SW12_CS12}, // 47, SW10-12

    // CS13
    {0, SW2_CS13,  SW1_CS13,  SW3_CS13},    // 48, SW1-3
    {0, SW5_CS13,  SW4_CS13,  SW6_CS13},    // 49, SW4-6
    {0, SW8_CS13,  SW7_CS13,  SW9_CS13},    // 50, SW7-9
    {0, SW11_CS13,  SW10_CS13,  SW12_CS13}, // 51, SW10-12

    // CS14
    {0, SW2_CS14,  SW1_CS14,  SW3_CS14},    // 51, SW1-3
    {0, SW5_CS14,  SW4_CS14,  SW6_CS14},    // 53, SW4-6
    {0, SW8_CS14,  SW7_CS14,  SW9_CS14},    // 54, SW7-9
    {0, SW11_CS14,  SW10_CS14,  SW12_CS14}, // 55, SW10-12

    // CS15
    {0, SW2_CS15,  SW1_CS15,  SW3_CS15},    // 56, SW1-3
    {0, SW5_CS15,  SW4_CS15,  SW6_CS15},    // 57, SW4-6
    {0, SW8_CS15,  SW7_CS15,  SW9_CS15},    // 58, SW7-9
    {0, SW11_CS15,  SW10_CS15,  SW12_CS15}, // 59, SW10-12

    // CS16
    {0, SW2_CS16,  SW1_CS16,  SW3_CS16},    // 60, SW1-3
    {0, SW5_CS16,  SW4_CS16,  SW6_CS16},    // 61, SW4-6
    {0, SW8_CS16,  SW7_CS16,  SW9_CS16},    // 62, SW7-9
    {0, SW11_CS16,  SW10_CS16,  SW12_CS16}, // 63, SW10-12

    // CS1
    {1, SW2_CS1,  SW1_CS1,  SW3_CS1},    // 64, SW1-3
    {1, SW5_CS1,  SW4_CS1,  SW6_CS1},    // 65, SW4-6
    {1, SW8_CS1,  SW7_CS1,  SW9_CS1},    // 66, SW7-9
    {1, SW11_CS1,  SW10_CS1,  SW12_CS1}, // 67, SW10-12

    // CS2
    {1, SW2_CS2,  SW1_CS2,  SW3_CS2},    // 68, SW1-3
    {1, SW5_CS2,  SW4_CS2,  SW6_CS2},    // 69, SW4-6
    {1, SW8_CS2,  SW7_CS2,  SW9_CS2},    // 70, SW7-9
    {1, SW11_CS2,  SW10_CS2,  SW12_CS2}, // 71, SW10-12

    // CS3
    {1, SW2_CS3,  SW1_CS3,  SW3_CS3},    // 72, SW1-3
    {1, SW5_CS3,  SW4_CS3,  SW6_CS3},    // 73, SW4-6
    {1, SW8_CS3,  SW7_CS3,  SW9_CS3},    // 74, SW7-9
    {1, SW11_CS3,  SW10_CS3,  SW12_CS3}, // 75, SW10-12

    // CS4
    {1, SW2_CS4,  SW1_CS4,  SW3_CS4},    // 76, SW1-3
    {1, SW5_CS4,  SW4_CS4,  SW6_CS4},    // 77, SW4-6
    {1, SW8_CS4,  SW7_CS4,  SW9_CS4},    // 78, SW7-9
    {1, SW11_CS4,  SW10_CS4,  SW12_CS4}, // 79, SW10-12

    // CS5
    {1, SW2_CS5,  SW1_CS5,  SW3_CS5},    // 80, SW1-3
    {1, SW5_CS5,  SW4_CS5,  SW6_CS5},    // 81, SW4-6
    {1, SW8_CS5,  SW7_CS5,  SW9_CS5},    // 82, SW7-9
    {1, SW11_CS5,  SW10_CS5,  SW12_CS5}, // 83, SW10-12

    // CS6
    {1, SW2_CS6,  SW1_CS6,  SW3_CS6},    // 84, SW1-3
    {1, SW5_CS6,  SW4_CS6,  SW6_CS6},    // 85, SW4-6
    {1, SW8_CS6,  SW7_CS6,  SW9_CS6},    // 86, SW7-9
    {1, SW11_CS6,  SW10_CS6,  SW12_CS6}, // 87, SW10-12

    // CS7
    {1, SW2_CS7,  SW1_CS7,  SW3_CS7},    // 88, SW1-3
    {1, SW5_CS7,  SW4_CS7,  SW6_CS7},    // 89, SW4-6
    {1, SW8_CS7,  SW7_CS7,  SW9_CS7},    // 90, SW7-9
    {1, SW11_CS7,  SW10_CS7,  SW12_CS7}, // 91, SW10-12

    // CS8
    {1, SW2_CS8,  SW1_CS8,  SW3_CS8},    // 92, SW1-3
    {1, SW5_CS8,  SW4_CS8,  SW6_CS8},    // 93, SW4-6
    {1, SW8_CS8,  SW7_CS8,  SW9_CS8},    // 94, SW7-9
    {1, SW11_CS8,  SW10_CS8,  SW12_CS8}, // 95, SW10-12

    // CS9
    {1, SW2_CS9,  SW1_CS9,  SW3_CS9},    // 96, SW1-3
    {1, SW5_CS9,  SW4_CS9,  SW6_CS9},    // 97, SW4-6
    {1, SW8_CS9,  SW7_CS9,  SW9_CS9},    // 98, SW7-9
    {1, SW11_CS9,  SW10_CS9,  SW12_CS9}, // 99, SW10-12

    // CS10
    {1, SW2_CS10,  SW1_CS10,  SW3_CS10},    // 100, SW1-3
    {1, SW5_CS10,  SW4_CS10,  SW6_CS10},    // 101, SW4-6
    {1, SW8_CS10,  SW7_CS10,  SW9_CS10},    // 102, SW7-9
    {1, SW11_CS10,  SW10_CS10,  SW12_CS10}, // 103, SW10-12

    // CS11
    {1, SW2_CS11,  SW1_CS11,  SW3_CS11},    // 104, SW1-3
    {1, SW5_CS11,  SW4_CS11,  SW6_CS11},    // 105, SW4-6
    {1, SW8_CS11,  SW7_CS11,  SW9_CS11},    // 106, SW7-9
    {1, SW11_CS11,  SW10_CS11,  SW12_CS11}, // 107, SW10-12
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
// Column indexes:
//  0     , 1     , 2     , 3     , 4     , 5     , 6     , 7     , 8     , 9     , 10    , 11    , 12    , 13    , 14    , 15    , 16    , 17
  { 0     , NO_LED, 2     , 3     , 4     , 5     , 6     , 7     , 47    , 64    , NO_LED, 66    , 67    , 68    , 104   , 69    , 70    , 71     }, // Why is there a 104 here? There's a hardwire on the board...
  { 8     , 9     , 10    , 11    , 12    , 13    , 14    , 15    , 51    , 72    , 73    , 74    , 75    , 76    , NO_LED, 77    , 78    , 79     },
  { 16    , 17    , 18    , 19    , 20    , 21    , 22    , 23    , 55    , 80    , 81    , 82    , 83    , 84    , NO_LED, 85    , 86    , 87     },
  { 24    , 25    , 26    , 27    , 28    , 29    , 30    , 31    , 59    , 88    , 89    , 90    , 91    , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 32    , NO_LED, 34    , 35    , 36    , 37    , 38    , 39    , 63    , 92    , 93    , 94    , 95    , NO_LED, NO_LED, NO_LED, 106    , NO_LED }, // Up arrow was manually patched with a wire to CS11, SW7-9
  { 40    , 41    , 42    , 43    , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 97    , 98    , 99    , 100   , NO_LED, 101   , 102   , 103    },

  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 0     , 1     , 2     , 3     , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 4     , 5     , 6     , 7     , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 8     , 9     , 10    , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 12    , 13    , 14    , 15    , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { 16    , NO_LED, 18    , NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED }
}, {
  // LED Index to Physical Position
  // LED Index to Physical Position https://docs.qmk.fm/#/feature_rgb_matrix?id=common-configuration
  // x = 224 / (NUMBER_OF_COLS - 1) * COL_POSITION
  // y =  64 / (NUMBER_OF_ROWS - 1) * ROW_POSITION

  // The physical location of the LED at index Z depends on where Z is located in the matrix above.
  // X(COL0) = 224/22 * 0 = 0
  // X(COL1) = 224/22 * 1 = 10
  // X(COL2) = 224/22 * 2 = 21
  // X(COL3) = 224/22 * 3 = 32
  // X(COL4) = 224/22 * 4 = 42
  // X(COL5) = 224/22 * 5 = 53
  // X(COL6) = 224/22 * 6 = 64
  // X(COL7) = 224/22 * 7 = 74
  // X(COL8) = 224/22 * 8 = 85
  // X(COL9) = 224/22 * 9 = 96
  // X(COL10) = 224/22 * 10 = 106
  // X(COL11) = 224/22 * 11 = 117
  // X(COL12) = 224/22 * 12 = 128
  // X(COL13) = 224/22 * 13 = 138
  // X(COL14) = 224/22 * 14 = 149
  // X(COL15) = 224/22 * 15 = 160
  // X(COL16) = 224/22 * 16 = 170
  // X(COL17) = 224/22 * 17 = 181
  // X(COL18) = 224/22 * 18 = 192
  // X(COL19) = 224/22 * 19 = 202
  // X(COL20) = 224/22 * 20 = 213
  // X(COL21) = 224/22 * 21 = 224

  // Y(ROW0) = 64/5 * 0 = 0
  // Y(ROW1) = 64/5 * 1 = 12
  // Y(ROW2) = 64/5 * 2 = 25
  // Y(ROW3) = 64/5 * 3 = 38
  // Y(ROW4) = 64/5 * 4 = 51
  // Y(ROW5) = 64/5 * 5 = 64


  {   0,   0 }, {   0,   0 }, {  21,   0 }, {  32,   0 }, {  42,   0 }, // 0
  {  53,   0 }, {  64,   0 }, {  74,   0 }, {   0,  12 }, {  10,  12 }, // 5
  {  21,  12 }, {  32,  12 }, {  42,  12 }, {  53,  12 }, {  64,  12 }, // 10
  {  74,  12 }, {   0,  25 }, {  10,  25 }, {  21,  25 }, {  32,  25 }, // 15
  {  42,  25 }, {  53,  25 }, {  64,  25 }, {  74,  25 }, {   0,  38 }, // 20
  {  10,  38 }, {  21,  38 }, {  32,  38 }, {  42,  38 }, {  53,  38 }, // 25
  {  64,  38 }, {  74,  38 }, {   0,  51 }, {   0,   0 }, {  21,  51 }, // 30
  {  32,  51 }, {  42,  51 }, {  53,  51 }, {  64,  51 }, {  74,  51 }, // 35
  {   0,  64 }, {  10,  64 }, {  21,  64 }, {  32,  64 }, {  42,  64 }, // 40
  {   0,   0 }, {   0,   0 }, {   0,  85 }, {   0,   0 }, {   0,   0 }, // 45
  {   0,   0 }, {  85,  12 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, // 50
  {  85,  25 }, {   0,   0 }, {   0,   0 }, {   0,   0 }, {  85,  38 }, // 55
  {   0,   0 }, {   0,   0 }, {   0,   0 }, {  85,  51 }, {  96,   0 }, // 60
  {   0,   0 }, { 117,   0 }, { 128,   0 }, { 138,   0 }, { 160,   0 }, // 65
  { 170,   0 }, { 181,   0 }, {  96,  10 }, { 106,  10 }, { 117,  10 }, // 70
  { 128,  10 }, { 138,  10 }, { 160,  10 }, { 170,  10 }, { 181,  10 }, // 75
  {  96,  25 }, { 106,  25 }, { 117,  25 }, { 128,  25 }, { 138,  25 }, // 80
  { 160,  25 }, { 170,  25 }, { 181,  25 }, {  96,  38 }, { 106,  38 }, // 85
  { 117,  38 }, { 128,  38 }, {  96,  51 }, { 117,  51 }, { 128,  51 }, // 90
  { 138,  51 }, {   0,   0 }, { 106,  64 }, { 117,  64 }, { 128,  64 }, // 95
  { 138,  64 }, { 160,  64 }, { 170,  64 }, { 181,  64 }, { 149,   0 }, // 100
  { 149,   0 }, { 160,   51 } // 105
}, {
  // LED Index to Flag
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 0
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 10
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 20
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 30
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 40
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 50
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 60
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 70
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 80
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, // 90
  1, 1, 1, 1, 1, 1, 1,          // 100
} };

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    debug_enable=true;
    debug_matrix   = true;
    debug_keyboard = true;
    debug_mouse=true;
}