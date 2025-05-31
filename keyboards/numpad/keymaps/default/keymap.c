#include QMK_KEYBOARD_H

#define LAYOUT_fullsize_ansi_split( \
    L00,      L02, L03, L04, L05,   L06, L07, L08, L09,    L0B, L0C, L0D, L0E,  L0F, L0G, L0H,                      \
    L10, L11, L12, L13, L14, L15, L16, L17, L18, L19, L1A, L1B, L1C, L1D,       L1F, L1G, L1H,  R10, R11, R12, R13, \
    L20,   L21, L22, L23, L24, L25, L26, L27, L28, L29, L2A, L2B, L2C, L2D,     L2F, L2G, L2H,  R20, R21, R22, R23, \
    L30,    L31, L32, L33, L34, L35, L36, L37, L38, L39, L3A, L3B, L3C,                         R30, R31, R32,      \
    L40,       L42, L43, L44, L45, L46, L47, L48, L49, L4A, L4B, L4C,                L4G,       R40, R41, R42, R43, \
    L50,  L51,  L52,              L53,                L5A,  L5B,  L5C,  L5D,    L5F, L5G, L5H,  R50,      R52       \
) { \
    { L00,   KC_NO, L02,   L03,   L04,   L05,   L06,   L07,   L08,   L09,   KC_NO, L0B,   L0C,   L0D,   L0E,   L0F,   L0G,   L0H,   }, \
    { L10,   L11,   L12,   L13,   L14,   L15,   L16,   L17,   L18,   L19,   L1A,   L1B,   L1C,   L1D,   KC_NO, L1F,   L1G,   L1H,   }, \
    { L20,   L21,   L22,   L23,   L24,   L25,   L26,   L27,   L28,   L29,   L2A,   L2B,   L2C,   L2D,   KC_NO, L2F,   L2G,   L2H,   }, \
    { L30,   L31,   L32,   L33,   L34,   L35,   L36,   L37,   L38,   L39,   L3A,   L3B,   L3C,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    { L40,   KC_NO, L42,   L43,   L44,   L45,   L46,   L47,   L48,   L49,   L4A,   L4B,   L4C,   KC_NO, KC_NO, KC_NO, L4G,   KC_NO, }, \
    { L50,   L51,   L52,   L53,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, L5A,   L5B,   L5C,   L5D,   KC_NO, L5F,   L5G,   L5H,   }, \
\
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  }, \
    { R10,   R11,   R12,   R13,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  }, \
    { R20,   R21,   R22,   R23,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  }, \
    { R30,   R31,   R32,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  }, \
    { R40,   R41,   R42,   R43,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  }, \
    { R50,   KC_NO, R52,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO  }, \
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
     * │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│ │PSc│Scr│Pse│
     * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│ │Num│ / │ * │ - │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤ ├───┼───┼───┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ │Del│End│PgD│ │ 7 │ 8 │ 9 │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘ ├───┼───┼───┤ + │
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  Enter │               │ 4 │ 5 │ 6 │   │
     * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐     ├───┼───┼───┼───┤
     * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │     │ 1 │ 2 │ 3 │   │
     * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐ ├───┴───┼───┤Ent│
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│ │ ← │ ↓ │ → │ │   0   │ . │   │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘ └───────┴───┴───┘
     */
    [0] = LAYOUT_fullsize_ansi_split(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,

        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,                                   KC_P4,   KC_P5,   KC_P6,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,               KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1)  , KC_APP,  KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,            KC_PDOT
    ),
    [1] = LAYOUT_fullsize_ansi_split(
        _______,          KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, KC_VOLU, KC_VOLD, KC_MUTE, _______, _______, _______, _______, _______,   _______,  _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,  _______, _______,    _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,  _______, _______,    _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,                                  _______, _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,             _______,             _______, _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, MO(0)  , _______, _______,   _______,  _______, _______,    _______,          _______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %2u, row: %2u, pressed: %u, time: %5u, int: %u, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
    return true;
}
