#ifndef AMKK_X_B_TMRF
#define AMKK_X_B_TMRF

#include "../../x_a.h"
#include "../x_b.h"
#include <avr/io.h>

#define X_B_PTR (uint8_t*) 0x24

extern
x_b_t
x_b;

void
x_b_tmrf_psk(x_a_t);

#endif
