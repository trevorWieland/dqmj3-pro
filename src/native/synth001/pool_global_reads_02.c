/*
 * Fixed-address global reads with a displacement.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below loads a fixed data address from its literal pool into a
 *  local typed pointer and reads one field at a fixed displacement. The address
 *  is the pool word and the displacement is the one the load instruction
 *  encodes; a typed pointer lets armcc fold that displacement into the access.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u32 fn_001066ac(void) { const volatile u32 *p = (const volatile u32 *)0x8c0324u; return p[2]; }

u32 fn_00106790(void) { const volatile u32 *p = (const volatile u32 *)0x1ff80000u; return p[16]; }

u32 fn_0010bb8c(void) { const volatile s8 *p = (const volatile s8 *)0x89a568u; return p[9]; }

u32 fn_0010be6c(void) { const volatile u8 *p = (const volatile u8 *)0x89a568u; return p[5]; }

u32 fn_0010be8c(void) { const volatile u8 *p = (const volatile u8 *)0x89a568u; return p[6]; }

u32 fn_0010d56c(void) { const volatile s8 *p = (const volatile s8 *)0x89a4ccu; return p[1]; }

u32 fn_0010d998(void) { const volatile s8 *p = (const volatile s8 *)0x893194u; return p[1]; }

u32 fn_001147a8(void) { const volatile u32 *p = (const volatile u32 *)0x89a568u; return p[6]; }

u32 fn_00114808(void) { const volatile u8 *p = (const volatile u8 *)0x89a568u; return p[10]; }

u32 fn_00114828(void) { const volatile u8 *p = (const volatile u8 *)0x89a568u; return p[12]; }

u32 fn_00114848(void) { const volatile u8 *p = (const volatile u8 *)0x89a568u; return p[11]; }

u32 fn_00114858(void) { const volatile s8 *p = (const volatile s8 *)0x89a568u; return p[13]; }

u32 fn_00124ffc(void) { const volatile u32 *p = (const volatile u32 *)0x89a684u; return p[1]; }

u32 fn_00125198(void) { const volatile s8 *p = (const volatile s8 *)0x89a540u; return p[2]; }

u32 fn_001251fc(void) { const volatile s8 *p = (const volatile s8 *)0x89a568u; return p[8]; }

u32 fn_00125244(void) { const volatile s8 *p = (const volatile s8 *)0x89a568u; return p[7]; }

u32 fn_001252e8(void) { const volatile u32 *p = (const volatile u32 *)0x89a568u; return p[5]; }

u32 fn_0012571c(void) { const volatile u8 *p = (const volatile u8 *)0x89a568u; return p[3]; }

u32 fn_00125844(void) { const volatile u8 *p = (const volatile u8 *)0x89a568u; return p[2]; }

u32 fn_00125d3c(void) { const volatile s8 *p = (const volatile s8 *)0x89a568u; return p[1]; }

u32 fn_0013e068(void) { const volatile s8 *p = (const volatile s8 *)0x8bfbdcu; return p[1]; }

u32 fn_0013e09c(void) { const volatile u32 *p = (const volatile u32 *)0x89a568u; return p[4]; }

u32 fn_0013fa84(void) { const volatile s8 *p = (const volatile s8 *)0x8c0604u; return p[1]; }

u32 fn_0014f470(void) { const volatile u32 *p = (const volatile u32 *)0x8b6378u; return p[82]; }

u32 fn_0015e218(void) { const volatile u32 *p = (const volatile u32 *)0x8c0324u; return p[1]; }

u32 fn_0015ff24(void) { const volatile s8 *p = (const volatile s8 *)0x8bfbdcu; return p[2]; }

u32 fn_0015ff34(void) { const volatile u32 *p = (const volatile u32 *)0x8bfbdcu; return p[7]; }

u32 fn_001711a4(void) { const volatile u32 *p = (const volatile u32 *)0x8f05bcu; return p[204]; }

u32 fn_0017ca60(void) { const volatile u32 *p = (const volatile u32 *)0x8c33a8u; return p[1]; }

u32 fn_0018387c(void) { const volatile u8 *p = (const volatile u8 *)0x8e3068u; return p[16]; }

u32 fn_00189e18(void) { const volatile s8 *p = (const volatile s8 *)0x8bfbacu; return p[1]; }

u32 fn_00192114(void) { const volatile u32 *p = (const volatile u32 *)0x8bf5f4u; return p[4]; }

u32 fn_001a7b7c(void) { const volatile s8 *p = (const volatile s8 *)0x8c034cu; return p[4]; }

u32 fn_001afe88(void) { const volatile u8 *p = (const volatile u8 *)0x8bf50cu; return p[1]; }

u32 fn_001aff20(void) { const volatile u8 *p = (const volatile u8 *)0x8bf50cu; return p[3]; }

u32 fn_001b4970(void) { const volatile u32 *p = (const volatile u32 *)0x8bf6c4u; return p[1]; }

u32 fn_001fbbc8(void) { const volatile u32 *p = (const volatile u32 *)0x896cbcu; return p[2]; }

u32 fn_0020b178(void) { const volatile s16 *p = (const volatile s16 *)0x892430u; return p[1]; }

u32 fn_0020b1fc(void) { const volatile s16 *p = (const volatile s16 *)0x892430u; return p[2]; }

u32 fn_00227c88(void) { const volatile u32 *p = (const volatile u32 *)0x89789cu; return p[3]; }

u32 fn_002281a4(void) { const volatile u32 *p = (const volatile u32 *)0x89789cu; return p[1]; }

u32 fn_002dbe04(void) { const volatile s8 *p = (const volatile s8 *)0x891250u; return p[1]; }

u32 fn_0033cb9c(void) { const volatile u32 *p = (const volatile u32 *)0x8924ccu; return p[2]; }

u32 fn_0033cc4c(void) { const volatile u32 *p = (const volatile u32 *)0x8924ccu; return p[1]; }

u32 fn_0033cd34(void) { const volatile u32 *p = (const volatile u32 *)0x8924d8u; return p[1]; }

u32 fn_00371254(void) { const volatile u32 *p = (const volatile u32 *)0x896cccu; return p[1]; }

u32 fn_004c9db4(void) { const volatile s8 *p = (const volatile s8 *)0x8bf4ecu; return p[1]; }

u32 fn_004df22c(void) { const volatile s8 *p = (const volatile s8 *)0x8bf4fau; return p[1]; }

u32 fn_004ed5a0(void) { const volatile s8 *p = (const volatile s8 *)0x8bf488u; return p[1]; }

u32 fn_004f8aa0(void) { const volatile s8 *p = (const volatile s8 *)0x8bf4d8u; return p[1]; }

u32 fn_00509460(void) { const volatile s8 *p = (const volatile s8 *)0x8bf4c8u; return p[1]; }

u32 fn_005f3a9c(void) { const volatile s8 *p = (const volatile s8 *)0x89a4ccu; return p[5]; }

u32 fn_0065dfb0(void) { const volatile u32 *p = (const volatile u32 *)0x8bf61cu; return p[12]; }

u32 fn_0065e3b4(void) { const volatile u32 *p = (const volatile u32 *)0x8bf61cu; return p[10]; }

u32 fn_0065e3c4(void) { const volatile u32 *p = (const volatile u32 *)0x8bf61cu; return p[14]; }

u32 fn_00661550(void) { const volatile s16 *p = (const volatile s16 *)0x8927fcu; return p[1]; }

u32 fn_006615d4(void) { const volatile s16 *p = (const volatile s16 *)0x8927fcu; return p[2]; }

u32 fn_0066a53c(void) { const volatile u32 *p = (const volatile u32 *)0x898844u; return p[1]; }

u32 fn_00674748(void) { const volatile u32 *p = (const volatile u32 *)0x89885cu; return p[1]; }

u32 fn_006a7ad8(void) { const volatile u32 *p = (const volatile u32 *)0x8928ecu; return p[2]; }

u32 fn_0074040c(void) { const volatile u32 *p = (const volatile u32 *)0x899ea8u; return p[2]; }
