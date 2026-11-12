#include "views_02.h"


FlagRecord_004bab84 * fn_004bab84(FlagRecord_004bab84 *self, u32 value)
{
    FlagRecord_004bab84 *record = self;
    record->flags_002c = value | record->flags_002c;
    return record;
}

FlagRecord_004e2f74 * fn_004e2f74(FlagRecord_004e2f74 *self, u32 value)
{
    FlagRecord_004e2f74 *record = self;
    if (value != 255u) {
        record->flags_0040 &= ~(1u << (value - 1u));
    }
    return record;
}

FlagRecord_0051e49c * fn_0051e49c(FlagOwner_0051e49c *self, u32 value)
{
    FlagRecord_0051e49c *record = self->record;
    record->flags_001e = (value & 3u) | (record->flags_001e & ~0x3u);
    return record;
}

FlagRecord_0051e4bc * fn_0051e4bc(FlagOwner_0051e4bc *self, u32 value)
{
    FlagRecord_0051e4bc *record = self->record;
    record->flags_001e = ((value & 3u) << 2) | (record->flags_001e & ~0xcu);
    return record;
}

FlagRecord_00580ca0 * fn_00580ca0(FlagOwner_00580ca0 *self)
{
    FlagRecord_00580ca0 *record = self->record;
    record->flags_0044 |= 0x1u;
    return record;
}

FlagRecord_005db474 * fn_005db474(FlagRecord_005db474 *self, u32 value, u32 enabled)
{
    FlagRecord_005db474 *record = self;
    u32 mask = 1u << value;
    u32 previous = record->flags_08ec;
    record->flags_08ec = enabled ? (mask | previous) : (previous & ~mask);
    return record;
}

FlagRecord_00616c30 * fn_00616c30(FlagRecord_00616c30 *self, u32 value, u32 enabled)
{
    FlagRecord_00616c30 *record = self;
    u32 mask = 1u << value;
    u32 previous = record->flags_0000;
    record->flags_0000 = enabled ? (mask | previous) : (previous & ~mask);
    return record;
}

FlagRecord_0061d654 * fn_0061d654(FlagRecord_0061d654 *self, u32 value, u32 enabled)
{
    FlagRecord_0061d654 *record = self;
    u32 mask = value;
    u32 previous = record->flags_0000;
    record->flags_0000 = enabled ? (mask | previous) : (previous & ~mask);
    return record;
}

FlagRecord_0063b0d8 * fn_0063b0d8(FlagOwner_0063b0d8 *self, u32 value, u32 enabled)
{
    FlagRecord_0063b0d8 *record = &self->context;
    u32 mask = 1u << value;
    u32 previous = record->flags_0b30;
    record->flags_0b30 = enabled ? (mask | previous) : (previous & ~mask);
    return record;
}

/* flag_record_clear -- 0x0063b148, 28 bytes, ARM, 32 call sites, draft.
 *
 * Clears bit (value - base_bit) in the record's 16-bit flag word at +4, where
 * base_bit is the byte at +6. The paired setters in this unit set their bit the
 * same way.
 *
 * Evidence: the reconstructed body against FlagRecord_0063b148; 32 call sites.
 */
FlagRecord_0063b148 * flag_record_clear(FlagRecord_0063b148 *self, u32 value)
{
    FlagRecord_0063b148 *record = self;
    u32 index = value - record->base_bit;
    record->flags_0004 &= ~(1u << index);
    return record;
}
