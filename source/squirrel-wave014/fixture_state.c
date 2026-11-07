#include "fixture_internal.h"

WeakFixture014 weak_fixture014;
SqPrototype011 *fixture_prototype(void) { return (SqPrototype011 *)(weak_fixture014.memory + 0x1000); }
SqNativeClosure013 *fixture_native(void) { return (SqNativeClosure013 *)(weak_fixture014.memory + 0x2000); }
SqPrototypePrefix011 *fixture_owner(void) { return weak_fixture014.variant % 2 ? &fixture_native()->reference.prefix : &fixture_prototype()->reference; }
SqPrefixState012 *fixture_shared(void) { return (SqPrefixState012 *)(weak_fixture014.memory + 0x9000); }
SqWeakReference014 *fixture_weak(SqPrototypeU32 index) { return (SqWeakReference014 *)(weak_fixture014.memory + 0x4000 + index * 0x100); }

SqPrototypeU32 fixture_identity(const void *pointer)
{
    if (!pointer) return 0;
    if (pointer == fixture_prototype()) return 1;
    if (pointer == fixture_native()) return 2;
    for (SqPrototypeU32 i = 0; i < 4; ++i) if (pointer == fixture_weak(i)) return 11 + i;
    return 999;
}

SqPrototypeU32 fixture_table_identity(const SqPrototypeVTable011 *table)
{
    if (table == weak_fixture014.weak_table) return 1;
    if (table == weak_fixture014.prototype_table) return 2;
    if (table == weak_fixture014.native_table) return 3;
    if (table == weak_fixture014.base_table) return 4;
    if (table == &weak_alternate_table014) return 5;
    return 999;
}

SqPrototypeU32 fixture_payload(const SqPrototypeObject011 *object)
{
    return object->type & 0x08000000u ? fixture_identity(object->value.reference) :
        object->value.reference == fixture_owner() ? 777 : object->value.bits;
}

SqPrototypeU32 fixture_bind(void *memory, SqPrototypeU32 bytes, const SqPrototypeVTable011 *weak_table,
    const SqPrototypeVTable011 *prototype_table, const SqPrototypeVTable011 *native_table, const SqPrototypeVTable011 *base_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    weak_fixture014.memory = memory; weak_fixture014.bytes = bytes; weak_fixture014.weak_table = weak_table;
    weak_fixture014.prototype_table = prototype_table; weak_fixture014.native_table = native_table; weak_fixture014.base_table = base_table;
    return 1;
}

SqPrototypeU32 fixture_prepare(SqPrototypeU32 variant)
{
    weak_fixture014.variant = variant; weak_fixture014.count = weak_fixture014.overflow = weak_fixture014.allocations = 0;
    weak_fixture014.returned = weak_fixture014.owner_dead = 0;
    for (SqPrototypeU32 i = 0; i < weak_fixture014.bytes; ++i) weak_fixture014.memory[i] = 0;
    SqPrototype011 *prototype = fixture_prototype();
    prototype->reference.vtable = weak_fixture014.prototype_table;
    prototype->name = prototype->source_name = (SqPrototypeObject011){0x01000001u, {.reference = 0}};
    SqNativeClosure013 *native = fixture_native();
    native->reference.prefix.vtable = weak_fixture014.native_table;
    native->shared = fixture_shared(); fixture_shared()->chain = &native->reference;
    native->name = native->environment = (SqPrototypeObject011){0x01000001u, {.reference = 0}};
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        SqWeakReference014 *weak = fixture_weak(i);
        weak->prefix = (SqPrototypePrefix011){weak_fixture014.weak_table, 0, 0};
        weak->object = (SqPrototypeObject011){0x08010000u, {.reference = fixture_weak(0)}};
    }
    fixture_weak(0)->object = (SqPrototypeObject011){variant % 2 ? 0x08000200u : 0x08002000u, {.reference = fixture_owner()}};
    SqPrototypeU32 group = variant / 2;
    weak_fixture014.next_allocation = group == 1 ? 1 : 0;
    if (group == 1) { fixture_owner()->weak = fixture_weak(0); fixture_weak(0)->object.type = 0x08000040u; }
    if (group == 2) fixture_weak(0)->prefix.weak = fixture_weak(1);
    if (group == 3) fixture_owner()->references = 0x80000001u;
    if (group == 4) fixture_weak(0)->prefix.vtable = &weak_alternate_table014;
    return variant;
}

const SqPrototypeVTable011 *fixture_weak_vtable(void) { return &sq_weak_vtable014; }
const SqPrototypeVTable011 *fixture_prototype_vtable(void) { return &sq_prototype_vtable011; }
const SqPrototypeVTable011 *fixture_native_vtable(void) { return &sq_native_closure_vtable013; }
const SqPrototypeVTable011 *fixture_base_vtable(void) { return &sq_prototype_base_vtable011; }

SqPrototypeU32 fixture_layout(SqPrototypeU32 index)
{
    SqPrototypeU32 values[] = {sizeof(SqWeakReference014), sizeof(SqPrototypePrefix011), sizeof(SqPrefixCollectable012),
        sizeof(SqNativeClosure013), __builtin_offsetof(SqWeakReference014, object), __builtin_offsetof(SqPrototype011, instructions)};
    return index < sizeof(values) / sizeof(values[0]) ? values[index] : 0;
}
