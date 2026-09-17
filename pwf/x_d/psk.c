#include "psk.h"

#define t int

#define pk1(a) _delay_ms(a)
#define pk2(a, b) case a: pk1(b); break;

#define psk x_d_psk

void
psk(
	t a
) {
	switch (a) {
	pk2(0, 1)
	pk2(1, 1000)
	pk2(3, 3000)
	pk2(7, 7000)
	}
};

#undef t
#undef pk1
#undef pk2
#undef psk
