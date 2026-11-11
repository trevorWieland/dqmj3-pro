/*
 * Pool constants written into a run of record fields.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below writes several constants held in its literal pool into
 *  fields of a record supplied by the caller, in the order the original stores
 *  execute.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

void fn_00106510(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record) = 0x81d330u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
    *(volatile u32 *)(record + 0x18) = 0x0u;
    *(volatile u32 *)(record + 0x1c) = 0x0u;
    *(volatile u32 *)(record + 0x20) = 0x0u;
    *(volatile u32 *)(record + 0x24) = 0x0u;
    *(volatile u32 *)(record + 0x28) = 0x0u;
    *(volatile u32 *)(record + 0x2c) = 0x0u;
    *(volatile u32 *)(record + 0x30) = 0x0u;
    *(volatile u32 *)(record + 0x34) = 0x0u;
    *(volatile u32 *)(record + 0x38) = 0x0u;
    *(volatile u32 *)(record + 0x3c) = 0x0u;
    *(volatile u32 *)(record + 0x40) = 0x0u;
    *(volatile u32 *)(record + 0x44) = 0x0u;
    *(volatile u32 *)(record + 0x48) = 0x0u;
    *(volatile u32 *)(record + 0x4c) = 0x0u;
    *(volatile u32 *)(record + 0x50) = 0x0u;
    *(volatile u32 *)(record + 0x54) = 0x0u;
    *(volatile u32 *)(record + 0x58) = 0x0u;
    *(volatile u32 *)(record + 0x5c) = 0x0u;
}

void fn_0010ebe0(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record) = 0x850fc8u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
    *(volatile u32 *)(record + 0x18) = 0x0u;
    *(volatile u32 *)(record + 0x1c) = 0x0u;
    *(volatile u32 *)(record + 0x20) = 0x0u;
    *(volatile u32 *)(record + 0x24) = 0x0u;
    *(volatile u32 *)(record + 0x28) = 0x0u;
    *(volatile u32 *)(record + 0x2c) = 0x0u;
    *(volatile u32 *)(record + 0x30) = 0x0u;
    *(volatile u32 *)(record + 0x34) = 0x0u;
    *(volatile u32 *)(record + 0x38) = 0x0u;
    *(volatile u32 *)(record + 0x4c) = 0x0u;
    *(volatile u32 *)(record + 0x50) = 0x0u;
    *(volatile u32 *)(record + 0x54) = 0x0u;
    *(volatile u32 *)(record + 0x58) = 0x0u;
    *(volatile u32 *)(record + 0x5c) = 0x0u;
}

void fn_00111f48(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81caa8u; }

void fn_00112de4(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81d350u; }

void fn_00112f6c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81e14cu; }

void fn_00112f8c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81e15cu; }

void fn_00112fa0(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81e16cu; }

void fn_00113304(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81ec4cu; }

void fn_00113318(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81ec5cu; }

void fn_0011332c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81ec6cu; }

void fn_001133ac(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x8208e4u; }

void fn_001133c0(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x8208f4u; }

void fn_001133d4(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x820904u; }

void fn_00113460(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x820914u; }

void fn_00113928(u8 * record)
{
    *(volatile u32 *)(record) = 0x82230cu;
    *(volatile u8 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u8 *)(record + 0x10) = 0x0u;
}

void fn_0011394c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x822e40u; }

void fn_00113960(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x822e50u; }

void fn_00113a08(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record) = 0x826360u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
}

void fn_00113b80(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x827698u; }

void fn_00113d20(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x82b3b0u; }

void fn_00161bac(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record) = 0x857fd4u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
    *(volatile u8 *)(record + 0x18) = 0x0u;
    *(volatile u32 *)(record + 0x1c) = 0x0u;
    *(volatile u32 *)(record + 0x20) = 0x0u;
}

void fn_001c7e78(u8 * record)
{
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record) = 0x81bb5cu;
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u8 *)(record + 0x14) = 0x0u;
    *(volatile u8 *)(record + 0x15) = 0x0u;
}

void fn_00210704(u8 * record)
{
    *(volatile u32 *)(record) = 0x81c4a8u;
    *(volatile u8 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u8 *)(record + 0xc) = 0x0u;
    *(volatile u8 *)(record + 0xd) = 0x1u;
    *(volatile u8 *)(record + 0xe) = 0x0u;
}

void fn_00235ba0(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x851834u; }

void fn_0023617c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x851984u; }

void fn_00239494(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record) = 0x81d134u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
    *(volatile u32 *)(record + 0x18) = 0x0u;
}

void fn_0025fb7c(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0xffffffffu;
    *(volatile u32 *)(record) = 0x851a30u;
    *(volatile u32 *)(record + 0x8) = 0xffffffffu;
}

void fn_0028e264(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x81e204u; }

void fn_002cb3c0(u8 * record)
{
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record) = 0x81fba8u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u8 *)(record + 0x10) = 0x0u;
    *(volatile u8 *)(record + 0x11) = 0x0u;
    *(volatile u8 *)(record + 0x18) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
}

void fn_002d6598(u8 * record, u32 arg1)
{
    *(volatile u32 *)(record) = 0x8201a8u;
    *(volatile u8 *)(record + 0x5) = arg1;
    *(volatile u8 *)(record + 0x4) = 0xffu;
}

void fn_002d760c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x8201c8u; }

void fn_002faa60(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x821624u; }

void fn_00304540(u8 * record)
{
    *(volatile u32 *)(record) = 0x82189cu;
    *(volatile u8 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
    *(volatile u32 *)(record + 0x18) = 0x0u;
    *(volatile u32 *)(record + 0x1c) = 0x0u;
}

void fn_00318bc4(u8 * record, u32 arg1)
{
    *(volatile u32 *)(record) = 0x822af4u;
    *(volatile u8 *)(record + 0x4) = arg1;
    *(volatile u32 *)(record + 0x8) = 0x0u;
}

void fn_00339f6c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x824dc4u; }

void fn_0033a0e0(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x824dd4u; }

void fn_0035a0cc(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record) = 0x826aa4u;
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
}

void fn_0038970c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x82a878u; }

void fn_0038e41c(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record) = 0x82ad88u;
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
}

void fn_003c9218(u8 * record, u32 arg1) { *(volatile u8 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x830a78u; }

void fn_003d276c(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x83131cu; }

void fn_004233e8(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x83af1cu; }

void fn_00474678(u8 * record, u32 arg1)
{
    *(volatile u32 *)(record) = 0x853418u;
    *(volatile u8 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u8 *)(record + 0x10) = arg1;
}

void fn_004c63a8(u8 * record)
{
    *(volatile u32 *)(record) = 0x855ec0u;
    *(volatile u16 *)(record + 0x4) = 0x0u;
    *(volatile u16 *)(record + 0x6) = 0x0u;
    *(volatile u8 *)(record + 0x8) = 0x0u;
    *(volatile u8 *)(record + 0x9) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u8 *)(record + 0x10) = 0x0u;
}

void fn_004ec4a0(u8 * record)
{
    *(volatile u32 *)(record) = 0x856c64u;
    *(volatile u16 *)(record + 0xc) = 0x0u;
    *(volatile u8 *)(record + 0xe) = 0x0u;
}

void fn_004edb64(u8 * record)
{
    *(volatile u32 *)(record + 0x4) = 0x0u;
    *(volatile u32 *)(record) = 0x856ca0u;
    *(volatile u32 *)(record + 0x8) = 0x0u;
    *(volatile u32 *)(record + 0xc) = 0x0u;
    *(volatile u32 *)(record + 0x10) = 0x0u;
    *(volatile u32 *)(record + 0x14) = 0x0u;
}

void fn_004ef7f0(u8 * record) { *(volatile u8 *)(record + 0x4) = 0x0u; *(volatile u32 *)(record) = 0x856d2cu; }

void fn_0063b164(u8 * record)
{
    *(volatile u32 *)(record) = 0x8595d8u;
    *(volatile u16 *)(record + 0x4) = 0x0u;
    *(volatile u8 *)(record + 0x6) = 0x0u;
    *(volatile u8 *)(record + 0x7) = 0x1u;
}

void fn_006565b8(u8 * record)
{
    *(volatile u32 *)(record) = 0x859628u;
    *(volatile u8 *)(record + 0x4) = 0x0u;
    *(volatile u8 *)(record + 0x5) = 0x0u;
    *(volatile u8 *)(record + 0x6) = 0x0u;
    *(volatile u8 *)(record + 0x16) = 0x0u;
}

void fn_006896e0(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x851010u; }

void fn_00692e98(u8 * record, u32 arg1) { *(volatile u32 *)(record + 0x4) = arg1; *(volatile u32 *)(record) = 0x851244u; }
