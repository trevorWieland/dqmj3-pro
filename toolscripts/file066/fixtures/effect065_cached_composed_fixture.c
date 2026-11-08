#include "effect065_cached_fixture.c"
#include "../src/native/wave032/archive.h"

static void *cached_source_default_heap065(void *context)
{
    (void)context;
    __builtin_trap();
}

static void *cached_source_request065(void *context, const unsigned short *path, void *heap,
                                      unsigned int alignment, unsigned int priority, int asynchronous)
{
    (void)context; (void)path; (void)heap; (void)alignment; (void)priority; (void)asynchronous;
    __builtin_trap();
}

static unsigned char cached_source_ready065(void *context, void *request)
{
    if (context != &cached_fixture065 || request != &cached_fixture065.task)
        __builtin_trap();
    return *cached_fixture065.task.ready;
}

static const unsigned char *cached_source_bytes065(void *context, void *request)
{
    if (context != &cached_fixture065 || request != &cached_fixture065.task)
        __builtin_trap();
    return cached_fixture065.task.provider->operations->bytes(cached_fixture065.task.provider);
}

static void cached_source_release_request065(void *context, void *request)
{
    (void)context; (void)request;
    __builtin_trap();
}

static void cached_source_reset_low065(void *context, EffectOwningCacheFields065 *cache, unsigned int index)
{
    (void)context; (void)cache; (void)index;
    __builtin_trap();
}

static int cached_source_load_low065(void *context, EffectOwningCacheFields065 *cache, unsigned int index, const unsigned char *bytes)
{
    (void)context; (void)cache; (void)index; (void)bytes;
    __builtin_trap();
}

static unsigned int cached_source_low_count065(void *context, const EffectOwningCacheFields065 *cache)
{
    (void)context; (void)cache;
    __builtin_trap();
}

static void *cached_source_low_at065(void *context, EffectOwningCacheFields065 *cache, unsigned int index)
{
    (void)context; (void)cache; (void)index;
    __builtin_trap();
}

static const EffectCachedEngineServices065 cached_source_services065 = {
    0, cached_source_default_heap065, cached_source_request065, cached_source_ready065,
    cached_source_bytes065, cached_source_release_request065, cached_source_reset_low065,
    cached_source_load_low065, cached_source_low_count065, cached_source_low_at065, &cached_fixture065
};

static void *cached_archive_allocate065(void *context, unsigned int bytes, unsigned int alignment)
{
    if (context != &cached_fixture065 || bytes != sizeof(ArchiveImage) || alignment != _Alignof(ArchiveImage))
        __builtin_trap();
    return graph_allocate065(0x650032, 4, bytes, 4, 0);
}

static void cached_archive_release065(void *context, void *memory)
{
    if (context != &cached_fixture065)
        __builtin_trap();
    if (memory != 0)
        graph_release065(memory, 0, 0);
}

static const ArchiveServices cached_archive_services065 = {
    cached_archive_allocate065, cached_archive_release065, &cached_fixture065
};

static void *cached_preview_allocate065(void *context, EffectCacheAllocation065 role, unsigned int logical,
                                        __SIZE_TYPE__ physical, unsigned int alignment)
{
    if (context != &cached_fixture065 || alignment != (role == EFFECT_CACHE_PREVIEW065 ? 4 : sizeof(void *)))
        __builtin_trap();
    if (physical != (role == EFFECT_CACHE_PREVIEW065 ? logical : logical / 4 * sizeof(void *)))
        __builtin_trap();
    return graph_allocate065(role == EFFECT_CACHE_PREVIEW065 ? 0x650104 : 0x650105,
                             logical, physical, 4, 0);
}

static void cached_preview_release065(void *context, EffectCacheAllocation065 role, void *memory,
                                      unsigned int logical, __SIZE_TYPE__ physical)
{
    (void)role; (void)logical; (void)physical;
    if (context != &cached_fixture065)
        __builtin_trap();
    if (memory != 0)
        graph_release065(memory, 0, 0);
}

static const EffectCacheMemory065 cached_preview_memory065 = {
    cached_preview_allocate065, cached_preview_release065, &cached_fixture065
};

void effect_cached_composed_reset065(unsigned int reference, int key, const unsigned char *bytes)
{
    effect_cached_fixture_reset065(reference, key, bytes);
    effect_bind_cached_services065(&cached_source_services065);
    archive_bind_services(&cached_archive_services065);
    effect_bind_cache_memory065(&cached_preview_memory065);
}

EFFECT_FLOAT_ABI065 void *effect_cached_composed_call065(int key, unsigned char kind, EffectTranslation065 translation)
{
    return fn_002a47cc(&cached_fixture065.cache, key, kind, 1, translation);
}
