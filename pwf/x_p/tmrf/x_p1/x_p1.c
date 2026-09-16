#include "x_p1.h"

#define t x_p_t
#define a x_p1
#define b {1,3,0x0}

t a = b;

#undef t
#undef a
#undef b
