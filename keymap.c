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
    KC_TAB,  KC_Q,    KC_W,    KC_E,     KC_R,     KC_T,           KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
    KC_LSFT, KC_A,    KC_S,    KC_D,     KC_F,     KC_G,           KC_H,     KC_J,    KC_K,    KC_L,    KC_MINUS, KC_QUOT,
    KC_LCTL, KC_LALT, KC_Z,    KC_X,     KC_C,     KC_V,           KC_B,     KC_N,    KC_M,    KC_EQL,  KC_COLN,  KC_ESC,
                               KC_LGUI,  KC_CAPS,  KC_RAISE,       KC_LOWER, KC_COMM, KC_DOT
    ),

    [_LOWER] = LAYOUT(
    KC_CALC, KC_LEFT, KC_DOWN, KC_UP,    KC_RIGHT, KC_DEL,         KC_LT,    KC_7,    KC_8,    KC_9,    KC_CIRC,  KC_LPRN,
    KC_LSFT, KC_HOME, KC_PGDN, KC_PGUP,  KC_END,   XXXXXXX,        KC_GT,    KC_4,    KC_5,    KC_6,    KC_PPLS,  KC_PAST,
    KC_LCTL, KC_SCLN, KC_UNDS, KC_DQUO,  KC_SLSH,  KC_PERC,        KC_0,     KC_1,    KC_2,    KC_3,    KC_MINS,  KC_SLSH,
                               XXXXXXX,  XXXXXXX,  KC_RAISE,       KC_ENT,   XXXXXXX, KC_PDOT
    ),

    [_RAISE] = LAYOUT(
    XXXXXXX, KC_AT,   KC_DLR,   KC_TILD, KC_HASH,  KC_TILD,       KC_DEL,    KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_BSPC,
    KC_LSFT, KC_PIPE, KC_QUES,  KC_GRV,  KC_SLSH,  KC_BSLS,       XXXXXXX,   KC_HOME, KC_PGDN, KC_PGUP, KC_END,   KC_RSFT,
    KC_LCTL, XXXXXXX, XXXXXXX,  KC_MPRV, KC_MPLY,  KC_MNXT,       KC_LPRN,   KC_RPRN, KC_LBRC, KC_RBRC, KC_LCBR,  KC_RCBR,
                                XXXXXXX, XXXXXXX,  KC_SPC,        KC_LOWER,  XXXXXXX, XXXXXXX
    ),

    [_ADJUST] = LAYOUT(
    RGB_TOG, RGB_MOD, RGB_RMOD, XXXXXXX, XXXXXXX,  XXXXXXX,       KC_FIND,   KC_F5,   KC_F12,  KC_CLR,  KC_PSCR,  XXXXXXX,
    XXXXXXX, RGB_HUI, RGB_SAI,  RGB_VAI, KC_VOLD,  KC_VOLU,       KC_SLEP,   KC_WSCH, KC_WREF, KC_WBAK, KC_WFWD,  XXXXXXX,
    XXXXXXX, RGB_HUD, RGB_SAD,  RGB_VAD, KC_BRID,  KC_BRIU,       KC_MSTP,   KC_MPLY, KC_MRWD, KC_MFFD, XXXXXXX,  XXXXXXX,
                                XXXXXXX, XXXXXXX,  XXXXXXX,       XXXXXXX,   XXXXXXX, XXXXXXX
    )
};

layer_state_t layer_state_set_user(layer_state_t state) { return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST); }
