// Copyright 2022 Álvaro Cortés (@ACortesDev)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include QMK_KEYBOARD_H
#include "layers.h"

/* Tap-Hold keycodes */
#define KC_LOWER LT(_LOWER, KC_ENT) /* Tap for Enter, Hold for LOWER layer */
#define KC_RAISE LT(_RAISE, KC_SPC) /* Tap for Space, Hold for RAISE layer */

/* Macros */
enum custom_keycodes {
    VSCTERM = SAFE_RANGE,
    CHNLANG 
};
