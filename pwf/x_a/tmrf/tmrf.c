#include "tmrf.h"

#define t x_a_t
#define a x_a
#define b PORTB5

t a = b;

#undef t
#undef a
#undef b
