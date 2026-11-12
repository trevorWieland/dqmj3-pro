/* Packed stat-record unpacking.
 *
 * The game stores one compact stat record per species and unpacks it into the
 * wider runtime block the battle code reads.  Every output word is one bitfield
 * of the packed record.  The record is only 2-byte aligned in places (the five
 * words at 0x1a are unaligned), so its leading flags word and 0x18 word are
 * described as bitfield units at their own offsets and the rest is read through
 * byte offsets; that is exactly the access pattern the original shows.
 *
 * The record's field meanings are not identified yet, so fields carry the
 * destination offset rather than an invented name.  The bit positions are
 * proved by the original's shifts: a field `a:b` at bit `s` is extracted with
 * `lsl (32-(s+b))` then `lsr (32-b)`, and a field ending at bit 15 or 31 with a
 * single `lsr`.
 *
 * The runtime block is packed too: its five 32-bit values at 0xca are only
 * 2-byte aligned, so they are written through byte offsets and the original
 * uses plain `str` for them.
 *
 * STATUS: reconstructed, byte-identical to the original at 0x001b1548
 * (1,064 bytes, 266 instructions; instructions and the data tail both equal).
 * The shape that reproduces it is a consequence of the original's own
 * instruction order, not tuning: the record pointer stays live across the
 * fn_006f94f4 call (it is read again at 0x18 afterwards), the three
 * single-bit fields are extracted as `(word & mask) >> shift` so armcc emits
 * `and`+`lsr` instead of a `lsl`+`lsr` pair, the clamped field is signed so the
 * clamp is `movgt` rather than `movhi`, the 0x118 pair is one 8-byte copy so it
 * becomes the original's `ldrd`+`stm`, and the call's two pointers are computed
 * at the statement that reproduces the original's hoisting points.
 */
#include "../wave080-script-api/script_api.h"

typedef unsigned short u16;
typedef unsigned long long u64;

extern void fn_006f94f4(void *destination, const void *source);

/* The record's leading 32-bit flag word, at offset 0. */
typedef struct {
    u32 id : 8;           /* bits 0..7   -> output 0x00 */
    u32 f_08 : 1;         /* bit 8       -> output 0xf1 */
    u32 f_09 : 1;         /* bit 9       -> output 0xf2 */
    u32 f_10 : 2;         /* bits 10..11 -> output 0xf4 */
    u32 f_12 : 2;         /* bits 12..13 -> output 0xf8 */
    u32 unused_14 : 2;
    u32 f_16 : 4;         /* bits 16..19 -> output 0xfc */
    u32 f_20 : 4;         /* bits 20..23 -> output 0x100 */
    u32 f_24 : 4;         /* bits 24..27 -> output 0x114 */
    u32 f_28 : 3;         /* bits 28..30 -> output 0x104, clamped to 3 */
    u32 unused_31 : 1;
} StatFlags;

/* The record's 0x18 word: four fields the runtime block keeps separately. */
typedef struct {
    u16 f_00 : 1;         /* bit 0       -> output 0xe0 */
    u16 f_01 : 4;         /* bits 1..4   -> output 0xe4, only when copy != 0 */
    u16 f_05 : 5;         /* bits 5..9   -> output 0xe8, only when copy != 0 */
    u16 f_10 : 4;         /* bits 10..13 -> output 0xec */
    u16 f_14 : 1;         /* bit 14      -> output 0xf0 as a byte */
    u16 unused_15 : 1;
} StatWord18;

/* The five 16-bit units 0x30..0x46; each struct is placed at its own offset. */
typedef struct { u16 f0:1; u16 f1:4; u16 f2:3; u16 f3:4; u16 f4:4; } Stat30;
typedef struct { u16 f0:8; u16 f1:3; u16 f2:1; u16 f3:4; } Stat32;
typedef struct { u16 f0:6; u16 f1:3; u16 f2:4; u16 f3:3; } Stat34;
typedef struct { u16 f0:5; u16 f1:4; u16 f2:5; u16 unused:2; } Stat36;
typedef struct { u16 f0:5; u16 f1:3; u16 f2:4; u16 f3:3; u16 unused:1; } Stat38;
typedef struct { u16 f0:5; u16 f1:4; u16 f2:5; u16 unused:2; } Stat3a;
typedef struct { u16 f0:5; u16 f1:4; u16 f2:5; u16 unused:2; } Stat3c;
typedef struct { u16 f0:6; u16 f1:3; u16 f2:4; u16 f3:3; } Stat3e;
typedef struct { u16 f0:5; u16 f1:3; u16 unused:8; } Stat40;
typedef struct { u16 f0:3; u16 f1:3; u16 f2:4; u16 f3:5; u16 unused:1; } Stat42;
typedef struct { u16 f0:4; u16 f1:3; u16 f2:4; u16 f3:5; } Stat44;
typedef struct { u16 f0:1; u16 f1:4; u16 f2:5; u16 f3:5; u16 unused:1; } Stat46;

#define RECORD_WORD(base, offset) (*(const u32 *)((const u8 *)(base) + (offset)))
#define RECORD_U16(base, offset) (*(const u16 *)((const u8 *)(base) + (offset)))
#define RECORD_BYTE(base, offset) (*((const u8 *)(base) + (offset)))
#define OUTPUT_WORD(out, offset, value) (*(u32 *)((out) + (offset)) = (value))
#define OUTPUT_U16(out, offset, value) (*(u16 *)((out) + (offset)) = (value))

void fn_001b1548(u8 *out, const u8 *record, int copy_selection, const u16 *extra)
{
    const StatFlags *flags = (const StatFlags *)record;
    s32 clamped;
    int i;

    OUTPUT_WORD(out, 0x00, flags->id);
    OUTPUT_WORD(out, 0x04, ((const Stat30 *)(record + 0x30))->f1);
    OUTPUT_WORD(out, 0x08, ((const Stat30 *)(record + 0x30))->f2);
    OUTPUT_WORD(out, 0x0c, ((const Stat30 *)(record + 0x30))->f3);
    OUTPUT_WORD(out, 0x10, ((const Stat30 *)(record + 0x30))->f4);
    OUTPUT_WORD(out, 0x14, ((const Stat32 *)(record + 0x32))->f0);
    OUTPUT_WORD(out, 0x18, ((const Stat32 *)(record + 0x32))->f1);
    OUTPUT_WORD(out, 0x1c, ((const Stat32 *)(record + 0x32))->f2);
    OUTPUT_WORD(out, 0x20, ((const Stat34 *)(record + 0x34))->f0);
    OUTPUT_WORD(out, 0x24, ((const Stat34 *)(record + 0x34))->f1);
    OUTPUT_WORD(out, 0x28, ((const Stat34 *)(record + 0x34))->f2);
    OUTPUT_WORD(out, 0x2c, ((const Stat34 *)(record + 0x34))->f3);
    OUTPUT_WORD(out, 0x30, ((const Stat36 *)(record + 0x36))->f0);
    OUTPUT_WORD(out, 0x34, ((const Stat36 *)(record + 0x36))->f1);
    OUTPUT_WORD(out, 0x38, ((const Stat36 *)(record + 0x36))->f2);
    OUTPUT_WORD(out, 0x3c, ((const Stat38 *)(record + 0x38))->f0);
    OUTPUT_WORD(out, 0x40, ((const Stat38 *)(record + 0x38))->f1);
    OUTPUT_WORD(out, 0x44, ((const Stat38 *)(record + 0x38))->f2);
    OUTPUT_WORD(out, 0x48, ((const Stat38 *)(record + 0x38))->f3);
    OUTPUT_WORD(out, 0x4c, ((const Stat3a *)(record + 0x3a))->f0);
    OUTPUT_WORD(out, 0x50, ((const Stat3a *)(record + 0x3a))->f1);
    OUTPUT_WORD(out, 0x54, ((const Stat3a *)(record + 0x3a))->f2);
    OUTPUT_WORD(out, 0x58, ((const Stat3c *)(record + 0x3c))->f0);
    OUTPUT_WORD(out, 0x5c, ((const Stat3c *)(record + 0x3c))->f1);
    OUTPUT_WORD(out, 0x60, ((const Stat3c *)(record + 0x3c))->f2);
    OUTPUT_WORD(out, 0x64, ((const Stat3e *)(record + 0x3e))->f0);
    OUTPUT_WORD(out, 0x68, ((const Stat3e *)(record + 0x3e))->f1);
    OUTPUT_WORD(out, 0x6c, ((const Stat3e *)(record + 0x3e))->f2);
    OUTPUT_WORD(out, 0x70, ((const Stat3e *)(record + 0x3e))->f3);
    OUTPUT_WORD(out, 0x74, ((const Stat40 *)(record + 0x40))->f0);
    OUTPUT_WORD(out, 0x78, ((const Stat40 *)(record + 0x40))->f1);
    OUTPUT_WORD(out, 0x7c, ((const Stat42 *)(record + 0x42))->f0);
    OUTPUT_WORD(out, 0x80, ((const Stat42 *)(record + 0x42))->f1);
    OUTPUT_WORD(out, 0x84, ((const Stat42 *)(record + 0x42))->f2);
    OUTPUT_WORD(out, 0x88, ((const Stat42 *)(record + 0x42))->f3);
    OUTPUT_WORD(out, 0x8c, ((const Stat44 *)(record + 0x44))->f0);
    OUTPUT_WORD(out, 0x90, ((const Stat44 *)(record + 0x44))->f1);
    OUTPUT_WORD(out, 0x94, ((const Stat44 *)(record + 0x44))->f2);
    OUTPUT_WORD(out, 0x98, ((const Stat44 *)(record + 0x44))->f3);
    OUTPUT_WORD(out, 0x9c, ((const Stat46 *)(record + 0x46))->f0);
    OUTPUT_WORD(out, 0xa0, ((const Stat46 *)(record + 0x46))->f1);
    OUTPUT_WORD(out, 0xa4, ((const Stat46 *)(record + 0x46))->f2);
    OUTPUT_WORD(out, 0xa8, ((const Stat46 *)(record + 0x46))->f3);
    OUTPUT_WORD(out, 0xac, RECORD_BYTE(record, 0x2e));
    OUTPUT_WORD(out, 0xb0, RECORD_BYTE(record, 0x2f));
    OUTPUT_WORD(out, 0xe0, ((const StatWord18 *)(record + 0x18))->f_00);
    OUTPUT_WORD(out, 0xec, ((const StatWord18 *)(record + 0x18))->f_10);
    out[0xf0] = (u8)((RECORD_U16(record, 0x18) & 0x4000u) >> 14);
    out[0xf1] = (u8)((RECORD_WORD(record, 0x00) & 0x100u) >> 8);
    out[0xf2] = (u8)((RECORD_WORD(record, 0x00) & 0x200u) >> 9);
    out[0xf3] = (u8)((const Stat30 *)(record + 0x30))->f0;
    OUTPUT_WORD(out, 0xf4, flags->f_10);
    OUTPUT_WORD(out, 0xf8, flags->f_12);
    OUTPUT_WORD(out, 0xfc, flags->f_16);
    OUTPUT_WORD(out, 0x100, flags->f_20);
    clamped = flags->f_28;
    OUTPUT_WORD(out, 0x104, clamped);
    if (clamped > 3)
        clamped = 3;
    OUTPUT_WORD(out, 0x104, clamped);
    u8 *destination = out + 0x108;
    const u8 *source = record + 0x0c;
    OUTPUT_WORD(out, 0x114, flags->f_24);
    *(u64 *)(out + 0x118) = *(const u64 *)(record + 0x04);
    OUTPUT_WORD(out, 0xb4, RECORD_WORD(record, 0x1a));
    OUTPUT_WORD(out, 0xb8, RECORD_WORD(record, 0x1e));
    OUTPUT_WORD(out, 0xbc, RECORD_WORD(record, 0x22));
    OUTPUT_WORD(out, 0xc0, RECORD_WORD(record, 0x26));
    OUTPUT_WORD(out, 0xc4, RECORD_WORD(record, 0x2a));
    OUTPUT_U16(out, 0xc8, 0);
    fn_006f94f4(destination, source);
    if (copy_selection == 0) {
        OUTPUT_WORD(out, 0xe4, 0);
        OUTPUT_WORD(out, 0xe8, 0);
    } else {
        OUTPUT_WORD(out, 0xe4, ((const StatWord18 *)(record + 0x18))->f_01);
        OUTPUT_WORD(out, 0xe8, ((const StatWord18 *)(record + 0x18))->f_05);
    }
    if (extra != 0 && *extra != 0) {
        for (i = 0; i < 5; i++)
            OUTPUT_WORD(out, 0xca + i * 4, ((const u32 *)extra)[i]);
    } else {
        for (i = 0; i < 5; i++)
            OUTPUT_WORD(out, 0xca + i * 4, 0);
    }
    OUTPUT_U16(out, 0xde, 0);
}






