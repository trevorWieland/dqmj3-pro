#ifndef DQMJ3_WAVE008_TYPES_H
#define DQMJ3_WAVE008_TYPES_H
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
_Static_assert(sizeof(u32)==4 && sizeof(u16)==2 && sizeof(s8)==1, "scalar widths");
#endif
