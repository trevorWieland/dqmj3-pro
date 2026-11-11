/*
 * Indexed field getters.
 *
 * Recovered by pattern from the original image. Every instruction of each
 * function's original extent matches one shape and only one; the offsets,
 * widths and constants below are the ones those instructions encode.
 *
 * Each function below indexes into the record and reads a field. The stride
 *  and the field offset are the arithmetic the original instructions perform:
 *  the multiplier comes from the shift the compiler chose, and the constant
 *  from the displacement. Nothing here assumes a table type; the emitted
 *  expression is the address arithmetic the bytes encode.
 *
 * A function is present only because compiling this exact source with the
 * measured compiler profile reproduced its original instructions byte for
 * byte. A candidate that did not match was deleted, not kept as a draft.
 */
#include "small_types.h"

u32 fn_00144df4(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index * 4 + 0x4); }

u32 fn_00156f24(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x14)) + index * 4); }

u32 fn_00165d04(const u8 * record, u32 index) { return *(const s8 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x10)) + index * 64 + 0x3c); }

u32 fn_00165d18(const u8 * record, u32 index) { return *(const s8 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x10)) + index * 64 + 0x2); }

u32 fn_001667a8(const u8 * record, u32 index)
{
    return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x360)) + index * 4);
}

u32 fn_001759e8(const u8 * record, u32 index) { return *(const u8 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index + 0xd4); }

u32 fn_00183660(const u8 * record, u32 index)
{
    return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x148)))) + 0x34)) + index * 44);
}

u32 fn_001c9db4(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x50)) + index * 4); }

u32 fn_002043cc(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x8); }

u32 fn_00295f8c(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x2bc); }

u32 fn_002999a0(const u8 * record, u32 index) { return *(const s16 *)(record + index * 2 + 0x4); }

u32 fn_002b4fbc(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x14)) + index * 4); }

u32 fn_0030772c(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x28)) + index * 4); }

u32 fn_0030e6bc(const u8 * record, u32 index) { return *(const u32 *)(record + index * 748 + 0x138); }

u32 fn_003410e0(const u8 * record, u32 index) { return *(const s8 *)(record + index + 0x53); }

u32 fn_0036ee88(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x14); }

u32 fn_0036fb68(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x4); }

u32 fn_00445f00(const u8 * record, u32 index) { return *(const u32 *)(record + index * 8 + 0x20); }

u32 fn_00445f0c(const u8 * record, u32 index) { return *(const s8 *)(record + index * 8 + 0x1c); }

u32 fn_0048cbf8(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x60)) + index * 4); }

u32 fn_005ca270(const u8 * record, u32 index) { return *(const u32 *)(record + index * 8 + 0x20); }

u32 fn_005ca2ac(const u8 * record, u32 index) { return *(const s8 *)(record + index * 8 + 0x1c); }

u32 fn_005e2a58(const u8 * record, u32 index)
{
    return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x190)) + index * 12);
}

u32 fn_005ea5ec(const u8 * record, u32 index)
{
    return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x148)) + 0x8c)) + index * 4);
}

u32 fn_005f07fc(const u8 * record, u32 index)
{
    return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)))) + 0xc)) + index * 4);
}

u32 fn_00604dec(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x14)) + index * 4); }

u32 fn_0066eb80(const u8 * record, u32 index)
{
    return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + 0x4)) + index * 4);
}

u32 fn_006a8b3c(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0xc)) + index * 4); }

u32 fn_006b1300(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x190); }

u32 fn_006b51d8(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index * 4 + 0x450); }

u32 fn_006b51f8(const u8 * record, u32 index) { return *(const s8 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index + 0x513); }

u32 fn_006b630c(const u8 * record, u32 index) { return *(const s8 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index + 0xc4); }

u32 fn_006b7e7c(const u8 * record, u32 index) { return *(const s16 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index * 2 + 0x2e8); }

u32 fn_006b8538(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index * 4 + 0x14); }

u32 fn_006b8a50(const u8 * record, u32 index) { return *(const u32 *)(record + index * 260 + 0x118); }

u32 fn_006bb538(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x18c)) + index * 4); }

u32 fn_006bc570(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index * 4); }

u32 fn_006bc57c(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x4)) + index * 4 + 0x30); }

u32 fn_006be0cc(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x38)) + index * 4); }

u32 fn_006c3984(const u8 * record, u32 index) { return *(const s16 *)(record + index * 14 + 0x26); }

u32 fn_006c7718(const u8 * record, u32 index) { return *(const u32 *)(record + index * 972 + 0x3e4); }

u32 fn_006cb150(const u8 * record, u32 index) { return *(const u32 *)(record + index * 140 + 0xa4); }

u32 fn_006d1a88(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x38)) + index * 4); }

u32 fn_006e69b8(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x44); }

u32 fn_006e69c4(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x24); }

u32 fn_006e6e4c(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x4); }

u32 fn_006e6e60(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x34); }

u32 fn_006e6eb0(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x14); }

u32 fn_006e6ef8(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0x4c); }

u32 fn_006e82bc(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0xc); }

u32 fn_006e9c88(const u8 * record, u32 index) { return *(const u32 *)(record + index * 4 + 0xc); }

u32 fn_006e9d4c(const u8 * record, u32 index) { return *(const u8 *)(record + index + 0x8); }

u32 fn_006ee14c(const u8 * record, u32 index) { return *(const u32 *)((const u8 *)(uptr)(*(const u32 *)(record + 0x8)) + index * 4); }

u32 fn_006f4a8c(const u8 * record, u32 index) { return *(const s8 *)(record + index - 0xf); }
