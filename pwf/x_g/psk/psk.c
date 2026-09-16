#include "psk.h"

#define t bool
#define pk1() x_g_pisk_brk()

#define pk2() x_g_pisk_sk()

#define psk x_g_psk

void
psk() {
a: {
	t b = pk1();

	if (b) goto c;

	pk2();

	goto a;
}
c: {}
};

#undef t
#undef pk1
#undef pk2
#undef psk
