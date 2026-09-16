#include "psk.h"

#define t int

#define pk(a) _delay_ms(a)

#define psk x_d_psk

void
psk(
	t a
) {
	switch (a) {
	case 0: pk(1); break;
	case 1: pk(1000); break;
	case 3: pk(3000); break;
	case 7: pk(7000); break;
	}
};

#undef t
#undef pk
#undef psk
