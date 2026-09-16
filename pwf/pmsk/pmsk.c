#include "pmsk.h"

#define pk1() x_a_tmrf_ppsk()

#define pk2() x_o_psk()

#define psk pmsk

void
psk() {
	pk1();

	pk2();
};

#undef pk1
#undef pk2
#undef psk
