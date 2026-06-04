// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, 1, 2, 3);
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_4(
        KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,    XXXXXXX, KC_EQUAL,
        KC_LSFT, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                               KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_RSFT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                               KC_K,    KC_H,    KC_COMMA, KC_DOT,  KC_SLSH, KC_RCTL,
                                            MO(1), KC_LGUI, KC_SPC, KC_ESC,           KC_ALGR,  KC_ENTER, MO(2), KC_BSPC
    ),
    [1] = LAYOUT_split_3x6_4(
        _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_LBRC,
        _______, _______,    ALGR(KC_7),    ALGR(KC_0),     KC_NUBS,  _______,                            KC_EQL,    KC_NUHS,    KC_MINS,  _______,   KC_SCLN,    KC_QUOT,
        _______, _______,    ALGR(KC_8),    ALGR(KC_9),    KC_RBRC,   _______,                             _______,    _______,    _______, _______,  _______, _______,
                                             _______, _______, _______, _______,          _______, _______, _______, _______
    ),
    [2] = LAYOUT_split_3x6_4(
        _______,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
        _______, _______,   _______,  KC_UP,  _______, _______,                           KC_H,    KC_J,    KC_K,    KC_L,    KC_DEL,  _______,
        _______, _______,    KC_LEFT,    KC_DOWN,     KC_RIGHT,   _______,              _______,    _______,    _______, _______,  _______, _______,
                                             _______, _______, _______, _______,          _______, _______, _______, _______
    ),
    [3] = LAYOUT_split_3x6_4(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                               KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10, KC_F11,
        _______, _______,    _______,    _______,     _______,  _______,          _______,    _______,    _______,    _______,    _______,     KC_F12,
        _______, _______,    _______, _______,    _______,   _______,              _______,    _______,    _______, _______,  _______, _______,
                                             _______, _______, _______, _______,          _______, _______, _______, _______
    )
};
