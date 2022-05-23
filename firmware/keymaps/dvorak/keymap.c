#include "stag42.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	//base
    KEYMAP(
        KC_ESC,         KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  KC_Y,   KC_F,  KC_G,  KC_C,  KC_R,  KC_L,  KC_BSPC,
        KC_TAB,         KC_LCTL,  KC_LALT,  KC_LGUI,  KC_P,      KC_I,   KC_D,  KC_H,  KC_T,  KC_N,  KC_S,  MO(3),
        MO(2),          KC_A,     KC_O,     KC_E,     KC_U,      KC_X,   KC_B,  KC_M,  KC_W,  KC_V,  KC_Z,  KC_ENT,
        LT(1,KC_LSFT),  KC_BSPC,  KC_Q,     KC_J,     KC_K,      KC_SPC
    ),
     //shift
    KEYMAP(
        S(KC_ESC),  S(KC_LEFT),  S(KC_DOWN),  S(KC_UP),    S(KC_RIGHT),  S(KC_Y),  S(KC_F),  S(KC_G),  S(KC_C),  S(KC_R),  S(KC_L),  KC_DEL,
        S(KC_TAB),  S(KC_LCTL),  S(KC_LALT),  S(KC_LGUI),  S(KC_P),      S(KC_I),  S(KC_D),  S(KC_H),  S(KC_T),  S(KC_N),  S(KC_S),  _______,
        _______,    S(KC_A),     S(KC_O),     S(KC_E),     S(KC_U),      S(KC_X),  S(KC_B),  S(KC_M),  S(KC_W),  S(KC_V),  S(KC_Z),  S(KC_ENT),
        _______,    KC_DEL,      S(KC_Q),     S(KC_J),     S(KC_K),      S(KC_SPC)
    ),
    //layer 1 (momentary)
    KEYMAP(
        KC_ESC,      KC_GRV,      S(KC_GRV),  S(KC_COMMA),  S(KC_DOT),  S(KC_EQL),  KC_EQL,      KC_LBRC,  KC_RBRC,  S(KC_LBRC),  S(KC_RBRC),  KC_BSPC,
        S(KC_BSLS),  S(KC_QUOT),  KC_QUOT,    S(KC_MINS),   KC_MINS,    S(KC_5),    S(KC_6),     S(KC_7),  S(KC_8),  S(KC_9),     S(KC_0),     _______,
        _______,     S(KC_1),     S(KC_2),    S(KC_3),      S(KC_4),    KC_COMMA,   S(KC_SCLN),  KC_SCLN,  KC_W,     KC_V,        KC_Z,        KC_ENT,
        _______,     KC_BSLS,     KC_SLSH,    S(KC_SLSH),   KC_DOT,     KC_SPC
    ),
    //layer 2 (momentary)
    KEYMAP(
        KC_MPLY,  KC_MRWD,  KC_VOLD,  KC_VOLU,  KC_MFFD,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_BSPC,
        KC_TAB,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    _______,
        _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_X,   KC_B,   KC_M,   KC_W,   KC_V,   KC_Z,    KC_ENT,
        _______,  KC_F11,   KC_F12,   KC_J,     KC_K,     KC_SPC
    )
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
