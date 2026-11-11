/*
 * Indexed record addresses.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below returns a record address advanced by an index and a
 *  constant, without reading through it.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u8 * fn_001d4e7c(u8 * record, u32 index) { return record + index * 4 + 0x2; }

u8 * fn_0030e2cc(u8 * record, u32 index) { return record + index * 748 + 0x8; }

u8 * fn_0030e3a4(u8 * record, u32 index) { return record + index * 748 + 0x32; }

u8 * fn_004c5d4c(u8 * record, u32 index) { return record + index * 20 + 0x2f8; }

u8 * fn_005b85c0(u8 * record, u32 index) { return record + index * 24 + 0x14; }

u8 * fn_006b8a60(u8 * record, u32 index) { return record + index * 260 + 0x11c; }

u8 * fn_006b8a70(u8 * record, u32 index) { return record + index * 260 + 0x11c; }

u8 * fn_006b8a80(u8 * record, u32 index) { return record + index * 260 + 0x11c; }

u8 * fn_006b8a90(u8 * record, u32 index) { return record + index * 260 + 0x11c; }

u8 * fn_006b8aa0(u8 * record, u32 index) { return record + index * 260 + 0x11c; }

u8 * fn_006c772c(u8 * record, u32 index) { return record + index * 972 + 0x3e8; }

u8 * fn_006c7748(u8 * record, u32 index) { return record + index * 972 + 0x3e8; }

u8 * fn_006c775c(u8 * record, u32 index) { return record + index * 972 + 0x3e8; }

u8 * fn_006c7770(u8 * record, u32 index) { return record + index * 972 + 0x3e8; }

u8 * fn_006cb164(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb178(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb18c(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb1a0(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb1bc(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb1d0(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb1e4(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb1f8(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb20c(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cb220(u8 * record, u32 index) { return record + index * 140 + 0xa8; }

u8 * fn_006cd58c(u8 * record, u32 index) { return record + index * 2046 + 0x9a2a; }

u8 * fn_006ce908(u8 * record, u32 index) { return record + index * 240 + 0x3f8; }

u8 * fn_006ce918(u8 * record, u32 index) { return record + index * 240 + 0x30; }

u8 * fn_006e70bc(u8 * record, u32 index) { return record + index * 240 + 0x54; }

u8 * fn_006e8d04(u8 * record, u32 index) { return record + index * 4 + 0x66; }
