#ifndef DQMJ3_WAVE008_VIEWS_01_H
#define DQMJ3_WAVE008_VIEWS_01_H
#include "types.h"

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0021c420;
_Static_assert(__builtin_offsetof(FlagRecord_0021c420, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[292];
    FlagRecord_0021c420 *record;
} FlagOwner_0021c420;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0021c420, record) == 292, "original record offset");

FlagRecord_0021c420 * fn_0021c420(FlagOwner_0021c420 *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0021d7a0;
_Static_assert(__builtin_offsetof(FlagRecord_0021d7a0, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[260];
    FlagRecord_0021d7a0 *record;
} FlagOwner_0021d7a0;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0021d7a0, record) == 260, "original record offset");

FlagRecord_0021d7a0 * fn_0021d7a0(FlagOwner_0021d7a0 *self, u32 value);

typedef struct {
    u8 unknown_0000[4];
    u32 flags_0004;
} FlagRecord_0024d76c;
_Static_assert(__builtin_offsetof(FlagRecord_0024d76c, flags_0004) == 4, "measured flag offset");

FlagRecord_0024d76c * fn_0024d76c(FlagRecord_0024d76c *self);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0028fc94;
_Static_assert(__builtin_offsetof(FlagRecord_0028fc94, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[40];
    FlagRecord_0028fc94 *record;
} FlagOwner_0028fc94;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0028fc94, record) == 40, "original record offset");

FlagRecord_0028fc94 * fn_0028fc94(FlagOwner_0028fc94 *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_00309c0c;
_Static_assert(__builtin_offsetof(FlagRecord_00309c0c, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[388];
    FlagRecord_00309c0c *record;
} FlagOwner_00309c0c;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_00309c0c, record) == 388, "original record offset");

FlagRecord_00309c0c * fn_00309c0c(FlagOwner_00309c0c *self);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0031b764;
_Static_assert(__builtin_offsetof(FlagRecord_0031b764, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[60];
    FlagRecord_0031b764 *record;
} FlagOwner_0031b764;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0031b764, record) == 60, "original record offset");

FlagRecord_0031b764 * fn_0031b764(FlagOwner_0031b764 *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0038df80;
_Static_assert(__builtin_offsetof(FlagRecord_0038df80, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[104];
    FlagRecord_0038df80 *record;
} FlagOwner_0038df80;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0038df80, record) == 104, "original record offset");

FlagRecord_0038df80 * fn_0038df80(FlagOwner_0038df80 *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_00394dc4;
_Static_assert(__builtin_offsetof(FlagRecord_00394dc4, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[24];
    FlagRecord_00394dc4 *record;
} FlagOwner_00394dc4;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_00394dc4, record) == 24, "original record offset");

FlagRecord_00394dc4 * fn_00394dc4(FlagOwner_00394dc4 *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_00394ddc;
_Static_assert(__builtin_offsetof(FlagRecord_00394ddc, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[28];
    FlagRecord_00394ddc *record;
} FlagOwner_00394ddc;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_00394ddc, record) == 28, "original record offset");

FlagRecord_00394ddc * fn_00394ddc(FlagOwner_00394ddc *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_00423200;
_Static_assert(__builtin_offsetof(FlagRecord_00423200, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[4];
    FlagRecord_00423200 *record;
} FlagOwner_00423200;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_00423200, record) == 4, "original record offset");

FlagRecord_00423200 * fn_00423200(FlagOwner_00423200 *self, u32 value);

#endif
