#include "ppsk.h"

#define t x_e_t*
#define pk1(a) x_i_tmrf_pf(a)

#define pk2() x_f_tmrf_pf()

#define psk x_g_ppsk

void
psk(
	t a
) {
	pk1(a);

	pk2();
};

#undef t
#undef pk1
#undef pk2
#undef psk
