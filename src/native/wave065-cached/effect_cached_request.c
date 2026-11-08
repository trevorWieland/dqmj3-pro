#include "effect_cached.h"

void fn_002a4a48(EffectOwningCacheFields065 *cache, int index, int key, int asynchronous, int mode)
{
    EffectCacheEntry065 *entry = cache->begin + index;
    entry->references = (int)((unsigned int)entry->references + 1u);
    entry->key = key;
    entry->mode = (unsigned char)mode;
    unsigned short path[66];
    effect_cached_path065(path, key, mode);
    const EffectCachedEngineServices065 *services = effect_cached_services065();
    void *heap = services->preferred_heap;
    if (heap == 0)
        heap = services->default_heap(services->context);
    entry->file_task = services->request(services->context, path, heap, 128, 5, asynchronous);
}

void fn_002a4b8c(EffectOwningCacheFields065 *cache, int index)
{
    const EffectCachedEngineServices065 *services = effect_cached_services065();
    services->reset_low(services->context, cache, (unsigned int)index);
    EffectCacheEntry065 *entry = cache->begin + index;
    entry->loaded = 0;
    if (entry->file_task != 0)
        services->release_request(services->context, entry->file_task);
    entry->file_task = 0;
    entry->mode = 0;
    entry->key = 0;
    entry->references = 0;
}

int fn_002a4674(EffectOwningCacheFields065 *cache, int key, int mode)
{
    for (EffectCacheEntry065 *entry = cache->begin; entry != cache->end; ++entry) {
        if (entry->key == key) {
            entry->references = (int)((unsigned int)entry->references + 1u);
            return 1;
        }
    }
    int index = -1;
    int current = 0;
    for (EffectCacheEntry065 *entry = cache->begin; entry != cache->end; ++entry, ++current) {
        if (entry->key == 0) {
            index = current;
            break;
        }
    }
    fn_002a4a48(cache, index, key, 0, mode);
    EffectCacheEntry065 *entry = cache->begin + index;
    int load = entry->references == 1;
    if (entry->references < 2)
        load = entry->loaded == 0;
    if (!load)
        return 1;
    const EffectCachedEngineServices065 *services = effect_cached_services065();
    if (services->ready(services->context, entry->file_task) == 1) {
        services->reset_low(services->context, cache, (unsigned int)index);
        int result = 1;
        if (entry->mode == 0) {
            const unsigned char *bytes = services->bytes(services->context, entry->file_task);
            result = services->load_low(services->context, cache, (unsigned int)index, bytes);
        }
        entry->loaded = 1;
        if (result != 0)
            return result;
    }
    fn_002a4b8c(cache, index);
    return 0;
}
