/*
 * Arguments stored into a fixed-address global.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below writes its argument into one fixed-address global. The
 *  store width is the one the original instruction encodes.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_0010ba64(u32 value) { volatile u32 *p = (volatile u32 *)0x89a568u; p[6] = value; }

void fn_0010be00(u32 value) { volatile u32 *p = (volatile u32 *)0x89a568u; p[5] = value; }

void fn_0010be7c(u32 value) { volatile u32 *p = (volatile u32 *)0x8bfb24u; p[2] = value; }

void fn_0010bebc(u32 value) { volatile u8 *p = (volatile u8 *)0x8bfb24u; p[1] = value; }

void fn_0010c084(u32 value) { volatile u32 *p = (volatile u32 *)0x8bfb24u; p[1] = value; }

void fn_00114818(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[10] = value; }

void fn_00114838(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[12] = value; }

void fn_00114d20(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[13] = value; }

void fn_00115bc0(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[5] = value; }

void fn_00115bd0(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[6] = value; }

void fn_00123668(u32 value) { volatile u32 *p = (volatile u32 *)0x8c0788u; p[3] = value; }

void fn_001251a8(u32 value) { volatile u32 *p = (volatile u32 *)0x89a568u; p[4] = value; }

void fn_00125220(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[11] = value; }

void fn_0012572c(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[4] = value; }

void fn_0012573c(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[3] = value; }

void fn_00125854(u32 value) { volatile u8 *p = (volatile u8 *)0x89a568u; p[2] = value; }

void fn_00129014(u32 value) { volatile u32 *p = (volatile u32 *)0x893194u; p[1] = value; }

void fn_001fbc28(u32 value) { volatile u32 *p = (volatile u32 *)0x896cbcu; p[2] = value; }

void fn_00299890(u32 value) { volatile u32 *p = (volatile u32 *)0x897798u; p[1] = value; }

void fn_002dbe14(u32 value) { volatile u8 *p = (volatile u8 *)0x891250u; p[1] = value; }

void fn_002f8a9c(u32 value) { volatile u32 *p = (volatile u32 *)0x8972ccu; p[1] = value; }

void fn_003644f0(u32 value) { volatile u32 *p = (volatile u32 *)0x8914bcu; p[4] = value; }

void fn_00452610(u32 value) { volatile u32 *p = (volatile u32 *)0x8bfb3cu; p[1] = value; }
