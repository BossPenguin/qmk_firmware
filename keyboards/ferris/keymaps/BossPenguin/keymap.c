#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
};

enum combos {
    COMBO_LAYER3,
    COMBO_LAYER4,
    COMBO_DEFAULT,
    COMBO_COLEMAK,
    /*COMBO_UP,
    COMBO_LEFT,
    COMBO_DOWN,
    COMBO_RIGHT,
    COMBO_ENTER,
    COMBO_TAB,
    COMBO_ESC,
    COMBO_BSPC,*/

    // more here...

    COMBO_LENGTH // Trick to avoid having to specify how many combos there are...
};

uint16_t COMBO_LEN = COMBO_LENGTH; // Nifty Trick continued

// Combo key definition
const uint16_t PROGMEM backspacespace_combo[] = {KC_BSPC, KC_SPC, COMBO_END};
const uint16_t PROGMEM qwop_combo[] = {KC_Q, KC_W, KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM fbspcspcj_combo[] = {KC_F, KC_BSPC, KC_SPC, KC_J, COMBO_END};
const uint16_t PROGMEM zbspcspcslash_combo[] = {KC_Z, KC_BSPC, KC_SPC, KC_SLSH, COMBO_END};
/*const uint16_t PROGMEM io_combo[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM kl_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM lsemi_combo[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM hn_combo[] = {KC_H, KC_N, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};*/
// more here...

// Combo key mapping...
combo_t key_combos[] = {
    [COMBO_LAYER3] = COMBO(backspacespace_combo, TT(3)),
    [COMBO_LAYER4] = COMBO(qwop_combo, TG(4)),
    [COMBO_DEFAULT] = COMBO(zbspcspcslash_combo, DF(0)),
    [COMBO_COLEMAK] = COMBO(fbspcspcj_combo, DF(5)),
    /*[COMBO_UP] = COMBO(io_combo, KC_UP),
    [COMBO_LEFT] = COMBO(jk_combo, KC_LEFT),
    [COMBO_DOWN] = COMBO(kl_combo, KC_DOWN),
    [COMBO_RIGHT] = COMBO(lsemi_combo, KC_RIGHT),
    [COMBO_ENTER] = COMBO(hn_combo, KC_ENTER),
    [COMBO_TAB] = COMBO(as_combo, KC_TAB),
    [COMBO_ESC] = COMBO(qw_combo, KC_ESC),
    [COMBO_BSPC] = COMBO(df_combo, KC_BSPC)*/
};

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 [_LAYER0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LSFT_T(KC_A), KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, LSFT_T(KC_SCLN), LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_N, LGUI_T(KC_M), LALT_T(KC_COMM), RCTL_T(KC_DOT), RALT_T(KC_SLSH), TT(2), KC_BSPC, KC_SPC, MO(1)),

[_LAYER1] = LAYOUT(KC_EXLM, KC_AT, KC_HASH, KC_DOLLAR, KC_PERCENT, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINUS, KC_UNDERSCORE, KC_EQUAL, KC_PLUS, KC_BACKSLASH, KC_LBRC, KC_LCBR, KC_RCBR, KC_QUOTE, KC_DQUO, KC_NO, KC_NO, KC_NO, KC_GRAVE, KC_TILDE, KC_PIPE, KC_RBRC, KC_LT, KC_GT, KC_QUES, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS),

[_LAYER2] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_7, KC_8, KC_9, KC_LGUI, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_COMM, KC_4, KC_5, KC_6, KC_LALT, KC_F11, KC_F12, KC_F13, KC_F14, KC_LSFT, KC_DOT, KC_1, KC_2, KC_3, KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_0),

[_LAYER3] = LAYOUT(KC_ESC, KC_BTN2, KC_MS_UP, KC_BTN1, KC_WH_U, KC_HOME, KC_END, KC_UP, KC_DEL, KC_BSPC, KC_TAB, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_MPLY, KC_LEFT, KC_DOWN, KC_RIGHT, KC_ENT, KC_ACL0, LGUI(KC_L), KC_PSCR, KC_WH_L, KC_WH_R, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_ACL2, KC_NO, KC_TRNS, KC_TRNS, KC_NO),

[_LAYER4] = LAYOUT(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_H, KC_J, KC_K, KC_L, LSFT_T(KC_SCLN), KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_N, LGUI_T(KC_M), LALT_T(KC_COMM), RCTL_T(KC_DOT), RALT_T(KC_SLSH), KC_T, KC_SPC, KC_ESC, KC_I),

 [_LAYER5] = LAYOUT(KC_Q, KC_W, KC_F, KC_P, KC_G, KC_J, KC_L, KC_U, KC_Y, KC_SEMI, LSFT_T(KC_A), KC_R, KC_S, KC_T, KC_D, KC_H, KC_N, KC_E, KC_I, LSFT_T(KC_O), LCTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, KC_K, LGUI_T(KC_M), LALT_T(KC_COMM), RCTL_T(KC_DOT), RALT_T(KC_SLSH), TT(2), KC_BSPC, KC_SPC, MO(1))

};
