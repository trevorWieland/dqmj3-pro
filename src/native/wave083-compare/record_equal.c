/* Record equality predicate.
 *
 * The original at 0x006b5a7c compares two records field by field and returns 1
 * when every field is equal, 0 at the first difference.  The first parameter is
 * not used by the body at all: the original never reads r0, so the predicate is
 * reached with an ignored leading argument and the two records in r1 and r2.
 *
 * The field meanings are not identified, so each member is named for its byte
 * offset in the record.  The widths and signedness are the original's own load
 * instructions: `ldrsh` for s16, `ldrsb` for s8, `ldrb` for u8.  Three six-byte
 * sub-records at 0x82, 0x88 and 0x8e are compared as units of (s8, s8, s16,
 * s16); the original materialises each base once (`add r0, r1, #0x82`) and
 * addresses the members from it, so they are declared as nested structures
 * rather than flattened.
 *
 * Comparison order is the original's instruction order, not ascending offset:
 * 0x2c..0x3c, 0x94..0x9e, 0x4c..0x4d, the three sub-records, then 0x54..0x64.
 *
 * STATUS: reconstructed, byte-identical to the original at 0x006b5a7c
 * (620 bytes, 155 instructions).  The one shape fact that decided it: the
 * three sub-record groups must go through a local pointer to the sub-record
 * (`const SubRecord *pa = &a->r_82;` and the same for b) rather than through
 * `a->r_82.f_00` member expressions.  With member expressions armcc keeps
 * addressing everything at immediate offsets from a and b and never needs a
 * fourth callee-saved register; through the pointer it materialises each base
 * once, exactly as the original's `add r0, r1, #0x82` / `add r3, r2, #0x82`
 * show, and the extra live base forces r4 to be saved, which is the original's
 * `str r4, [sp, #-4]!` prologue.  147 instructions and no r4 save otherwise.
 */
#include "../wave080-script-api/script_api.h"

typedef signed short s16;
typedef signed char s8;

/* One six-byte sub-record: two signed bytes then two signed halfwords. */
typedef struct {
    s8 f_00;
    s8 f_01;
    s16 f_02;
    s16 f_04;
} SubRecord;

typedef struct {
    u8 pad_00[0x2c];
    s16 f_2c;
    s16 f_2e;
    s16 f_30;
    u8 pad_32[0x36 - 0x32];
    s16 f_36;
    s16 f_38;
    s16 f_3a;
    s16 f_3c;
    u8 pad_3e[0x4c - 0x3e];
    u8 f_4c;
    u8 f_4d;
    u8 pad_4e[0x54 - 0x4e];
    s16 f_54;
    s16 f_56;
    s16 f_58;
    s16 f_5a;
    s16 f_5c;
    s16 f_5e;
    s16 f_60;
    s16 f_62;
    s16 f_64;
    u8 pad_66[0x82 - 0x66];
    SubRecord r_82;
    SubRecord r_88;
    SubRecord r_8e;
    s16 f_94;
    s16 f_96;
    s16 f_98;
    s16 f_9a;
    s16 f_9c;
    s16 f_9e;
} Record;

int fn_006b5a7c(u32 unused, const Record *a, const Record *b)
{
    (void)unused;
    if (a->f_2c != b->f_2c)
        return 0;
    if (a->f_2e != b->f_2e)
        return 0;
    if (a->f_30 != b->f_30)
        return 0;
    if (a->f_36 != b->f_36)
        return 0;
    if (a->f_38 != b->f_38)
        return 0;
    if (a->f_3a != b->f_3a)
        return 0;
    if (a->f_3c != b->f_3c)
        return 0;
    if (a->f_94 != b->f_94)
        return 0;
    if (a->f_96 != b->f_96)
        return 0;
    if (a->f_98 != b->f_98)
        return 0;
    if (a->f_9a != b->f_9a)
        return 0;
    if (a->f_9c != b->f_9c)
        return 0;
    if (a->f_9e != b->f_9e)
        return 0;
    if (a->f_4c != b->f_4c)
        return 0;
    if (a->f_4d != b->f_4d)
        return 0;
    {
        const SubRecord *pa = &a->r_82;
        const SubRecord *pb = &b->r_82;
        if (pa->f_00 != pb->f_00)
            return 0;
        if (pa->f_01 != pb->f_01)
            return 0;
        if (pa->f_02 != pb->f_02)
            return 0;
        if (pa->f_04 != pb->f_04)
            return 0;
    }
    {
        const SubRecord *pa = &a->r_88;
        const SubRecord *pb = &b->r_88;
        if (pa->f_00 != pb->f_00)
            return 0;
        if (pa->f_01 != pb->f_01)
            return 0;
        if (pa->f_02 != pb->f_02)
            return 0;
        if (pa->f_04 != pb->f_04)
            return 0;
    }
    {
        const SubRecord *pa = &a->r_8e;
        const SubRecord *pb = &b->r_8e;
        if (pa->f_00 != pb->f_00)
            return 0;
        if (pa->f_01 != pb->f_01)
            return 0;
        if (pa->f_02 != pb->f_02)
            return 0;
        if (pa->f_04 != pb->f_04)
            return 0;
    }
    if (a->f_54 != b->f_54)
        return 0;
    if (a->f_56 != b->f_56)
        return 0;
    if (a->f_58 != b->f_58)
        return 0;
    if (a->f_5a != b->f_5a)
        return 0;
    if (a->f_5c != b->f_5c)
        return 0;
    if (a->f_5e != b->f_5e)
        return 0;
    if (a->f_60 != b->f_60)
        return 0;
    if (a->f_62 != b->f_62)
        return 0;
    if (a->f_64 != b->f_64)
        return 0;
    return 1;
}
