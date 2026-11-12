/*
 * Indexed reads through a fixed-address base.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below loads a fixed data address from its literal pool and
 *  reads an entry selected by an argument register. The stride is the shift the
 *  original address arithmetic encodes.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u32 fn_0058417c(u32 unused0, u32 arg1) { const volatile u32 *p = (const volatile u32 *)0x7c89f8u; return p[arg1]; }

u32 fn_0059e438(u32 unused0, u32 arg1) { const volatile u32 *p = (const volatile u32 *)0x894b1cu; return p[arg1]; }

u32 fn_0059e448(u32 unused0, u32 arg1) { const volatile u32 *p = (const volatile u32 *)0x894b08u; return p[arg1]; }

u32 fn_005db59c(u32 unused0, u32 arg1) { const volatile u32 *p = (const volatile u32 *)0x896ad8u; return p[arg1]; }

u32 fn_006bc7ec(u32 unused0, u32 arg1) { const volatile u32 *p = (const volatile u32 *)0x8925e0u; return p[arg1]; }
