#include QMK_KEYBOARD_H

#define KC_SPMD LT(1, KC_SPC) // Space or modifiers layer
#define KC_BSFN LT(2, KC_BSLS) // Backslash or function layer
#define KC_PSFN LT(2, KC_PSCR) // Printscreen or function layer
#define KC_PLFN LT(3, KC_PPLS) // Plus or media layer

// left modifiers
#define KC_LCTO MT(MOD_LCTL, KC_Z)
#define KC_LATO MT(MOD_LALT, KC_X)
#define KC_LGUO MT(MOD_LGUI, KC_C)
#define KC_LFNO LT(2, KC_V)

// right modifiers
#define KC_RCTO MT(MOD_RCTL, KC_SLSH)
#define KC_RATO MT(MOD_RALT, KC_DOT)
#define KC_RGUO MT(MOD_RGUI, KC_COMM)
#define KC_RFNO LT(2, KC_M)

// Mark III keyboard layout for IBM XT
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // qwerty
  [0] = LAYOUT_xt(
    KC_F1,  KC_F2,    KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSPC,     KC_NLCK,      KC_SLCK,
    KC_F3,  KC_F4,    KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,        KC_P7,  KC_P8,  KC_P9,  KC_PMNS,
    KC_F5,  KC_F6,    KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_GRV, KC_ENT, KC_P4,  KC_P5,  KC_P6,
    KC_F7,  KC_F8,    KC_LSFT,KC_BSFN,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,KC_PSFN,KC_P1,  KC_P2,  KC_P3,  KC_PLFN,
    KC_F9,  KC_F10,   KC_LALT,                                    KC_SPMD,                                      KC_CAPS,          KC_P0,          KC_PDOT
  ),
  // modifiers layer
  [1] = LAYOUT_xt(
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,      _______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,_______,KC_LCTO,KC_LATO,KC_LGUO,KC_LFNO,_______,_______,KC_RFNO,KC_RGUO,KC_RATO,KC_RCTO,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,                                    _______,                                      _______,          _______,        _______
  ),
  // function layer
  [2] = LAYOUT_xt(
    _______,_______,  KC_GRV, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL,      _______,      _______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,KC_HOME,KC_UP,  KC_END, KC_PGUP,_______,_______,        _______,_______,_______,_______,
    _______,_______,  _______,_______,_______,_______,_______,_______,_______,KC_LEFT,KC_DOWN,KC_RGHT,KC_PGDN,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,_______,_______,_______,_______,_______,KC_SPC ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,                                    _______,                                      _______,          _______,        _______
  ),
  // media layer
  [3] = LAYOUT_xt(
    _______,_______,  KC_PWR ,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,     _______,      KC_SLEP,
    _______,_______,  _______,KC_VOLU,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,
    _______,_______,  _______,KC_VOLD,KC_MRWD,KC_MPLY,KC_MFFD,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,_______,KC_MUTE,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,
    _______,_______,  _______,                                    _______,                                      _______,          _______,        _______
  ),
};
