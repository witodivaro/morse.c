#include "pbrk.h"

#define t1 uint8_t
#define pk1() x_n_tmrf_psk2()

#define t2 bool
#define pk2(a) x_u_pbrk(a)

#define pk3(a) return a

#define psk x_t_pisk_brk

t2
psk() {
	t1 a = pk1();

	t2 b = pk2(a);

	pk3(b);
};

#undef t1
#undef pk1
#undef t2
#undef pk2
#undef pk3
#undef psk
