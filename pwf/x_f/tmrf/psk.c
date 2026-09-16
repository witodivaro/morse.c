#include "tmrf.h"

#define t1 x_e_t
#define t2 int

#define t3 x_f_t
#define c x_f

#define pk1(a) x_i[(t2) a]

#define pk2(a) return a

#define psk x_f_tmrf_psk

t1
psk() {
	t1 a = pk1(c);

	pk2(a);
};

#undef t1
#undef t2
#undef t3
#undef c
#undef pk1
#undef pk2
#undef psk
