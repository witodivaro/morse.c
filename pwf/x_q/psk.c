#include "psk.h"

#define t bool
#define pk1() x_f_tmrf_pbrk2()

#define pk2() x_q_pisk_sk()

#define psk x_q_psk

void
psk() {
	t a = pk1();

	if (a) pk2();
};

#undef t
#undef pk1
#undef pk2
#undef psk
