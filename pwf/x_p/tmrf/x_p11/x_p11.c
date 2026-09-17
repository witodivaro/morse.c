#include "x_p11.h"

#define t x_p_t
#define a x_p11
#define b {1,1,0x0}

t a = b;

#undef t
#undef a
#undef b
