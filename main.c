#include "main.h"

#define pk1 pmsk

#define pk2(a) return a

#define t int
#define a 0
#define psk main

t
psk() {
	pk1();

	pk2(a);
}

#undef pk1
#undef t
#undef a
#undef pk2
#undef psk
