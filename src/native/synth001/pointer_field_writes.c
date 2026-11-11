/*
 * Writes through a pointer held in the record.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below loads a pointer out of the record into a register and
 * then stores a constant through it. The source says that in two steps because
 * the original instructions do: the load has its own destination register and
 * the constant is materialised after it. Writing the dereference as one nested
 * expression reads the same memory, but it leaves the compiler free to arrange
 * the two values in either order, and at -O3 -Otime it puts the constant in the
 * register the original image uses for the pointer.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_00162d44(u8 * record)
{
    u8 * target = (u8 *)(uptr)(*(const u32 *)(record + 0x4));

    target[0x1c] = 0x0u;
}

void fn_001cc148(u8 * record)
{
    u8 * target = (u8 *)(uptr)(*(const u32 *)(record));

    target[0x2a] = 0x1u;
}

void fn_001fed04(u8 * record)
{
    u8 * target = (u8 *)(uptr)(*(const u32 *)(record));

    target[0x2de] = 0x0u;
}

void fn_002e3ff4(u8 * record)
{
    u8 * target = (u8 *)(uptr)(*(const u32 *)(record + 0x10));

    target[0xe4] = 0xffu;
}

void fn_003048dc(u8 * record)
{
    u8 * target = (u8 *)(uptr)(*(const u32 *)(record));

    target[0xc] = 0x1u;
}

void fn_005f44bc(u8 * record)
{
    u32 * target = (u32 *)((u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x0);

    *target = 0x0u;
}

void fn_00682c24(u8 * record)
{
    u8 * target = (u8 *)(uptr)(*(const u32 *)(record));

    target[0x17] = 0x0u;
}

void fn_0068c754(u8 * record)
{
    u8 * target = (u8 *)(uptr)(*(const u32 *)(record));

    target[0x31c] = 0x1u;
}

void fn_0068cbec(u8 * record)
{
    u8 * target = (u8 *)(uptr)(*(const u32 *)(record));

    target[0x334] = 0x1u;
}
