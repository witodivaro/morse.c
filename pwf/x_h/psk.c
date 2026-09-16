#include "psk.h"

#define t int

#define pk1() x_a_tmrf_psk1()

#define pk2(a) x_d_psk(a)

#define pk3() x_a_tmrf_psk2()

#define psk x_h_psk

void
psk(
	t a
) {
	pk1();

	pk2(a);

	pk3();
};

#undef t
#undef pk1
#undef pk2
#undef pk3
#undef psk
