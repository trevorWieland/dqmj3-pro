#ifndef DQMJ3_WAVE002_VIEWS_02_H
#define DQMJ3_WAVE002_VIEWS_02_H
#include "types.h"

typedef struct {
    u8 unknown_0000[30];
    u16 field_001e;
    u16 field_0020;
    u16 field_0022;
    u16 field_0024;
    u16 field_0026;
    u16 field_0028;
    u16 field_002a;
    u8 unknown_002c[2];
    u16 field_002e;
    u16 field_0030;
    u16 field_0032;
    u8 unknown_0034[36];
    u16 field_0058;
} RecordView_006b6_p0004_u16;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b6_p0004_u16 *record;
} HandleView_006b6_p0004_u16;
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_001e) == 30, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_0020) == 32, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_0022) == 34, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_0024) == 36, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_0026) == 38, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_0028) == 40, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_002a) == 42, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_002e) == 46, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_0030) == 48, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_0032) == 50, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u16, field_0058) == 88, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b6_p0004_u16, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[4];
    u32 field_0004;
} RecordView_006b7_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b7_p0004_u32 *record;
} HandleView_006b7_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006b7_p0004_u32, field_0004) == 4, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b7_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 field_0000;
} RecordView_006b7_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b7_p0004_u8 *record;
} HandleView_006b7_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_006b7_p0004_u8, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b7_p0004_u8, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[1];
    s8 field_0001;
} RecordView_006b7_p0004_s8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b7_p0004_s8 *record;
} HandleView_006b7_p0004_s8;
_Static_assert(__builtin_offsetof(RecordView_006b7_p0004_s8, field_0001) == 1, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b7_p0004_s8, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[36];
    u32 field_0024;
    u32 field_0028;
    u8 unknown_002c[52];
    u32 field_0060;
} RecordView_006b8_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b8_p0004_u32 *record;
} HandleView_006b8_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006b8_p0004_u32, field_0024) == 36, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b8_p0004_u32, field_0028) == 40, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b8_p0004_u32, field_0060) == 96, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b8_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[200];
    u32 field_00c8;
    u32 field_00cc;
} RecordView_006ba_p000c_u32;
typedef struct {
    u8 unknown_0000[12];
    const RecordView_006ba_p000c_u32 *record;
} HandleView_006ba_p000c_u32;
_Static_assert(__builtin_offsetof(RecordView_006ba_p000c_u32, field_00c8) == 200, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ba_p000c_u32, field_00cc) == 204, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006ba_p000c_u32, record) == 12, "target handle offset");

typedef struct {
    u8 unknown_0000[204];
    u32 field_00cc;
    u8 unknown_00d0[20];
    u32 field_00e4;
} RecordView_006ba_p009c_u32;
typedef struct {
    u8 unknown_0000[156];
    const RecordView_006ba_p009c_u32 *record;
} HandleView_006ba_p009c_u32;
_Static_assert(__builtin_offsetof(RecordView_006ba_p009c_u32, field_00cc) == 204, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006ba_p009c_u32, field_00e4) == 228, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006ba_p009c_u32, record) == 156, "target handle offset");

typedef struct {
    u8 unknown_0000[16];
    u32 field_0010;
} RecordView_006bb_p0188_u32;
typedef struct {
    u8 unknown_0000[392];
    const RecordView_006bb_p0188_u32 *record;
} HandleView_006bb_p0188_u32;
_Static_assert(__builtin_offsetof(RecordView_006bb_p0188_u32, field_0010) == 16, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006bb_p0188_u32, record) == 392, "target handle offset");

typedef struct {
    u32 field_0000;
} RecordView_006bd_p0000_u32;
typedef struct {
    const RecordView_006bd_p0000_u32 *record;
} HandleView_006bd_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_006bd_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006bd_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[97];
    s8 field_0061;
} RecordView_006bd_p0014_s8;
typedef struct {
    u8 unknown_0000[20];
    const RecordView_006bd_p0014_s8 *record;
} HandleView_006bd_p0014_s8;
_Static_assert(__builtin_offsetof(RecordView_006bd_p0014_s8, field_0061) == 97, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006bd_p0014_s8, record) == 20, "target handle offset");

typedef struct {
    u32 field_0000;
    u32 field_0004;
    u32 field_0008;
    u32 field_000c;
} RecordView_006be_p0000_u32;
typedef struct {
    const RecordView_006be_p0000_u32 *record;
} HandleView_006be_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_006be_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006be_p0000_u32, field_0004) == 4, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006be_p0000_u32, field_0008) == 8, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006be_p0000_u32, field_000c) == 12, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006be_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[73];
    s8 field_0049;
} RecordView_006be_p0000_s8;
typedef struct {
    const RecordView_006be_p0000_s8 *record;
} HandleView_006be_p0000_s8;
_Static_assert(__builtin_offsetof(RecordView_006be_p0000_s8, field_0049) == 73, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006be_p0000_s8, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[18];
    u8 field_0012;
    u8 field_0013;
} RecordView_006be_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006be_p0004_u8 *record;
} HandleView_006be_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_006be_p0004_u8, field_0012) == 18, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006be_p0004_u8, field_0013) == 19, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006be_p0004_u8, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[16];
    u16 field_0010;
} RecordView_006be_p0004_u16;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006be_p0004_u16 *record;
} HandleView_006be_p0004_u16;
_Static_assert(__builtin_offsetof(RecordView_006be_p0004_u16, field_0010) == 16, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006be_p0004_u16, record) == 4, "target handle offset");

typedef struct {
    u32 field_0000;
    u8 unknown_0004[44];
    u32 field_0030;
    u32 field_0034;
} RecordView_006bf_p0000_u32;
typedef struct {
    const RecordView_006bf_p0000_u32 *record;
} HandleView_006bf_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_u32, field_0030) == 48, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_u32, field_0034) == 52, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006bf_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[47];
    u8 field_002f;
    u8 unknown_0030[12];
    u8 field_003c;
} RecordView_006bf_p0000_u8;
typedef struct {
    const RecordView_006bf_p0000_u8 *record;
} HandleView_006bf_p0000_u8;
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_u8, field_002f) == 47, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_u8, field_003c) == 60, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006bf_p0000_u8, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[28];
    s16 field_001c;
    u8 unknown_001e[4];
    s16 field_0022;
    s16 field_0024;
    u8 unknown_0026[20];
    s16 field_003a;
} RecordView_006bf_p0000_s16;
typedef struct {
    const RecordView_006bf_p0000_s16 *record;
} HandleView_006bf_p0000_s16;
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_s16, field_001c) == 28, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_s16, field_0022) == 34, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_s16, field_0024) == 36, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006bf_p0000_s16, field_003a) == 58, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006bf_p0000_s16, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[46];
    u8 field_002e;
} RecordView_006c0_p0000_u8;
typedef struct {
    const RecordView_006c0_p0000_u8 *record;
} HandleView_006c0_p0000_u8;
_Static_assert(__builtin_offsetof(RecordView_006c0_p0000_u8, field_002e) == 46, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c0_p0000_u8, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[76];
    u32 field_004c;
} RecordView_006c3_p0000_u32;
typedef struct {
    const RecordView_006c3_p0000_u32 *record;
} HandleView_006c3_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_006c3_p0000_u32, field_004c) == 76, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c3_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[72];
    u16 field_0048;
    u16 field_004a;
} RecordView_006c3_p0000_u16;
typedef struct {
    const RecordView_006c3_p0000_u16 *record;
} HandleView_006c3_p0000_u16;
_Static_assert(__builtin_offsetof(RecordView_006c3_p0000_u16, field_0048) == 72, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006c3_p0000_u16, field_004a) == 74, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c3_p0000_u16, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[72];
    s8 field_0048;
    s8 field_0049;
} RecordView_006c3_p0000_s8;
typedef struct {
    const RecordView_006c3_p0000_s8 *record;
} HandleView_006c3_p0000_s8;
_Static_assert(__builtin_offsetof(RecordView_006c3_p0000_s8, field_0048) == 72, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006c3_p0000_s8, field_0049) == 73, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c3_p0000_s8, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[40];
    u32 field_0028;
} RecordView_006c3_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006c3_p0004_u32 *record;
} HandleView_006c3_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006c3_p0004_u32, field_0028) == 40, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c3_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[36];
    s8 field_0024;
} RecordView_006c3_p0004_s8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006c3_p0004_s8 *record;
} HandleView_006c3_p0004_s8;
_Static_assert(__builtin_offsetof(RecordView_006c3_p0004_s8, field_0024) == 36, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c3_p0004_s8, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[2];
    u8 field_0002;
    u8 field_0003;
} RecordView_006c4_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006c4_p0004_u8 *record;
} HandleView_006c4_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_006c4_p0004_u8, field_0002) == 2, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006c4_p0004_u8, field_0003) == 3, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c4_p0004_u8, record) == 4, "target handle offset");

typedef struct {
    u32 field_0000;
} RecordView_006c6_p0000_u32;
typedef struct {
    const RecordView_006c6_p0000_u32 *record;
} HandleView_006c6_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_006c6_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c6_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[28];
    s16 field_001c;
} RecordView_006c6_p0000_s16;
typedef struct {
    const RecordView_006c6_p0000_s16 *record;
} HandleView_006c6_p0000_s16;
_Static_assert(__builtin_offsetof(RecordView_006c6_p0000_s16, field_001c) == 28, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c6_p0000_s16, record) == 0, "target handle offset");

typedef struct {
    s16 field_0000;
} RecordView_006c9_p0054_s16;
typedef struct {
    u8 unknown_0000[84];
    const RecordView_006c9_p0054_s16 *record;
} HandleView_006c9_p0054_s16;
_Static_assert(__builtin_offsetof(RecordView_006c9_p0054_s16, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006c9_p0054_s16, record) == 84, "target handle offset");

typedef struct {
    u8 unknown_0000[11];
    u8 field_000b;
} RecordView_006ca_p0008_u8;
typedef struct {
    u8 unknown_0000[8];
    const RecordView_006ca_p0008_u8 *record;
} HandleView_006ca_p0008_u8;
_Static_assert(__builtin_offsetof(RecordView_006ca_p0008_u8, field_000b) == 11, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006ca_p0008_u8, record) == 8, "target handle offset");

typedef struct {
    u8 unknown_0000[12];
    s16 field_000c;
} RecordView_006cb_p0008_s16;
typedef struct {
    u8 unknown_0000[8];
    const RecordView_006cb_p0008_s16 *record;
} HandleView_006cb_p0008_s16;
_Static_assert(__builtin_offsetof(RecordView_006cb_p0008_s16, field_000c) == 12, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006cb_p0008_s16, record) == 8, "target handle offset");

typedef struct {
    u8 unknown_0000[9];
    s8 field_0009;
} RecordView_006cb_p00fc_s8;
typedef struct {
    u8 unknown_0000[252];
    const RecordView_006cb_p00fc_s8 *record;
} HandleView_006cb_p00fc_s8;
_Static_assert(__builtin_offsetof(RecordView_006cb_p00fc_s8, field_0009) == 9, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006cb_p00fc_s8, record) == 252, "target handle offset");

typedef struct {
    u8 unknown_0000[8];
    u8 field_0008;
} RecordView_006cc_p0008_u8;
typedef struct {
    u8 unknown_0000[8];
    const RecordView_006cc_p0008_u8 *record;
} HandleView_006cc_p0008_u8;
_Static_assert(__builtin_offsetof(RecordView_006cc_p0008_u8, field_0008) == 8, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006cc_p0008_u8, record) == 8, "target handle offset");

typedef struct {
    u8 unknown_0000[348];
    u32 field_015c;
} RecordView_006db_p002c_u32;
typedef struct {
    u8 unknown_0000[44];
    const RecordView_006db_p002c_u32 *record;
} HandleView_006db_p002c_u32;
_Static_assert(__builtin_offsetof(RecordView_006db_p002c_u32, field_015c) == 348, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006db_p002c_u32, record) == 44, "target handle offset");

typedef struct {
    u32 field_0000;
    u32 field_0004;
    u32 field_0008;
    u8 unknown_000c[4];
    u32 field_0010;
} RecordView_006e9_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006e9_p0004_u32 *record;
} HandleView_006e9_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006e9_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006e9_p0004_u32, field_0004) == 4, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006e9_p0004_u32, field_0008) == 8, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006e9_p0004_u32, field_0010) == 16, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006e9_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u32 field_0000;
    u32 field_0004;
    u32 field_0008;
    u32 field_000c;
    u8 unknown_0010[20];
    u32 field_0024;
} RecordView_006eb_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006eb_p0004_u32 *record;
} HandleView_006eb_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006eb_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006eb_p0004_u32, field_0004) == 4, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006eb_p0004_u32, field_0008) == 8, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006eb_p0004_u32, field_000c) == 12, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006eb_p0004_u32, field_0024) == 36, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006eb_p0004_u32, record) == 4, "target handle offset");

#endif
