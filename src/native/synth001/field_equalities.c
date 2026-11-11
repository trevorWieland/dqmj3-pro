/*
 * Field equality tests.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below compares one 32-bit record field with its argument and
 *  returns 1 or 0. The original computes both arms with conditional moves.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u32 fn_00211f10(const u8 * record, u32 value) { return *(const u32 *)(record + 0x34) == value; }

u32 fn_00212298(const u8 * record, u32 value) { return *(const u32 *)(record + 0x3c) == value; }

u32 fn_00212310(const u8 * record, u32 value) { return *(const u32 *)(record + 0x38) == value; }

u32 fn_002123ec(const u8 * record, u32 value) { return *(const u32 *)(record + 0x30) == value; }

u32 fn_003f2b64(const u8 * record, u32 value) { return *(const u32 *)(record) == value; }

u32 fn_006af880(const u8 * record, u32 value) { return *(const u32 *)(record + 0x28) == value; }
