#include "effect_request066_port_fixture.c"
#include "../src/native/wave066-request/request_lower.h"

static unsigned char request_cache_lower066[52] __attribute__((aligned(8)));
static EffectRequestLower066 request_source_lower066;

void effect_request_cache_miss_prepare066(unsigned int reference)
{
    for (unsigned int index = 0; index < sizeof(request_cache_lower066); ++index)
        request_cache_lower066[index] = 0;
    unsigned char *source = (unsigned char *)&request_source_lower066;
    for (__SIZE_TYPE__ index = 0; index < sizeof(request_source_lower066); ++index)
        source[index] = 0;
    cached_fixture065.cache.low_begin = reference ? (void *)request_cache_lower066 : (void *)&request_source_lower066;
    cached_fixture065.cache.low_end = reference ? (void *)(request_cache_lower066 + sizeof(request_cache_lower066)) : (void *)(&request_source_lower066 + 1);
    cached_fixture065.cache.low_capacity_end = cached_fixture065.cache.low_end;
    cached_fixture065.entry.references = 0;
    cached_fixture065.entry.resource_references = 0;
    cached_fixture065.entry.key = 0;
    cached_fixture065.entry.file_task = 0;
    cached_fixture065.entry.loaded = 0;
    cached_fixture065.entry.mode = 0;
}

static void *request_cache_default_heap066(void *context)
{
    if (context != &cached_fixture065)
        __builtin_trap();
    return &request_heap066;
}

static void *request_cache_request066(void *context, const unsigned short *path, void *heap,
                                     unsigned int alignment, unsigned int selector, int asynchronous)
{
    if (context != &cached_fixture065 || asynchronous)
        __builtin_trap();
    return effect_request_sync066(0, path, selector, heap, alignment);
}

static unsigned char request_cache_ready066(void *context, void *request)
{
    if (context != &cached_fixture065)
        __builtin_trap();
    return effect_request_ready066(request);
}

static const unsigned char *request_cache_bytes066(void *context, void *request)
{
    if (context != &cached_fixture065)
        __builtin_trap();
    return effect_request_bytes066(request);
}

static void request_cache_release066(void *context, void *request)
{
    if (context != &cached_fixture065)
        __builtin_trap();
    effect_request_destroy066(request);
}

static void request_cache_reset_lower066(void *context, EffectOwningCacheFields065 *cache, unsigned int index)
{
    if (context != &cached_fixture065)
        __builtin_trap();
    effect_request_reset_lower066(cache, index);
}

static int request_cache_load_lower_uninvoked066(void *context, EffectOwningCacheFields065 *cache,
                                                unsigned int index, const unsigned char *bytes)
{
    (void)context; (void)cache; (void)index; (void)bytes;
    __builtin_trap();
}

static unsigned int request_cache_lower_count066(void *context, const EffectOwningCacheFields065 *cache)
{
    if (context != &cached_fixture065)
        __builtin_trap();
    const EffectRequestLower066 *begin = cache->low_begin;
    const EffectRequestLower066 *end = cache->low_end;
    return (unsigned int)(end - begin);
}

static void *request_cache_lower_at066(void *context, EffectOwningCacheFields065 *cache, unsigned int index)
{
    if (context != &cached_fixture065)
        __builtin_trap();
    EffectRequestLower066 *begin = cache->low_begin;
    return begin + index;
}

static const EffectCachedEngineServices065 request_cache_services066 = {
    &request_heap066, request_cache_default_heap066, request_cache_request066, request_cache_ready066,
    request_cache_bytes066, request_cache_release066, request_cache_reset_lower066,
    request_cache_load_lower_uninvoked066, request_cache_lower_count066, request_cache_lower_at066, &cached_fixture065
};

void effect_request_cache_source_bind066(void)
{
    effect_request_fixture_bind066();
    effect_request_source_files_bind066();
    archive_bind_services(&cached_archive_services065);
    effect_bind_cache_memory065(&cached_preview_memory065);
    effect_bind_cached_services065(&request_cache_services066);
}
