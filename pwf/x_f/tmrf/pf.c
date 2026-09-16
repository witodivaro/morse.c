#include "tmrf.h"

#define t x_f_t
#define a x_f
#define b 0

#define pk(a, b) (a = b)

#define psk x_f_tmrf_pf

void
psk() {
	pk(a, b);
}

#undef t
#undef a
#undef b
#undef pk
#undef psk
