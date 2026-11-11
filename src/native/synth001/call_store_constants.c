/*
 * Calls whose result is an object the caller initialises.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below calls another split function with its first argument,
 *  stores one literal-pool constant in the returned pointer and returns that
 *  pointer. The callee is named by the address its call instruction targets;
 *  the constant is the word the function's own literal pool holds.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

/* This unit calls these split functions; each resolves to the address
 * its original call instruction targets:
 * fn_001160fc, fn_00116f6c, fn_00117720, fn_00118dcc, fn_00127984, fn_0013d574, fn_0016dd44, fn_001f7350, fn_00218664, fn_0022cfac, fn_0025dea8, fn_0025fb7c, fn_002b13a0, fn_002fdf94, fn_0035a0cc, fn_003690f4, fn_0039e374, fn_003fedc0, fn_0040e3f0, fn_00474168, fn_004eddf4, fn_00520de8, fn_00746390, fn_007464d8, fn_00746624, fn_00749ddc
 */

u32 * fn_001084a8(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_001160fc(a);
    p[0] = 0x851418u;
    return p;
}

u32 * fn_00109230(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00118dcc(a);
    p[0] = 0x81d07cu;
    return p;
}

u32 * fn_0010c8e8(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00117720(a);
    p[0] = 0x858bd8u;
    return p;
}

u32 * fn_001160fc(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00116f6c(a);
    p[0] = 0x857c28u;
    return p;
}

u32 * fn_00124dc4(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0013d574(a);
    p[0] = 0x8564acu;
    return p;
}

u32 * fn_00127ab0(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00127984(a);
    p[0] = 0x858780u;
    return p;
}

u32 * fn_0015cc44(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0016dd44(a);
    p[0] = 0x833ea0u;
    return p;
}

u32 * fn_001c2484(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00118dcc(a);
    p[0] = 0x81b7c4u;
    return p;
}

u32 * fn_002a1ab8(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0025fb7c(a);
    p[0] = 0x851b88u;
    return p;
}

u32 * fn_002ddb0c(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_002b13a0(a);
    p[0] = 0x82058cu;
    return p;
}

u32 * fn_002faa10(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_002b13a0(a);
    p[0] = 0x821614u;
    return p;
}

u32 * fn_002fb4c4(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_001f7350(a);
    p[0] = 0x821650u;
    return p;
}

u32 * fn_003053fc(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_001f7350(a);
    p[0] = 0x8218f4u;
    return p;
}

u32 * fn_00316048(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_001f7350(a);
    p[0] = 0x822940u;
    return p;
}

u32 * fn_003267d8(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0039e374(a);
    p[0] = 0x8238acu;
    return p;
}

u32 * fn_00339888(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00746390(a);
    p[0] = 0x824d8cu;
    return p;
}

u32 * fn_00359f2c(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0035a0cc(a);
    p[0] = 0x826a7cu;
    return p;
}

u32 * fn_00359f90(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0035a0cc(a);
    p[0] = 0x826a90u;
    return p;
}

u32 * fn_0036e354(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0025dea8(a);
    p[0] = 0x8281bcu;
    return p;
}

u32 * fn_003789ec(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_001f7350(a);
    p[0] = 0x828b74u;
    return p;
}

u32 * fn_00385b88(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0022cfac(a);
    p[0] = 0x829c48u;
    return p;
}

u32 * fn_00390794(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_002fdf94(a);
    p[0] = 0x82b0fcu;
    return p;
}

u32 * fn_00391ccc(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00218664(a);
    p[0] = 0x82b1a4u;
    return p;
}

u32 * fn_0039b5d8(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0022cfac(a);
    p[0] = 0x82c6c8u;
    return p;
}

u32 * fn_003c0fcc(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_003fedc0(a);
    p[0] = 0x82fc28u;
    return p;
}

u32 * fn_003cd068(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0016dd44(a);
    p[0] = 0x830f14u;
    return p;
}

u32 * fn_003d8360(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_002fdf94(a);
    p[0] = 0x83199cu;
    return p;
}

u32 * fn_003db8d8(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_003690f4(a);
    p[0] = 0x831b30u;
    return p;
}

u32 * fn_003f4634(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_003690f4(a);
    p[0] = 0x834eb4u;
    return p;
}

u32 * fn_003f4738(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_0040e3f0(a);
    p[0] = 0x834fa4u;
    return p;
}

u32 * fn_003f728c(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00749ddc(a);
    p[0] = 0x8357a0u;
    return p;
}

u32 * fn_0040e3f0(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_003690f4(a);
    p[0] = 0x8380e8u;
    return p;
}

u32 * fn_00420fb8(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_001f7350(a);
    p[0] = 0x83aa88u;
    return p;
}

u32 * fn_0042bbc4(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_007464d8(a);
    p[0] = 0x83ba7cu;
    return p;
}

u32 * fn_00443f4c(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00746624(a);
    p[0] = 0x83e104u;
    return p;
}

u32 * fn_00454ffc(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00474168(a);
    p[0] = 0x8527d0u;
    return p;
}

u32 * fn_004df308(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_004eddf4(a);
    p[0] = 0x8563f0u;
    return p;
}

u32 * fn_004e2b10(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_004eddf4(a);
    p[0] = 0x856774u;
    return p;
}

u32 * fn_004e81d8(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_004eddf4(a);
    p[0] = 0x8569fcu;
    return p;
}

u32 * fn_004ebda0(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_004eddf4(a);
    p[0] = 0x856bf8u;
    return p;
}

u32 * fn_00521734(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_00520de8(a);
    p[0] = 0x857424u;
    return p;
}

u32 * fn_0058aec4(u32 a)
{
    u32 *p = (u32 *)(uptr)fn_003690f4(a);
    p[0] = 0x8438a0u;
    return p;
}
