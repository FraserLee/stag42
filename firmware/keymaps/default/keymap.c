#include "stag42.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//base
	KEYMAP(
		KC_ESC,  KC_LCTL,    KC_LGUI,  KC_LALT,  KC_DEL,  KC_T,  KC_Y,     KC_U,  KC_I,     KC_O,    KC_P,     KC_BSPC,
		KC_TAB,  KC_Q,       KC_W,     KC_E,     KC_R,    KC_G,  KC_H,     KC_J,  KC_K,     KC_L,    KC_SCLN,  KC_ENT,
		MO(4),   KC_A,       KC_S,     KC_D,     KC_F,    KC_B,  KC_N,     KC_M,  KC_COMM,  KC_DOT,  MO(4),    LT(2, KC_RSFT),
		LT(1, KC_LSFT),      KC_Z,     KC_X,     KC_C,    KC_V,  KC_SPC),
 	//base + Lshift
	KEYMAP(
		KC_MPLY,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  S(KC_T),   S(KC_Y),  S(KC_U),  S(KC_I),     S(KC_O),    S(KC_P),     KC_DEL,
		_______,  S(KC_Q),  S(KC_W),  S(KC_E),  S(KC_R),  S(KC_G),   S(KC_H),  S(KC_J),  S(KC_K),     S(KC_L),    S(KC_SCLN),  _______,
		MO(6),    S(KC_A),  S(KC_S),  S(KC_D),  S(KC_F),  S(KC_B),   S(KC_N),  S(KC_M),  S(KC_COMM),  S(KC_DOT),  MO(6),       LT(3, KC_RSFT),
		_______,  S(KC_Z),  S(KC_X),  S(KC_C),  S(KC_V),   _______),
	//base + Rshift
	KEYMAP(
		KC_MPLY,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  S(KC_T),   S(KC_Y),  S(KC_U),  S(KC_I),     S(KC_O),    S(KC_P),     KC_DEL,
		_______,  S(KC_Q),  S(KC_W),  S(KC_E),  S(KC_R),  S(KC_G),   S(KC_H),  S(KC_J),  S(KC_K),     S(KC_L),    S(KC_SCLN),  _______,
		MO(6),    S(KC_A),  S(KC_S),  S(KC_D),  S(KC_F),  S(KC_B),   S(KC_N),  S(KC_M),  S(KC_COMM),  S(KC_DOT),  MO(6),       _______,
		LT(3, KC_LSFT),  S(KC_Z),  S(KC_X),  S(KC_C),  S(KC_V),   _______),
	//base + both shifts
	KEYMAP(
		_______, S(KC_LEFT), S(KC_DOWN), S(KC_UP), S(KC_RGHT), _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______),

	//layer 1
	KEYMAP(
		TG(5),    KC_LEFT,   KC_DOWN,  KC_UP,    KC_RGHT,  S(KC_5),  S(KC_6),   S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  KC_BSPC,
		KC_CAPS,  S(KC_1),   S(KC_2),  S(KC_3),  S(KC_4),  KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,     KC_ENT,
		_______,  KC_1,      KC_2,     KC_3,     KC_4,     KC_SCLN,  KC_MINS,   KC_EQL,   KC_LBRC,  KC_RBRC,  _______,  LT(6,KC_RSFT),
		LT(6,KC_LSFT),  KC_GRV,   KC_BSLS,  KC_SLSH,  KC_QUOT,  _______),
	//layer 1 lock
	KEYMAP(
		TG(5),    KC_LEFT,   KC_DOWN,  KC_UP,    KC_RGHT,  S(KC_5),  S(KC_6),   S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  KC_BSPC,
		KC_CAPS,  S(KC_1),   S(KC_2),  S(KC_3),  S(KC_4),  KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,     KC_ENT,
		TG(5),  KC_1,      KC_2,     KC_3,     KC_4,     KC_SCLN,  KC_MINS,   KC_EQL,   KC_LBRC,  KC_RBRC,  TG(5),  LT(6,KC_RSFT),
		LT(6,KC_LSFT),  KC_GRV,   KC_BSLS,  KC_SLSH,  KC_QUOT,  _______),

	
	//layer 1 + shift
	KEYMAP(
		KC_MPLY,  KC_MRWD,    KC_VOLD,     KC_VOLU,     KC_MFFD,     _______,     _______,     _______,    _______,     KC_F11,      KC_F12,   KC_BSPC,
		_______,  _______,    _______,     _______,     _______,     KC_F5,       KC_F6,       KC_F7,      KC_F8,       KC_F9,       KC_F10,   KC_ENT,
		_______,  KC_F1,      KC_F2,       KC_F3,       KC_F4,       S(KC_SCLN),  S(KC_MINS),  S(KC_EQL),  S(KC_LBRC),  S(KC_RBRC),  _______,  _______,
		_______,  S(KC_GRV),  S(KC_BSLS),  S(KC_SLSH),  S(KC_QUOT),  _______)
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}
