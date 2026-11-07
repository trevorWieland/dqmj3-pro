#include "fixture_internal.h"

SqPrototypeU32 fixture_execute(SqPrototypeU32 mode)
{
    weak_fixture014.root = mode;
    SqPrototypeU32 group = weak_fixture014.variant / 2;
    SqWeakReference014 *weak = fixture_weak(0);
    if (mode == 1 || mode == 2) {
        fixture_owner()->weak = weak;
        if (group == 3) weak->object.type = 0x01000001u;
    } else {
        weak = fn_00233b7c(fixture_owner(), weak_fixture014.variant % 2 ? 0x08000200u : 0x08002000u);
        weak_fixture014.returned = fixture_identity(weak);
        if (group == 2) weak->prefix.weak = fixture_weak(1);
        if (group == 4) weak->prefix.vtable = &weak_alternate_table014;
    }
    if (mode == 0) {
        SqWeakReference014 *again = fn_00233b7c(fixture_owner(), 0x08010000u);
        weak_fixture014.returned += fixture_identity(again) * 100;
    }
    if (mode == 1 || mode == 3) fn_006a7780(weak);
    if (mode == 2 && fn_006a77c0(weak) != weak) return 0;
    if (mode == 4) {
        fixture_owner()->vtable->release(fixture_owner());
        fn_006a7780(weak);
    }
    if (mode == 5) {
        weak->prefix.weak = 0;
        SqWeakReference014 *dependent = fn_00233b7c(&weak->prefix, 0x08010000u);
        weak_fixture014.returned += fixture_identity(dependent) * 100;
        fn_006a7780(weak);
        fn_006a7780(dependent);
    }
    return 1;
}

SqPrototypeU32 fixture_snapshot(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    if (capacity < 2048) return 0;
    SqPrototypeU32 at = 0;
    output[at++] = weak_fixture014.count; output[at++] = weak_fixture014.overflow;
    output[at++] = weak_fixture014.allocations; output[at++] = weak_fixture014.returned; output[at++] = weak_fixture014.owner_dead;
    output[at++] = fixture_identity(fixture_owner()->weak); output[at++] = fixture_owner()->references;
    output[at++] = fixture_table_identity(fixture_owner()->vtable);
    output[at++] = fixture_identity(fixture_shared()->chain);
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        SqWeakReference014 *weak = fixture_weak(i);
        output[at++] = fixture_table_identity(weak->prefix.vtable); output[at++] = weak->prefix.references;
        output[at++] = fixture_identity(weak->prefix.weak); output[at++] = weak->object.type;
        output[at++] = fixture_payload(&weak->object);
    }
    for (SqPrototypeU32 i = 0; i < weak_fixture014.count; ++i)
        for (SqPrototypeU32 j = 0; j < 16; ++j) output[at++] = weak_fixture014.observations[i].words[j];
    return at;
}
