#include "compile_graph.h"

typedef __UINTPTR_TYPE__ MemoryAddress;

static unsigned int read_word(const unsigned char *bytes)
{
    return (unsigned int)bytes[0] | (unsigned int)bytes[1] << 8 |
           (unsigned int)bytes[2] << 16 | (unsigned int)bytes[3] << 24;
}

int fn_001010c8(const void *left_buffer, const void *right_buffer, unsigned int bytes)
{
    const unsigned char *left = left_buffer;
    const unsigned char *right = right_buffer;
    if ((((MemoryAddress)left | (MemoryAddress)right) & 3) == 0) {
        while (bytes >= 4) {
            unsigned int first = read_word(left);
            unsigned int second = read_word(right);
            left += 4;
            right += 4;
            bytes -= 4;
            if (first != second) {
                int difference = (int)(first & 255) - (int)(second & 255);
                if (difference != 0)
                    return difference;
                difference = (int)(first & 65535) - (int)(second & 65535);
                if (difference != 0)
                    return difference;
                difference = (int)(first & 0xffffff) - (int)(second & 0xffffff);
                if (difference != 0)
                    return difference;
                return (int)(first >> 24) - (int)(second >> 24);
            }
        }
    }
    while (bytes != 0) {
        int difference = (int)*left++ - (int)*right++;
        if (difference != 0)
            return difference;
        --bytes;
    }
    return 0;
}

void *fn_00301a9c(void *destination, const void *source, unsigned int bytes)
{
    unsigned char *to = destination;
    const unsigned char *from = source;
    for (unsigned int index = 0; index < bytes; ++index)
        to[index] = from[index];
    return to + bytes;
}

void *fn_0017821c(void *destination, const void *source, unsigned int bytes)
{
    return fn_00301a9c(destination, source, bytes);
}
