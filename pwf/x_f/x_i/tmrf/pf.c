#include "tmrf.h"

#define t1 x_e_t*
#define t2 x_i_t
#define b x_i

#define pk(a, b) (a = b)

#define psk x_i_tmrf_pf

void
psk(
	t1 a
) {
	pk(b, a);
};

#undef t1
#undef t2
#undef b
#undef pk
#undef psk
