#ifndef DQMJ3_WAVE008_VIEWS_03_H
#define DQMJ3_WAVE008_VIEWS_03_H
#include "types.h"

typedef struct {
    u8 unknown_0000[220];
    u8 flags_00dc[64];
} FlagRecord_00654c58;
_Static_assert(__builtin_offsetof(FlagRecord_00654c58, flags_00dc) == 220, "measured flag offset");

u8 * fn_00654c58(FlagRecord_00654c58 *self, s32 bit_index);

typedef struct {
    u8 flags_0000;
} FlagRecord_00655760;
_Static_assert(__builtin_offsetof(FlagRecord_00655760, flags_0000) == 0, "measured flag offset");

FlagRecord_00655760 * fn_00655760(FlagRecord_00655760 *self, u32 value, u32 enabled);

typedef struct {
    u8 unknown_0000[76];
    u32 flags_004c;
} FlagRecord_0067411c;
_Static_assert(__builtin_offsetof(FlagRecord_0067411c, flags_004c) == 76, "measured flag offset");

FlagRecord_0067411c * fn_0067411c(FlagRecord_0067411c *self);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_00688818;
_Static_assert(__builtin_offsetof(FlagRecord_00688818, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[8];
    FlagRecord_00688818 *record;
    s8 state_000c;
    s8 state_000d;
} FlagOwner_00688818;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_00688818, record) == 8, "original record offset");

void * fn_00688818(FlagOwner_00688818 *self, u32 force);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0069c304;
_Static_assert(__builtin_offsetof(FlagRecord_0069c304, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[24];
    FlagRecord_0069c304 *record;
} FlagOwner_0069c304;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0069c304, record) == 24, "original record offset");

FlagRecord_0069c304 * fn_0069c304(FlagOwner_0069c304 *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0069e710;
_Static_assert(__builtin_offsetof(FlagRecord_0069e710, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[8];
    FlagRecord_0069e710 *record;
    s8 state_000c;
} FlagOwner_0069e710;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0069e710, record) == 8, "original record offset");

u32 fn_0069e710(FlagOwner_0069e710 *self);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0069e748;
_Static_assert(__builtin_offsetof(FlagRecord_0069e748, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[8];
    FlagRecord_0069e748 *record;
    s8 state_000c;
} FlagOwner_0069e748;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0069e748, record) == 8, "original record offset");

u32 fn_0069e748(FlagOwner_0069e748 *self);

#endif
