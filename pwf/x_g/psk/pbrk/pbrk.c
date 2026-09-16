#include "pbrk.h"

#define t bool
#define pk1() x_f_tmrf_pbrk1()

#define pk2(a) (! a)

#define pk3(a) return a

#define psk x_g_pisk_brk

t
psk() {
	t a = pk1();

	t b = pk2(a);

	pk3(b);
};

#undef t
#undef pk1
#undef pk2
#undef pk3
#undef psk
