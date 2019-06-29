#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define KC_HOME LGUI(KC_LEFT) // Home, or cmd-left
#define KC_END LGUI(KC_RGHT) // End, or cmd-right
#define KC_SLP LGUI(LALT(KC_POWER)) // sleep, or cmd-option-power
#define KC_LKSC LCTL(LSFT(KC_POWER)) // lock screen, or ctrl-shift-power

#define KC_SPFN LT(1, KC_SPC) // Space or Fn1
#define KC_PLFN LT(2, KC_PPLS) // Plus or Fn2

enum combos {
  LCTL_COMBO,
  LALT_COMBO,
  LGUI_COMBO,
  RCTL_COMBO,
  RALT_COMBO,
  RGUI_COMBO
};

const uint16_t PROGMEM lctl_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM lalt_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM lgui_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM rctl_combo[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM ralt_combo[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM rgui_combo[] = {KC_J, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [LCTL_COMBO] = COMBO(lctl_combo, KC_LCTL),
  [LALT_COMBO] = COMBO(lalt_combo, KC_LALT),
  [LGUI_COMBO] = COMBO(lgui_combo, KC_LGUI),
  [RCTL_COMBO] = COMBO(rctl_combo, KC_RCTL),
  [RALT_COMBO] = COMBO(ralt_combo, KC_RALT),
  [RGUI_COMBO] = COMBO(rgui_combo, KC_RGUI)
};

// Mark II keyboard layout for IBM XT
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0: qwerty
  [0] = LAYOUT_xt(
    KC_F1,  KC_F2,    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,     KC_NLCK,      KC_SLCK,
    KC_F3,  KC_F4,    KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,        KC_P7,  KC_P8,  KC_P9,  KC_PMNS,
    KC_F5,  KC_F6,    KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_GRV, KC_ENT, KC_P4,  KC_P5,  KC_P6,
    KC_F7,  KC_F8,    KC_LSFT,KC_BSLS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_PSCR,KC_P1,  KC_P2,  KC_P3,  KC_PLFN,
    KC_F9,  KC_F10,   KC_LALT,                                    KC_SPFN,                                      KC_CAPS,          KC_P0,          KC_PDOT
  ),
  // 1: fn1 layer
  [1] = LAYOUT_xt(
    _______,_______,  KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,      _______,      _______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,KC_HOME,KC_UP,  KC_END, KC_PGUP,_______,_______,        _______,_______,_______,_______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,                                    _______,                                      _______,          _______,        _______
  ),
  // 3: fn2 layer
  [2] = LAYOUT_xt(
    _______,_______,  KC_SLP ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,      KC_LKSC,
    _______,_______,  _______,KC_VOLU,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,
    _______,_______,  _______,KC_VOLD,KC_MRWD,KC_MPLY,KC_MFFD,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,_______,KC_MUTE,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,                                    _______,                                      _______,          _______,        _______
  ),
};
