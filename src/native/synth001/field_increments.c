/*
 * Record field increments.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below adds a constant to one 32-bit record field in place.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_00318c08(u8 * record) { *(u32 *)(record + 0x18) = *(const u32 *)(record + 0x18) + 0x1; }

void fn_00655d38(u8 * record) { *(u32 *)(record + 0x18) = *(const u32 *)(record + 0x18) + 0x1; }
