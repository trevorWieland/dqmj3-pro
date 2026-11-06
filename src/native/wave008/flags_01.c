#include "views_01.h"

FlagRecord_0021c420 * fn_0021c420(FlagOwner_0021c420 *self, u32 value)
{
    FlagRecord_0021c420 *record = self->record;
    record->flags_0044 = value | (record->flags_0044 & ~0x1u);
    return record;
}

FlagRecord_0021d7a0 * fn_0021d7a0(FlagOwner_0021d7a0 *self, u32 value)
{
    FlagRecord_0021d7a0 *record = self->record;
    record->flags_0044 = value | (record->flags_0044 & ~0x1u);
    return record;
}

FlagRecord_0024d76c * fn_0024d76c(FlagRecord_0024d76c *self)
{
    FlagRecord_0024d76c *record = self;
    record->flags_0004 &= ~0x80000000u;
    return record;
}

FlagRecord_0028fc94 * fn_0028fc94(FlagOwner_0028fc94 *self, u32 value)
{
    FlagRecord_0028fc94 *record = self->record;
    if (!record) {
        return record;
    }
    record->flags_0044 = value | (record->flags_0044 & ~0x1u);
    return record;
}

FlagRecord_00309c0c * fn_00309c0c(FlagOwner_00309c0c *self)
{
    FlagRecord_00309c0c *record = self->record;
    record->flags_0044 &= ~0x1u;
    return record;
}

FlagRecord_0031b764 * fn_0031b764(FlagOwner_0031b764 *self, u32 value)
{
    FlagRecord_0031b764 *record = self->record;
    record->flags_0044 = value | (record->flags_0044 & ~0x1u);
    return record;
}

FlagRecord_0038df80 * fn_0038df80(FlagOwner_0038df80 *self, u32 value)
{
    FlagRecord_0038df80 *record = self->record;
    record->flags_0044 = value | (record->flags_0044 & ~0x1u);
    return record;
}

FlagRecord_00394dc4 * fn_00394dc4(FlagOwner_00394dc4 *self, u32 value)
{
    FlagRecord_00394dc4 *record = self->record;
    record->flags_0044 = value | (record->flags_0044 & ~0x1u);
    return record;
}

FlagRecord_00394ddc * fn_00394ddc(FlagOwner_00394ddc *self, u32 value)
{
    FlagRecord_00394ddc *record = self->record;
    record->flags_0044 = value | (record->flags_0044 & ~0x1u);
    return record;
}

FlagRecord_00423200 * fn_00423200(FlagOwner_00423200 *self, u32 value)
{
    FlagRecord_00423200 *record = self->record;
    record->flags_0044 = value | (record->flags_0044 & ~0x1u);
    return record;
}
