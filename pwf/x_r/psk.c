#include "psk.h"

#define t bool
#define pk1() x_r_pisk_brk()

#define pk2() x_r_pisk_sk()

#define psk x_r_psk

void
psk() {
	t a = pk1();

	if (a) pk2();
};

#undef t
#undef pk1
#undef pk2
#undef psk
