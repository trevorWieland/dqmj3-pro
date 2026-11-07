#include "call_views.h"

void __aeabi_memclr8(void *destination, SqU32 bytes)
{
    unsigned char *values = destination;
    for (SqU32 index = 0; index < bytes; index++) {
        values[index] = 0;
    }
}
