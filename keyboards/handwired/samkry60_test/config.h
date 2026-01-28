#pragma once

/* USB Device descriptor */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    "SamuelAstudillo,eggsheel"
#define PRODUCT         "samkry60_test"

/* Key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

/* Matrix pin wiring (matches your RP2040 Zero schematic) */
#define MATRIX_ROW_PINS { GP15, GP26, GP27, GP28, GP29 }
#define MATRIX_COL_PINS { GP0, GP1, GP2, GP3, GP4, GP5, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14 }

/* Diode direction */
#define DIODE_DIRECTION COL2ROW

/* Debounce */
#define DEBOUNCE 5
