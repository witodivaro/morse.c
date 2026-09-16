#include "pisk.h"

#define t uint8_t

#define pk1(a) (1 << a)
#define pk2(a) (~ a)

#define pk3(a) return a

#define psk x_c_tmrf_pisk2_sk

t
psk(
	t a
) {
	t b = pk1(a);

	t c = pk2(b);

	pk3(c);
};

#undef t
#undef pk1
#undef pk2
#undef pk3
#undef psk
