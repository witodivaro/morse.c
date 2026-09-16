#include "tmrf.h"

#define t x_a_t
#define a x_a

#define pk(a) x_b_tmrf_psk(a)

#define psk x_a_tmrf_ppsk

void
psk() {
	pk(a);
}

#undef t
#undef a
#undef pk
#undef psk
