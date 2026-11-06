#ifndef DQMJ3_WAVE004_VIEWS_H
#define DQMJ3_WAVE004_VIEWS_H
#include "types.h"

typedef struct {
    u8 unknown_0000[4];
    u32 field_0004;
} FieldView_u32_0004;
_Static_assert(__builtin_offsetof(FieldView_u32_0004, field_0004) == 4, "measured field offset");

u32 fn_00108908(const FieldView_u32_0004 *record);
typedef struct {
    u8 unknown_0000[8];
    u32 field_0008;
} FieldView_u32_0008;
_Static_assert(__builtin_offsetof(FieldView_u32_0008, field_0008) == 8, "measured field offset");

u32 fn_00145900(const FieldView_u32_0008 *record);
u32 fn_00145940(const FieldView_u32_0004 *record);
u32 fn_0015664c(const FieldView_u32_0004 *record);
typedef struct {
    u8 unknown_0000[3];
    u8 field_0003;
} FieldView_u8_0003;
_Static_assert(__builtin_offsetof(FieldView_u8_0003, field_0003) == 3, "measured field offset");

u32 fn_0015f1b0(const FieldView_u8_0003 *record);
u32 fn_00176ae4(const FieldView_u32_0004 *record);
u32 fn_00176b10(const FieldView_u32_0004 *record);
typedef struct {
    u8 unknown_0000[12];
    u32 field_000c;
} FieldView_u32_000c;
_Static_assert(__builtin_offsetof(FieldView_u32_000c, field_000c) == 12, "measured field offset");

u32 fn_001854d4(const FieldView_u32_000c *record);
u32 fn_001c8ab4(const FieldView_u32_0008 *record);
typedef struct {
    u8 unknown_0000[16];
    u32 field_0010;
} FieldView_u32_0010;
_Static_assert(__builtin_offsetof(FieldView_u32_0010, field_0010) == 16, "measured field offset");

u32 fn_001c9358(const FieldView_u32_0010 *record);
typedef struct {
    u8 unknown_0000[2];
    s16 field_0002;
} FieldView_s16_0002;
_Static_assert(__builtin_offsetof(FieldView_s16_0002, field_0002) == 2, "measured field offset");

s32 fn_0025fe18(const FieldView_s16_0002 *record);
typedef struct {
    u8 unknown_0000[65];
    s8 field_0041;
} FieldView_s8_0041;
_Static_assert(__builtin_offsetof(FieldView_s8_0041, field_0041) == 65, "measured field offset");

s32 fn_002b5570(const FieldView_s8_0041 *record);
typedef struct {
    u8 unknown_0000[112];
    u8 field_0070;
} FieldView_u8_0070;
_Static_assert(__builtin_offsetof(FieldView_u8_0070, field_0070) == 112, "measured field offset");

u32 fn_004f2a00(const FieldView_u8_0070 *record);
typedef struct {
    u8 unknown_0000[1208];
    u32 field_04b8;
} FieldView_u32_04b8;
_Static_assert(__builtin_offsetof(FieldView_u32_04b8, field_04b8) == 1208, "measured field offset");

u32 fn_0053fb20(const FieldView_u32_04b8 *record);
typedef struct {
    u8 unknown_0000[224];
    u32 field_00e0;
} FieldView_u32_00e0;
_Static_assert(__builtin_offsetof(FieldView_u32_00e0, field_00e0) == 224, "measured field offset");

u32 fn_0066d0c8(const FieldView_u32_00e0 *record);
typedef struct {
    u8 unknown_0000[120];
    s8 field_0078;
} FieldView_s8_0078;
_Static_assert(__builtin_offsetof(FieldView_s8_0078, field_0078) == 120, "measured field offset");

s32 fn_006741c0(const FieldView_s8_0078 *record);
typedef struct {
    u8 unknown_0000[56];
    s8 field_0038;
} FieldView_s8_0038;
_Static_assert(__builtin_offsetof(FieldView_s8_0038, field_0038) == 56, "measured field offset");

s32 fn_006bc184(const FieldView_s8_0038 *record);
u32 fn_006bea40(const FieldView_u8_0003 *record);
typedef struct {
    u16 field_0000;
} FieldView_u16_0000;
_Static_assert(__builtin_offsetof(FieldView_u16_0000, field_0000) == 0, "measured field offset");

u32 fn_006bea64(const FieldView_u16_0000 *record);
typedef struct {
    u8 unknown_0000[2];
    u8 field_0002;
} FieldView_u8_0002;
_Static_assert(__builtin_offsetof(FieldView_u8_0002, field_0002) == 2, "measured field offset");

u32 fn_006bea88(const FieldView_u8_0002 *record);
u32 fn_006beb04(const FieldView_u8_0003 *record);
u32 fn_006beb5c(const FieldView_u16_0000 *record);
u32 fn_006bebb4(const FieldView_u8_0002 *record);
typedef struct {
    u8 unknown_0000[84];
    s8 field_0054;
} FieldView_s8_0054;
_Static_assert(__builtin_offsetof(FieldView_s8_0054, field_0054) == 84, "measured field offset");

s32 fn_006c8318(const FieldView_s8_0054 *record);
typedef struct {
    u8 unknown_0000[72];
    u32 field_0048;
} FieldView_u32_0048;
_Static_assert(__builtin_offsetof(FieldView_u32_0048, field_0048) == 72, "measured field offset");

u32 fn_006e6e58(const FieldView_u32_0048 *record);
typedef struct {
    u8 unknown_0000[68];
    u32 field_0044;
} FieldView_u32_0044;
_Static_assert(__builtin_offsetof(FieldView_u32_0044, field_0044) == 68, "measured field offset");

u32 fn_006e6ea8(const FieldView_u32_0044 *record);
#endif
