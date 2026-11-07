#ifndef DQMJ3_CRC054_H
#define DQMJ3_CRC054_H

typedef unsigned int Crc054U32;

_Static_assert(sizeof(Crc054U32) == 4, "CRC words are unsigned 32-bit values");

Crc054U32 fn_007305b8(Crc054U32 seed, const unsigned char *buffer, Crc054U32 length);
Crc054U32 fn_00736734(Crc054U32 seed, const unsigned char *buffer, Crc054U32 length);

#endif
