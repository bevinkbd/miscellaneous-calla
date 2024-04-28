#include "hscalla.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT( /* Layer Zero */
		KC_ESC, KC_F2, KC_F4, KC_F6, KC_F8, KC_F10, KC_F12, KC_PSCR, KC_PAUS, 
		KC_F1, KC_F3, KC_F5, KC_F7, KC_F9, KC_F11, KC_F13, KC_SLCK, 
		KC_GRV, KC_2, KC_4, KC_6, KC_8, KC_0, KC_EQL, KC_INS, KC_PGUP, 
		KC_1, KC_3, KC_5, KC_7, KC_9, KC_MINS, KC_BSPC, KC_HOME, 
		KC_TAB, KC_W, KC_R, KC_Y, KC_I, KC_P, KC_RBRC, KC_DEL, KC_PGDN, 
		KC_Q, KC_E, KC_T, KC_U, KC_O, KC_LBRC, KC_BSLS, KC_END, 
		KC_CAPS, KC_S, KC_F, KC_H, KC_K, KC_SCLN, KC_TRNS,
		KC_A, KC_D, KC_G, KC_J, KC_L, KC_QUOT, KC_ENT, 
		KC_LSFT, KC_X, KC_V, KC_N, KC_COMM, KC_SLSH, KC_TRNS, KC_UP, 
		KC_Z, KC_C, KC_B, KC_M, KC_DOT, KC_RSFT, 
		KC_LCTL, KC_LALT, KC_LEFT, KC_RGHT, 
		KC_SPC, KC_RALT, MO(1), KC_DOWN),
  

  [1] = LAYOUT( /* Layer One */
		RESET, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUI, RGB_VAI, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAI, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_HUD, RGB_VAD, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAD, 
		RGB_TOG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		RGB_MOD, KC_TRNS, KC_TRNS, KC_TRNS),

  [2] = LAYOUT( /* Layer Two*/
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

	
};