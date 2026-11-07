#include "array_release.h"

typedef struct {
    SqU32 operation, node, references, size, capacity, table, weak_type, head;
} Observation;

typedef struct {
    unsigned char *memory;
    SqU32 bytes, variant, count, overflow;
    const SqVTable *array_table, *weak_table;
    Observation observations[128];
} Fixture;

static Fixture fixture;
static void observer_release(SqRef *reference);
static const SqVTable observer_table = {0, 0, observer_release};

static SqArray *array(SqU32 index) { return (SqArray *)(fixture.memory + 0x1000 + index * 0x100); }
static SqRef *node(SqU32 index) { return (SqRef *)(fixture.memory + 0x2000 + index * 0x100); }
static SqWeakObject007 *weak(SqU32 index) { return (SqWeakObject007 *)(fixture.memory + 0x3000 + index * 0x100); }
static SqState *shared(void) { return (SqState *)(fixture.memory + 0x4000); }
static SqObject *values(SqU32 index) { return (SqObject *)(fixture.memory + 0x5000 + index * 0x1000); }

static SqU32 identity(const void *pointer)
{
    if (!pointer) return 0;
    for (SqU32 index = 0; index < 3; ++index) {
        if (pointer == array(index)) return index + 1;
        if (pointer == values(index)) return index + 101;
    }
    for (SqU32 index = 0; index < 4; ++index)
        if (pointer == node(index)) return index + 11;
    for (SqU32 index = 0; index < 2; ++index)
        if (pointer == weak(index)) return index + 21;
    return 999;
}

static SqU32 table_identity(const SqVTable *table)
{
    if (table == fixture.array_table) return 1;
    if (table == fixture.weak_table) return 2;
    if (table == &observer_table) return 3;
    return 999;
}

static void record(SqU32 operation, SqU32 object, SqU32 references)
{
    if (fixture.count >= 128) { fixture.overflow = 1; return; }
    Observation *row = &fixture.observations[fixture.count++];
    row->operation = operation; row->node = object; row->references = references;
    row->size = array(0)->vector.size; row->capacity = array(0)->vector.capacity;
    row->table = table_identity(array(0)->reference.vtable);
    row->weak_type = weak(0)->object.type; row->head = identity(shared()->chain);
}

static void observer_release(SqRef *reference)
{
    record(1, identity(reference), reference->references);
    if (fixture.variant == 5 && reference == node(0)) array(0)->vector.size = 1;
    if (fixture.variant == 6 && reference == node(0)) {
        array(0)->vector.values = values(1); array(0)->vector.size = 3; array(0)->vector.capacity = 4;
    }
}

void sq_deallocate(void *pointer, SqU32 bytes)
{
    SqU32 logical = 999;
    for (SqU32 index = 0; index < 3; ++index) {
        if (pointer == array(index) && bytes == sizeof(SqArray)) logical = 1;
        if (pointer == values(index) && bytes % sizeof(SqObject) == 0) logical = bytes / sizeof(SqObject);
    }
    record(2, identity(pointer), logical);
    if (fixture.variant == 7 && pointer == values(0)) array(0)->reference.weak = weak(1);
}

SqU32 fixture_bind(void *memory, SqU32 bytes, const SqVTable *array_table, const SqVTable *weak_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    fixture.memory = memory; fixture.bytes = bytes;
    fixture.array_table = array_table; fixture.weak_table = weak_table;
    return 1;
}

SqRef *fixture_prepare(SqU32 variant)
{
    fixture.variant = variant; fixture.count = fixture.overflow = 0;
    for (SqU32 index = 0; index < fixture.bytes; ++index) fixture.memory[index] = 0xa5;
    for (SqU32 index = 0; index < 3; ++index) {
        SqArray *item = array(index);
        item->reference.vtable = fixture.array_table; item->reference.references = 0;
        item->reference.weak = 0; item->reference.next = item->reference.previous = 0;
        item->shared = shared(); item->vector.values = values(index);
        item->vector.size = 0; item->vector.capacity = 0;
        for (SqU32 slot = 0; slot < 16; ++slot) {
            values(index)[slot].type = 0x05000002u; values(index)[slot].value.integer = (SqI32)(slot * 19 + index * 7);
        }
    }
    for (SqU32 index = 0; index < 4; ++index) {
        node(index)->vtable = &observer_table; node(index)->references = 1;
        node(index)->weak = 0; node(index)->next = node(index)->previous = 0;
    }
    for (SqU32 index = 0; index < 2; ++index) {
        weak(index)->prefix.vtable = &observer_table; weak(index)->prefix.references = 3; weak(index)->prefix.weak = 0;
        weak(index)->object.type = 0x08000040u; weak(index)->object.value.reference = &array(0)->reference;
    }
    SqArray *root = array(0);
    root->vector.size = variant ? 4 : 0; root->vector.capacity = variant ? 8 : 0;
    if (variant) root->reference.weak = weak(0);
    shared()->chain = &root->reference;
    if (variant == 2 || variant == 3) {
        root->reference.previous = node(2); node(2)->next = &root->reference; shared()->chain = node(2);
    }
    if (variant == 1 || variant == 3) {
        root->reference.next = node(3); node(3)->previous = &root->reference;
    }
    if (variant == 4) root->reference.references = 0x80000000u;
    if (variant >= 5) {
        values(0)[0].type = 0x08000040u; values(0)[0].value.reference = node(0);
        values(0)[1].type = 0x08000040u; values(0)[1].value.reference = node(1);
    }
    if (variant == 8) {
        values(0)[2].type = 0x08000040u; values(0)[2].value.reference = node(1); node(1)->references = 2;
    }
    if (variant == 9) { node(0)->references = 0; node(1)->references = 0x80000001u; }
    if (variant == 10) {
        array(1)->reference.references = 1; array(1)->vector.size = 2; array(1)->vector.capacity = 4;
        root->reference.next = &array(1)->reference; array(1)->reference.previous = &root->reference;
        values(0)[0].type = 0x08000040u; values(0)[0].value.reference = &array(1)->reference;
        values(1)[0].type = 0x08000040u; values(1)[0].value.reference = node(0);
    }
    if (variant == 11) { root->vector.size = 0; root->vector.capacity = 8; }
    return &root->reference;
}

SqU32 fixture_snapshot(SqU32 *output, SqU32 capacity)
{
    SqU32 at = 0;
    if (capacity < 1280) return 0;
    output[at++] = fixture.count; output[at++] = fixture.overflow; output[at++] = identity(shared()->chain);
    for (SqU32 index = 0; index < 3; ++index) {
        SqArray *item = array(index);
        output[at++] = table_identity(item->reference.vtable); output[at++] = item->reference.references;
        output[at++] = identity(item->reference.weak); output[at++] = identity(item->reference.next);
        output[at++] = identity(item->reference.previous); output[at++] = identity(item->vector.values);
        output[at++] = item->vector.size; output[at++] = item->vector.capacity;
    }
    for (SqU32 index = 0; index < 4; ++index) {
        output[at++] = node(index)->references; output[at++] = identity(node(index)->next); output[at++] = identity(node(index)->previous);
    }
    for (SqU32 index = 0; index < 2; ++index) {
        output[at++] = weak(index)->object.type;
        output[at++] = weak(index)->object.type & 0x08000000u ? identity(weak(index)->object.value.reference) : weak(index)->object.value.bits;
    }
    for (SqU32 index = 0; index < fixture.count; ++index) {
        const Observation *row = &fixture.observations[index];
        output[at++] = row->operation; output[at++] = row->node; output[at++] = row->references; output[at++] = row->size;
        output[at++] = row->capacity; output[at++] = row->table; output[at++] = row->weak_type; output[at++] = row->head;
    }
    return at;
}

const SqVTable *fixture_array_vtable(void) { return &sq_array_vtable; }
const SqVTable *fixture_weak_vtable(void) { return &sq_release007_weak_vtable; }
SqU32 fixture_layout(SqU32 field)
{
    if (field == 0) return sizeof(SqRef);
    if (field == 1) return sizeof(SqObject);
    if (field == 2) return sizeof(SqArray);
    if (field == 3) return __builtin_offsetof(SqArray, vector);
    if (field == 4) return __builtin_offsetof(SqState, chain);
    if (field == 5) return __builtin_offsetof(SqWeakObject007, object);
    return sizeof(SqWeakObject007);
}
