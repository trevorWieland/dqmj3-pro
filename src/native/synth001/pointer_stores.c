/*
 * Stores through a pointed-to record.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below follows the pointer in the record and writes one
 *  expression into the pointee.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_0012877c(u8 * record, u32 value) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x20c) = value; }

void fn_0025b200(u8 * record, u32 value) { *(u32 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0xd0) = value; }

void fn_0025ba90(u8 * record, u32 value) { *(u8 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x5a) = value; }

void fn_0031a934(u8 * record, u32 value) { *(u32 *)((u8 *)(uptr)(*(const u32 *)(record))) = value; }
