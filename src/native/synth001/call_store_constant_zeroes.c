/*
 * Calls with a zero second argument whose result is initialised.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below passes a zero in the second argument register, calls a
 *  split function, stores one literal-pool constant in the pointer it returns
 *  and returns that pointer.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* This unit calls these split functions; each resolves to the address
 * its original call instruction targets:
 * fn_00140688, fn_00318bc4
 */

u32 * fn_0012659c(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00140688(a, 0);
    p[0] = 0x857f10u;
    return p;
}

u32 * fn_003f5178(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00318bc4(a, 0);
    p[0] = 0x835088u;
    return p;
}
