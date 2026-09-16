#include "tmrf.h"

#define t1 x_m_t
#define t2 int

#define t3 x_n_t
#define c x_n

#define pk1(a) x_m_tmrfyo[(t2) a]

#define pk2(a) return a

#define psk x_n_tmrf_psk1

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
