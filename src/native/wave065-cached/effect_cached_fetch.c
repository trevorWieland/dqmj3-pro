#include "effect_cached.h"
#include "../wave032/archive.h"

static int cached_index065(const EffectOwningCacheFields065 *cache, int key)
{
    int index = 0;
    for (EffectCacheEntry065 *entry = cache->begin; entry != cache->end; ++entry, ++index)
        if (entry->key == key)
            return index;
    return -1;
}

static void cached_preview065(EffectOwningCacheFields065 *cache, unsigned int index,
                               const unsigned char *bytes, EffectTranslation065 translation)
{
    EffectCacheView065 preview_view;
    preview_view.begin = cache->begin;
    fn_002a41c4(&preview_view, index, bytes, translation);
}

EFFECT_FLOAT_ABI065 void *fn_002a47cc(EffectOwningCacheFields065 *cache, int key, unsigned char kind,
                                      int mode, EffectTranslation065 translation)
{
    if (fn_002a4674(cache, key, mode) == 0)
        return 0;
    const EffectCachedEngineServices065 *services = effect_cached_services065();
    if (mode != 0) {
        int index = cached_index065(cache, key);
        EffectCacheEntry065 *entry = cache->begin + index;
        if (entry->resource_references == 0) {
            int found = cached_index065(cache, key);
            const unsigned char *bytes = found < 0 ? 0 : services->bytes(services->context, cache->begin[found].file_task);
            ArchiveView archive;
            fn_005f5cd8(&archive);
            fn_005f5cac(&archive, bytes);
            char name[32];
            effect_cached_member_name065(name, key, "ptcl");
            const unsigned char *resource = fn_00176d74(&archive, name);
            effect_cached_member_name065(name, key, "prev");
            const unsigned char *preview = fn_00176d74(&archive, name);
            cached_preview065(cache, (unsigned int)index, preview, translation);
            entry->resource_slot = fn_005f0974(cache->registration, (unsigned char *)resource, kind);
            fn_005f5d3c(&archive);
        }
        entry->resource_references = (int)((unsigned int)entry->resource_references + 1u);
    }
    int index = cached_index065(cache, key);
    if (index < 0)
        return 0;
    if (mode == 0) {
        if ((unsigned int)index >= services->low_count(services->context, cache))
            return 0;
        return services->low_at(services->context, cache, (unsigned int)index);
    }
    return &cache->begin[index].previews;
}
