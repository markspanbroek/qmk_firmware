#include QMK_KEYBOARD_H

#define KC_____ KC_TRNS
#define KC_FNBS LT(1, KC_BSLS) // Fn1 / backslash
#define KC_FNAS LT(1, KC_PAST) // Fn1 / *
#define KC_FNPL LT(2, KC_PPLS) // Fn2 / +
#define KC_GUSP MT(MOD_LGUI, KC_SPC) // cmd / space
#define KC_GPSP LGUI(KC_SPC) // cmd - space
#define KC_HOME LGUI(KC_LEFT) // Home, or cmd-left
#define KC_END LGUI(KC_RGHT) // End, or cmd-right
#define KC_SLP LGUI(LALT(KC_POWER)) // sleep, or cmd-option-power
#define KC_SCLK LCTL(LSFT(KC_POWER)) // lock screen, or ctrl-shift-power

// Mark I keyboard layout for XT Keyboard (Model F)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // 0: qwerty
  [0] = LAYOUT_xt(
    KC_F1,  KC_F2,    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,     KC_NLCK,      KC_GPSP,
    KC_F3,  KC_F4,    KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,        KC_P7,  KC_P8,  KC_P9,  KC_PMNS,
    KC_F5,  KC_F6,    KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_GRV, KC_ENT, KC_P4,  KC_P5,  KC_P6,
    KC_F7,  KC_F8,    KC_LSFT,KC_FNBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_FNAS,KC_P1,  KC_P2,  KC_P3,  KC_FNPL,
    KC_F9,  KC_F10,   KC_LALT,                                    KC_GUSP,                                       KC_CAPS,          KC_P0,          KC_PDOT
  ),
  // 1: fn1 layer
  [1] = LAYOUT_xt(
    _______,_______,  KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,      _______,      KC_SLCK,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,KC_HOME,KC_UP,  KC_END, KC_PGUP,_______,_______,        _______,_______,_______,_______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,                                    _______,                                      _______,          _______,        _______
  ),
  // 2: fn2 layer
  [2] = LAYOUT_xt(
    _______,_______,  KC_SLP ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,      KC_SCLK,
    _______,_______,  _______,KC_VOLU,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,
    _______,_______,  _______,KC_VOLD,KC_MRWD,KC_MPLY,KC_MFFD,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,_______,KC_MUTE,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,                                    _______,                                      _______,          _______,        _______
  )
};
