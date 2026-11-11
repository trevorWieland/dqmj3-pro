/*
 * Single-field getters.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below reads one field from a caller-supplied record and
 *  returns it. The offset, access width and sign extension are the ones
 *  the original instruction encodes (word, halfword, byte, signed or
 *  unsigned). The return type is the 32-bit value the ABI carries home.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u32 fn_002aae80(const u8 * record) { return *(const s16 *)(record + 0x16a); }

u32 fn_005075e8(const u8 * record) { return *(const s8 *)(record + 0x100); }

u32 fn_00670650(const u8 * record) { return *(const u32 *)(record + 0x2384); }

u32 fn_006aae90(const u8 * record) { return *(const s8 *)(record + 0x3e3); }

u32 fn_006ab184(const u8 * record) { return *(const s8 *)(record + 0x38c); }

u32 fn_006f702c(const u8 * record) { return *(const s16 *)(record + 0x16a); }

u32 fn_006f70f0(const u8 * record) { return *(const s16 *)(record + 0x16c); }

u32 fn_006f7294(const u8 * record) { return *(const s8 *)(record + 0x168); }

u32 fn_006f8400(const u8 * record) { return *(const s8 *)(record + 0x19c); }
