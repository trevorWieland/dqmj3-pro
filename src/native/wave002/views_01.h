#ifndef DQMJ3_WAVE002_VIEWS_01_H
#define DQMJ3_WAVE002_VIEWS_01_H
#include "types.h"

typedef struct {
    u8 unknown_0000[4];
    u32 field_0004;
    u8 unknown_0008[8];
    u32 field_0010;
    u8 unknown_0014[8];
    u32 field_001c;
    u8 unknown_0020[8];
    u32 field_0028;
} RecordView_005e3_p0000_u32;
typedef struct {
    const RecordView_005e3_p0000_u32 *record;
} HandleView_005e3_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_005e3_p0000_u32, field_0004) == 4, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e3_p0000_u32, field_0010) == 16, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e3_p0000_u32, field_001c) == 28, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e3_p0000_u32, field_0028) == 40, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_005e3_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u32 field_0000;
    u8 unknown_0004[4];
    u32 field_0008;
    u32 field_000c;
    u8 unknown_0010[4];
    u32 field_0014;
    u32 field_0018;
} RecordView_005e4_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_005e4_p0004_u32 *record;
} HandleView_005e4_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_005e4_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e4_p0004_u32, field_0008) == 8, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e4_p0004_u32, field_000c) == 12, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e4_p0004_u32, field_0014) == 20, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_005e4_p0004_u32, field_0018) == 24, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_005e4_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[68];
    u32 field_0044;
} RecordView_005e5_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_005e5_p0004_u32 *record;
} HandleView_005e5_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_005e5_p0004_u32, field_0044) == 68, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_005e5_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[72];
    u32 field_0048;
} RecordView_005e6_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_005e6_p0004_u32 *record;
} HandleView_005e6_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_005e6_p0004_u32, field_0048) == 72, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_005e6_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u32 field_0000;
} RecordView_005f0_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_005f0_p0004_u32 *record;
} HandleView_005f0_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_005f0_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_005f0_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[40];
    u32 field_0028;
    u32 field_002c;
} RecordView_00664_p0000_u32;
typedef struct {
    const RecordView_00664_p0000_u32 *record;
} HandleView_00664_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_00664_p0000_u32, field_0028) == 40, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_00664_p0000_u32, field_002c) == 44, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_00664_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[48];
    u32 field_0030;
    u8 unknown_0034[4];
    u32 field_0038;
    u8 unknown_003c[4];
    u32 field_0040;
    u8 unknown_0044[16];
    u32 field_0054;
    u8 unknown_0058[636];
    u32 field_02d4;
    u32 field_02d8;
    u32 field_02dc;
    u8 unknown_02e0[16];
    u32 field_02f0;
    u32 field_02f4;
    u8 unknown_02f8[16];
    u32 field_0308;
    u32 field_030c;
    u32 field_0310;
    u8 unknown_0314[4];
    u32 field_0318;
    u8 unknown_031c[8];
    u32 field_0324;
    u8 unknown_0328[20];
    u32 field_033c;
} RecordView_0068c_p0000_u32;
typedef struct {
    const RecordView_0068c_p0000_u32 *record;
} HandleView_0068c_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_0030) == 48, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_0038) == 56, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_0040) == 64, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_0054) == 84, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_02d4) == 724, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_02d8) == 728, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_02dc) == 732, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_02f0) == 752, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_02f4) == 756, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_0308) == 776, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_030c) == 780, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_0310) == 784, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_0318) == 792, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_0324) == 804, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068c_p0000_u32, field_033c) == 828, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0068c_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[40];
    u32 field_0028;
    u8 unknown_002c[24];
    u32 field_0044;
    u32 field_0048;
    u8 unknown_004c[16];
    u32 field_005c;
    u8 unknown_0060[672];
    u32 field_0300;
    u8 unknown_0304[16];
    u32 field_0314;
} RecordView_0068e_p0000_u32;
typedef struct {
    const RecordView_0068e_p0000_u32 *record;
} HandleView_0068e_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_0068e_p0000_u32, field_0028) == 40, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068e_p0000_u32, field_0044) == 68, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068e_p0000_u32, field_0048) == 72, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068e_p0000_u32, field_005c) == 92, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068e_p0000_u32, field_0300) == 768, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_0068e_p0000_u32, field_0314) == 788, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_0068e_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[8];
    u32 field_0008;
    u8 unknown_000c[60];
    u32 field_0048;
    u8 unknown_004c[24];
    u32 field_0064;
} RecordView_006a7_p0000_u32;
typedef struct {
    const RecordView_006a7_p0000_u32 *record;
} HandleView_006a7_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_006a7_p0000_u32, field_0008) == 8, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0000_u32, field_0048) == 72, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0000_u32, field_0064) == 100, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006a7_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    s8 field_0000;
    s8 field_0001;
    s8 field_0002;
    u8 unknown_0003[1];
    s8 field_0004;
    u8 unknown_0005[4];
    s8 field_0009;
    s8 field_000a;
    s8 field_000b;
    s8 field_000c;
    s8 field_000d;
    u8 unknown_000e[10];
    s8 field_0018;
    u8 unknown_0019[27];
    s8 field_0034;
    s8 field_0035;
    s8 field_0036;
    s8 field_0037;
    s8 field_0038;
    s8 field_0039;
    s8 field_003a;
    s8 field_003b;
    s8 field_003c;
    s8 field_003d;
    s8 field_003e;
    s8 field_003f;
    s8 field_0040;
    u8 unknown_0041[1];
    s8 field_0042;
    s8 field_0043;
    s8 field_0044;
    s8 field_0045;
    u8 unknown_0046[6];
    s8 field_004c;
    s8 field_004d;
    s8 field_004e;
    s8 field_004f;
    s8 field_0050;
    u8 unknown_0051[11];
    s8 field_005c;
} RecordView_006a7_p0010_s8;
typedef struct {
    u8 unknown_0000[16];
    const RecordView_006a7_p0010_s8 *record;
} HandleView_006a7_p0010_s8;
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0001) == 1, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0002) == 2, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0004) == 4, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0009) == 9, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_000a) == 10, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_000b) == 11, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_000c) == 12, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_000d) == 13, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0018) == 24, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0034) == 52, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0035) == 53, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0036) == 54, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0037) == 55, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0038) == 56, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0039) == 57, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_003a) == 58, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_003b) == 59, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_003c) == 60, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_003d) == 61, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_003e) == 62, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_003f) == 63, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0040) == 64, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0042) == 66, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0043) == 67, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0044) == 68, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0045) == 69, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_004c) == 76, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_004d) == 77, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_004e) == 78, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_004f) == 79, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_0050) == 80, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a7_p0010_s8, field_005c) == 92, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006a7_p0010_s8, record) == 16, "target handle offset");

typedef struct {
    u32 field_0000;
    u32 field_0004;
    u32 field_0008;
} RecordView_006a8_p0000_u32;
typedef struct {
    const RecordView_006a8_p0000_u32 *record;
} HandleView_006a8_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_006a8_p0000_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a8_p0000_u32, field_0004) == 4, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a8_p0000_u32, field_0008) == 8, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006a8_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[34];
    u8 field_0022;
    u8 field_0023;
} RecordView_006a8_p0000_u8;
typedef struct {
    const RecordView_006a8_p0000_u8 *record;
} HandleView_006a8_p0000_u8;
_Static_assert(__builtin_offsetof(RecordView_006a8_p0000_u8, field_0022) == 34, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006a8_p0000_u8, field_0023) == 35, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006a8_p0000_u8, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[56];
    s8 field_0038;
} RecordView_006a8_p0000_s8;
typedef struct {
    const RecordView_006a8_p0000_s8 *record;
} HandleView_006a8_p0000_s8;
_Static_assert(__builtin_offsetof(RecordView_006a8_p0000_s8, field_0038) == 56, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006a8_p0000_s8, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[9];
    s8 field_0009;
} RecordView_006a9_p0148_s8;
typedef struct {
    u8 unknown_0000[328];
    const RecordView_006a9_p0148_s8 *record;
} HandleView_006a9_p0148_s8;
_Static_assert(__builtin_offsetof(RecordView_006a9_p0148_s8, field_0009) == 9, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006a9_p0148_s8, record) == 328, "target handle offset");

typedef struct {
    u8 unknown_0000[60];
    s8 field_003c;
} RecordView_006aa_p0190_s8;
typedef struct {
    u8 unknown_0000[400];
    const RecordView_006aa_p0190_s8 *record;
} HandleView_006aa_p0190_s8;
_Static_assert(__builtin_offsetof(RecordView_006aa_p0190_s8, field_003c) == 60, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006aa_p0190_s8, record) == 400, "target handle offset");

typedef struct {
    u8 unknown_0000[260];
    u32 field_0104;
} RecordView_006ac_p0e4c_u32;
typedef struct {
    u8 unknown_0000[3660];
    const RecordView_006ac_p0e4c_u32 *record;
} HandleView_006ac_p0e4c_u32;
_Static_assert(__builtin_offsetof(RecordView_006ac_p0e4c_u32, field_0104) == 260, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006ac_p0e4c_u32, record) == 3660, "target handle offset");

typedef struct {
    u8 unknown_0000[2808];
    u32 field_0af8;
} RecordView_006b2_p0000_u32;
typedef struct {
    const RecordView_006b2_p0000_u32 *record;
} HandleView_006b2_p0000_u32;
_Static_assert(__builtin_offsetof(RecordView_006b2_p0000_u32, field_0af8) == 2808, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b2_p0000_u32, record) == 0, "target handle offset");

typedef struct {
    u8 unknown_0000[1040];
    u32 field_0410;
} RecordView_006b2_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b2_p0004_u32 *record;
} HandleView_006b2_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006b2_p0004_u32, field_0410) == 1040, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b2_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[328];
    u8 field_0148;
} RecordView_006b2_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b2_p0004_u8 *record;
} HandleView_006b2_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_006b2_p0004_u8, field_0148) == 328, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b2_p0004_u8, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[25];
    u8 field_0019;
} RecordView_006b4_p0010_u8;
typedef struct {
    u8 unknown_0000[16];
    const RecordView_006b4_p0010_u8 *record;
} HandleView_006b4_p0010_u8;
_Static_assert(__builtin_offsetof(RecordView_006b4_p0010_u8, field_0019) == 25, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b4_p0010_u8, record) == 16, "target handle offset");

typedef struct {
    u32 field_0000;
    u8 unknown_0004[1116];
    u32 field_0460;
    u8 unknown_0464[64];
    u32 field_04a4;
    u8 unknown_04a8[76];
    u32 field_04f4;
} RecordView_006b5_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b5_p0004_u32 *record;
} HandleView_006b5_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006b5_p0004_u32, field_0000) == 0, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b5_p0004_u32, field_0460) == 1120, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b5_p0004_u32, field_04a4) == 1188, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b5_p0004_u32, field_04f4) == 1268, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b5_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[1256];
    u8 field_04e8;
    u8 unknown_04e9[3];
    u8 field_04ec;
    u8 unknown_04ed[35];
    u8 field_0510;
} RecordView_006b5_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b5_p0004_u8 *record;
} HandleView_006b5_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_006b5_p0004_u8, field_04e8) == 1256, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b5_p0004_u8, field_04ec) == 1260, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b5_p0004_u8, field_0510) == 1296, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b5_p0004_u8, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[24];
    u32 field_0018;
    u8 unknown_001c[64];
    u32 field_005c;
    u8 unknown_0060[108];
    u32 field_00cc;
    u32 field_00d0;
    u8 unknown_00d4[392];
    u32 field_025c;
} RecordView_006b6_p0004_u32;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b6_p0004_u32 *record;
} HandleView_006b6_p0004_u32;
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u32, field_0018) == 24, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u32, field_005c) == 92, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u32, field_00cc) == 204, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u32, field_00d0) == 208, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u32, field_025c) == 604, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b6_p0004_u32, record) == 4, "target handle offset");

typedef struct {
    u8 unknown_0000[28];
    u8 field_001c;
    u8 unknown_001d[579];
    u8 field_0260;
    u8 unknown_0261[1];
    u8 field_0262;
} RecordView_006b6_p0004_u8;
typedef struct {
    u8 unknown_0000[4];
    const RecordView_006b6_p0004_u8 *record;
} HandleView_006b6_p0004_u8;
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u8, field_001c) == 28, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u8, field_0260) == 608, "record field offset");
_Static_assert(__builtin_offsetof(RecordView_006b6_p0004_u8, field_0262) == 610, "record field offset");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(HandleView_006b6_p0004_u8, record) == 4, "target handle offset");

#endif
