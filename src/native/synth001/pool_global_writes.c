/*
 * Fixed-address global writes through a literal pool.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below writes its argument to one fixed global address
 *  held in its own literal pool. The store width is the width the
 *  original instruction uses.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_00104d3c(u32 value) { volatile u8 *p = (volatile u8 *)0x89a79cu; *p = (u8)value; }

void fn_0010be5c(u32 value) { volatile u32 *p = (volatile u32 *)0x8bfb20u; *p = (u32)value; }

void fn_00123550(u32 value) { volatile u32 *p = (volatile u32 *)0x89a680u; *p = (u32)value; }

void fn_00126180(u32 value) { volatile u32 *p = (volatile u32 *)0x89a918u; *p = (u32)value; }

void fn_00202fd8(u32 value) { volatile u32 *p = (volatile u32 *)0x897284u; *p = (u32)value; }

void fn_00233c20(u32 value) { volatile u32 *p = (volatile u32 *)0x897298u; *p = (u32)value; }

void fn_00233d2c(u32 value) { volatile u32 *p = (volatile u32 *)0x8972c8u; *p = (u32)value; }

void fn_00233e50(u32 value) { volatile u32 *p = (volatile u32 *)0x8972e8u; *p = (u32)value; }

void fn_0024da84(u32 value) { volatile u32 *p = (volatile u32 *)0x89728cu; *p = (u32)value; }

void fn_0025f978(u32 value) { volatile u32 *p = (volatile u32 *)0x896380u; *p = (u32)value; }

void fn_0028f54c(u32 value) { volatile u8 *p = (volatile u8 *)0x895970u; *p = (u8)value; }

void fn_002996ac(u32 value) { volatile u32 *p = (volatile u32 *)0x8972acu; *p = (u32)value; }

void fn_002d1be8(u32 value) { volatile u32 *p = (volatile u32 *)0x897288u; *p = (u32)value; }

void fn_002dbcec(u32 value) { volatile u8 *p = (volatile u8 *)0x891250u; *p = (u8)value; }

void fn_002f8d20(u32 value) { volatile u32 *p = (volatile u32 *)0x8972ecu; *p = (u32)value; }

void fn_002fb6fc(u32 value) { volatile u8 *p = (volatile u8 *)0x8912a0u; *p = (u8)value; }

void fn_00310b2c(u32 value) { volatile u32 *p = (volatile u32 *)0x8972f0u; *p = (u32)value; }

void fn_003342f8(u32 value) { volatile u32 *p = (volatile u32 *)0x8972bcu; *p = (u32)value; }

void fn_003752f0(u32 value) { volatile u32 *p = (volatile u32 *)0x897788u; *p = (u32)value; }

void fn_0038b994(u32 value) { volatile u32 *p = (volatile u32 *)0x8972dcu; *p = (u32)value; }

void fn_00560b6c(u32 value) { volatile u32 *p = (volatile u32 *)0x8bf790u; *p = (u32)value; }

void fn_0065673c(u32 value) { volatile u32 *p = (volatile u32 *)0x8c06ccu; *p = (u32)value; }
