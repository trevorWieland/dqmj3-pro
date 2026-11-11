/*
 * Calls that initialise two fields of the returned record.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below calls a split function with its argument, sets one field
 *  of the returned record to zero and another to a literal-pool constant, then
 *  returns the record. The local zero keeps the register the original move uses.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* This unit calls these split functions; each resolves to the address
 * its original call instruction targets:
 * fn_001caa80, fn_0028e264, fn_002c4694, fn_00397a0c, fn_0039b5d8, fn_004111d0, fn_0044aa1c, fn_004eddf4, fn_005ab93c, fn_0068ab5c
 */

u32 * fn_0025f31c(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_001caa80(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0xe4) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x81dce8u;
    return p;
}

u32 * fn_0031aa80(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_002c4694(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0xb0) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x822e60u;
    return p;
}

u32 * fn_003849cc(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_004111d0(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0xd0) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x8299a0u;
    return p;
}

u32 * fn_0039571c(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0028e264(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x8) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x82b838u;
    return p;
}

u32 * fn_0039d308(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0068ab5c(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x64) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x82cb74u;
    return p;
}

u32 * fn_003b9cfc(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0028e264(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x8) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x82f17cu;
    return p;
}

u32 * fn_003c6f10(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00397a0c(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0xe4) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x8305bcu;
    return p;
}

u32 * fn_003e0d78(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0039b5d8(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x9c) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x832288u;
    return p;
}

u32 * fn_003e8044(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0044aa1c(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x164) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x83360cu;
    return p;
}

u32 * fn_004e9a58(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_004eddf4(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x40) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x856a60u;
    return p;
}

u32 * fn_004e9ebc(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_004eddf4(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x40) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x856ab0u;
    return p;
}

u32 * fn_004f8a6c(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_004eddf4(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x40) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x856e04u;
    return p;
}

u32 * fn_00591e08(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_002c4694(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0xb0) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x844804u;
    return p;
}

u32 * fn_005ca198(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_005ab93c(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x104) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x84b130u;
    return p;
}

u32 * fn_006083c4(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0028e264(a);
    u32 zero = 0u;
    *(volatile u32 *)((u8 *)p + 0x8) = zero;
    *(volatile u32 *)((u8 *)p + 0x0) = 0x84fa7cu;
    return p;
}
