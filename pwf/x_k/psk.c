#include "psk.h"

#define t1 x_j_t

#define t2 x_p_t*
#define t3 int
#define pk1(a) x_l[(t3) a]

#define pk2(a) return a

#define psk x_k_psk

t2
psk(
	t1 a
) {
	t2 b = pk1(a);

	pk2(b);
};

#undef t1
#undef t2
#undef t3
#undef pk1
#undef pk2
#undef psk
