#pragma once

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, F6, F1, F7, F0, D3, D5, D1, D2, B1, B2 }
#define MATRIX_COL_PINS { C7, C6, B6, B5, B4, D7, D6, D4, B0 }


/* VIAL Specific */
#define DYNAMIC_KEYMAP_LAYER_COUNT 3
#define VIAL_COMBO_ENTRIES 4
#define VIAL_TAP_DANCE_ENTRIES 4

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define VIALRGB_NO_DIRECT
#define LED_CAPS_LOCK_PIN B7
#define DRIVER_LED_TOTAL 16

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST



/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE



#ifndef NO_DEBUG
#define NO_DEBUG
#endif // !NO_DEBUG
#if !defined(NO_PRINT) && !defined(CONSOLE_ENABLE)
#define NO_PRINT
#endif // !NO_PRINT