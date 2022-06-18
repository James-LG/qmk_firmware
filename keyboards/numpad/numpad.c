#include "quantum.h"

const is31_led PROGMEM g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */
    {0, C4_1,  C3_1,  C2_1}
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   1,      NO_LED, NO_LED, NO_LED },
  {   NO_LED, NO_LED, NO_LED, NO_LED },
  {   NO_LED, NO_LED, NO_LED, NO_LED },
  {   NO_LED, NO_LED, NO_LED, NO_LED },
  {   NO_LED, NO_LED, NO_LED, NO_LED }
}, {
  // LED Index to Physical Position
  { 0,  0 }
}, {
  // LED Index to Flag
  1
} };

void keyboard_post_init_user(void) {
    debug_enable=true;
    debug_matrix=true;
    debug_keyboard=true;
}

void i2c_init(void) {
    setPinInput(B6); // Try releasing special pins for a short time
    setPinInput(B7);
    wait_ms(10); // Wait for the release to happen

    palSetPadMode(GPIOB, 6, PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN | PAL_STM32_PUPDR_PULLUP); // Set B6 to I2C function
    palSetPadMode(GPIOB, 7, PAL_MODE_ALTERNATE(4) | PAL_STM32_OTYPE_OPENDRAIN | PAL_STM32_PUPDR_PULLUP); // Set B7 to I2C function
}
