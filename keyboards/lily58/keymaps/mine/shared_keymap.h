
// clang-format off
enum custom_keycodes {
    VIM_O = SAFE_RANGE,
    VIM_Y,
};

#define ______ KC_TRNS
#define XXXXXX KC_NO
#define CTL_SPC RCTL_T(KC_SPC)
#define _BASE 0
#define _SYM 1
#define _NAV 2
#define _NAV2 3
#define _NUM 4
#define _FNUM 5
#define _GAM 6
#define _EXTRA 7

#define _ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_BASE] = LAYOUT(\
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                   XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, KC_BSPC,\
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                             KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, \
  MO(_EXTRA), KC_A, KC_S, KC_D, LT(_NUM, KC_F), LT(_FNUM, KC_G),         KC_H, LT(_NAV2, KC_J), KC_K, KC_L, MO(_SYM), KC_SCLN,\
  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, XXXXXX,             XXXXXX, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_QUOT, \
  XXXXXX, LALT_T(KC_DEL), LCTL_T(KC_BSPC), LT(_NAV,KC_ENT),                   LALT_T(KC_ESC), CTL_SPC, KC_RGUI, XXXXXX,\
  _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_),

// Symbols
[_SYM] = LAYOUT(\
  XXXXXX, XXXXXX,  XXXXXX,  XXXXXX,  XXXXXX, XXXXXX,                 XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,\
  XXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC,                KC_CIRC, KC_AMPR, KC_ASTR, XXXXXX, XXXXXX, KC_F12,\
  XXXXXX, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_GRV,               KC_MINS, KC_EQL, KC_UNDS, KC_PLUS, _______, XXXXXX, \
  _______, XXXXXX, XXXXXX, KC_LBRC, KC_RBRC, KC_TILD, XXXXXX,  XXXXXX, XXXXXX, KC_MINS, KC_PIPE, XXXXXX, XXXXXX, XXXXXX, \
  _______, _______, _______, _______,                               _______, _______, _______, TG(_GAM), \
  _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_),

// Navigation
[_NAV] = LAYOUT(\
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                 XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, \
  XXXXXX, XXXXXX, LALT(KC_MINS), LSA(KC_MINS), LCTL(KC_Y), XXXXXX,   VIM_Y, LCTL(KC_Z), XXXXXX, VIM_O, LCTL(KC_V), XXXXXX, \
  KC_CAPS,XXXXXX, KC_F3, LSFT(KC_DEL), KC_LGUI, _______,          KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, XXXXXX,\
  _______, XXXXXX, XXXXXX, XXXXXX, KC_APP, KC_PSCR, XXXXXX,      XXXXXX, XXXXXX, KC_PGDN, KC_PGUP, KC_HOME, KC_END, XXXXXX, \
  _______, _______, _______, _______,                                 LALT_T(KC_BSPC), _______, KC_DEL, _______, \
  _,_,_,_,_,_,_, _, _, _,_,_,_,_,_,_,_,_),

// Navigation 2
[_NAV2] = LAYOUT(\
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                 XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, \
  XXXXXX, XXXXXX, KC_PGUP, KC_UP, KC_PGDN, XXXXXX,               XXXXXX, XXXXXX, VIM_Y, VIM_O, LCTL(KC_V), XXXXXX, \
  XXXXXX, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT, KC_END,          XXXXXX, _______, XXXXXX, XXXXXX, XXXXXX, XXXXXX,\
  _______, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,      XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, \
  _______, _______, _______, _______,                                 _______, _______, _______, _______, \
  _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_),

// Numbers
[_NUM] = LAYOUT(\
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                             XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, \
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                             KC_ASTR, KC_7, KC_8, KC_9, KC_PLUS, XXXXXX, \
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                             KC_SLASH, KC_4, KC_5, KC_6, KC_MINS, XXXXXX, \
  _______, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, TG(_NUM),             XXXXXX, KC_0, KC_1, KC_2, KC_3, KC_DOT, XXXXXX, \
   _______, _______, _______, _______,                                 _______, _______, _______, _______, \
   _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_),

[_FNUM] = LAYOUT(\
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                             XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, \
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                             XXXXXX,  KC_F7, KC_F8, KC_F9, KC_F10, XXXXXX, \
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                             XXXXXX,  KC_F4, KC_F5, KC_F6, KC_F11, XXXXXX, \
  _______, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,             XXXXXX, XXXXXX, KC_F1, KC_F2, KC_F3, KC_F12, XXXXXX, \
  _______, _______, _______, _______,                                   _______, _______, _______, _______, \
  _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_),

// Gaming
[_GAM] = LAYOUT(\
  KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                             KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,\
  KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                             KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, \
  XXXXXX, KC_A, KC_S, KC_D, KC_F, KC_G,                              KC_H, KC_J, KC_K, KC_L,  KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, XXXXXX,             _______, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, \
  KC_LCTL, KC_LALT, KC_SPC, KC_ENT,                                 _______, _______, _______, TG(_GAM), \
  /*Top-middle*/_,_,_,_,
  /*Bottom row outer*/KC_LCTL,_,_,_,
  _,_,_,_,_,_,_,_,_,_),

[_EXTRA] = LAYOUT(\
  XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX,                             XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, XXXXXX, \
  _______, _______, _______, _______, _______, _______,                             XXXXXX,  _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, KC_F, KC_G,                             XXXXXX,  KC_J, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, XXXXXX,             XXXXXX, _______, _______, _______, _______, _______, _______, \
  _______, KC_DEL, KC_BSPC, KC_ENT,                                   KC_ESC, KC_SPC, _______, _______, \
  _,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
// #ifdef OLED_ENABLE
//     set_keylog(keycode, record);
// #endif
    // set_timelog();
  }
  switch (keycode){
      case VIM_O:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_END) SS_DELAY(2) SS_TAP(X_ENT));
      }
      break;
      case VIM_Y:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END)) SS_LCTRL("c"));
      }
      break;
  }
  return true;
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      case LT(_NAV,KC_ENT):
      case LALT_T(KC_ESC):
      case LT(_NUM, KC_F):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
        // case CTL_SPC:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
      // case LT(_NUM, KC_F):
      case LCTL_T(KC_BSPC):
            // Immediately select the hold action when another key is pressed.
            return true;
      default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CTL_SPC:
            return 300;
        default:
            return TAPPING_TERM;
    }
}
