#include QMK_KEYBOARD_H

#include "layers.h"
#include "keycodes.h"
#include "process_records.h"

#ifdef OLED_ENABLE
    #include "oled.h"
#endif

/* Layer keymaps */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(
    KC_TAB,  KC_Q, KC_W, KC_E,    KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,     KC_BSPC,
    KC_LSFT, KC_A, KC_S, KC_D,    KC_F,     KC_G,      KC_H,     KC_J,     KC_K,    KC_L,    KC_QUOT,  KC_MINUS,
    KC_LCTL, KC_Z, KC_X, KC_C,    KC_V,     KC_B,      KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SCLN,  KC_ESC,
                         KC_LGUI, KC_LOWER, KC_SPC,    KC_ENT,   KC_RAISE, KC_RALT
    ),

    [_LOWER] = LAYOUT(
    KC_TAB,  KC_0,    KC_1,   KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_BSPC,
    KC_LSFT, RGB_MOD, RGB_HUI RGB_VAI, KC_BRIU, XXXXXXX, KC_VOLU,    KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, XXXXXXX, XXXXXXX,
    KC_LCTL, RGB_TOG, RGB_HUD RGB_VAD, KC_BRID, XXXXXXX, KC_VOLD,    KC_HOME, KC_END,  XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,
                                       KC_LGUI, XXXXXXX, KC_SPC      KC_ENT,  XXXXXXX, KC_RALT
    ),

    [_RAISE] = LAYOUT(
    KC_TAB,  KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_PIPE, KC_BSPC,
    KC_LSFT, KC_EQUAL, KC_QUES, XXXXXXX, XXXXXXX, XXXXXXX,    KC_MINS, KC_PAST, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
    KC_LCTL, KC_CAPS,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_UNDS, KC_PPLS, KC_LBRC, KC_RBRC, KC_SLSH, KC_TILD,
                                KC_LGUI, XXXXXXX,  KC_SPC,    KC_ENT,  XXXXXXX, KC_RALT
    )
};

layer_state_t layer_state_set_user(layer_state_t state) { return update_tri_layer_state(state, _LOWER, _RAISE); }
