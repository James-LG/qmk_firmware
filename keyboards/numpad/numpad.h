#pragma once

#include "quantum.h"

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
