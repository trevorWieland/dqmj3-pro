#include "pattern_outer.h"

void __aeabi_memclr8(void *destination, unsigned int bytes)
{
    memory_zero_unaligned(destination, bytes);
}
