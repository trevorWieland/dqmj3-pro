/*
 * Record field constant stores.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below writes one constant into a run of record fields.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_004b96d8(u8 * record) { *(u8 *)(record + 0x210) = 0x1u; *(u8 *)(record + 0x213) = 0x1u; }
