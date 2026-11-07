#include "closure_release.h"

typedef struct {
    SqU32 words[14];
} Observation;

typedef struct {
    unsigned char *memory;
    SqU32 bytes, variant, count, overflow;
    const SqVTable *closure_table, *array_table, *generator_table, *base_table;
    Observation observations[128];
} Fixture;

static Fixture fixture;
static void observer_release(SqRef *reference);
static const SqVTable observer_table = {0, 0, observer_release};

static SqScriptClosure010 *closure(SqU32 i) { return (SqScriptClosure010 *)(fixture.memory + 0x1000 + i * 0x200); }
static SqArray *array(SqU32 i) { return (SqArray *)(fixture.memory + 0x2000 + i * 0x100); }
static SqGenerator008 *generator(SqU32 i) { return (SqGenerator008 *)(fixture.memory + 0x2400 + i * 0x200); }
static SqRef *node(SqU32 i) { return (SqRef *)(fixture.memory + 0x3000 + i * 0x100); }
static SqWeakObject007 *weak(SqU32 i) { return (SqWeakObject007 *)(fixture.memory + 0x4000 + i * 0x100); }
static SqState *shared(void) { return (SqState *)(fixture.memory + 0x5000); }
static SqObject *values(SqU32 i) { return (SqObject *)(fixture.memory + 0x6000 + i * 0x1000); }

static SqU32 identity(const void *pointer)
{
    if (!pointer) return 0;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == closure(i)) return i + 1;
    for (SqU32 i = 0; i < 2; ++i) {
        if (pointer == array(i)) return i + 11;
        if (pointer == generator(i)) return i + 41;
    }
    for (SqU32 i = 0; i < 8; ++i) if (pointer == node(i)) return i + 21;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == weak(i)) return i + 31;
    for (SqU32 i = 0; i < 6; ++i) if (pointer == values(i)) return i + 101;
    return 999;
}

static SqU32 table_identity(const SqVTable *table)
{
    if (table == fixture.closure_table) return 1;
    if (table == fixture.array_table) return 2;
    if (table == fixture.generator_table) return 3;
    if (table == fixture.base_table) return 4;
    if (table == &observer_table) return 5;
    return 999;
}

static SqU32 payload(const SqObject *object)
{
    return object->type & 0x08000000u ? identity(object->value.reference) : object->value.bits;
}

static void set_reference(SqObject *object, SqRef *reference)
{
    *object = (SqObject){0x08000100u, {.reference = reference}};
}

static void record(SqU32 operation, SqU32 object, SqU32 references)
{
    if (fixture.count >= 128) { fixture.overflow = 1; return; }
    SqScriptClosure010 *root = closure(0);
    Observation *row = &fixture.observations[fixture.count++];
    *row = (Observation){{operation, object, references, table_identity(root->reference.vtable), identity(shared()->chain),
        root->function.type, payload(&root->function), root->environment.type, payload(&root->environment),
        identity(root->defaults.values), root->defaults.size, identity(root->outers.values), root->outers.size,
        weak(0)->object.type}};
}

static void observer_release(SqRef *reference)
{
    record(1, identity(reference), reference->references);
    SqScriptClosure010 *root = closure(0);
    if (fixture.variant == 5 && reference == node(1)) root->outers = (SqVector){values(2), 1, 2};
    if (fixture.variant == 8 && reference == node(0)) {
        set_reference(&root->environment, node(6)); root->reference.weak = weak(1);
    }
    if (fixture.variant == 9 && reference == node(3)) root->reference.weak = weak(1);
    if (fixture.variant == 19 && reference == node(1)) root->outers.size = 0;
    if (fixture.variant == 20 && reference == node(1)) root->defaults.size = 1;
    if (fixture.variant == 23 && reference == node(1)) root->defaults = (SqVector){values(2), 2, 2};
}

void sq_deallocate(void *pointer, SqU32 bytes)
{
    SqU32 logical = 999;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == closure(i) && bytes == sizeof(SqScriptClosure010)) logical = 1;
    for (SqU32 i = 0; i < 2; ++i) {
        if (pointer == array(i) && bytes == sizeof(SqArray)) logical = 1;
        if (pointer == generator(i) && bytes == sizeof(SqGenerator008)) logical = 1;
    }
    for (SqU32 i = 0; i < 6; ++i) if (pointer == values(i) && bytes % sizeof(SqObject) == 0) logical = bytes / sizeof(SqObject);
    record(2, identity(pointer), logical);
    SqScriptClosure010 *root = closure(0);
    if (fixture.variant == 6 && pointer == values(0)) set_reference(&root->function, node(4));
    if (fixture.variant == 7 && pointer == values(1)) {
        set_reference(&root->environment, node(5)); root->reference.weak = weak(1);
    }
}

SqU32 fixture_bind(void *memory, SqU32 bytes, const SqVTable *closure_table, const SqVTable *array_table,
    const SqVTable *generator_table, const SqVTable *base_table)
{
    if (!memory || bytes < 0x10000 || ((__UINTPTR_TYPE__)memory & 15)) return 0;
    fixture.memory = memory; fixture.bytes = bytes; fixture.closure_table = closure_table;
    fixture.array_table = array_table; fixture.generator_table = generator_table; fixture.base_table = base_table;
    return 1;
}

SqRef *fixture_prepare(SqU32 variant)
{
    fixture.variant = variant; fixture.count = fixture.overflow = 0;
    for (SqU32 i = 0; i < fixture.bytes; ++i) fixture.memory[i] = 0xa5;
    for (SqU32 i = 0; i < 3; ++i) {
        SqScriptClosure010 *item = closure(i);
        *item = (SqScriptClosure010){0}; item->reference.vtable = fixture.closure_table;
        item->shared = shared(); item->environment.type = item->function.type = 0x01000001u;
        item->defaults.values = values(i); item->outers.values = values(i + 3);
    }
    for (SqU32 i = 0; i < 2; ++i) {
        *array(i) = (SqArray){0}; array(i)->reference.vtable = fixture.array_table;
        array(i)->shared = shared(); array(i)->vector.values = values(i + 4);
        *generator(i) = (SqGenerator008){0}; generator(i)->reference.vtable = fixture.generator_table;
        generator(i)->shared = shared(); generator(i)->closure.type = generator(i)->saved.closure.type = 0x01000001u;
        generator(i)->state = 1;
    }
    for (SqU32 i = 0; i < 8; ++i) *node(i) = (SqRef){&observer_table, 1, 0, 0, 0};
    for (SqU32 i = 0; i < 3; ++i)
        *weak(i) = (SqWeakObject007){{&observer_table, 1, 0}, {0x08000100u, {.reference = &closure(0)->reference}}};
    for (SqU32 i = 0; i < 6; ++i) for (SqU32 slot = 0; slot < 16; ++slot)
        values(i)[slot] = (SqObject){0x05000002u, {.integer = (SqI32)(i * 17 + slot * 23)}};
    SqScriptClosure010 *root = closure(0);
    shared()->chain = &root->reference;
    if (!variant) return &root->reference;
    root->reference.weak = weak(0); root->defaults = (SqVector){values(0), 2, 4}; root->outers = (SqVector){values(1), 2, 4};
    set_reference(&root->function, node(0)); set_reference(&root->environment, node(3));
    set_reference(values(0), node(1)); set_reference(values(1), node(2));
    set_reference(values(2), node(4)); set_reference(values(2) + 1, node(5));
    if (variant == 1 || variant == 2 || variant == 10 || variant == 11 || variant == 12) {
        root->reference.next = node(7); node(7)->previous = &root->reference;
    }
    if (variant == 2 || variant == 22) {
        root->reference.previous = node(6); node(6)->next = &root->reference; shared()->chain = node(6);
    }
    if (variant == 3) root->reference.references = 0x80000000u;
    if (variant == 4) { set_reference(&root->environment, node(0)); node(0)->references = 2; }
    if (variant == 10) {
        SqArray *child = array(0); child->reference.references = 1; child->vector = (SqVector){values(4), 1, 2};
        set_reference(values(4), node(4)); set_reference(values(0), &child->reference);
        child->reference.previous = &root->reference; child->reference.next = root->reference.next;
        if (child->reference.next) child->reference.next->previous = &child->reference;
        root->reference.next = &child->reference;
    }
    if (variant == 11) {
        SqGenerator008 *child = generator(0); child->reference.references = 1; set_reference(values(1), &child->reference);
        child->reference.previous = &root->reference; child->reference.next = root->reference.next;
        if (child->reference.next) child->reference.next->previous = &child->reference;
        root->reference.next = &child->reference;
    }
    if (variant == 12) {
        SqScriptClosure010 *child = closure(1); child->reference.references = 1; child->reference.weak = weak(2);
        set_reference(&child->function, node(4)); set_reference(values(0), &child->reference);
        child->reference.previous = &root->reference; child->reference.next = root->reference.next;
        if (child->reference.next) child->reference.next->previous = &child->reference;
        root->reference.next = &child->reference;
    }
    if (variant == 13) root->defaults.size = 0;
    if (variant == 14) root->outers.size = 0;
    if (variant == 15) { node(0)->references = 0; node(3)->references = 0x80000001u; }
    if (variant == 16 || variant == 21) {
        root->function = root->environment = (SqObject){0x01000001u, {.reference = 0}};
        if (variant == 16) {
            root->reference.weak = 0;
            values(0)[0] = values(1)[0] = (SqObject){0x05000002u, {.integer = 97}};
        }
    }
    if (variant == 17) root->defaults.size = root->defaults.capacity = root->outers.size = root->outers.capacity = 0;
    if (variant == 18) {
        set_reference(values(0), node(0)); set_reference(values(1), node(0));
        set_reference(&root->environment, node(0)); node(0)->references = 4;
    }
    return &root->reference;
}

SqU32 fixture_snapshot(SqU32 *output, SqU32 capacity)
{
    SqU32 at = 0;
    if (capacity < 4096) return 0;
    output[at++] = fixture.count; output[at++] = fixture.overflow; output[at++] = identity(shared()->chain);
    for (SqU32 i = 0; i < 3; ++i) {
        SqScriptClosure010 *item = closure(i);
        output[at++] = table_identity(item->reference.vtable); output[at++] = item->reference.references;
        output[at++] = identity(item->reference.weak); output[at++] = identity(item->reference.next); output[at++] = identity(item->reference.previous);
        output[at++] = item->environment.type; output[at++] = payload(&item->environment);
        output[at++] = item->function.type; output[at++] = payload(&item->function);
        output[at++] = identity(item->outers.values); output[at++] = item->outers.size; output[at++] = item->outers.capacity;
        output[at++] = identity(item->defaults.values); output[at++] = item->defaults.size; output[at++] = item->defaults.capacity;
    }
    for (SqU32 i = 0; i < 2; ++i) {
        SqArray *item = array(i);
        output[at++] = table_identity(item->reference.vtable); output[at++] = item->reference.references;
        output[at++] = identity(item->reference.weak); output[at++] = identity(item->reference.next); output[at++] = identity(item->reference.previous);
        output[at++] = identity(item->vector.values); output[at++] = item->vector.size; output[at++] = item->vector.capacity;
    }
    for (SqU32 i = 0; i < 2; ++i) {
        output[at++] = table_identity(generator(i)->reference.vtable); output[at++] = generator(i)->reference.references;
        output[at++] = identity(generator(i)->reference.next); output[at++] = identity(generator(i)->reference.previous); output[at++] = generator(i)->state;
    }
    for (SqU32 i = 0; i < 8; ++i) { output[at++] = node(i)->references; output[at++] = identity(node(i)->next); output[at++] = identity(node(i)->previous); }
    for (SqU32 i = 0; i < 3; ++i) { output[at++] = weak(i)->object.type; output[at++] = payload(&weak(i)->object); }
    for (SqU32 i = 0; i < 6; ++i) for (SqU32 slot = 0; slot < 16; ++slot) {
        output[at++] = values(i)[slot].type; output[at++] = payload(values(i) + slot);
    }
    for (SqU32 i = 0; i < fixture.count; ++i) for (SqU32 word = 0; word < 14; ++word)
        output[at++] = fixture.observations[i].words[word];
    return at;
}

const SqVTable *fixture_closure_vtable(void) { return &sq_script_closure_vtable; }
const SqVTable *fixture_array_vtable(void) { return &sq_array_vtable; }
const SqVTable *fixture_generator_vtable(void) { return &sq_generator_vtable; }
const SqVTable *fixture_base_vtable(void) { return &sq_release007_weak_vtable; }
SqU32 fixture_layout(SqU32 field)
{
    if (field == 0) return sizeof(SqScriptClosure010);
    if (field == 1) return __builtin_offsetof(SqScriptClosure010, environment);
    if (field == 2) return __builtin_offsetof(SqScriptClosure010, function);
    if (field == 3) return __builtin_offsetof(SqScriptClosure010, outers);
    if (field == 4) return __builtin_offsetof(SqScriptClosure010, defaults);
    if (field == 5) return __builtin_offsetof(SqState, chain);
    if (field == 6) return sizeof(SqObject);
    return sizeof(SqRef);
}
