/*
 * Record field zeroing runs, part 1 of 2.
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

void fn_001139cc(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u16 *)(record + 0x28) = 0x0u;
    *(u8 *)(record + 0x2a) = 0x0u;
    *(u8 *)(record + 0x2b) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
}

void fn_00113c58(u8 * record)
{
    *(u8 *)(record) = 0x0u;
    *(u8 *)(record + 0x1) = 0x0u;
    *(u8 *)(record + 0x2) = 0x0u;
    *(u8 *)(record + 0x3) = 0x0u;
    *(u8 *)(record + 0x4) = 0x0u;
    *(u8 *)(record + 0x5) = 0x0u;
    *(u8 *)(record + 0x6) = 0x0u;
    *(u8 *)(record + 0x7) = 0x0u;
    *(u8 *)(record + 0x8) = 0x0u;
    *(u8 *)(record + 0x9) = 0x0u;
    *(u8 *)(record + 0xa) = 0x0u;
    *(u8 *)(record + 0xb) = 0x0u;
    *(u8 *)(record + 0xc) = 0x0u;
    *(u16 *)(record + 0xe) = 0x0u;
    *(u8 *)(record + 0x10) = 0x0u;
    *(u8 *)(record + 0x11) = 0x0u;
    *(u8 *)(record + 0x12) = 0x0u;
    *(u8 *)(record + 0x13) = 0x0u;
}

void fn_00119b60(u8 * record) { *(u32 *)(record + 0x44) = 0x0u; *(u8 *)(record + 0x48) = 0x0u; }

void fn_00125f30(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u8 *)(record + 0xc) = 0x0u;
}

void fn_001283fc(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
    *(u32 *)(record + 0x28) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
}

void fn_00129688(u8 * record)
{
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
    *(u32 *)(record + 0x28) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
    *(u32 *)(record + 0x34) = 0x0u;
    *(u32 *)(record + 0x38) = 0x0u;
    *(u32 *)(record + 0x3c) = 0x0u;
    *(u32 *)(record + 0x40) = 0x0u;
}

void fn_00129ae8(u8 * record)
{
    *(u32 *)(record + 0x558) = 0x0u;
    *(u32 *)(record + 0x55c) = 0x0u;
    *(u32 *)(record + 0x560) = 0x0u;
    *(u8 *)(record + 0x564) = 0x0u;
    *(u32 *)(record + 0xc48) = 0x0u;
}

void fn_00129b04(u8 * record) { *(u8 *)(record + 0x6c) = 0x0u; *(u32 *)(record + 0x70) = 0x0u; }

void fn_00152630(u8 * record)
{
    *(u32 *)(record + 0xc) = 0x0u;
    *(u8 *)(record + 0x14) = 0x0u;
    *(u8 *)(record + 0x15) = 0x0u;
    *(u8 *)(record + 0x16) = 0x0u;
    *(u8 *)(record + 0x17) = 0x0u;
    *(u16 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x58) = 0x0u;
    *(u32 *)(record + 0x5c) = 0x0u;
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
}

void fn_0015f180(u8 * record) { *(u32 *)(record) = 0x0u; *(u16 *)(record + 0x4) = 0x0u; }

void fn_001957e0(u8 * record)
{
    *(u8 *)(record) = 0x0u;
    *(u8 *)(record + 0x1) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
}

void fn_001a3c68(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u8 *)(record + 0x11) = 0x0u;
}

void fn_001ad020(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u16 *)(record + 0x8) = 0x0u;
}

void fn_001ceb94(u8 * record)
{
    *(u8 *)(record + 0x68) = 0x0u;
    *(u8 *)(record + 0x69) = 0x0u;
    *(u8 *)(record + 0x6a) = 0x0u;
}

void fn_00258110(u8 * record) { *(u8 *)(record) = 0x0u; *(u8 *)(record + 0x24) = 0x0u; }

void fn_0025b2e8(u8 * record) { *(u8 *)(record + 0x9) = 0x0u; *(u8 *)(record + 0x8) = 0x0u; }

void fn_002cab9c(u8 * record)
{
    *(u8 *)(record + 0x8) = 0x0u;
    *(u8 *)(record + 0xc) = 0x0u;
    *(u8 *)(record + 0x14) = 0x0u;
    *(u8 *)(record + 0x1c) = 0x0u;
    *(u8 *)(record + 0x24) = 0x0u;
    *(u8 *)(record + 0x2c) = 0x0u;
    *(u8 *)(record + 0x34) = 0x0u;
    *(u8 *)(record + 0x3c) = 0x0u;
    *(u8 *)(record + 0x44) = 0x0u;
    *(u8 *)(record + 0x4c) = 0x0u;
}

void fn_002d3124(u8 * record)
{
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
}

void fn_002e3f6c(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u8 *)(record + 0x14) = 0x0u;
    *(u8 *)(record + 0x15) = 0x0u;
    *(u8 *)(record + 0x16) = 0x0u;
}

void fn_00340d08(u8 * record)
{
    *(u32 *)(record + 0x28) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x38) = 0x0u;
    *(u32 *)(record + 0x34) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
}

void fn_00388f90(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x28) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
    *(u32 *)(record + 0x34) = 0x0u;
    *(u32 *)(record + 0x38) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
}

void fn_003af0fc(u8 * record)
{
    *(u8 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
}

void fn_003d4e30(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
    *(u32 *)(record + 0x28) = 0x0u;
}

void fn_003e6b44(u8 * record)
{
    *(u32 *)(record + 0xf8) = 0x0u;
    *(u32 *)(record + 0xf4) = 0x0u;
    *(u32 *)(record + 0xf0) = 0x0u;
}

void fn_003f2dd0(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u16 *)(record + 0x6) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
    *(u32 *)(record + 0x28) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
    *(u32 *)(record + 0x34) = 0x0u;
    *(u32 *)(record + 0x38) = 0x0u;
}

void fn_003f2e18(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u16 *)(record + 0x6) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
    *(u32 *)(record + 0x28) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
    *(u32 *)(record + 0x34) = 0x0u;
    *(u32 *)(record + 0x38) = 0x0u;
}

void fn_003f52d4(u8 * record) { *(u8 *)(record + 0x38) = 0x0u; *(u8 *)(record + 0x39) = 0x0u; }

void fn_0042ec74(u8 * record)
{
    *(u16 *)(record + 0x50) = 0x0u;
    *(u16 *)(record + 0x52) = 0x0u;
    *(u16 *)(record + 0x54) = 0x0u;
    *(u16 *)(record + 0x56) = 0x0u;
    *(u16 *)(record + 0x58) = 0x0u;
    *(u16 *)(record + 0x5a) = 0x0u;
    *(u16 *)(record + 0x5c) = 0x0u;
    *(u16 *)(record + 0x5e) = 0x0u;
    *(u16 *)(record + 0x60) = 0x0u;
    *(u16 *)(record + 0x62) = 0x0u;
    *(u16 *)(record + 0x64) = 0x0u;
    *(u16 *)(record + 0x66) = 0x0u;
    *(u16 *)(record + 0x68) = 0x0u;
    *(u16 *)(record + 0x6a) = 0x0u;
}

void fn_0042f1c0(u8 * record) { *(u8 *)(record + 0x8f4) = 0x0u; *(u8 *)(record + 0x905) = 0x0u; }

void fn_004544cc(u8 * record)
{
    *(u32 *)(record) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u8 *)(record + 0xc) = 0x0u;
}

void fn_004ed13c(u8 * record)
{
    *(u8 *)(record) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u8 *)(record + 0x10) = 0x0u;
}

void fn_004ed164(u8 * record)
{
    *(u8 *)(record) = 0x0u;
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x4) = 0x0u;
    *(u8 *)(record + 0x10) = 0x0u;
}

void fn_004ed584(u8 * record)
{
    *(u8 *)(record) = 0x0u;
    *(u32 *)(record + 0x1) = 0x0u;
    *(u32 *)(record + 0x5) = 0x0u;
    *(u32 *)(record + 0x9) = 0x0u;
    *(u32 *)(record + 0xd) = 0x0u;
}

void fn_004ed714(u8 * record)
{
    *(u32 *)(record + 0x4) = 0x0u;
    *(u16 *)(record + 0x8) = 0x0u;
    *(u16 *)(record + 0xc) = 0x0u;
}

void fn_0050c3ac(u8 * record) { *(u32 *)(record + 0xc) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; }

void fn_005210a0(u8 * record) { *(u16 *)(record + 0x6) = 0x0u; *(u32 *)(record + 0x8) = 0x0u; }

void fn_00527ca8(u8 * record)
{
    *(u32 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
    *(u32 *)(record + 0x20) = 0x0u;
    *(u32 *)(record + 0x24) = 0x0u;
    *(u32 *)(record + 0x28) = 0x0u;
    *(u32 *)(record + 0x2c) = 0x0u;
    *(u32 *)(record + 0x30) = 0x0u;
    *(u32 *)(record + 0x34) = 0x0u;
    *(u32 *)(record) = 0x0u;
    *(u8 *)(record + 0x4) = 0x0u;
    *(u8 *)(record + 0x5) = 0x0u;
    *(u8 *)(record + 0x6) = 0x0u;
}

void fn_0056a6ac(u8 * record)
{
    *(u8 *)(record + 0x8) = 0x0u;
    *(u32 *)(record + 0xc) = 0x0u;
    *(u32 *)(record + 0x10) = 0x0u;
    *(u32 *)(record + 0x14) = 0x0u;
    *(u32 *)(record + 0x18) = 0x0u;
    *(u32 *)(record + 0x1c) = 0x0u;
}
