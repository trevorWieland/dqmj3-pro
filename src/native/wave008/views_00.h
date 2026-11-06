#ifndef DQMJ3_WAVE008_VIEWS_00_H
#define DQMJ3_WAVE008_VIEWS_00_H
#include "types.h"

typedef struct {
    u8 unknown_0000[28];
    u32 field_001c;
    u8 unknown_0020[2548];
    u32 flags_0a14;
} FlagRecord_0013d538;
_Static_assert(__builtin_offsetof(FlagRecord_0013d538, flags_0a14) == 2580, "measured flag offset");

u32 fn_0013d538(FlagRecord_0013d538 *self, u32 value);

typedef struct {
    u8 unknown_0000[20];
    u16 field_0014;
    u16 field_0016;
    u8 unknown_0018[2556];
    u32 flags_0a14;
} FlagRecord_0013d554;
_Static_assert(__builtin_offsetof(FlagRecord_0013d554, flags_0a14) == 2580, "measured flag offset");

u32 fn_0013d554(FlagRecord_0013d554 *self, u32 value);

typedef struct {
    u8 unknown_0000[68];
    u8 flags_0044;
} FlagRecord_0016ac3c;
_Static_assert(__builtin_offsetof(FlagRecord_0016ac3c, flags_0044) == 68, "measured flag offset");

typedef struct {
    u8 unknown_0000[48];
    FlagRecord_0016ac3c *record;
} FlagOwner_0016ac3c;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0016ac3c, record) == 48, "original record offset");

FlagRecord_0016ac3c * fn_0016ac3c(FlagOwner_0016ac3c *self, u32 value);

typedef struct {
    u8 unknown_0000[54];
    u16 flags_0036;
} FlagRecord_00170b94;
_Static_assert(__builtin_offsetof(FlagRecord_00170b94, flags_0036) == 54, "measured flag offset");

u32 fn_00170b94(FlagRecord_00170b94 *self, u32 value);

typedef struct {
    u8 unknown_0000[152];
    u8 flags_0098;
} FlagRecord_0017fc28;
_Static_assert(__builtin_offsetof(FlagRecord_0017fc28, flags_0098) == 152, "measured flag offset");

typedef struct {
    u8 unknown_0000[328];
    FlagRecord_0017fc28 *record;
} FlagOwner_0017fc28;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0017fc28, record) == 328, "original record offset");

FlagRecord_0017fc28 * fn_0017fc28(FlagOwner_0017fc28 *self, u32 value);

typedef struct {
    u8 unknown_0000[152];
    u8 flags_0098;
} FlagRecord_0017fcfc;
_Static_assert(__builtin_offsetof(FlagRecord_0017fcfc, flags_0098) == 152, "measured flag offset");

typedef struct {
    u8 unknown_0000[328];
    FlagRecord_0017fcfc *record;
} FlagOwner_0017fcfc;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0017fcfc, record) == 328, "original record offset");

FlagRecord_0017fcfc * fn_0017fcfc(FlagOwner_0017fcfc *self, u32 value);

typedef struct {
    u8 unknown_0000[30];
    u16 flags_001e;
} FlagRecord_001a3e54;
_Static_assert(__builtin_offsetof(FlagRecord_001a3e54, flags_001e) == 30, "measured flag offset");

typedef struct {
    u8 unknown_0000[104];
    FlagRecord_001a3e54 *record;
} FlagOwner_001a3e54;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_001a3e54, record) == 104, "original record offset");

FlagRecord_001a3e54 * fn_001a3e54(FlagOwner_001a3e54 *self, u32 value);

typedef struct {
    u8 unknown_0000[30];
    u16 flags_001e;
} FlagRecord_001a3e70;
_Static_assert(__builtin_offsetof(FlagRecord_001a3e70, flags_001e) == 30, "measured flag offset");

typedef struct {
    u8 unknown_0000[104];
    FlagRecord_001a3e70 *record;
} FlagOwner_001a3e70;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_001a3e70, record) == 104, "original record offset");

FlagRecord_001a3e70 * fn_001a3e70(FlagOwner_001a3e70 *self, u32 value);

typedef struct {
    u8 unknown_0000[64];
    u32 flags_0040;
} FlagRecord_0020b99c;
_Static_assert(__builtin_offsetof(FlagRecord_0020b99c, flags_0040) == 64, "measured flag offset");

typedef struct {
    u8 unknown_0000[4];
    FlagRecord_0020b99c *record;
} FlagOwner_0020b99c;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0020b99c, record) == 4, "original record offset");

FlagRecord_0020b99c * fn_0020b99c(FlagOwner_0020b99c *self);

typedef struct {
    u8 unknown_0000[64];
    u32 flags_0040;
} FlagRecord_0020b9b0;
_Static_assert(__builtin_offsetof(FlagRecord_0020b9b0, flags_0040) == 64, "measured flag offset");

typedef struct {
    u8 unknown_0000[4];
    FlagRecord_0020b9b0 *record;
} FlagOwner_0020b9b0;
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(FlagOwner_0020b9b0, record) == 4, "original record offset");

FlagRecord_0020b9b0 * fn_0020b9b0(FlagOwner_0020b9b0 *self);

#endif
