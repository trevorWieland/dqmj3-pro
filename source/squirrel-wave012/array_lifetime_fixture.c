#include "array_lifetime_fixture.h"

static unsigned char *memory;
static SqOpaqueArray012 *array;
static SqWeakReference014 *weak;
static SqNativeClosure013 *root;
static SqPrototype011 *prototype;
static SqPrefixState012 *shared;
static SqPrefixObject012 *owner, *weak_owner;
static const SqPrototypeVTable011 *array_table, *weak_table, *base_table;
static SqU32 active_variant, requested_size, weak_order, allocation_failure;
static SqU32 array_returned, weak_allocated, array_allocations, value_allocations, fault, event_count;
static SqU32 events[24][9];

extern SqOpaqueArray012 *fixture_original_array_create012(SqPrefixState012 *state, SqU32 requested);
extern void *fixture_original_assign012(void *destination, const void *source);
extern SqWeakReference014 *fixture_original_weak_create012(SqPrototypePrefix011 *object, SqU32 type);
void fixture_mixed_dispose012(void *pointer, SqU32 bytes);
void fixture_mixed_native_dispose012(void *pointer, SqU32 bytes);
void fixture_mixed_prototype_dispose012(void *pointer, SqU32 bytes);

static SqU32 identity(const void *pointer)
{
    if (!pointer) return 0;
    if (pointer == memory + 0x1000) return 1;
    if (pointer == memory + 0x2000) return 2;
    if (pointer == memory + 0x3000) return 3;
    if (pointer == memory + 0x6000) return 4;
    if (pointer == memory + 0x7000) return 5;
    if (pointer == array) return 10;
    if (pointer == memory + 0xb000) return 11;
    if (pointer == weak) return 12;
    fault = 1;
    return 0xffffffffu;
}

static void observe(void *pointer, SqU32 units)
{
    if (event_count == 24) { fault = 2; return; }
    SqU32 *event = events[event_count++];
    event[0] = identity(pointer);
    event[1] = units;
    event[2] = identity(shared->chain);
    event[3] = root->reference.prefix.references;
    event[4] = prototype->reference.references;
    event[5] = array_returned ? array->reference.prefix.references : 0;
    event[6] = weak_allocated ? weak->object.type : 0;
    event[7] = weak_allocated ? identity(weak->object.value.reference) : 0;
    event[8] = array_returned && array->reference.prefix.weak != 0;
}

void *sq_opaque_array_allocate012(SqPrototypeU32 bytes)
{
    array_allocations++;
    if (bytes != sizeof(*array) || array_allocations != 1) { fault = 3; return 0; }
    return allocation_failure ? 0 : array;
}

void *sq_reallocate(void *pointer, SqU32 old_bytes, SqU32 new_bytes)
{
    value_allocations++;
    if (pointer || old_bytes || new_bytes != requested_size * sizeof(SqPrefixObject012) || value_allocations != 1) {
        fault = 4;
        return 0;
    }
    return memory + 0xb000;
}

void *sq_weak_allocate014(SqPrototypeU32 bytes)
{
    if (bytes != sizeof(*weak) || weak_allocated) { fault = 5; return 0; }
    weak_allocated = 1;
    return weak;
}

void sq_deallocate(void *pointer, SqU32 bytes)
{
    SqU32 id = identity(pointer);
    if (id == 10 || id == 11) {
        SqU32 expected = id == 10 ? sizeof(*array) : requested_size * sizeof(SqPrefixObject012);
        if (!expected || bytes != expected) fault = 6;
        observe(pointer, id == 10 ? 1 : requested_size);
    } else {
        observe(pointer, id == 4 ? 4 : id == 5 ? 3 : 1);
        fixture_mixed_dispose012(pointer, bytes);
    }
}

void sq_native_closure_deallocate013(void *pointer, SqPrototypeU32 bytes)
{
    SqU32 id = identity(pointer);
    observe(pointer, id == 4 ? 4 : id == 5 ? 3 : 1);
    fixture_mixed_native_dispose012(pointer, bytes);
}

void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes)
{
    SqU32 id = identity(pointer);
    observe(pointer, id == 4 ? 4 : id == 5 ? 3 : 1);
    fixture_mixed_prototype_dispose012(pointer, bytes);
}

void sq_weak_deallocate014(void *pointer, SqPrototypeU32 bytes)
{
    if (pointer != weak || bytes != sizeof(*weak)) fault = 7;
    observe(pointer, 1);
}

SqU32 fixture_array_bind012(void *arena, SqU32 bytes, const SqPrototypeVTable011 *native,
    const SqPrototypeVTable011 *prototype_table, const SqPrototypeVTable011 *base,
    const SqPrototypeVTable011 *array_vtable, const SqPrototypeVTable011 *weak_vtable)
{
    if (!fixture_mixed_bind012(arena, bytes, native, prototype_table, base)) return 0;
    memory = arena;
    root = (void *)(memory + 0x1000);
    prototype = (void *)(memory + 0x3000);
    shared = (void *)(memory + 0x5000);
    array = (void *)(memory + 0xa000);
    weak = (void *)(memory + 0xc000);
    owner = (void *)(memory + 0xd000);
    weak_owner = (void *)(memory + 0xd080);
    array_table = array_vtable;
    weak_table = weak_vtable;
    base_table = base;
    return 1;
}

void fixture_array_prepare012(SqU32 variant, SqU32 requested, SqU32 order, SqU32 fail_array)
{
    fixture_mixed_prepare012(variant, 0);
    *owner = (SqPrefixObject012){0x01000001u, {.reference = 0}};
    *weak_owner = *owner;
    active_variant = variant;
    requested_size = requested;
    weak_order = order;
    allocation_failure = fail_array;
    array_returned = weak_allocated = array_allocations = value_allocations = fault = event_count = 0;
}

static void assign(SqU32 source, SqPrefixObject012 *destination, const SqPrefixObject012 *value)
{
    if (source) sq_prefix_assign(destination, value);
    else fixture_original_assign012(destination, value);
}

void fixture_array_run012(SqU32 source)
{
    SqOpaqueArray012 *created = source ? sq_opaque_array_create012(shared, requested_size) :
        fixture_original_array_create012(shared, requested_size);
    array_returned = created != 0;
    SqPrefixObject012 empty = {0x01000001u, {.reference = 0}};
    if (created) {
        if (created != array || created->reference.prefix.vtable != array_table) fault = 8;
        SqPrefixObject012 value = {0x08000040u, {.reference = created}};
        assign(source, owner, &value);
        if (requested_size) {
            SqPrefixObject012 *native_owner = (void *)(memory + 0x8000);
            assign(source, array->vector.values, native_owner);
            for (SqU32 index = 1; index < requested_size; index++) {
                value.type = 0x05000004u;
                value.value.bits = 0x7fc00000u + index;
                assign(source, array->vector.values + index, &value);
            }
            if (source) fixture_mixed_source012(0);
            else fixture_mixed_original012(0);
        }
        if (weak_order) {
            SqWeakReference014 *created_weak = source ? fn_00233b7c(&array->reference.prefix, 0x08000040u) :
                fixture_original_weak_create012(&array->reference.prefix, 0x08000040u);
            if (created_weak != weak || weak->prefix.vtable != weak_table) fault = 9;
            value = (SqPrefixObject012){0x08010000u, {.reference = weak}};
            assign(source, weak_owner, &value);
            if (weak_order == 1) assign(source, weak_owner, &empty);
        }
        assign(source, owner, &empty);
        if (weak_order == 2) assign(source, weak_owner, &empty);
    }
    if (!created || !requested_size) {
        if (source) fixture_mixed_source012(0);
        else fixture_mixed_original012(0);
    }
}

SqU32 fixture_array_snapshot012(SqU32 *output, SqU32 capacity)
{
    if (capacity < 32 + event_count * 9) return 0;
    SqU32 values[] = {fault, active_variant, requested_size, weak_order, allocation_failure, array_returned,
        array_allocations, value_allocations, array_returned ? array->reference.prefix.references : 0,
        array_returned && array->reference.prefix.vtable == base_table,
        array_returned ? array->vector.size : 0, array_returned ? array->vector.capacity : 0,
        array_returned && array->reference.prefix.weak != 0, weak_allocated,
        weak_allocated ? weak->prefix.references : 0, weak_allocated && weak->prefix.vtable == base_table,
        weak_allocated ? weak->object.type : 0, weak_allocated ? identity(weak->object.value.reference) : 0,
        owner->type, weak_owner->type, event_count};
    for (SqU32 index = 0; index < 21; index++) output[index] = values[index];
    SqU32 cursor = 21;
    for (SqU32 index = 0; index < event_count; index++)
        for (SqU32 field = 0; field < 9; field++) output[cursor++] = events[index][field];
    SqU32 mixed_count = fixture_mixed_snapshot012(output + cursor + 1, capacity - cursor - 1);
    if (!mixed_count) return 0;
    output[cursor] = mixed_count;
    return cursor + mixed_count + 1;
}
