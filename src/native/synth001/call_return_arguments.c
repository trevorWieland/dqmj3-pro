/*
 * Calls that return their own argument.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below saves its first argument, calls a split function for its
 *  effect and returns the saved argument. The save is the register the original
 *  push protects.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* This unit calls these split functions; each resolves to the address
 * its original call instruction targets:
 * fn_00124694, fn_00126800, fn_0012a2d8, fn_0014e7cc, fn_00150be0
 */

u32 fn_00114540(u32 a) { fn_00124694(a); return a; }

u32 fn_0013f624(u32 a) { fn_00150be0(a); return a; }

u32 fn_00453ab4(u32 a) { fn_0012a2d8(a); return a; }

u32 fn_00455cf0(u32 a) { fn_0014e7cc(a); return a; }

u32 fn_00558844(u32 a) { fn_00126800(a); return a; }
