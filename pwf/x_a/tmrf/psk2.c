#include "tmrf.h"

#define t x_a_t
#define a x_a

#define pk(a) x_c_tmrf_psk2(a)

#define psk x_a_tmrf_psk2

void
psk() {
	pk(a);
}

#undef t
#undef a
#undef pk
#undef psk
