#include QMK_KEYBOARD_H

#define _______ KC_TRNS
#define KC_HOME LGUI(KC_LEFT) // Home, or cmd-left
#define KC_END LGUI(KC_RGHT) // End, or cmd-right
#define KC_SLP LGUI(LALT(KC_POWER)) // sleep, or cmd-option-power
#define KC_LKSC LCTL(LSFT(KC_POWER)) // lock screen, or ctrl-shift-power

#define KC_SPFN LT(1, KC_SPC) // Space or Fn1
#define KC_PLFN LT(2, KC_PPLS) // Plus or Fn2

#define KC_LCTO OSM(MOD_LCTL)
#define KC_RCTO OSM(MOD_RCTL)
#define KC_LATO OSM(MOD_LALT)
#define KC_RATO OSM(MOD_RALT)
#define KC_LGUO OSM(MOD_LGUI)
#define KC_RGUO OSM(MOD_RGUI)
#define KC_LSFO OSM(MOD_LSFT)
#define KC_RSFO OSM(MOD_RSFT)

// Mark III keyboard layout for IBM XT
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
    _______,_______,  KC_LSFO,KC_LCTO,KC_LATO,KC_LGUO,_______,_______,KC_SPC ,_______,_______,KC_RGUO,KC_RATO,KC_RCTO,KC_RSFO,_______,_______,_______,_______,_______,
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
