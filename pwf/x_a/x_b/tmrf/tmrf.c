#include "tmrf.h"

#define t x_b_t
#define a x_b
#define b X_B_PTR

t a = b;

#undef t
#undef a
#undef b
