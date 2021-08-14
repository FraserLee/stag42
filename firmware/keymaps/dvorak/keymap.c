#include "stag42.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//base
	KEYMAP(
		KC_ESC,  KC_LCTL,    KC_LGUI,  KC_LALT,  KC_DEL,  KC_Y,  KC_F,     KC_G,  KC_C,     KC_R,    KC_L,    KC_BSPC,
		KC_TAB,  KC_QUOT,    KC_COMM,  KC_DOT,   KC_P,    KC_I,  KC_D,     KC_H,  KC_T,     KC_N,    KC_S,    KC_ENT,
		MO(2),   KC_A,       KC_O,     KC_E,     KC_U,    KC_X,  KC_B,     KC_M,  KC_W,     KC_V,    KC_Z,    MO(2),
		LT(1, KC_LSFT),      KC_SCLN,     KC_Q,     KC_J,    KC_K,  KC_SPC),
 	//base + shift
	KEYMAP(
		KC_MPLY,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  S(KC_Y),  S(KC_F),     S(KC_G),  S(KC_C),     S(KC_R),    S(KC_L),    KC_DEL,
		_______,  S(KC_QUOT),    S(KC_COMM),  S(KC_DOT),   S(KC_P),    S(KC_I),  S(KC_D),     S(KC_H),  S(KC_T),     S(KC_N),   S(KC_S),    _______,
		MO(4),    S(KC_A),       S(KC_O),     S(KC_E),     S(KC_U),    S(KC_X),  S(KC_B),     S(KC_M),  S(KC_W),     S(KC_V),    S(KC_Z),     MO(4),
		_______,  S(KC_SCLN),  S(KC_Q),  S(KC_J),  S(KC_K),   _______),
	

	//layer 1 (momentary)
	KEYMAP(
		TG(3),    KC_LEFT,   KC_DOWN,  KC_UP,    KC_RGHT,  S(KC_5),  S(KC_6),   S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  KC_BSPC,
		KC_CAPS,  S(KC_1),   S(KC_2),  S(KC_3),  S(KC_4),  KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,     KC_ENT,
		_______,  KC_1,      KC_2,     KC_3,     KC_4,     KC_QUOT,  KC_MINS,   KC_EQL,   KC_LBRC,  KC_RBRC,  MO(5),  _______,
		LT(4,KC_LSFT),  KC_SCLN,   KC_GRV,  KC_BSLS, KC_SLSH,  _______),
	//layer 1 (momentary)
	KEYMAP(
		TG(3),    KC_LEFT,   KC_DOWN,  KC_UP,    KC_RGHT,  S(KC_5),  S(KC_6),   S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  KC_BSPC,
		KC_CAPS,  S(KC_1),   S(KC_2),  S(KC_3),  S(KC_4),  KC_5,     KC_6,      KC_7,     KC_8,     KC_9,     KC_0,     KC_ENT,
		TG(3),  KC_1,      KC_2,     KC_3,     KC_4,     KC_QUOT,  KC_MINS,   KC_EQL,   KC_LBRC,  KC_RBRC,  MO(5),  TG(3),
		LT(4,KC_LSFT),  KC_SCLN,   KC_GRV,  KC_BSLS, KC_SLSH,  _______),


	//layer 1 + shift
	KEYMAP(
		KC_MPLY,  KC_MRWD,    KC_VOLD,     KC_VOLU,     KC_MFFD,     _______,     _______,     _______,    _______,     KC_F11,      KC_F12,   KC_DEL,
		_______,  _______,    _______,     _______,     _______,     KC_F5,       KC_F6,       KC_F7,      KC_F8,       KC_F9,       KC_F10,   _______,
		_______,  KC_F1,      KC_F2,       KC_F3,       KC_F4,       S(KC_QUOT),  S(KC_MINS),  S(KC_EQL),  S(KC_LBRC),  S(KC_RBRC),  MO(5),  _______,
		_______,  S(KC_SCLN),  S(KC_GRV),  S(KC_BSLS),  S(KC_SLSH),  _______)

	//shift arrows
	KEYMAP(
		_______, S(KC_LEFT), S(KC_DOWN), S(KC_UP), S(KC_RGHT), _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______),
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
