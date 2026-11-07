#include "fixture_internal.h"

SqPrototypeU32 fixture18_execute(void)
{
    CreationFixture018 *f = &creation_fixture018;
    f->result = sq_script_create018(fixture18_vm(), fixture18_destination(), fixture_prototype(0));
    if (f->result && f->phase) {
        if (f->phase == 2 && f->weak_owner.type & 0x08000000u) sq_prefix_clear(&f->weak_owner);
        sq_prefix_clear(fixture18_destination());
        if (f->phase == 1 && f->weak_owner.type & 0x08000000u) sq_prefix_clear(&f->weak_owner);
    }
    return 1;
}

SqPrototypeU32 fixture18_snapshot(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    SqPrototypeU32 at = fixture_snapshot(output, capacity);
    if (!at || capacity < at + 64 * 16 + 64) return 0;
    CreationFixture018 *f = &creation_fixture018;
    output[at++] = f->result; output[at++] = f->events; output[at++] = f->overflow;
    output[at++] = f->allocations; output[at++] = f->reallocations;
    output[at++] = fixture18_destination()->type; output[at++] = fixture18_payload(fixture18_destination());
    output[at++] = fixture_script(2)->shared == fixture_shared() ? 1 : 2;
    output[at++] = fixture_identity(fixture18_alternate_state()->chain);
    output[at++] = fixture_identity(fixture18_vm()->stack);
    __builtin_memcpy(output + at++, fixture18_vm()->unknown_to_shared, 4);
    for (SqPrototypeU32 i = 0; i < 8; ++i) {
        output[at++] = fixture_values(3)[i].type; output[at++] = fixture18_payload(fixture_values(3) + i);
        output[at++] = fixture18_alternate_stack()[i].type; output[at++] = fixture18_payload(fixture18_alternate_stack() + i);
    }
    for (SqPrototypeU32 i = 0; i < f->events; ++i)
        for (SqPrototypeU32 j = 0; j < 16; ++j) output[at++] = f->observations[i][j];
    return at;
}
