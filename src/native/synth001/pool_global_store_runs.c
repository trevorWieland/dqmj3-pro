/*
 * Runs of writes to fixed-address globals.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below writes several words at one fixed data address. The
 *  address is reached through an extern byte array the linker defines at the
 *  measured address; the offsets and values are the ones the stores encode.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* Data addresses the functions below use as a base; the linker
 * defines each at the address its literal pool word holds. */
extern u8 g_008e96d0[];

void fn_00713740(void)
{
    *(volatile u8 *)(g_008e96d0 + 0x4) = 0x0u;
    *(volatile u32 *)(g_008e96d0 + 0x8) = 0x0u;
    *(volatile u32 *)(g_008e96d0) = 0x856d08u;
    *(volatile u32 *)(g_008e96d0 + 0xc) = 0x0u;
}
