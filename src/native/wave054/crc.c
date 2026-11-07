#include "crc.h"

static Crc054U32 update(Crc054U32 seed, const unsigned char *buffer, Crc054U32 length)
{
    if (!buffer) return 0;
    Crc054U32 checksum = seed ^ 0xffffffffu;
    while (length) {
        checksum ^= *buffer++;
        for (Crc054U32 bit = 0; bit < 8; ++bit) {
            Crc054U32 low = checksum & 1u;
            checksum >>= 1;
            if (low) checksum ^= 0xedb88320u;
        }
        --length;
    }
    return checksum ^ 0xffffffffu;
}

Crc054U32 fn_007305b8(Crc054U32 seed, const unsigned char *buffer, Crc054U32 length)
{
    return update(seed, buffer, length);
}

Crc054U32 fn_00736734(Crc054U32 seed, const unsigned char *buffer, Crc054U32 length)
{
    return update(seed, buffer, length);
}
