#include "pisk.h"

#define t1 x_m_t
#define pk1() x_n_tmrf_psk1()

#define t2 x_m_t
#define pk2(a) x_o_pisk_isk_isk_sk1(a)

#define pk3() x_o_pisk_isk_isk_sk2()

#define psk x_o_pisk_isk_sk

void
psk() {
	t1 a = pk1();

	pk2(a);

	pk3();
};

#undef t1
#undef pk1
#undef t2
#undef pk2
#undef pk3
#undef psk
