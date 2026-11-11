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

void fn_00162d44(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x1c) = 0x0u; }

void fn_001cc148(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record)) + 0x2a) = 0x1u; }

void fn_001fed04(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record)) + 0x2de) = 0x0u; }

void fn_002e3ff4(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record + 0x10)) + 0xe4) = 0xffu; }

void fn_003048dc(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record)) + 0xc) = 0x1u; }

void fn_005f44bc(u8 * record) { *(u32 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x0) = 0x0u; }

void fn_00682c24(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record)) + 0x17) = 0x0u; }

void fn_0068c754(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record)) + 0x31c) = 0x1u; }

void fn_0068cbec(u8 * record) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record)) + 0x334) = 0x1u; }
