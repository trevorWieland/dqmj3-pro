#include "effect_preview.h"

void *fn_00301a9c(void *destination, const void *source, unsigned int bytes);
void *fn_00301f50(void *destination, unsigned int bytes);

static const EffectCacheMemory065 *active_effect_cache_memory065;

int effect_bind_cache_memory065(const EffectCacheMemory065 *memory)
{
    active_effect_cache_memory065 = memory;
    return memory != 0;
}

static unsigned int preview_word065(const unsigned char *bytes)
{
    return (unsigned int)bytes[0] | (unsigned int)bytes[1] << 8 |
        (unsigned int)bytes[2] << 16 | (unsigned int)bytes[3] << 24;
}

void fn_005e6a68(const unsigned char *source, EffectPreview065 *destination, unsigned int index)
{
    fn_00301a9c(destination, source + 8 + (__SIZE_TYPE__)index * sizeof(*destination), sizeof(*destination));
}

void fn_005e7318(const unsigned char *source, EffectPreviewHeader065 *header)
{
    header->unknown_00 = preview_word065(source);
    header->count = (int)preview_word065(source + 4);
}

static EffectPreview065 *allocate_preview065(void)
{
    const EffectCacheMemory065 *memory = active_effect_cache_memory065;
    EffectPreview065 *preview = memory->allocate(memory->context, EFFECT_CACHE_PREVIEW065,
                                                320, sizeof(*preview), 4);
    if (preview != 0) {
        preview->default_128[0] = 0.0f;
        preview->default_128[1] = 0.0f;
        preview->default_128[2] = 0.0f;
        preview->default_128[3] = 1.0f;
    }
    return preview;
}

static void append_preview065(EffectPreviewVector065 *vector, EffectPreview065 *preview)
{
    const EffectCacheMemory065 *memory = active_effect_cache_memory065;
    if (vector->end == vector->capacity_end) {
        unsigned int size = vector->begin != 0 ? (unsigned int)(vector->end - vector->begin) : 0;
        unsigned int capacity = vector->begin != 0 ? (unsigned int)(vector->capacity_end - vector->begin) : 0;
        unsigned int next = size + (size >> 1) + (size >> 3);
        if (next < size + 32)
            next = size + 32;
        EffectPreview065 **replacement = memory->allocate(memory->context, EFFECT_CACHE_PREVIEW_VECTOR065,
            next * 4, (__SIZE_TYPE__)next * sizeof(*replacement), sizeof(*replacement));
        for (unsigned int index = 0; index < size; ++index)
            replacement[index] = vector->begin[index];
        replacement[size] = preview;
        memory->release(memory->context, EFFECT_CACHE_PREVIEW_VECTOR065, vector->begin,
                        capacity * 4, (__SIZE_TYPE__)capacity * sizeof(*replacement));
        vector->begin = replacement;
        vector->end = replacement + size + 1;
        vector->capacity_end = replacement + next;
    } else {
        *vector->end++ = preview;
    }
}

EFFECT_FLOAT_ABI065 void fn_002a41c4(EffectCacheView065 *cache, unsigned int index,
                                    const unsigned char *source, EffectTranslation065 translation)
{
    EffectCacheEntry065 *entry = cache->begin + index;
    const EffectCacheMemory065 *memory = active_effect_cache_memory065;
    if (source == 0) {
        memory->release(memory->context, EFFECT_CACHE_PREVIEW065, entry->primary_preview,
                        320, sizeof(EffectPreview065));
        entry->primary_preview = 0;
        return;
    }
    entry->primary_preview = memory->allocate(memory->context, EFFECT_CACHE_PREVIEW065,
                                               320, sizeof(EffectPreview065), 4);
    if (entry->primary_preview != 0) {
        fn_00301f50(entry->primary_preview, sizeof(EffectPreview065));
        entry->primary_preview->default_128[0] = 0.0f;
        entry->primary_preview->default_128[1] = 0.0f;
        entry->primary_preview->default_128[2] = 0.0f;
        entry->primary_preview->default_128[3] = 1.0f;
    }
    fn_005e6a68(source, entry->primary_preview, 0);
    EffectPreviewHeader065 header;
    fn_005e7318(source, &header);
    for (int item = 0; item < header.count; ++item) {
        EffectPreview065 *preview = allocate_preview065();
        fn_005e6a68(source, preview, (unsigned int)item);
        append_preview065(&entry->previews, preview);
        preview->position[0] += translation.x;
        preview->position[1] += translation.y;
        preview->position[2] += translation.z;
    }
}
