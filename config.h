// Copyright 2022 Álvaro Cortés (@ACortesDev)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define MASTER_LEFT
#define SPLIT_WPM_ENABLE
#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200

#ifdef RGB_MATRIX_ENABLE
    #define RGB_MATRIX_STARTUP_HUE 231
    #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
    #define RGB_MATRIX_TYPING_MEATMAP_DECREASE_DELAY_MS 50
    // #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
    // #   define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
    #define RGB_DISABLE_WHEN_USB_SUSPENDED  // turn off effects when suspended
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    // #   define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
    // #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    // #    define ENABLE_RGB_MATRIX_DIGITAL_RAIN
    // enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
    // #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE
    // #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
    // #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
    // #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
    // #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
    // #    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
    // #    define ENABLE_RGB_MATRIX_SPLASH
    // #    define ENABLE_RGB_MATRIX_MULTISPLASH
    // #    define ENABLE_RGB_MATRIX_SOLID_SPLASH
    // #    define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif 

#ifdef OLED_ENABLE
    #define SPLIT_LAYER_STATE_ENABLE
    #define SPLIT_LED_STATE_ENABLE
    #define SPLIT_MODS_ENABLE
    #define SPLIT_OLED_ENABLE
    #define OLED_TIMEOUT 60000
    #define OLED_FONT_H "keyboards/crkbd/keymaps/colemad/glcdfont.c"
#endif
