// Copyright 2026 Tekbox12
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BL] = LAYOUT(
		KC_X, KC_NLCK, KC_P2,
		KC_Z, QK_MOUSE_CURSOR_UP, KC_P3,
		QK_MOUSE_CURSOR_LEFT, QK_MOUSE_CURSOR_DOWN, QK_MOUSE_CURSOR_RIGHT,
		MO(FL), LCTL(KC_N), LCTL(KC_M),
    ),
    [FL] = LAYOUT(
        RESET, KC_TRNS, LALT(KC_F4),
		KC_TRNS, KC_TRNS, KC_TRNS,
		KC_TRNS, KC_TRNS, KC_TRNS,
		MO(FL), LCTL(KC_C), LCTL(KC_V)
    )
};
#if defined(ENCODER_MAP_ENABLE)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [BL] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD)}
    [FL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}

};
#endif
