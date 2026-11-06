#ifndef DQMJ3_WAVE002_VIEWS_00_H
#define DQMJ3_WAVE002_VIEWS_00_H
#include "types.h"

typedef struct {
    u8 unknown_0000[144];
    u32 field_0090;
} RecordView_00108_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_00108_p0004_u32 *record;
} HandleView_00108_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_00108_p0004_u32, field_0090) == 144, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00108_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[96];
    u32 field_0060;
} RecordView_0010f_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_0010f_p0004_u32 *record;
} HandleView_0010f_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_0010f_p0004_u32, field_0060) == 96, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0010f_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[140];
    s8 field_008c;
} RecordView_0010f_p0004_s8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_0010f_p0004_s8 *record;
} HandleView_0010f_p0004_s8;
_Static_assert(__builtin_offsetof(RecordView_0010f_p0004_s8, field_008c) == 140, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0010f_p0004_s8, record) == 4, "target handle offset");

typedef struct {
    u32 field_0000;
} RecordView_00117_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_00117_p0004_u32 *record;
} HandleView_00117_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_00117_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00117_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[1264];
    u8 field_04f0;
} RecordView_00129_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_00129_p0004_u8 *record;
} HandleView_00129_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_00129_p0004_u8, field_04f0) == 1264, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00129_p0004_u8, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[44];
    u32 field_002c;
    u8 unknown_0030[40];
    u32 field_0058;
} RecordView_00144_p0000_u32;
typedef struct {
    const RecordView_00144_p0000_u32 *record;
} HandleView_00144_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_00144_p0000_u32, field_002c) == 44, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_00144_p0000_u32, field_0058) == 88, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00144_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 field_0000;
} RecordView_00145_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_00145_p0004_u8 *record;
} HandleView_00145_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_00145_p0004_u8, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00145_p0004_u8, record) == 4, "target handle offset");

typedef struct {
    u32 field_0000;
    u8 unknown_0004[56];
    u32 field_003c;
} RecordView_00154_p0000_u32;
typedef struct {
    const RecordView_00154_p0000_u32 *record;
} HandleView_00154_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_00154_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_00154_p0000_u32, field_003c) == 60, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00154_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[20];
    u32 field_0014;
} RecordView_0015c_p004c_u32;
typedef struct {
    u8 unknown_0000[76];
    const RecordView_0015c_p004c_u32 *record;
} HandleView_0015c_p004c_u32;
_Static_assert(__builtin_offsetof(RecordView_0015c_p004c_u32, field_0014) == 20, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0015c_p004c_u32, record) == 76, "target handle offset");

typedef struct {
    u8 unknown_0000[44];
    u32 field_002c;
} RecordView_00163_p0000_u32;
typedef struct {
    const RecordView_00163_p0000_u32 *record;
} HandleView_00163_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_00163_p0000_u32, field_002c) == 44, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00163_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u32 field_0000;
} RecordView_00166_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_00166_p0004_u32 *record;
} HandleView_00166_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_00166_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00166_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u32 field_0000;
} RecordView_00176_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_00176_p0004_u32 *record;
} HandleView_00176_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_00176_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00176_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[8];
    u16 field_0008;
} RecordView_00176_p000c_u16;
typedef struct {
    u8 unknown_0000[12];
    const RecordView_00176_p000c_u16 *record;
} HandleView_00176_p000c_u16;
_Static_assert(__builtin_offsetof(RecordView_00176_p000c_u16, field_0008) == 8, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00176_p000c_u16, record) == 12, "target handle offset");

typedef struct {
    u32 field_0000;
} RecordView_0017f_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_0017f_p0004_u32 *record;
} HandleView_0017f_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_0017f_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0017f_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[60];
    u32 field_003c;
    u8 unknown_0040[32];
    u32 field_0060;
} RecordView_00182_p0000_u32;
typedef struct {
    const RecordView_00182_p0000_u32 *record;
} HandleView_00182_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_00182_p0000_u32, field_003c) == 60, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_00182_p0000_u32, field_0060) == 96, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00182_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[44];
    u32 field_002c;
} RecordView_00183_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_00183_p0004_u32 *record;
} HandleView_00183_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_00183_p0004_u32, field_002c) == 44, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00183_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[8];
    u32 field_0008;
} RecordView_00183_p0148_u32;
typedef struct {
    u8 unknown_0000[328];
    const RecordView_00183_p0148_u32 *record;
} HandleView_00183_p0148_u32;
_Static_assert(__builtin_offsetof(RecordView_00183_p0148_u32, field_0008) == 8, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00183_p0148_u32, record) == 328, "target handle offset");

typedef struct {
    u8 unknown_0000[8];
    u32 field_0008;
} RecordView_00189_p0008_u32;
typedef struct {
    u8 unknown_0000[8];
    const RecordView_00189_p0008_u32 *record;
} HandleView_00189_p0008_u32;
_Static_assert(__builtin_offsetof(RecordView_00189_p0008_u32, field_0008) == 8, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00189_p0008_u32, record) == 8, "target handle offset");

typedef struct {
    u8 unknown_0000[92];
    u32 field_005c;
} RecordView_00190_p0000_u32;
typedef struct {
    const RecordView_00190_p0000_u32 *record;
} HandleView_00190_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_00190_p0000_u32, field_005c) == 92, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00190_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[116];
    u32 field_0074;
} RecordView_0019b_p0148_u32;
typedef struct {
    u8 unknown_0000[328];
    const RecordView_0019b_p0148_u32 *record;
} HandleView_0019b_p0148_u32;
_Static_assert(__builtin_offsetof(RecordView_0019b_p0148_u32, field_0074) == 116, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0019b_p0148_u32, record) == 328, "target handle offset");

typedef struct {
    u8 unknown_0000[16];
    u32 field_0010;
    u32 field_0014;
    u32 field_0018;
    u8 unknown_001c[76];
    u32 field_0068;
    u8 unknown_006c[132];
    u32 field_00f0;
    u8 unknown_00f4[240];
    u32 field_01e4;
} RecordView_001c2_p0000_u32;
typedef struct {
    const RecordView_001c2_p0000_u32 *record;
} HandleView_001c2_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_001c2_p0000_u32, field_0010) == 16, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_001c2_p0000_u32, field_0014) == 20, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_001c2_p0000_u32, field_0018) == 24, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_001c2_p0000_u32, field_0068) == 104, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_001c2_p0000_u32, field_00f0) == 240, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_001c2_p0000_u32, field_01e4) == 484, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_001c2_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[52];
    u32 field_0034;
} RecordView_001cc_p0000_u32;
typedef struct {
    const RecordView_001cc_p0000_u32 *record;
} HandleView_001cc_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_001cc_p0000_u32, field_0034) == 52, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_001cc_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[172];
    u32 field_00ac;
} RecordView_001fe_p0000_u32;
typedef struct {
    const RecordView_001fe_p0000_u32 *record;
} HandleView_001fe_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_001fe_p0000_u32, field_00ac) == 172, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_001fe_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u32 field_0000;
    u32 field_0004;
    u32 field_0008;
} RecordView_00228_p0000_u32;
typedef struct {
    const RecordView_00228_p0000_u32 *record;
} HandleView_00228_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_00228_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_00228_p0000_u32, field_0004) == 4, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_00228_p0000_u32, field_0008) == 8, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00228_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[104];
    s8 field_0068;
} RecordView_00266_p0000_s8;
typedef struct {
    const RecordView_00266_p0000_s8 *record;
} HandleView_00266_p0000_s8;
_Static_assert(__builtin_offsetof(RecordView_00266_p0000_s8, field_0068) == 104, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00266_p0000_s8, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[40];
    u32 field_0028;
} RecordView_002b0_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_002b0_p0004_u32 *record;
} HandleView_002b0_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_002b0_p0004_u32, field_0028) == 40, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_002b0_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[2];
    u8 field_0002;
    u8 field_0003;
    u8 unknown_0004[2];
    u8 field_0006;
    u8 field_0007;
    u8 unknown_0008[8];
    u8 field_0010;
} RecordView_002b0_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_002b0_p0004_u8 *record;
} HandleView_002b0_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_002b0_p0004_u8, field_0002) == 2, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_002b0_p0004_u8, field_0003) == 3, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_002b0_p0004_u8, field_0006) == 6, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_002b0_p0004_u8, field_0007) == 7, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_002b0_p0004_u8, field_0010) == 16, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_002b0_p0004_u8, record) == 4, "target handle offset");

typedef struct {
    u16 field_0000;
    u8 unknown_0002[2];
    u16 field_0004;
} RecordView_002b0_p0004_u16;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_002b0_p0004_u16 *record;
} HandleView_002b0_p0004_u16;
_Static_assert(__builtin_offsetof(RecordView_002b0_p0004_u16, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_002b0_p0004_u16, field_0004) == 4, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_002b0_p0004_u16, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[12];
    s8 field_000c;
    s8 field_000d;
} RecordView_00304_p0000_s8;
typedef struct {
    const RecordView_00304_p0000_s8 *record;
} HandleView_00304_p0000_s8;
_Static_assert(__builtin_offsetof(RecordView_00304_p0000_s8, field_000c) == 12, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_00304_p0000_s8, field_000d) == 13, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00304_p0000_s8, record) == 0, "target handle offset");

typedef struct {
    u32 field_0000;
} RecordView_0030f_p0000_u32;
typedef struct {
    const RecordView_0030f_p0000_u32 *record;
} HandleView_0030f_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_0030f_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0030f_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[28];
    u32 field_001c;
} RecordView_0037d_p0014_u32;
typedef struct {
    u8 unknown_0000[20];
    const RecordView_0037d_p0014_u32 *record;
} HandleView_0037d_p0014_u32;
_Static_assert(__builtin_offsetof(RecordView_0037d_p0014_u32, field_001c) == 28, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0037d_p0014_u32, record) == 20, "target handle offset");

typedef struct {
    u8 unknown_0000[28];
    u32 field_001c;
} RecordView_00394_p0014_u32;
typedef struct {
    u8 unknown_0000[20];
    const RecordView_00394_p0014_u32 *record;
} HandleView_00394_p0014_u32;
_Static_assert(__builtin_offsetof(RecordView_00394_p0014_u32, field_001c) == 28, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00394_p0014_u32, record) == 20, "target handle offset");

typedef struct {
    u8 unknown_0000[41];
    s8 field_0029;
} RecordView_003a8_p0074_s8;
typedef struct {
    u8 unknown_0000[116];
    const RecordView_003a8_p0074_s8 *record;
} HandleView_003a8_p0074_s8;
_Static_assert(__builtin_offsetof(RecordView_003a8_p0074_s8, field_0029) == 41, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_003a8_p0074_s8, record) == 116, "target handle offset");

typedef struct {
    u8 unknown_0000[132];
    u32 field_0084;
} RecordView_0041c_p0000_u32;
typedef struct {
    const RecordView_0041c_p0000_u32 *record;
} HandleView_0041c_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_0041c_p0000_u32, field_0084) == 132, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0041c_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[8];
    u32 field_0008;
} RecordView_005e0_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_005e0_p0004_u32 *record;
} HandleView_005e0_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_005e0_p0004_u32, field_0008) == 8, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_005e0_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u32 field_0000;
    u8 unknown_0004[8];
    u32 field_000c;
    u8 unknown_0010[8];
    u32 field_0018;
    u8 unknown_001c[8];
    u32 field_0024;
} RecordView_005e2_p0000_u32;
typedef struct {
    const RecordView_005e2_p0000_u32 *record;
} HandleView_005e2_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_005e2_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e2_p0000_u32, field_000c) == 12, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e2_p0000_u32, field_0018) == 24, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e2_p0000_u32, field_0024) == 36, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_005e2_p0000_u32, record) == 0, "target handle offset");

#endif
