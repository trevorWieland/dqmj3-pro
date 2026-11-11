/*
 * Record field zeroing runs, part 2 of 2.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below sets a run of record fields to zero. The
 *  classifier proved that shape from the function's complete original
 *  instruction extent: one constant materialised by a move, then stores
 *  of that register into the record at fixed offsets. The offsets and
 *  widths below come from those instructions, including the mixed
 *  word/byte runs. Field order follows the original instruction order,
 *  because store order is part of the bytes.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_00588b60(u8 * record)
{
    *(u8 *)(record + 0x3e) = 0x0u;
    *(u8 *)(record + 0x40) = 0x0u;
    *(u8 *)(record + 0x42) = 0x0u;
}

void fn_005aaa24(u8 * record)
{
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u8 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
    *(u32 *)(record + 0x28) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
}

void fn_005b2fc0(u8 * record) { *(u32 *)(record + 0x8) = 0x0u; *(u8 *)(record + 0xc) = 0x0u; }

void fn_005daefc(u8 * record)
{
    *(u8 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u8 *)(record + 0x9) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u8 *)(record + 0xa) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u8 *)(record + 0xb) = 0x0u;
    *(u8 *)(record + 0x1c) = 0x0u;
    *(u8 *)(record + 0x1d) = 0x0u;
}

void fn_0061dcec(u8 * record)
{
    *(u16 *)(record) = 0x0u;
    *(u16 *)(record + 0x2) = 0x0u;
    *(u16 *)(record + 0x4) = 0x0u;
    *(u16 *)(record + 0x6) = 0x0u;
    *(u16 *)(record + 0x8) = 0x0u;
    *(u16 *)(record + 0xa) = 0x0u;
}

void fn_00657340(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u8 *)(record + 0x8) = 0x0u;
}

void fn_0067f7b0(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
    *(u32 *)(record + 0x34) = 0x0u;
}

void fn_006f94d0(u8 * record) { *(u32 *)(record) = 0x0u; *(u16 *)(record + 0x4) = 0x0u; }
