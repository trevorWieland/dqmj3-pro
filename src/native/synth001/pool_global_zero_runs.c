/*
 * Runs of fixed-address global words zeroed.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below sets a run of words at one fixed data address to zero.
 *  The address is reached through an extern byte array the linker defines at
 *  the measured address, so the compiler keeps the pool word as a relocation
 *  instead of folding a number; the offsets are the ones the stores encode.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* Data addresses the functions below use as a base; the linker
 * defines each at the address its literal pool word holds. */
extern u8 g_00892390[];
extern u8 g_008923ac[];
extern u8 g_008924a8[];
extern u8 g_008924b0[];
extern u8 g_008924bc[];
extern u8 g_008924c4[];
extern u8 g_008924cc[];
extern u8 g_008924d8[];
extern u8 g_008924e0[];
extern u8 g_008924f8[];
extern u8 g_008927fc[];
extern u8 g_00892814[];
extern u8 g_0089281c[];
extern u8 g_00892824[];
extern u8 g_00892834[];
extern u8 g_0089283c[];
extern u8 g_00892844[];
extern u8 g_0089284c[];
extern u8 g_00892864[];
extern u8 g_0089289c[];
extern u8 g_008928c8[];
extern u8 g_008928d4[];
extern u8 g_008928dc[];
extern u8 g_008928ec[];
extern u8 g_008994ac[];
extern u8 g_008994bc[];
extern u8 g_008994c4[];
extern u8 g_00899e98[];
extern u8 g_00899e9c[];
extern u8 g_008bf61c[];
extern u8 g_008bf658[];
extern u8 g_008bf660[];
extern u8 g_008bf668[];
extern u8 g_008bf670[];
extern u8 g_008d1880[];
extern u8 g_008e96e0[];

void fn_001d50b4(void) { *(volatile u32 *)(g_008924e0) = 0x0u; *(volatile u32 *)(g_008924e0 + 0x4) = 0x0u; }

void fn_00203f28(void) { *(volatile u32 *)(g_00892390 + 0x4) = 0x0u; *(volatile u32 *)(g_00892390 + 0x8) = 0x0u; }

void fn_0020c2ac(void) { *(volatile u32 *)(g_008924a8) = 0x0u; *(volatile u32 *)(g_008924a8 + 0x4) = 0x0u; }

void fn_00227344(void) { *(volatile u32 *)(g_008994bc) = 0x0u; *(volatile u32 *)(g_008994bc + 0x4) = 0x0u; }

void fn_00242bb0(void) { *(volatile u32 *)(g_00892844) = 0x0u; *(volatile u32 *)(g_00892844 + 0x4) = 0x0u; }

void fn_002530f4(void) { *(volatile u32 *)(g_008923ac) = 0x0u; *(volatile u32 *)(g_008923ac + 0x4) = 0x0u; }

void fn_0025beac(void) { *(volatile u32 *)(g_00892814) = 0x0u; *(volatile u32 *)(g_00892814 + 0x4) = 0x0u; }

void fn_0025ff50(void) { *(volatile u32 *)(g_008bf668) = 0x0u; *(volatile u32 *)(g_008bf668 + 0x4) = 0x0u; }

void fn_0026984c(void) { *(volatile u32 *)(g_008bf658) = 0x0u; *(volatile u32 *)(g_008bf658 + 0x4) = 0x0u; }

void fn_0026cdb8(void) { *(volatile u32 *)(g_008924bc) = 0x0u; *(volatile u32 *)(g_008924bc + 0x4) = 0x0u; }

void fn_0028bdfc(void) { *(volatile u32 *)(g_00892824) = 0x0u; *(volatile u32 *)(g_00892824 + 0x4) = 0x0u; }

void fn_00299f00(void) { *(volatile u32 *)(g_008928d4) = 0x0u; *(volatile u32 *)(g_008928d4 + 0x4) = 0x0u; }

void fn_002cd4b4(void) { *(volatile u32 *)(g_0089284c) = 0x0u; *(volatile u32 *)(g_0089284c + 0x4) = 0x0u; }

void fn_002d81b8(void) { *(volatile u32 *)(g_008924f8) = 0x0u; *(volatile u32 *)(g_008924f8 + 0x4) = 0x0u; }

void fn_002e324c(void) { *(volatile u32 *)(g_0089281c) = 0x0u; *(volatile u32 *)(g_0089281c + 0x4) = 0x0u; }

void fn_002ea858(void) { *(volatile u32 *)(g_00892864 + 0x30) = 0x0u; *(volatile u32 *)(g_00892864 + 0x34) = 0x0u; }

void fn_0030c344(void) { *(volatile u32 *)(g_00892834) = 0x0u; *(volatile u32 *)(g_00892834 + 0x4) = 0x0u; }

void fn_00334ad0(void) { *(volatile u32 *)(g_008928dc) = 0x0u; *(volatile u32 *)(g_008928dc + 0x4) = 0x0u; }

void fn_0033a3f0(void) { *(volatile u32 *)(g_008924b0 + 0x4) = 0x0u; *(volatile u32 *)(g_008924b0 + 0x8) = 0x0u; }

void fn_0033cc5c(void) { *(volatile u32 *)(g_008924cc) = 0x0u; *(volatile u32 *)(g_008924cc + 0x4) = 0x0u; }

void fn_0033cd44(void) { *(volatile u32 *)(g_008924d8) = 0x0u; *(volatile u32 *)(g_008924d8 + 0x4) = 0x0u; }

void fn_00378bd8(void) { *(volatile u32 *)(g_008924c4) = 0x0u; *(volatile u32 *)(g_008924c4 + 0x4) = 0x0u; }

void fn_00388850(void) { *(volatile u32 *)(g_0089289c) = 0x0u; *(volatile u32 *)(g_0089289c + 0x4) = 0x0u; }

void fn_00388954(void) { *(volatile u32 *)(g_008bf670) = 0x0u; *(volatile u32 *)(g_008bf670 + 0x4) = 0x0u; }

void fn_0039e4cc(void) { *(volatile u32 *)(g_0089283c) = 0x0u; *(volatile u32 *)(g_0089283c + 0x4) = 0x0u; }

void fn_003e6b10(void) { *(volatile u32 *)(g_008bf660) = 0x0u; *(volatile u32 *)(g_008bf660 + 0x4) = 0x0u; }

void fn_0065e50c(void)
{
    *(volatile u32 *)(g_008bf61c + 0x38) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x34) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x30) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x2c) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x28) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x24) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x20) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x1c) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x18) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x14) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x10) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0xc) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x8) = 0x0u;
    *(volatile u32 *)(g_008bf61c + 0x4) = 0x0u;
    *(volatile u32 *)(g_008bf61c) = 0x0u;
}

void fn_00660ce8(void)
{
    *(volatile u32 *)(g_008994ac + 0x4) = 0x0u;
    *(volatile u32 *)(g_008994ac + 0x8) = 0x0u;
    *(volatile u32 *)(g_008994ac + 0xc) = 0x0u;
}

void fn_00661028(void) { *(volatile u32 *)(g_008994c4) = 0x0u; *(volatile u32 *)(g_008994c4 + 0x4) = 0x0u; }

void fn_00661758(void) { *(volatile u32 *)(g_008927fc + 0x8) = 0x0u; *(volatile u32 *)(g_008927fc + 0xc) = 0x0u; }

void fn_0068f844(void) { *(volatile u32 *)(g_008928c8 + 0x4) = 0x0u; *(volatile u32 *)(g_008928c8 + 0x8) = 0x0u; }

void fn_006914ec(void)
{
    *(volatile u32 *)(g_008d1880) = 0x0u;
    *(volatile u32 *)(g_008d1880 + 0x4) = 0x0u;
    *(volatile u32 *)(g_008d1880 + 0x8) = 0x0u;
    *(volatile u32 *)(g_00899e98) = 0x0u;
}

void fn_006917f4(void) { *(volatile u32 *)(g_00899e9c) = 0x0u; *(volatile u32 *)(g_00899e9c + 0x4) = 0x0u; }

void fn_006a7b54(void) { *(volatile u32 *)(g_008928ec) = 0x0u; *(volatile u32 *)(g_008928ec + 0x4) = 0x0u; }

void fn_0070c17c(void)
{
    *(volatile u32 *)(g_008e96e0) = 0x0u;
    *(volatile u32 *)(g_008e96e0 + 0x4) = 0x0u;
    *(volatile u8 *)(g_008e96e0 + 0x8) = 0x0u;
}
