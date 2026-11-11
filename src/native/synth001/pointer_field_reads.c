/*
 * Reads through a pointer held in the record.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below loads a pointer from the record, adds a fixed
 *  subobject offset and reads one field there. Both offsets are the ones
 *  the original load instructions encode.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u32 fn_0031b77c(const u8 * record, u32 index)
{
    return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x24)) + index * 4)) + 0xa4);
}

u32 fn_006b4d08(const u8 * record, u32 index)
{
    return *(const s8 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0xc)) + index * 4)) + 0xd);
}

u32 fn_006bab38(const u8 * record, u32 index)
{
    return *(const u8 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index * 4)));
}
