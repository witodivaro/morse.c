#include "tmrf.h"

#define t x_c_t
#define a x_c
#define b X_C_PTR

t a = b;

#undef t
#undef a
#undef b
