#include "effect065_owner_fixture.c"
#include "../src/native/wave065-cached/effect_cached.h"

typedef struct CachedDataProvider065 CachedDataProvider065;
typedef struct CachedDataOperations065 {
    void (*uninvoked_0)(void);
    void (*uninvoked_1)(void);
    void (*uninvoked_2)(void);
    void (*uninvoked_3)(void);
    const unsigned char *(*bytes)(CachedDataProvider065 *provider);
} CachedDataOperations065;

struct CachedDataProvider065 {
    const CachedDataOperations065 *operations;
    const unsigned char *bytes;
    unsigned int calls;
};

typedef struct CachedReferenceTask065 {
    unsigned int unknown_00;
    const unsigned char *ready;
    unsigned char unknown_08[0x30];
    CachedDataProvider065 *provider;
} CachedReferenceTask065;

typedef EffectCacheEntry065 CachedReferenceEntry065;
typedef EffectOwningCacheFields065 CachedReferenceFields065;

typedef struct CachedSdkHeap065 CachedSdkHeap065;
typedef struct CachedSdkHeapOperations065 {
    void *(*allocate)(CachedSdkHeap065 *heap, unsigned int bytes, unsigned int alignment);
    void (*release)(CachedSdkHeap065 *heap, void *memory);
} CachedSdkHeapOperations065;

struct CachedSdkHeap065 {
    const CachedSdkHeapOperations065 *operations;
    void *context;
};

typedef struct CachedFixture065 {
    CachedReferenceFields065 cache;
    CachedReferenceEntry065 entry;
    EffectAuxiliaryOpaque065 *auxiliary;
    CachedReferenceTask065 task;
    CachedDataProvider065 provider;
    CachedSdkHeap065 heap;
    unsigned char ready;
} CachedFixture065;

static CachedFixture065 cached_fixture065;

static void cached_uninvoked_0_065(void) { __builtin_trap(); }
static void cached_uninvoked_1_065(void) { __builtin_trap(); }
static void cached_uninvoked_2_065(void) { __builtin_trap(); }
static void cached_uninvoked_3_065(void) { __builtin_trap(); }

static const unsigned char *cached_provider_bytes065(CachedDataProvider065 *provider)
{
    if (provider != &cached_fixture065.provider)
        __builtin_trap();
    ++provider->calls;
    return provider->bytes;
}

static const CachedDataOperations065 cached_data_operations065 = {
    cached_uninvoked_0_065, cached_uninvoked_1_065, cached_uninvoked_2_065, cached_uninvoked_3_065,
    cached_provider_bytes065
};

static void *cached_sdk_allocate065(CachedSdkHeap065 *heap, unsigned int bytes, unsigned int alignment)
{
    if (heap != &cached_fixture065.heap || heap->context != &graph_fixture065)
        __builtin_trap();
    return graph_allocate065(bytes == 4 ? 0x650032 : bytes == 320 ? 0x650104 : 0x650105,
        bytes, bytes, alignment, 0);
}

static void cached_sdk_release065(CachedSdkHeap065 *heap, void *memory)
{
    if (heap != &cached_fixture065.heap || heap->context != &graph_fixture065)
        __builtin_trap();
    graph_release065(memory, 0, 0);
}

static const CachedSdkHeapOperations065 cached_sdk_operations065 = {
    cached_sdk_allocate065, cached_sdk_release065
};

void effect_cached_fixture_reset065(unsigned int reference, int key, const unsigned char *bytes)
{
    unsigned char *storage = (unsigned char *)&cached_fixture065;
    for (__SIZE_TYPE__ index = 0; index < sizeof(cached_fixture065); ++index)
        storage[index] = 0xa5;
    cached_fixture065.cache.low_begin = 0;
    cached_fixture065.cache.low_end = 0;
    cached_fixture065.cache.low_capacity_end = 0;
    cached_fixture065.cache.auxiliary = &cached_fixture065.auxiliary;
    cached_fixture065.cache.begin = &cached_fixture065.entry;
    cached_fixture065.cache.end = &cached_fixture065.entry + 1;
    cached_fixture065.cache.capacity_end = &cached_fixture065.entry + 1;
    cached_fixture065.cache.registration = reference ? (void *)&owner_fixture065.original : (void *)&owner_fixture065.source;
    cached_fixture065.entry.references = 1;
    cached_fixture065.entry.resource_references = 0;
    cached_fixture065.entry.key = key;
    cached_fixture065.entry.file_task = &cached_fixture065.task;
    cached_fixture065.entry.primary_preview = 0;
    cached_fixture065.entry.previews.begin = 0;
    cached_fixture065.entry.previews.end = 0;
    cached_fixture065.entry.previews.capacity_end = 0;
    cached_fixture065.entry.mode = 1;
    cached_fixture065.entry.loaded = 1;
    cached_fixture065.auxiliary = 0;
    cached_fixture065.ready = 1;
    cached_fixture065.task.ready = &cached_fixture065.ready;
    cached_fixture065.task.provider = &cached_fixture065.provider;
    cached_fixture065.provider.operations = &cached_data_operations065;
    cached_fixture065.provider.bytes = bytes;
    cached_fixture065.provider.calls = 0;
    cached_fixture065.heap.operations = &cached_sdk_operations065;
    cached_fixture065.heap.context = &graph_fixture065;
}

void *effect_cached_fixture065(void) { return &cached_fixture065; }
void *effect_cached_fixture_heap065(void) { return &cached_fixture065.heap; }

const unsigned int effect_cached_fixture_layout065[] = {
    sizeof(CachedFixture065), __builtin_offsetof(CachedFixture065, cache), __builtin_offsetof(CachedFixture065, entry),
    __builtin_offsetof(CachedFixture065, task), __builtin_offsetof(CachedFixture065, provider),
    __builtin_offsetof(CachedFixture065, heap), sizeof(CachedReferenceFields065), sizeof(CachedReferenceEntry065)
};

_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(CachedReferenceTask065, provider) == 0x38, "actual original getter owner field");
_Static_assert(sizeof(void *) != 4 || sizeof(CachedReferenceEntry065) == 40, "actual cached entry target stride");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(CachedReferenceFields065, auxiliary) == 16, "actual auxiliary pointer field");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(CachedReferenceFields065, begin) == 28, "actual cache collection field");
