#ifndef DQMJ3_WAVE002_VIEWS_03_H
#define DQMJ3_WAVE002_VIEWS_03_H
#include "types.h"

typedef struct {
    u32 field_0000;
    u8 unknown_0004[76];
    u32 field_0050;
    u8 unknown_0054[24];
    u32 field_006c;
    u8 unknown_0070[44];
    u32 field_009c;
} RecordView_006eb_p0148_u32;
typedef struct {
    u8 unknown_0000[328];
    const RecordView_006eb_p0148_u32 *record;
} HandleView_006eb_p0148_u32;
_Static_assert(__builtin_offsetof(RecordView_006eb_p0148_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006eb_p0148_u32, field_0050) == 80, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006eb_p0148_u32, field_006c) == 108, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006eb_p0148_u32, field_009c) == 156, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006eb_p0148_u32, record) == 328, "target handle offset");

typedef struct {
    u8 unknown_0000[4];
    u8 field_0004;
    u8 field_0005;
} RecordView_006eb_p0148_u8;
typedef struct {
    u8 unknown_0000[328];
    const RecordView_006eb_p0148_u8 *record;
} HandleView_006eb_p0148_u8;
_Static_assert(__builtin_offsetof(RecordView_006eb_p0148_u8, field_0004) == 4, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006eb_p0148_u8, field_0005) == 5, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006eb_p0148_u8, record) == 328, "target handle offset");

typedef struct {
    u8 unknown_0000[12];
    u32 field_000c;
    u32 field_0010;
    u32 field_0014;
    u32 field_0018;
    u32 field_001c;
    u8 unknown_0020[4];
    u32 field_0024;
    u8 unknown_0028[8];
    u32 field_0030;
    u8 unknown_0034[16];
    u32 field_0044;
    u8 unknown_0048[4];
    u32 field_004c;
} RecordView_006ec_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006ec_p0004_u32 *record;
} HandleView_006ec_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_000c) == 12, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_0010) == 16, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_0014) == 20, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_0018) == 24, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_001c) == 28, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_0024) == 36, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_0030) == 48, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_0044) == 68, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_u32, field_004c) == 76, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006ec_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[80];
    s8 field_0050;
} RecordView_006ec_p0004_s8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006ec_p0004_s8 *record;
} HandleView_006ec_p0004_s8;
_Static_assert(__builtin_offsetof(RecordView_006ec_p0004_s8, field_0050) == 80, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006ec_p0004_s8, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[12];
    u32 field_000c;
    u8 unknown_0010[28];
    u32 field_002c;
} RecordView_006ed_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006ed_p0004_u32 *record;
} HandleView_006ed_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006ed_p0004_u32, field_000c) == 12, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ed_p0004_u32, field_002c) == 44, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006ed_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[48];
    s16 field_0030;
} RecordView_006ed_p0004_s16;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006ed_p0004_s16 *record;
} HandleView_006ed_p0004_s16;
_Static_assert(__builtin_offsetof(RecordView_006ed_p0004_s16, field_0030) == 48, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006ed_p0004_s16, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[8];
    u32 field_0008;
    u32 field_000c;
    u32 field_0010;
    u8 unknown_0014[20];
    u32 field_0028;
    u32 field_002c;
} RecordView_006f6_p003c_u32;
typedef struct {
    u8 unknown_0000[60];
    const RecordView_006f6_p003c_u32 *record;
} HandleView_006f6_p003c_u32;
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_u32, field_0008) == 8, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_u32, field_000c) == 12, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_u32, field_0010) == 16, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_u32, field_0028) == 40, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_u32, field_002c) == 44, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006f6_p003c_u32, record) == 60, "target handle offset");

typedef struct {
    u8 unknown_0000[32];
    s8 field_0020;
    s8 field_0021;
    s8 field_0022;
    s8 field_0023;
} RecordView_006f6_p003c_s8;
typedef struct {
    u8 unknown_0000[60];
    const RecordView_006f6_p003c_s8 *record;
} HandleView_006f6_p003c_s8;
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_s8, field_0020) == 32, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_s8, field_0021) == 33, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_s8, field_0022) == 34, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006f6_p003c_s8, field_0023) == 35, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006f6_p003c_s8, record) == 60, "target handle offset");

typedef struct {
    u8 unknown_0000[49];
    u8 field_0031;
} RecordView_006f6_p005c_u8;
typedef struct {
    u8 unknown_0000[92];
    const RecordView_006f6_p005c_u8 *record;
} HandleView_006f6_p005c_u8;
_Static_assert(__builtin_offsetof(RecordView_006f6_p005c_u8, field_0031) == 49, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006f6_p005c_u8, record) == 92, "target handle offset");

#endif
