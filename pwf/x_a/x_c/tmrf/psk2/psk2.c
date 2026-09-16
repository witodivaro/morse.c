#include "psk2.h"

#define t1 x_a_t
#define t2 x_c_t
#define b x_c

#define t3 uint8_t
#define pk1(a) x_c_tmrf_pisk2_sk((t3) a)

#define pk2(a, b) (* a) &= b

#define psk x_c_tmrf_psk2

void
psk(
	t1 a
) {
	t3 c = pk1(a);

	pk2(b, c);
};

#undef t1
#undef t2
#undef b
#undef t3
#undef pk1
#undef pk2
#undef psk
