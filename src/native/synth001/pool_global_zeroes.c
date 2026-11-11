/*
 * Fixed-address globals zeroed once.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below sets one fixed-address global word to zero. The address
 *  is the word its literal pool holds.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* Data addresses the functions below use as a base; the linker
 * defines each at the address its literal pool word holds. */
extern u8 g_0089a568[];

void fn_0011509c(void) { *(volatile u8 *)(g_0089a568 + 0x1) = 0; }

void fn_0012520c(void) { *(volatile u8 *)(g_0089a568 + 0x8) = 0; }

void fn_00125254(void) { *(volatile u8 *)(g_0089a568 + 0x7) = 0; }

void fn_00125770(void) { *(volatile u8 *)(g_0089a568 + 0x3) = 0; }

void fn_00125930(void) { *(volatile u8 *)(g_0089a568 + 0x2) = 0; }
