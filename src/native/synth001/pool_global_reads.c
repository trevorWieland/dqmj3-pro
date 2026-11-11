/*
 * Fixed-address global reads through a literal pool.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below loads one fixed global address from its own
 *  literal pool and reads a field there. The address is the word the
 *  original load instruction reads, and the access width is the one
 *  that instruction encodes.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u32 fn_00106bf4(void) { const volatile s8 *p = (const volatile s8 *)0x89a568u; return *p; }

u32 fn_001076e4(void) { const volatile s8 *p = (const volatile s8 *)0x89a4ccu; return *p; }

u32 fn_0010d9c4(void) { const volatile u32 *p = (const volatile u32 *)0x8931a0u; return *p; }

u32 fn_001102fc(void) { const volatile u32 *p = (const volatile u32 *)0x898154u; return *p; }

u32 fn_00117984(void) { const volatile u32 *p = (const volatile u32 *)0x89a504u; return *p; }

u32 fn_0011dda8(void) { const volatile u32 *p = (const volatile u32 *)0x8981a8u; return *p; }

u32 fn_00125188(void) { const volatile s8 *p = (const volatile s8 *)0x89a584u; return *p; }

u32 fn_00129004(void) { const volatile u32 *p = (const volatile u32 *)0x8931a4u; return *p; }

u32 fn_0013bfdc(void) { const volatile u8 *p = (const volatile u8 *)0x8c07e8u; return *p; }

u32 fn_0013cc7c(void) { const volatile s8 *p = (const volatile s8 *)0x8bfbffu; return *p; }

u32 fn_0013ddc8(void) { const volatile s8 *p = (const volatile s8 *)0x8bfbdcu; return *p; }

u32 fn_0015e284(void) { const volatile u32 *p = (const volatile u32 *)0x8c0324u; return *p; }

u32 fn_001638a0(void) { const volatile u32 *p = (const volatile u32 *)0x8931a8u; return *p; }

u32 fn_0017ca70(void) { const volatile u32 *p = (const volatile u32 *)0x8c33a8u; return *p; }

u32 fn_001afe98(void) { const volatile u8 *p = (const volatile u8 *)0x8bf5f4u; return *p; }

u32 fn_001f42f0(void) { const volatile s8 *p = (const volatile s8 *)0x897a34u; return *p; }

u32 fn_0020b188(void) { const volatile s16 *p = (const volatile s16 *)0x892430u; return *p; }

u32 fn_00227c98(void) { const volatile u32 *p = (const volatile u32 *)0x89789cu; return *p; }

u32 fn_0024c750(void) { const volatile u32 *p = (const volatile u32 *)0x896f54u; return *p; }

u32 fn_002dbc18(void) { const volatile s8 *p = (const volatile s8 *)0x891250u; return *p; }

u32 fn_002e341c(void) { const volatile s8 *p = (const volatile s8 *)0x897a34u; return *p; }

u32 fn_002fb6ec(void) { const volatile s8 *p = (const volatile s8 *)0x8912a0u; return *p; }

u32 fn_0033a39c(void) { const volatile s16 *p = (const volatile s16 *)0x8924b0u; return *p; }

u32 fn_003415b0(void) { const volatile s8 *p = (const volatile s8 *)0x891facu; return *p; }

u32 fn_003d2878(void) { const volatile s16 *p = (const volatile s16 *)0x8923e0u; return *p; }

u32 fn_0044fbdc(void) { const volatile s8 *p = (const volatile s8 *)0x89a79du; return *p; }

u32 fn_00452620(void) { const volatile s8 *p = (const volatile s8 *)0x8bfb44u; return *p; }

u32 fn_004c9dc4(void) { const volatile s8 *p = (const volatile s8 *)0x8bf4ecu; return *p; }

u32 fn_004df23c(void) { const volatile s8 *p = (const volatile s8 *)0x8bf4fau; return *p; }

u32 fn_004ed5b0(void) { const volatile s8 *p = (const volatile s8 *)0x8bf488u; return *p; }

u32 fn_004f8ab0(void) { const volatile s8 *p = (const volatile s8 *)0x8bf4d8u; return *p; }

u32 fn_00509470(void) { const volatile s8 *p = (const volatile s8 *)0x8bf4c8u; return *p; }

u32 fn_00560b5c(void) { const volatile u32 *p = (const volatile u32 *)0x8bf790u; return *p; }

u32 fn_005f65ec(void) { const volatile u32 *p = (const volatile u32 *)0x89a4c8u; return *p; }

u32 fn_00615ee4(void) { const volatile u32 *p = (const volatile u32 *)0x89319cu; return *p; }

u32 fn_00661560(void) { const volatile s16 *p = (const volatile s16 *)0x8927fcu; return *p; }

u32 fn_0068f790(void) { const volatile s16 *p = (const volatile s16 *)0x8928c8u; return *p; }

u32 fn_00741210(void) { const volatile u8 *p = (const volatile u8 *)0x899ea4u; return *p; }
