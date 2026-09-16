#include "tmrf.h"

#define pk1() x_n++

#define t x_m_t
#define pk2() x_n_tmrf_psk1()

#define pk3() x_n--

#define pk4(a) return a

#define psk x_n_tmrf_psk2

t
psk() {
	pk1();

	t a = pk2();

	pk3();

	pk4(a);
};

#undef pk1
#undef t
#undef pk2
#undef pk3
#undef pk4
#undef psk
