/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum unicode_names {
    KC_AU,
    KC_aU,
    KC_OU,
    KC_oU,
    KC_UU,
    KC_uU,
    KC_SS,
    KC_sS,
    KC_EUR
};

const uint32_t PROGMEM unicode_map[] = {
    [KC_AU]  = 0xC4,  // Ä
    [KC_aU]  = 0xE4,  // ä
    [KC_OU]  = 0xD6,
    [KC_oU]  = 0xF6,
    [KC_UU]  = 0xDC,
    [KC_uU]  = 0xFC,
    [KC_SS]  = 0x1E9E,
    [KC_sS]  = 0xDF,
    [KC_EUR] = 0x20AC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 122 keys, but 127 matrix positions (stabilizer inserts can be
    replaced by flipper an converted to keys) */
    [0] = LAYOUT(
                        KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22, KC_F23, KC_F24,
                        KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12,

    RESET  ,KC_ESC,     ALL_T(KC_GRV), KC_1,    KC_2,         KC_3,         KC_4,         KC_5,    KC_6,    KC_7,         KC_8,         KC_9,         KC_0,         KC_MINS, KC_EQL,  KC_NUHS, KC_BSPC,    KC_INS,  KC_HOME,KC_PGUP,    KC_NLCK,   KC_PSLS,KC_PAST,KC_PMNS,
    RESET,  KC_MPLY,    KC_TAB,        KC_K,    KC_U,         KC_Q,         LT(3, KC_DOT), KC_J, KC_V, LT(3, KC_G),         KC_C,         KC_L,         KC_F,         KC_LBRC, KC_RBRC,          KC_SYSREQ,  KC_DEL,  KC_END, KC_PGDN,    KC_P7,     KC_P8,  KC_P9,  KC_PPLS,
    KC_PAUS,KC_INT5,    KC_LCTL,       KC_H,    LALT_T(KC_I), LCTL_T(KC_E), LSFT_T(KC_A), KC_O,    KC_D,    RSFT_T(KC_T), RCTL_T(KC_R), LALT_T(KC_N), KC_S,         KC_QUOT, KC_BSLS, KC_ENT,                       KC_UP,              KC_P4,     KC_P5,  KC_P6,  KC_PCMM,
    KC_APP, KC_PSCR,    KC_LSFT,       KC_NUBS, KC_X,         RALT_T(KC_Y), KC_SCLN,      LT(1,KC_COMM), LT(2,KC_SLSH), LT(2,KC_B), LT(1,KC_P),         KC_W,         RALT_T(KC_M), KC_Z,    KC_NO,   KC_RSFT,             KC_LEFT, KC_INT2,KC_RGHT,    KC_P1,     KC_P2,  KC_P3,  KC_PENT,
    KC_RGUI,KC_LGUI,    KC_CAPS,                KC_LALT,                                           KC_SPC,                                            KC_RALT,                        KC_RCTL,                      KC_DOWN,            KC_SYSREQ, KC_P0,  KC_PDOT,KC_NO

    ),
    [1] = LAYOUT(
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,

KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS, KC_AT, KC_UNDS, KC_LBRC, KC_RBRC, KC_CIRC, KC_EXLM, KC_LT, KC_GT, KC_EQL, KC_AMPR, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS, KC_BSLS, KC_SLSH, KC_LCBR, KC_RCBR, KC_ASTR, KC_QUES, KC_LPRN, KC_RPRN, KC_MINS, KC_COLN, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS, KC_HASH, KC_DLR, KC_PIPE, KC_TILD, KC_GRV, KC_PLUS, KC_PERC, KC_DQUO, KC_QUOT, KC_SCLN, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
    ),
    [2] = LAYOUT(
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,

KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS, KC_ESC, KC_7, KC_8, KC_9, KC_TRNS, KC_HOME, KC_PGUP, KC_UP, KC_PGDN, KC_BSPC, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS, KC_TAB, KC_4, KC_5, KC_6, KC_TRNS, KC_END, KC_LEFT, KC_DOWN, KC_RGHT, KC_ENT, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS, KC_CAPS, KC_1, KC_2, KC_3, KC_0, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_DEL, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
    ),
    [3] = LAYOUT(
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,

KC_TRNS,KC_TRNS, KC_TRNS, UC_M_LN, UC_M_MA, UC_M_WI, UC_M_WC,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,XP(KC_uU, KC_UU),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,KC_TRNS,X(KC_EUR), XP(KC_aU, KC_AU), XP(KC_oU, KC_OU),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,XP(KC_sS, KC_SS), KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
KC_TRNS,KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
    ),




/*
    LAYOUT_xt(
        KC_F1,   KC_F2,     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_NLCK,          KC_SLCK,
        KC_F3,   KC_F4,     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_P7,   KC_P8,   KC_P9,   KC_PMNS,
        KC_F5,   KC_F6,     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_GRV,  KC_ENT,  KC_P4,   KC_P5,   KC_P6,
        KC_F7,   KC_F8,     KC_LSFT, KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_PAST, KC_P1,   KC_P2,   KC_P3,   KC_PPLS,
        KC_F9,   KC_F10,    KC_LALT,                                              KC_SPC,                                      KC_CAPS,          KC_P0,            KC_PDOT
    ),
*/
};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;
}
