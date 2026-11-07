#define sq_lookup_reallocate020 fixture_scratch_reallocate_saved026
#include "../squirrel-wave023/fixture_services020.c"
#undef sq_lookup_reallocate020
#include "fixture_internal.h"

void *sq_lookup_reallocate020(void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes)
{
    void *result = fixture_scratch_reallocate_saved026(storage, old_bytes, new_bytes);
    SqPrefixObject012 *input = fixture_receiver020();
    if (fixture_variant026 == 60) input->value.integer = -7654321;
    if (fixture_variant026 == 61) input->value.bits = 0x3dcccccdu;
    if (fixture_variant026 == 62) input->value.bits = 1;
    if (fixture_variant026 == 63) input->type = 0x05000002u;
    if (fixture_variant026 == 64)
        *input = (SqPrefixObject012){0x01000001u, {.bits = 0x1234}};
    if (fixture_variant026 == 65) {
        SqLookupSharedStorage020 *alternate = (void *)fixture_state019(1);
        fixture_vm020()->shared = &alternate->common;
    }
    if (fixture_variant026 >= 60 && fixture_variant026 <= 65)
        fixture_event020(30, input->type, input->value.bits);
    return result;
}
