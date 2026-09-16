#ifndef AMKK_X_C_TMRF
#define AMKK_X_C_TMRF

#include "../../x_a.h"
#include "../x_c.h"
#include <avr/io.h>

#define X_C_PTR (uint8_t*) 0x25

extern
x_c_t
x_c;

void
x_c_tmrf_psk1(x_a_t);

#endif
