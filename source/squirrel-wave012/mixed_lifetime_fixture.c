#include "mixed_lifetime_fixture.h"

static unsigned char *heap;
static const SqPrototypeVTable011 *native_table, *prototype_table, *base_table;
static SqNativeClosure013 *root, *child;
static SqPrototype011 *prototype;
static SqPrefixState012 *shared;
static SqPrefixObject012 *destination, *incoming;
static SqPrefixVector012 *vector;
static SqU32 active_variant, fault, returned_pointer;
static SqU32 events[16][8], event_count;

extern void *fixture_original_assign012(void *destination, const void *source);
extern void fixture_original_resize012(void *vector, SqU32 requested, const void *fill);
extern void *fixture_original_destroy012(void *vector);

static SqU32 logical(const void *pointer)
{
    if (!pointer) return 0;
    if (pointer == root) return 1;
    if (pointer == child) return 2;
    if (pointer == prototype) return 3;
    if (pointer == heap + 0x6000) return 4;
    if (pointer == heap + 0x7000) return 5;
    if (pointer == heap + 0x9000) return 6;
    return 0xffffffffu;
}

static void disposed(void *pointer, SqU32 bytes)
{
    SqU32 id = logical(pointer), expected = 0, units = 0;
    if (id == 1 || id == 2) { expected = sizeof(SqNativeClosure013); units = 1; }
    if (id == 3) { expected = __builtin_offsetof(SqPrototype011, instructions) + sizeof(SqPrefixObject012); units = 1; }
    if (id == 4 || id == 6) { expected = 4 * sizeof(SqPrefixObject012); units = 4; }
    if (id == 5) { expected = 3 * sizeof(SqPrototypeI32); units = 3; }
    if (!expected || bytes != expected || event_count >= 16) { fault = 1; return; }
    SqU32 *event = events[event_count++];
    event[0] = id;
    event[1] = units;
    event[2] = logical(shared->chain);
    event[3] = root->reference.prefix.references;
    event[4] = child->reference.prefix.references;
    event[5] = prototype->reference.references;
    event[6] = destination->type;
    event[7] = vector->size;
}

void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes) { disposed(pointer, bytes); }
void sq_native_closure_deallocate013(void *pointer, SqPrototypeU32 bytes) { disposed(pointer, bytes); }
void sq_deallocate(void *pointer, SqU32 bytes) { disposed(pointer, bytes); }
void *sq_reallocate(void *pointer, SqU32 previous, SqU32 replacement)
{
    (void)pointer; (void)previous; (void)replacement;
    fault = 2;
    return 0;
}
void sq_prefix_unhandled012(SqU32 type, void *object) { (void)type; (void)object; fault = 3; }

SqU32 fixture_mixed_bind012(void *arena, SqU32 bytes, const SqPrototypeVTable011 *native,
                          const SqPrototypeVTable011 *proto, const SqPrototypeVTable011 *base)
{
    if (!arena || bytes < 0x10000u) return 0;
    heap = arena;
    native_table = native;
    prototype_table = proto;
    base_table = base;
    return 1;
}

SqNativeClosure013 *fixture_mixed_prepare012(SqU32 variant, SqU32 operation)
{
    __builtin_memset(heap, 0, 0x10000);
    __builtin_memset(events, 0, sizeof(events));
    event_count = fault = 0;
    returned_pointer = 1;
    active_variant = variant;
    root = (SqNativeClosure013 *)(void *)(heap + 0x1000);
    child = (SqNativeClosure013 *)(void *)(heap + 0x2000);
    prototype = (SqPrototype011 *)(void *)(heap + 0x3000);
    shared = (SqPrefixState012 *)(void *)(heap + 0x5000);
    destination = (SqPrefixObject012 *)(void *)(heap + 0x8000);
    incoming = (SqPrefixObject012 *)(void *)(heap + 0x8100);
    vector = (SqPrefixVector012 *)(void *)(heap + 0x8200);
    root->reference.prefix = (SqPrototypePrefix011){native_table, 1, 0};
    child->reference.prefix = (SqPrototypePrefix011){native_table, 1, 0};
    root->reference.next = &child->reference;
    child->reference.previous = &root->reference;
    shared->chain = &root->reference;
    root->shared = child->shared = shared;
    root->name.type = child->name.type = child->environment.type = 0x01000001u;
    root->environment = (SqPrefixObject012){0x08002000u, {.reference = prototype}};
    prototype->reference = (SqPrototypePrefix011){prototype_table, variant & 1 ? 2u : 1u, 0};
    prototype->source_name.type = prototype->name.type = 0x01000001u;
    prototype->literal_count = 1;
    prototype->literals = (SqPrototypeObject011 *)(void *)prototype->instructions;
    prototype->literals[0] = (SqPrefixObject012){0x08000200u, {.reference = child}};
    if (variant & 1) {
        root->outers.values = (SqPrefixObject012 *)(void *)(heap + 0x6000);
        root->outers.size = 1;
        root->outers.capacity = 4;
        root->outers.values[0] = root->environment;
    }
    if (variant & 2) {
        root->type_checks.values = heap + 0x7000;
        root->type_checks.size = 1;
        root->type_checks.capacity = 3;
    }
    *incoming = (SqPrefixObject012){0x05000002u, {.integer = 17}};
    *destination = operation == 0 ? (SqPrefixObject012){0x08000200u, {.reference = root}} : *incoming;
    if (operation != 0) {
        vector->values = (SqPrefixObject012 *)(void *)(heap + 0x9000);
        vector->size = 1;
        vector->capacity = 4;
        vector->values[0] = (SqPrefixObject012){0x08000200u, {.reference = root}};
    }
    return root;
}

void fixture_mixed_source012(SqU32 operation)
{
    if (operation == 0) returned_pointer = sq_prefix_assign(destination, incoming) == destination;
    else if (operation == 1) sq_prefix_vector_resize(vector, 0, incoming);
    else returned_pointer = sq_prefix_vector_destroy(vector) == vector;
}

void fixture_mixed_original012(SqU32 operation)
{
    if (operation == 0) returned_pointer = fixture_original_assign012(destination, incoming) == destination;
    else if (operation == 1) fixture_original_resize012(vector, 0, incoming);
    else returned_pointer = fixture_original_destroy012(vector) == vector;
}

SqU32 fixture_mixed_snapshot012(SqU32 *output, SqU32 capacity)
{
    SqU32 words = 12 + event_count * 8;
    if (capacity < words) return 0;
    output[0] = fault;
    output[1] = returned_pointer;
    output[2] = active_variant;
    output[3] = logical(shared->chain);
    output[4] = root->reference.prefix.references;
    output[5] = child->reference.prefix.references;
    output[6] = prototype->reference.references;
    output[7] = destination->type;
    output[8] = vector->size;
    output[9] = event_count;
    output[10] = root->reference.prefix.vtable == base_table;
    output[11] = prototype->reference.vtable == base_table;
    __builtin_memcpy(output + 12, events, event_count * 8 * sizeof(SqU32));
    return words;
}
