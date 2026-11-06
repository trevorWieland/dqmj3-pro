#ifndef DQMJ3_WAVE002_TYPES_H
#define DQMJ3_WAVE002_TYPES_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
_Static_assert(sizeof(u8) == 1 && sizeof(s8) == 1, "byte width");
_Static_assert(sizeof(u16) == 2 && sizeof(s16) == 2, "halfword width");
_Static_assert(sizeof(u32) == 4 && sizeof(s32) == 4, "word width");
#endif
