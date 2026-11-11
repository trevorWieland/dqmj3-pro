/*
 * Calls that clear one field of their record.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below passes its record argument to a split function and then
 *  sets one field of that record to zero. The offset and width are the ones the
 *  original store encodes.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* This unit calls these split functions; each resolves to the address
 * its original call instruction targets:
 * fn_002c4100, fn_0036bfcc, fn_003979d0, fn_003b9cc0, fn_004efd64, fn_00518378, fn_005848d4, fn_00733bac
 */

void fn_003e8074(u32 * r) { fn_002c4100((u32)(uptr)r); *(volatile u32 *)((u8 *)r + 0xb0) = 0; }

void fn_00404274(u32 * r) { fn_0036bfcc((u32)(uptr)r); *(volatile u8 *)((u8 *)r + 0x69) = 0; }

void fn_00411994(u32 * r) { fn_003b9cc0((u32)(uptr)r); *(volatile u32 *)((u8 *)r + 0xc) = 0; }

void fn_0041dde0(u32 * r) { fn_003979d0((u32)(uptr)r); *(volatile u32 *)((u8 *)r + 0xe4) = 0; }

void fn_004edddc(u32 * r) { fn_004efd64((u32)(uptr)r); *(volatile u8 *)((u8 *)r + 0x30) = 0; }

void fn_004eee38(u32 * r) { fn_00733bac((u32)(uptr)r); *(volatile u32 *)((u8 *)r + 0x44) = 0; }

void fn_0050eee8(u32 * r) { fn_00518378((u32)(uptr)r); *(volatile u32 *)((u8 *)r + 0x80) = 0; }

void fn_00514c1c(u32 * r) { fn_00518378((u32)(uptr)r); *(volatile u32 *)((u8 *)r + 0x80) = 0; }

void fn_005849d4(u32 * r) { fn_005848d4((u32)(uptr)r); *(volatile u32 *)((u8 *)r + 0x20) = 0; }
