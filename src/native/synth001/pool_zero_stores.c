/*
 * Fixed-address globals zeroed through a literal pool.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below sets one fixed global to zero. The original
 *  loads the address from its own literal pool and materialises the
 *  zero with a move; the local pointer below keeps that register
 *  choice.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_001cf52c(void) { *(volatile u32 *)0x898898u = 0; }

void fn_00202ce0(void) { *(volatile u32 *)0x8928b8u = 0; }

void fn_0023fa74(void) { *(volatile u32 *)0x891924u = 0; }

void fn_002eb620(void) { *(volatile u32 *)0x8928acu = 0; }

void fn_006ff504(void) { volatile u32 *p = (volatile u32 *)0x8c071cu; *p = 0; }

void fn_006ffba8(void) { volatile u32 *p = (volatile u32 *)0x895eecu; *p = 0; }

void fn_006ffd00(void) { volatile u8 *p = (volatile u8 *)0x8bf4eeu; *p = 0; }

void fn_006ffd14(void) { volatile u32 *p = (volatile u32 *)0x8c3cfcu; *p = 0; }

void fn_006ffd28(void) { volatile u32 *p = (volatile u32 *)0x89a924u; *p = 0; }

void fn_006fffbc(void) { volatile u32 *p = (volatile u32 *)0x893278u; *p = 0; }

void fn_00700214(void) { volatile u32 *p = (volatile u32 *)0x8c03a8u; *p = 0; }

void fn_0070073c(void) { volatile u32 *p = (volatile u32 *)0x8bfb30u; *p = 0; }

void fn_00700750(void) { volatile u32 *p = (volatile u32 *)0x8c0720u; *p = 0; }

void fn_00700764(void) { volatile u32 *p = (volatile u32 *)0x8c3c2cu; *p = 0; }

void fn_00700a6c(void) { volatile u32 *p = (volatile u32 *)0x89a920u; *p = 0; }

void fn_00700acc(void) { volatile u32 *p = (volatile u32 *)0x8c0338u; *p = 0; }

void fn_007011c8(void) { volatile u32 *p = (volatile u32 *)0x893204u; *p = 0; }

void fn_00701698(void) { volatile u32 *p = (volatile u32 *)0x8c0714u; *p = 0; }

void fn_00701740(void) { volatile u32 *p = (volatile u32 *)0x8c3c28u; *p = 0; }

void fn_00701754(void) { volatile u32 *p = (volatile u32 *)0x8bfb54u; *p = 0; }

void fn_00701828(void) { volatile u32 *p = (volatile u32 *)0x8c3cd4u; *p = 0; }

void fn_007026f8(void) { volatile u32 *p = (volatile u32 *)0x8c3c50u; *p = 0; }

void fn_00702828(void) { volatile u32 *p = (volatile u32 *)0x8c05d8u; *p = 0; }

void fn_00703250(void) { volatile u32 *p = (volatile u32 *)0x8c0718u; *p = 0; }

void fn_0070327c(void) { volatile u32 *p = (volatile u32 *)0x8c0784u; *p = 0; }

void fn_007032a8(void) { volatile u32 *p = (volatile u32 *)0x8c3c48u; *p = 0; }

void fn_007032dc(void) { volatile u32 *p = (volatile u32 *)0x8c07ecu; *p = 0; }

void fn_007032f0(void) { volatile u32 *p = (volatile u32 *)0x8c33bcu; *p = 0; }

void fn_00703fd0(void) { volatile u32 *p = (volatile u32 *)0x8c33d4u; *p = 0; }

void fn_00704078(void) { volatile u32 *p = (volatile u32 *)0x89a93cu; *p = 0; }

void fn_00704810(void) { volatile u32 *p = (volatile u32 *)0x893230u; *p = 0; }

void fn_0070489c(void) { volatile u32 *p = (volatile u32 *)0x894678u; *p = 0; }

void fn_007049a0(void) { volatile u32 *p = (volatile u32 *)0x895f10u; *p = 0; }

void fn_0070599c(void) { volatile u8 *p = (volatile u8 *)0x8bf780u; *p = 0; }

void fn_00705a38(void) { volatile u32 *p = (volatile u32 *)0x8bfbd4u; *p = 0; }

void fn_00705a7c(void) { volatile u32 *p = (volatile u32 *)0x8c3404u; *p = 0; }

void fn_007089e4(void) { volatile u32 *p = (volatile u32 *)0x8c33e8u; *p = 0; }

void fn_007089f8(void) { volatile u32 *p = (volatile u32 *)0x8c33ecu; *p = 0; }

void fn_00708a8c(void) { volatile u32 *p = (volatile u32 *)0x8c0340u; *p = 0; }

void fn_00708aa0(void) { volatile u32 *p = (volatile u32 *)0x8c0348u; *p = 0; }

void fn_0070d994(void) { volatile u32 *p = (volatile u32 *)0x8c076cu; *p = 0; }

void fn_0070d9c0(void) { volatile u32 *p = (volatile u32 *)0x8c05dcu; *p = 0; }

void fn_0070d9d4(void) { volatile u32 *p = (volatile u32 *)0x8c0344u; *p = 0; }

void fn_0070da6c(void) { volatile u32 *p = (volatile u32 *)0x8c067cu; *p = 0; }

void fn_0070f9b0(void) { volatile u32 *p = (volatile u32 *)0x8c033cu; *p = 0; }

void fn_00711480(void) { volatile u32 *p = (volatile u32 *)0x8c3d2cu; *p = 0; }

void fn_00713f7c(void) { volatile u32 *p = (volatile u32 *)0x893254u; *p = 0; }

void fn_00729168(void) { volatile u32 *p = (volatile u32 *)0x8bfae8u; *p = 0; }
