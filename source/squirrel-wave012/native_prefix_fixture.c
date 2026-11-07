#include "prefix_fixture.h"
#include "prefix_cases.h"

#if PREFIX_LEGACY012
typedef SqObject FixtureObject012;
typedef SqVector FixtureVector012;
#define fixture_assign012 sq_prefix_assign_legacy
#define fixture_resize012 sq_prefix_vector_resize_legacy
#define fixture_destroy012 sq_prefix_vector_destroy_legacy
#else
typedef SqPrefixObject012 FixtureObject012;
typedef SqPrefixVector012 FixtureVector012;
#define fixture_assign012 sq_prefix_assign
#define fixture_resize012 sq_prefix_vector_resize
#define fixture_destroy012 sq_prefix_vector_destroy
#endif

__declspec(dllimport) void *malloc(unsigned long long bytes);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) void ExitProcess(unsigned int result) __attribute__((noreturn));

typedef struct {
    SqU32 before;
    SqPrototypePrefix011 actual;
    SqU32 after;
} WeakEnvelope;

#if PREFIX_OPAQUE_FULL012
typedef SqPrefixCollectable012 FullActual012;
#define full_prefix012(object) ((object).prefix)
#else
typedef SqRef FullActual012;
#define full_prefix012(object) (object)
#endif

typedef struct {
    SqU32 before;
    FullActual012 actual;
    SqU32 after;
} FullEnvelope;

static SqU32 reallocations;
static SqU32 old_bytes;
static SqU32 new_bytes;
static SqU32 frees;
static SqU32 free_bytes;

void sq_prefix_unhandled012(SqU32 type, void *object)
{
    (void)type;
    (void)object;
    ExitProcess(92);
}

void *sq_reallocate(void *pointer, SqU32 old_size, SqU32 new_size)
{
    void *next = malloc(new_size);
    if (old_size) __builtin_memcpy(next, pointer, old_size);
    free(pointer);
    reallocations++;
    old_bytes = old_size / sizeof(SqPrefixObject012);
    new_bytes = new_size / sizeof(SqPrefixObject012);
    return next;
}

void sq_deallocate(void *pointer, SqU32 bytes)
{
    (void)pointer;
    frees++;
    free_bytes = bytes / sizeof(SqPrefixObject012);
}

static FixtureObject012 tagged(SqU32 kind, void *reference)
{
    SqPrefixObject012 value;
    value.type = kind == 1 ? 0x08002000u : kind == 2 ? 0x08000040u : 0x05000002u;
    if (kind) value.value.reference = reference;
    else value.value.integer = 17;
    FixtureObject012 stored;
    __builtin_memcpy(&stored, &value, sizeof(stored));
    return stored;
}

static SqU32 logical_value(const void *storage, void *const *nodes)
{
    SqPrefixObject012 value;
    __builtin_memcpy(&value, storage, sizeof(value));
    const SqPrefixObject012 *object = &value;
    if (!(object->type & 0x08000000u)) return object->value.bits;
    for (SqU32 index = 0; index < 4; index++) if (object->value.reference == nodes[index]) return index + 1;
    return 0xffffffffu;
}

static void exercise(const PrefixCase012 *test, SqU32 index)
{
    WeakEnvelope weak[2] = {{0}};
    FullEnvelope full[2] = {{0}};
    void *nodes[4] = {&weak[0].actual, &full[0].actual, &weak[1].actual, &full[1].actual};
    for (SqU32 node = 0; node < 2; node++) {
        weak[node].before = full[node].before = 0x13579bdfu;
        weak[node].after = full[node].after = 0x2468ace0u;
        weak[node].actual.vtable = &sq_prefix_weak_vtable012;
        full_prefix012(full[node].actual).vtable = &sq_prefix_full_vtable012;
    }
    weak[1].actual.references = full_prefix012(full[1].actual).references = 7;
    FixtureObject012 destination = tagged(test->old_kind, nodes[test->old_kind == 2]);
    FixtureObject012 incoming = tagged(test->new_kind, nodes[2 + (test->new_kind == 2)]);
    if (test->old_kind == 1) weak[0].actual.references = test->initial_count;
    if (test->old_kind == 2) full_prefix012(full[0].actual).references = test->initial_count;
    FixtureVector012 vector = {0};
    if (test->capacity) vector.values = malloc(test->capacity * sizeof(SqPrefixObject012));
    vector.size = test->size;
    vector.capacity = test->capacity;
    FixtureObject012 *initial_values = vector.values;
    FixtureObject012 *spare = 0;
    if (test->callback_action == 2) {
        spare = malloc(8 * sizeof(FixtureObject012));
        spare[0] = tagged(0, 0);
        spare[1] = tagged(0, 0);
        spare[2] = tagged(2, nodes[3]);
        spare[3] = tagged(0, 0);
    }
    if (test->operation) {
        weak[0].actual.references = full_prefix012(full[0].actual).references = 0;
        for (SqU32 position = 0; position < vector.size; position++) {
            SqU32 kind = position % 3 == 0 ? 1 : position % 3 == 1 ? 2 : 0;
            vector.values[position] = tagged(kind, nodes[kind == 2]);
            if (kind == 1) weak[0].actual.references++;
            if (kind == 2) full_prefix012(full[0].actual).references++;
        }
    }
    __builtin_memset(&sq_prefix_observer012, 0, sizeof(sq_prefix_observer012));
    sq_prefix_observer012.destination = &destination;
    sq_prefix_observer012.incoming = test->alias ? nodes[test->old_kind == 2] : test->new_kind ? nodes[2 + (test->new_kind == 2)] : 0;
    sq_prefix_observer012.vector = &vector;
    sq_prefix_observer012.action = test->callback_action;
    sq_prefix_observer012.spare = spare;
    sq_prefix_observer012.spare_capacity = 8;
    reallocations = old_bytes = new_bytes = frees = free_bytes = 0;
    SqU32 returned = 1;
    if (test->operation == 0) returned = fixture_assign012(&destination, test->alias ? &destination : &incoming) == &destination;
    else if (test->operation == 1) fixture_resize012(&vector, test->requested, &incoming);
    else returned = fixture_destroy012(&vector) == &vector;
    SqU32 hash = 0;
    for (SqU32 position = 0; position < vector.size; position++) {
        hash = hash * 33 + vector.values[position].type;
        hash = hash * 33 + logical_value(&vector.values[position], nodes);
    }
    SqU32 canaries = 1;
    for (SqU32 node = 0; node < 2; node++)
        canaries &= weak[node].before == 0x13579bdfu && weak[node].after == 0x2468ace0u &&
                    full[node].before == 0x13579bdfu && full[node].after == 0x2468ace0u;
    printf("{\"case\":%u,\"returned\":%u,\"destinationType\":%u,\"destinationValue\":%u,\"counts\":[%u,%u,%u,%u],"
           "\"size\":%u,\"capacity\":%u,\"valueHash\":%u,\"canaries\":%u,\"callback\":[%u,%u,%u,%u,%u],\"services\":[%u,%u,%u,%u,%u]}\n",
           index, returned, destination.type, logical_value(&destination, nodes),
           weak[0].actual.references, full_prefix012(full[0].actual).references, weak[1].actual.references, full_prefix012(full[1].actual).references,
           vector.size, vector.capacity, hash, canaries, sq_prefix_observer012.calls, sq_prefix_observer012.kind,
           sq_prefix_observer012.released_count, sq_prefix_observer012.destination_type, sq_prefix_observer012.incoming_count,
           reallocations, old_bytes, new_bytes, frees, free_bytes);
    if (test->callback_action == 2 && vector.values != initial_values) free(initial_values);
    if (spare && vector.values != spare) free(spare);
    free(vector.values);
}

void mainCRTStartup(void)
{
    for (SqU32 index = 0; index < sizeof(prefix_cases012) / sizeof(prefix_cases012[0]); index++)
        exercise(prefix_cases012 + index, index);
    ExitProcess(0);
}
