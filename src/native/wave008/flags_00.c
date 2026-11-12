/* Flag write helpers recovered by source permutation.
 *
 * Every function here is byte-exact against its original extent under the
 * measured armcc 4.1 build 1454 profile. The byte mask is spelled `0xfe`, not
 * `~0x1u`, because that is the constant the original `and` encodes; the
 * complement makes armcc emit `bic` instead.
 */

#include "views_00.h"

u32 fn_0013d538(FlagRecord_0013d538 *self, u32 value)
{
    FlagRecord_0013d538 *record = self;
    record->field_001c = value;
    record->flags_0a14 |= 0x10u;
    return record->flags_0a14;
}

u32 fn_0013d554(FlagRecord_0013d554 *self, u32 value)
{
    FlagRecord_0013d554 *record = self;
    record->field_0014 = value;
    record->field_0016 = value;
    record->flags_0a14 |= 0x2u;
    return record->flags_0a14;
}

FlagRecord_0016ac3c * fn_0016ac3c(FlagOwner_0016ac3c *self, u32 value)
{
    FlagRecord_0016ac3c *record = self->record;
    record->flags_0044 = value | (record->flags_0044 & 0xfeu);
    return record;
}

u32 fn_00170b94(FlagRecord_00170b94 *self, u32 value)
{
    FlagRecord_00170b94 *record = self;
    u32 previous = record->flags_0036 & 1u;
    record->flags_0036 = (value & 1u) | (record->flags_0036 & ~0x1u);
    return previous;
}

FlagRecord_0017fc28 * fn_0017fc28(FlagOwner_0017fc28 *self, u32 value)
{
    FlagRecord_0017fc28 *record = self->record;
    record->flags_0098 = value | record->flags_0098;
    return record;
}

FlagRecord_0017fcfc * fn_0017fcfc(FlagOwner_0017fcfc *self, u32 value)
{
    FlagRecord_0017fcfc *record = self->record;
    record->flags_0098 &= ~value;
    return record;
}

FlagRecord_001a3e54 * fn_001a3e54(FlagOwner_001a3e54 *self, u32 value)
{
    FlagRecord_001a3e54 *record = self->record;
    record->flags_001e = (value << 4) | (record->flags_001e & ~0x10u);
    return record;
}

FlagRecord_001a3e70 * fn_001a3e70(FlagOwner_001a3e70 *self, u32 value)
{
    FlagRecord_001a3e70 *record = self->record;
    record->flags_001e = (value << 6) | (record->flags_001e & ~0x40u);
    return record;
}

FlagRecord_0020b99c * fn_0020b99c(FlagOwner_0020b99c *self)
{
    FlagRecord_0020b99c *record = self->record;
    record->flags_0040 &= ~0x2u;
    return record;
}

FlagRecord_0020b9b0 * fn_0020b9b0(FlagOwner_0020b9b0 *self)
{
    FlagRecord_0020b9b0 *record = self->record;
    record->flags_0040 |= 0x2u;
    return record;
}
