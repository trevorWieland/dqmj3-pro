/*
 * Writes through a pointer held in the record.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below loads a pointer from the record and stores a
 *  constant into its subobject.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_0011398c(u8 * record) { *(u32 *)((u8 *)(uptr)(*(const u32 *)(record)) + 0x34) = 0x0u; }

void fn_0024286c(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x510) = 0x0u; }

void fn_0028ad24(u8 * record) { *(u32 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x24) = 0x0u; }

void fn_0028b680(u8 * record) { *(u32 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x28) = 0x0u; }
