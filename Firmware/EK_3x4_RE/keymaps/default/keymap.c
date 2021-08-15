#include "keyboard.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_MUTE, _______, _______, _______,
		KC_MPRV, KC_MPLY, KC_MNXT, _______,
		RSFT(KC_F), RSFT(KC_G), RSFT(KC_H), RSFT(KC_M)
  ),
};

void matrix_init_user(void) {

}

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    //  First encoder
    if (clockwise) {
      tap_code(KC_AUDIO_VOL_UP);
    } else {
      tap_code(KC_AUDIO_VOL_DOWN);
    }
  }

  if (index == 1) {
    //  Second encoder
    if (clockwise) {
      register_code(_______);
      unregister_code(_______);
    } else {
      register_code(_______);
      unregister_code(_______);
    }
  }
}
