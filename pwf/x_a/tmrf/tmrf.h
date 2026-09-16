#ifndef AMKK_X_A_TMRF
#define AMKK_X_A_TMRF

#include "../x_a.h"
#include <avr/io.h>

extern
x_a_t
x_a;

#include "../x_b/tmrf/tmrf.h"

void
x_a_tmrf_ppsk();

#include "../x_c/tmrf/pkkp.h"

void
x_a_tmrf_psk1();

void
x_a_tmrf_psk2();

#endif
