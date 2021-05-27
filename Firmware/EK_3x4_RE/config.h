#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    ElsassKabel
#define PRODUCT         EK_3x4_RE
#define DESCRIPTION     EK_3x4_RE

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B5, B4, E6 }
#define MATRIX_COL_PINS { B1, B3, B2, B6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Rotary encoders */
#define ENCODERS_PAD_A { D1, D1 }
#define ENCODERS_PAD_B { D0, C6 }
// #define ENCODER_DIRECTION_FLIP // If directions are incorrect
#define ENCODER_RESOLUTIONS { 4, 4 } // Pulse between each detent
