#include QMK_KEYBOARD_H
#define VENDOR_ID 0x2345
#define PRODUCT_ID 0x1535
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_5,   KC_6,   KC_7,   KC_8,
        KC_1,   KC_2,   KC_3,   KC_4,
        RGB_M_TW,  _______,   _______,   _______
        
    ),
    [1] = LAYOUT(
        KC_5,   KC_6,   KC_7,   KC_8,
        KC_1,   KC_2,   KC_3,   KC_4,
        RGB_M_TW,  _______,   _______,   _______
        
    ),
    [2] = LAYOUT(
        KC_5,   KC_6,   KC_7,   KC_8,
        KC_1,   KC_2,   KC_3,   KC_4,
        RGB_M_TW,  _______,   _______,   _______
        
    ),
    [3] = LAYOUT(
        KC_5,   KC_6,   KC_7,   KC_8,
        KC_1,   KC_2,   KC_3,   KC_4,
        RGB_M_TW,  _______,   _______,   _______
        
    ),
};
