#include "fixture_internal.h"

void fixture_record(SqPrototypeU32 operation, SqPrototypeU32 object, SqPrototypeU32 size)
{
    if (weak_fixture014.count >= 64) { weak_fixture014.overflow = 1; return; }
    SqWeakReference014 *weak = fixture_weak(0);
    WeakObservation014 *row = &weak_fixture014.observations[weak_fixture014.count++];
    *row = (WeakObservation014){{operation, object, size, fixture_identity(fixture_owner()->weak), fixture_owner()->references,
        fixture_table_identity(weak->prefix.vtable), weak->prefix.references, fixture_identity(weak->prefix.weak),
        weak->object.type, fixture_payload(&weak->object), fixture_weak(1)->object.type, fixture_payload(&fixture_weak(1)->object),
        fixture_weak(2)->object.type, fixture_payload(&fixture_weak(2)->object), weak_fixture014.allocations, weak_fixture014.owner_dead}};
}

void *sq_weak_allocate014(SqPrototypeU32 bytes)
{
    SqWeakReference014 *pointer = fixture_weak(weak_fixture014.next_allocation++);
    weak_fixture014.allocations += 1;
    pointer->prefix = (SqPrototypePrefix011){&weak_alternate_table014, 0x55667788u, fixture_weak(3)};
    pointer->object = (SqPrototypeObject011){0x05000002u, {.bits = 0x11223344u}};
    fixture_record(1, fixture_identity(pointer), bytes == sizeof(SqWeakReference014) ? 20 : bytes);
    if (weak_fixture014.variant / 2 == 5) fixture_owner()->weak = fixture_weak(2);
    return pointer;
}

void sq_weak_deallocate014(void *pointer, SqPrototypeU32 bytes)
{
    fixture_record(2, fixture_identity(pointer), bytes == sizeof(SqWeakReference014) ? 20 : bytes);
}

void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes)
{
    weak_fixture014.owner_dead = 1;
    fixture_record(3, fixture_identity(pointer), bytes - (__builtin_offsetof(SqPrototype011, instructions) - 96));
}

void sq_native_closure_deallocate013(void *pointer, SqPrototypeU32 bytes)
{
    weak_fixture014.owner_dead = 1;
    fixture_record(3, fixture_identity(pointer), bytes == sizeof(SqNativeClosure013) ? 72 : bytes);
}

static void alternate_destructor(void *opaque)
{
    fixture_record(4, fixture_identity(opaque), 0);
    SqWeakReference014 *weak = opaque;
    if (weak_fixture014.root != 5) weak->prefix.weak = fixture_weak(2);
    fn_006a77c0(weak);
}

static void alternate_release(void *opaque)
{
    SqWeakReference014 *weak = opaque;
    fn_006a7780(weak);
}

const SqPrototypeVTable011 weak_alternate_table014 = {alternate_destructor, 0, alternate_release};
