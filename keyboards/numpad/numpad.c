#include "numpad.h"

// const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
// /* Refer to IS31 manual for these locations
//  *   driver
//  *   |  R location
//  *   |  |      G location
//  *   |  |      |      B location
//  *   |  |      |      | */
//     {0, B_1,  A_1,  C_1},
//     {0, E_1,  D_1,  F_1},
//     {0, H_1,  G_1,  I_1},
//     {0, K_1,  J_1,  L_1},
    
//     {0, B_2,  A_2,  C_2},
//     {0, E_2,  D_2,  F_2},
//     {0, H_2,  G_2,  I_2},
//     {0, K_2,  J_2,  L_2},

//     {0, B_3,  A_3,  C_3},
//     {0, E_3,  D_3,  F_3},
//     {0, H_3,  G_3,  I_3},

//     {0, B_4,  A_4,  C_4},
//     {0, E_4,  D_4,  F_4},
//     {0, H_4,  G_4,  I_4},
//     {0, K_4,  J_4,  L_4},

//     {0, B_5,  A_5,  C_5},
//     {0, H_5,  G_5,  I_5},
// };

// led_config_t g_led_config = { {
//   // Key Matrix to LED Index
//   { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
//   { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 0     , 1     , 2     , 3      },
//   { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 4     , 5     , 6     , 7      },
//   { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 8     , 9     , 10    , NO_LED },
//   { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 11    , 12    , 13    , 14     },
//   { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, 15    , NO_LED, 16    , NO_LED }
// }, {
//   // LED Index to Physical Position
//   { 192,  13 }, { 203,  0 }, { 213,  0 }, { 224,  3 },
//   { 1,  26 }, { 1,  1 }, { 1,  2 }, { 1,  3 },
//   { 2,  38 }, { 2,  1 }, { 2,  2 },
//   { 3,  51 }, { 3,  1 }, { 3,  2 }, { 3,  3 },
//   { 4,  64 },            { 4,  2 },
// }, {
//   // LED Index to Flag
//   1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
// } };


void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}
