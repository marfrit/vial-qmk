#include "marfrit.h"

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

//12 12 23 23 20 22 10

#define LAYOUT_terminal122_wrapper(...) LAYOUT_terminal122(__VA_ARGS__)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // PC/3270 layout: PC legends (blue)
    [_HIEAO] = LAYOUT_terminal122_wrapper(
                                     MUTE_TEAMS, MUTE_SKYPE, KC_F15, KC_F16, ____FKEYS_B5____, ____FKEYS_B6____,
                                                                             ____FRW1_12_____,

        KC_PSCR,         KC_ESC,         KC_GRV,           ___NUMBER_L1____, ___NUMBER_R1____,  KC_MINS, KC_EQL,  KC_BSPC,      ____INSHMPU_____,        _____NUMR1______,
        QK_BOOT,         KC_PAUS,        KC_TAB,           ____HIEAO_L1____, ____HIEAO_R1____,           KC_LBRC, KC_RBRC,      ____DELENPD_____,        _____NUMR2______,
        EEP_RST,         TG(_SYMBOLS),   ______CLMC______, ____HIEAO_L2____, ____HIEAO_R2____,  KC_QUOT, KC_NUHS, KC_ENT,            KC_UP,              _____NUMR3T_____,
        TG(_NAVIGATION), TG(_FUNCTION),  KC_LSFT, KC_NUBS, ____HIEAO_L3____, ____HIEAO_R3____,                    KC_RSFT,  KC_LEFT, KC_HOME, KC_RIGHT,  _____NUMR4______,
        KC_APP,          KC_LGUI,                                    _____CASPC______,                                               KC_DOWN,            _____NUMR5______
    ),

    [_SYMBOLS] = LAYOUT_terminal122_wrapper(
                                                                             ____FRW12_24____,
                                                                             ____FRW1_12_____,

        KC_PSCR,         KC_ESC,         KC_GRV,           ___NUMBER_L1____, ___NUMBER_R1____,  KC_MINS, KC_EQL,  KC_BSPC,      ____INSHMPU_____,        _____NUMR1______,
        QK_BOOT,         KC_PAUS,        KC_TAB,           ___SYMBOL_L1____, ___SYMBOL_R1____,           KC_LBRC, KC_RBRC,      ____DELENPD_____,        _____NUMR2______,
        EEP_RST,         TG(_SYMBOLS),   ______CLMC______, ___SYMBOL_L2____, ___SYMBOL_R2____,  KC_QUOT, KC_NUHS, KC_ENT,            KC_UP,              _____NUMR3T_____,
        TG(_NAVIGATION), TG(_FUNCTION),  KC_LSFT, KC_NUBS, ___SYMBOL_L3____, ___SYMBOL_R3____,                    KC_RSFT,  KC_LEFT, KC_HOME, KC_RIGHT,  _____NUMR4______,
        KC_APP,          KC_LGUI,                                    _____CASPC______,                                               KC_DOWN,            _____NUMR5______
    ),

    [_NAVIGATION] = LAYOUT_terminal122_wrapper(
                                                                             ____FRW12_24____,
                                                                             ____FRW1_12_____,

        KC_PSCR,         KC_ESC,         KC_GRV,           ___NUMBER_L1____, ___NUMBER_R1____,  KC_MINS, KC_EQL,  KC_BSPC,      ____INSHMPU_____,        _____NUMR1______,
        QK_BOOT,         KC_PAUS,        KC_TAB,           _NAVIGATION_L1__, _NAVIGATION_R1__,           KC_LBRC, KC_RBRC,      ____DELENPD_____,        _____NUMR2______,
        EEP_RST,         TG(_SYMBOLS),   ______CLMC______, _NAVIGATION_L2__, _NAVIGATION_R2__,  KC_QUOT, KC_NUHS, KC_ENT,            KC_UP,              _____NUMR3T_____,
        TG(_NAVIGATION), TG(_FUNCTION),  KC_LSFT, KC_NUBS, _NAVIGATION_L3__, _NAVIGATION_R3__,                    KC_RSFT,  KC_LEFT, KC_HOME, KC_RIGHT,  _____NUMR4______,
        KC_APP,          KC_LGUI,                                    _____CASPC______,                                               KC_DOWN,            _____NUMR5______
    ),

    [_DIACRITICS] = LAYOUT_terminal122_wrapper(
                                                                             ____FRW12_24____,
                                                                             ____FRW1_12_____,

        KC_PSCR,         KC_ESC,         KC_GRV,           ___NUMBER_L1____, ___NUMBER_R1____,  KC_MINS, KC_EQL,  KC_BSPC,      ____INSHMPU_____,         _____NUMR1______,
        QK_BOOT,         KC_PAUS,        KC_TAB,           _DIACRITICS_L1__, _DIACRITICS_R1__,           KC_LBRC, KC_RBRC,      ____DELENPD_____,         _____NUMR2______,
        EEP_RST,         TG(_SYMBOLS),   ______CLMC______, _DIACRITICS_L2__, _DIACRITICS_R2__,  KC_QUOT, KC_NUHS, KC_ENT,            KC_UP,               _____NUMR3T_____,
        TG(_NAVIGATION), TG(_FUNCTION),  KC_LSFT, KC_NUBS, _DIACRITICS_L3__, _DIACRITICS_R3__,                    KC_RSFT,  KC_LEFT, KC_HOME, MUTE_TEAMS, _____NUMR4______,
        KC_APP,          KC_LGUI,                                    _____CASPC______,                                               KC_DOWN,             _____NUMR5______
    ),

    [_FUNCTION] = LAYOUT_terminal122_wrapper(
                                                                             ____FRW12_24____,
                                                                             ____FRW1_12_____,

        KC_PSCR,         KC_ESC,         KC_GRV,           ___NUMBER_L1____, ___NUMBER_R1____,  KC_MINS, KC_EQL,  KC_BSPC,      ____INSHMPU_____,        _____NUMR1______,
        QK_BOOT,         KC_PAUS,        KC_TAB,           __FUNCTION_L1___, __FUNCTION_R1___,           KC_LBRC, KC_RBRC,      ____DELENPD_____,        _____NUMR2______,
        EEP_RST,         TG(_SYMBOLS),   ______CLMC______, __FUNCTION_L2___, __FUNCTION_R2___,  KC_QUOT, KC_NUHS, KC_ENT,            KC_UP,              _____NUMR3T_____,
        TG(_NAVIGATION), TG(_FUNCTION),  KC_LSFT, KC_NUBS, __FUNCTION_L3___, __FUNCTION_R3___,                    KC_RSFT,  KC_LEFT, KC_HOME, KC_RIGHT,  _____NUMR4______,
        KC_APP,          KC_LGUI,                                    _____CASPC______,                                               KC_DOWN,            _____NUMR5______
    )

};
