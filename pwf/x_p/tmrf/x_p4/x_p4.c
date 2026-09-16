#include "x_p4.h"

#define t x_p_t
#define a x_p4
#define b {3,1,0x0}

t a = b;

#undef t
#undef a
#undef b
