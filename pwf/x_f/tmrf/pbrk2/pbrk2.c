#include "pbrk2.h"

#define pk1() x_f++

#define t bool
#define pk2() x_f_tmrf_pbrk1

#define pk3() x_f--

#define pk4(a) return a

#define psk x_f_tmrf_pbrk2

t
psk() {
	pk1();

	t a = pk2();

	pk3();

	pk4(a);
}

#undef pk1
#undef t
#undef pk2
#undef pk3
#undef pk4
#undef psk
