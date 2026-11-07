#include "execute_views.h"

void __aeabi_memcpy(void *destination, const void *source, SqU32 bytes)
{
    unsigned char *output = destination;
    const unsigned char *input = source;
    for (SqU32 index = 0; index < bytes; index++) output[index] = input[index];
}

void __aeabi_memclr4(void *destination, SqU32 bytes)
{
    unsigned char *output = destination;
    for (SqU32 index = 0; index < bytes; index++) output[index] = 0;
}
