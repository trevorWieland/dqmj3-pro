/* Flag write helpers recovered by source permutation.
 *
 * Every function here is byte-exact against its original extent under the
 * measured armcc 4.1 build 1454 profile. The byte mask is spelled `0xfe`, not
 * `~0x1u`, because that is the constant the original `and` encodes; the
 * complement makes armcc emit `bic` instead.
 */

#include "views_03.h"

u8 * fn_00654c58(FlagRecord_00654c58 *self, s32 bit_index)
{
    FlagRecord_00654c58 *record = self;
    s32 byte_index = bit_index >> 3;
    record->flags_00dc[byte_index] |= 1u << (bit_index & 7);
    return (u8 *)record + byte_index;
}

FlagRecord_00655760 * fn_00655760(FlagRecord_00655760 *self, u32 value, u32 enabled)
{
    FlagRecord_00655760 *record = self;
    u32 mask = 1u << (value & 7u);
    u32 previous = record->flags_0000;
    record->flags_0000 = enabled ? (mask | previous) : (previous & ~mask);
    return record;
}

FlagRecord_0067411c * fn_0067411c(FlagRecord_0067411c *self)
{
    FlagRecord_0067411c *record = self;
    record->flags_004c |= 0x80u;
    return record;
}

void * fn_00688818(FlagOwner_00688818 *self, u32 force)
{
    s32 value = self->state_000d;
    if (!force && self->state_000c == value) {
        return self;
    }
    FlagRecord_00688818 *record = self->record;
    record->flags_0044 = (record->flags_0044 & 0xfeu) | (u32)value;
    return record;
}

FlagRecord_0069c304 * fn_0069c304(FlagOwner_0069c304 *self, u32 value)
{
    FlagRecord_0069c304 *record = self->record;
    if (!record) {
        return record;
    }
    record->flags_0044 = value | (record->flags_0044 & 0xfeu);
    return record;
}

u32 fn_0069e710(FlagOwner_0069e710 *self)
{
    FlagRecord_0069e710 *record = self->record;
    u32 value = (u32)(s32)self->state_000c;
    u32 flags = record->flags_0044;
    if ((flags & 1u) == value) {
        return value;
    }
    flags = (flags & ~1u) | value;
    record->flags_0044 = flags;
    return flags;
}

u32 fn_0069e748(FlagOwner_0069e748 *self)
{
    FlagRecord_0069e748 *record = self->record;
    u32 value = (u32)(s32)self->state_000c;
    u32 flags = record->flags_0044;
    if ((flags & 1u) == value) {
        return value;
    }
    flags = (flags & ~1u) | value;
    record->flags_0044 = flags;
    return flags;
}
