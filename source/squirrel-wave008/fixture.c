#include "generator_release.h"

typedef struct {
    SqU32 operation, node, references, state, table, head, closure, saved;
    SqU32 stack, stack_size, varargs, varargs_size, weak0, weak1;
} Observation;

typedef struct {
    unsigned char *memory;
    SqU32 bytes, variant, count, overflow;
    const SqVTable *generator_table, *array_table, *base_table;
    Observation observations[128];
} Fixture;

static Fixture fixture;
static void observer_release(SqRef *reference);
static const SqVTable observer_table = {0, 0, observer_release};

static SqGenerator008 *generator(SqU32 i) { return (SqGenerator008 *)(fixture.memory + 0x1000 + i * 0x200); }
static SqArray *array(SqU32 i) { return (SqArray *)(fixture.memory + 0x2000 + i * 0x100); }
static SqRef *node(SqU32 i) { return (SqRef *)(fixture.memory + 0x3000 + i * 0x100); }
static SqWeakObject007 *weak(SqU32 i) { return (SqWeakObject007 *)(fixture.memory + 0x4000 + i * 0x100); }
static SqState *shared(void) { return (SqState *)(fixture.memory + 0x5000); }
static SqObject *values(SqU32 i) { return (SqObject *)(fixture.memory + 0x6000 + i * 0x1000); }
static SqGeneratorTrap008 *traps(SqU32 i) { return (SqGeneratorTrap008 *)(fixture.memory + 0xe000 + i * 0x1000); }

static SqU32 identity(const void *pointer)
{
    if (!pointer) return 0;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == generator(i)) return i + 1;
    for (SqU32 i = 0; i < 2; ++i) if (pointer == array(i)) return i + 11;
    for (SqU32 i = 0; i < 8; ++i) if (pointer == node(i)) return i + 21;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == weak(i)) return i + 31;
    for (SqU32 i = 0; i < 6; ++i) if (pointer == values(i)) return i + 101;
    for (SqU32 i = 0; i < 2; ++i) if (pointer == traps(i)) return i + 201;
    return 999;
}

static SqU32 table_identity(const SqVTable *table)
{
    if (table == fixture.generator_table) return 1;
    if (table == fixture.array_table) return 2;
    if (table == fixture.base_table) return 3;
    if (table == &observer_table) return 4;
    return 999;
}

static SqU32 payload(const SqObject *object)
{
    return object->type & 0x08000000u ? identity(object->value.reference) : object->value.bits;
}

static void set_reference(SqObject *object, SqRef *reference)
{
    object->type = 0x08000100u; object->value.reference = reference;
}

static void record(SqU32 operation, SqU32 object, SqU32 references)
{
    if (fixture.count >= 128) { fixture.overflow = 1; return; }
    SqGenerator008 *root = generator(0);
    Observation *row = &fixture.observations[fixture.count++];
    *row = (Observation){operation, object, references, root->state, table_identity(root->reference.vtable),
        identity(shared()->chain), payload(&root->closure), payload(&root->saved.closure),
        identity(root->stack.values), root->stack.size, identity(root->varargs.values), root->varargs.size,
        weak(0)->object.type, weak(1)->object.type};
}

static void observer_release(SqRef *reference)
{
    record(1, identity(reference), reference->references);
    SqGenerator008 *root = generator(0);
    if (fixture.variant == 6 && reference == node(0)) root->varargs = (SqVector){values(2), 1, 2};
    if (fixture.variant == 9 && reference == node(3)) root->reference.weak = weak(1);
    if (fixture.variant == 19 && reference == node(0)) root->varargs.size = 0;
    if (fixture.variant == 20 && reference == node(1)) root->stack.size = 0;
}

void sq_deallocate(void *pointer, SqU32 bytes)
{
    SqU32 logical = 999;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == generator(i) && bytes == sizeof(SqGenerator008)) logical = 1;
    for (SqU32 i = 0; i < 2; ++i) {
        if (pointer == array(i) && bytes == sizeof(SqArray)) logical = 1;
        if (pointer == traps(i) && bytes % sizeof(SqGeneratorTrap008) == 0) logical = bytes / sizeof(SqGeneratorTrap008);
    }
    for (SqU32 i = 0; i < 6; ++i) if (pointer == values(i) && bytes % sizeof(SqObject) == 0) logical = bytes / sizeof(SqObject);
    record(2, identity(pointer), logical);
    SqGenerator008 *root = generator(0);
    if (fixture.variant == 5 && pointer == traps(0)) set_reference(&root->saved.closure, node(4));
    if (fixture.variant == 7 && pointer == values(0)) root->stack = (SqVector){values(3), 1, 2};
    if (fixture.variant == 8 && pointer == values(1)) {
        set_reference(&root->closure, node(6)); root->reference.weak = weak(1);
    }
}

SqU32 fixture_bind(void *memory, SqU32 bytes, const SqVTable *generator_table, const SqVTable *array_table, const SqVTable *base_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    fixture.memory = memory; fixture.bytes = bytes; fixture.generator_table = generator_table;
    fixture.array_table = array_table; fixture.base_table = base_table;
    return 1;
}

SqRef *fixture_prepare(SqU32 variant)
{
    fixture.variant = variant; fixture.count = fixture.overflow = 0;
    for (SqU32 i = 0; i < fixture.bytes; ++i) fixture.memory[i] = 0xa5;
    for (SqU32 i = 0; i < 3; ++i) {
        SqGenerator008 *item = generator(i);
        *item = (SqGenerator008){0};
        item->reference.vtable = fixture.generator_table; item->shared = shared();
        item->closure.type = item->saved.closure.type = 0x01000001u;
        item->stack.values = values(i); item->varargs.values = values(i + 3); item->traps.values = traps(i % 2);
        item->saved.instruction = values(5); item->saved.literals = values(4); item->saved.generator = generator(2);
        item->saved.traps = 7; item->saved.previous_base = 11; item->saved.previous_top = 13;
    }
    for (SqU32 i = 0; i < 2; ++i) {
        SqArray *item = array(i);
        *item = (SqArray){0}; item->reference.vtable = fixture.array_table; item->shared = shared();
        item->vector.values = values(i + 4);
    }
    for (SqU32 i = 0; i < 8; ++i) *node(i) = (SqRef){&observer_table, 1, 0, 0, 0};
    for (SqU32 i = 0; i < 3; ++i) {
        *weak(i) = (SqWeakObject007){{&observer_table, 3, 0}, {0x08000400u, {.reference = &generator(0)->reference}}};
    }
    for (SqU32 i = 0; i < 6; ++i) for (SqU32 slot = 0; slot < 16; ++slot)
        values(i)[slot] = (SqObject){0x05000002u, {.integer = (SqI32)(i * 17 + slot * 23)}};
    for (SqU32 i = 0; i < 2; ++i) for (SqU32 slot = 0; slot < 4; ++slot)
        traps(i)[slot] = (SqGeneratorTrap008){(SqI32)slot, (SqI32)slot + 7, values(5), (SqI32)slot + 19};
    SqGenerator008 *root = generator(0);
    shared()->chain = &root->reference;
    if (!variant) return &root->reference;
    root->reference.weak = weak(0); root->state = (unsigned char)(variant % 3);
    root->traps = (SqOpaqueVector){traps(0), 2, 4};
    root->varargs = (SqVector){values(0), 2, 4}; root->stack = (SqVector){values(1), 2, 4};
    set_reference(&root->saved.closure, node(0)); set_reference(values(0), node(1));
    set_reference(values(1), node(2)); set_reference(&root->closure, node(3));
    set_reference(values(2), node(4)); set_reference(values(3), node(5));
    if (variant == 1 || variant == 2 || variant == 10 || variant == 11 || variant == 12) {
        root->reference.next = node(7); node(7)->previous = &root->reference;
    }
    if (variant == 2 || variant == 22) {
        root->reference.previous = node(6); node(6)->next = &root->reference; shared()->chain = node(6);
    }
    if (variant == 3) root->reference.references = 0x80000000u;
    if (variant == 4) { set_reference(&root->closure, node(0)); node(0)->references = 2; }
    if (variant == 10 || variant == 12) {
        SqArray *child = array(0); child->reference.references = 1; child->vector = (SqVector){values(4), 1, 2};
        set_reference(values(4), node(4)); values(0)[0] = (SqObject){0x08000040u, {.reference = &child->reference}};
        child->reference.next = root->reference.next; child->reference.previous = &root->reference;
        if (child->reference.next) child->reference.next->previous = &child->reference;
        root->reference.next = &child->reference;
    }
    if (variant == 11 || variant == 12) {
        SqGenerator008 *child = generator(1); child->reference.references = 1; child->reference.weak = weak(2); child->state = 1;
        values(1)[0] = (SqObject){0x08000400u, {.reference = &child->reference}};
        SqRef *previous = variant == 12 ? &array(0)->reference : &root->reference;
        child->reference.next = previous->next; child->reference.previous = previous;
        if (child->reference.next) child->reference.next->previous = &child->reference;
        previous->next = &child->reference;
    }
    if (variant == 13) root->traps.size = 0;
    if (variant == 14) {
        root->stack.size = root->varargs.size = root->traps.size = 0;
        root->closure = root->saved.closure = (SqObject){0x01000001u, {.reference = 0}};
    }
    if (variant == 15) { node(0)->references = 0; node(3)->references = 0x80000001u; }
    if (variant == 16) {
        root->closure = root->saved.closure = (SqObject){0x05000002u, {.integer = 97}};
        values(0)[0] = values(1)[0] = (SqObject){0x05000002u, {.integer = 113}};
    }
    if (variant == 17) { set_reference(values(0), node(3)); node(3)->references = 2; }
    if (variant == 18) {
        set_reference(&root->closure, node(0)); set_reference(values(0), node(0));
        set_reference(values(1), node(0)); node(0)->references = 4;
    }
    if (variant == 21) { root->reference.weak = 0; node(0)->references = 2; }
    return &root->reference;
}

SqU32 fixture_snapshot(SqU32 *output, SqU32 capacity)
{
    SqU32 at = 0;
    if (capacity < 2048) return 0;
    output[at++] = fixture.count; output[at++] = fixture.overflow; output[at++] = identity(shared()->chain);
    for (SqU32 i = 0; i < 3; ++i) {
        SqGenerator008 *item = generator(i);
        output[at++] = table_identity(item->reference.vtable); output[at++] = item->reference.references;
        output[at++] = identity(item->reference.weak); output[at++] = identity(item->reference.next); output[at++] = identity(item->reference.previous);
        output[at++] = item->closure.type; output[at++] = payload(&item->closure);
        output[at++] = identity(item->stack.values); output[at++] = item->stack.size; output[at++] = item->stack.capacity;
        output[at++] = identity(item->varargs.values); output[at++] = item->varargs.size; output[at++] = item->varargs.capacity;
        output[at++] = item->saved.closure.type; output[at++] = payload(&item->saved.closure);
        output[at++] = identity(item->traps.values); output[at++] = item->traps.size; output[at++] = item->traps.capacity; output[at++] = item->state;
    }
    for (SqU32 i = 0; i < 2; ++i) {
        SqArray *item = array(i);
        output[at++] = table_identity(item->reference.vtable); output[at++] = item->reference.references;
        output[at++] = identity(item->reference.weak); output[at++] = identity(item->reference.next); output[at++] = identity(item->reference.previous);
        output[at++] = identity(item->vector.values); output[at++] = item->vector.size; output[at++] = item->vector.capacity;
    }
    for (SqU32 i = 0; i < 8; ++i) {
        output[at++] = node(i)->references; output[at++] = identity(node(i)->next); output[at++] = identity(node(i)->previous);
    }
    for (SqU32 i = 0; i < 3; ++i) { output[at++] = weak(i)->object.type; output[at++] = payload(&weak(i)->object); }
    for (SqU32 i = 0; i < fixture.count; ++i) {
        Observation *row = &fixture.observations[i];
        output[at++] = row->operation; output[at++] = row->node; output[at++] = row->references; output[at++] = row->state;
        output[at++] = row->table; output[at++] = row->head; output[at++] = row->closure; output[at++] = row->saved;
        output[at++] = row->stack; output[at++] = row->stack_size; output[at++] = row->varargs; output[at++] = row->varargs_size;
        output[at++] = row->weak0; output[at++] = row->weak1;
    }
    return at;
}

const SqVTable *fixture_generator_vtable(void) { return &sq_generator_vtable; }
const SqVTable *fixture_array_vtable(void) { return &sq_array_vtable; }
const SqVTable *fixture_base_vtable(void) { return &sq_release007_weak_vtable; }
SqU32 fixture_layout(SqU32 field)
{
    if (field == 0) return sizeof(SqRef);
    if (field == 1) return sizeof(SqObject);
    if (field == 2) return sizeof(SqGenerator008);
    if (field == 3) return __builtin_offsetof(SqGenerator008, state);
    if (field == 4) return __builtin_offsetof(SqState, chain);
    if (field == 5) return sizeof(SqGeneratorTrap008);
    if (field == 6) return __builtin_offsetof(SqGenerator008, saved.closure);
    return sizeof(SqCallInfo);
}
