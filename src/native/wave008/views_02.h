#ifndef DQMJ3_WAVE008_VIEWS_02_H
#define DQMJ3_WAVE008_VIEWS_02_H
#include "types.h"

typedef struct {
    u8 unknown_0000[44];
    u32 flags_002c;
} FlagRecord_004bab84;
_Static_assert(__builtin_offsetof(FlagRecord_004bab84, flags_002c) == 44, "measured flag offset");

FlagRecord_004bab84 * fn_004bab84(FlagRecord_004bab84 *self, u32 value);

typedef struct {
    u8 unknown_0000[64];
    u32 flags_0040;
} FlagRecord_004e2f74;
_Static_assert(__builtin_offsetof(FlagRecord_004e2f74, flags_0040) == 64, "measured flag offset");

FlagRecord_004e2f74 * fn_004e2f74(FlagRecord_004e2f74 *self, u32 value);

typedef struct {
    u8 unknown_0000[30];
    u16 flags_001e;
} FlagRecord_0051e49c;
_Static_assert(__builtin_offsetof(FlagRecord_0051e49c, flags_001e) == 30, "measured flag offset");

typedef struct {
    u8 unknown_0000[104];
    FlagRecord_0051e49c *record;
} FlagOwner_0051e49c;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0051e49c, record) == 104, "original record offset");

FlagRecord_0051e49c * fn_0051e49c(FlagOwner_0051e49c *self, u32 value);

typedef struct {
    u8 unknown_0000[30];
    u16 flags_001e;
} FlagRecord_0051e4bc;
_Static_assert(__builtin_offsetof(FlagRecord_0051e4bc, flags_001e) == 30, "measured flag offset");

typedef struct {
    u8 unknown_0000[104];
    FlagRecord_0051e4bc *record;
} FlagOwner_0051e4bc;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0051e4bc, record) == 104, "original record offset");

FlagRecord_0051e4bc * fn_0051e4bc(FlagOwner_0051e4bc *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_00580ca0;
_Static_assert(__builtin_offsetof(FlagRecord_00580ca0, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[36];
    FlagRecord_00580ca0 *record;
} FlagOwner_00580ca0;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_00580ca0, record) == 36, "original record offset");

FlagRecord_00580ca0 * fn_00580ca0(FlagOwner_00580ca0 *self);

typedef struct {
    u8 unknown_0000[2284];
    u8 flags_08ec;
} FlagRecord_005db474;
_Static_assert(__builtin_offsetof(FlagRecord_005db474, flags_08ec) == 2284, "measured flag offset");

FlagRecord_005db474 * fn_005db474(FlagRecord_005db474 *self, u32 value, u32 enabled);

typedef struct {
    u8 flags_0000;
} FlagRecord_00616c30;
_Static_assert(__builtin_offsetof(FlagRecord_00616c30, flags_0000) == 0, "measured flag offset");

FlagRecord_00616c30 * fn_00616c30(FlagRecord_00616c30 *self, u32 value, u32 enabled);

typedef struct {
    u16 flags_0000;
} FlagRecord_0061d654;
_Static_assert(__builtin_offsetof(FlagRecord_0061d654, flags_0000) == 0, "measured flag offset");

FlagRecord_0061d654 * fn_0061d654(FlagRecord_0061d654 *self, u32 value, u32 enabled);

typedef struct {
    u8 unknown_0000[2864];
    u32 flags_0b30;
} FlagRecord_0063b0d8;
_Static_assert(__builtin_offsetof(FlagRecord_0063b0d8, flags_0b30) == 2864, "measured flag offset");

typedef struct {
    u8 unknown_0000[20480];
    FlagRecord_0063b0d8 context;
} FlagOwner_0063b0d8;
_Static_assert(__builtin_offsetof(FlagOwner_0063b0d8, context) == 20480, "embedded context offset");

FlagRecord_0063b0d8 * fn_0063b0d8(FlagOwner_0063b0d8 *self, u32 value, u32 enabled);

typedef struct {
    u8 unknown_0000[4];
    u16 flags_0004;
    u8 base_bit;
} FlagRecord_0063b148;
_Static_assert(__builtin_offsetof(FlagRecord_0063b148, flags_0004) == 4, "measured flag offset");

FlagRecord_0063b148 * flag_record_clear(FlagRecord_0063b148 *self, u32 value);

#endif
