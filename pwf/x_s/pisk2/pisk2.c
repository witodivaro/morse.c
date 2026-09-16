#include "pisk2.h"

#define t1 char

#define t2 bool
#define pk1(a) (a >= 0x61)
#define pk2(a) (a <= 0x7A)
#define pk3(a, b) (a && b)

#define pk4(a) return a

#define psk x_s_pipbrk_sk2

t2
psk(
	t1 a
) {
	t2 b = pk1(a);
	t2 c = pk2(a);

	t2 d = pk3(b, c);

	pk4(d);
};

#undef t1
#undef t2
#undef pk1
#undef pk2
#undef pk3
#undef pk4
#undef psk
