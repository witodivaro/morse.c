#include "tmrf.h"

#define t x_p_t
#define a x_p13
#define b {3,3,0x0}

t a = b;

#undef t
#undef a
#undef b
