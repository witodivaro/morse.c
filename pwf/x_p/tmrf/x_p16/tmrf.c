#include "tmrf.h"

#define t x_p_t
#define a x_p16
#define b {1,0x0}

t a = b;

#undef t
#undef a
#undef b
