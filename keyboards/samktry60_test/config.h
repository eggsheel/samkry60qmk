#pragma once

#define MATRIX_ROWS 5
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { GP26, GP27, GP28, GP29, GP20 }

#define MATRIX_COL_PINS { \
    GP0, GP1, GP2, GP3, GP4, \
    GP5, GP6, GP7, GP8, \
    GP10, GP11, GP12, GP13, GP14, \
    GP15 \
}

#define DIODE_DIRECTION COL2ROW
