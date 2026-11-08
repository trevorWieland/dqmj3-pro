#include "effect_preview.h"

#if defined(_WIN32)
int _fltused;
#endif

typedef struct PreviewAllocation065 {
    void *memory;
    unsigned int role;
    unsigned int target_bytes;
    __SIZE_TYPE__ native_bytes;
    unsigned int live;
} PreviewAllocation065;

typedef struct PreviewFixture065 {
    unsigned int next;
    unsigned int allocation_count;
    unsigned int release_count;
    unsigned int failed;
    PreviewAllocation065 allocations[256];
    unsigned int released[256];
    _Alignas(16) unsigned char arena[262144];
} PreviewFixture065;

typedef struct PreviewOriginalHeap065 PreviewOriginalHeap065;
typedef struct PreviewOriginalHeapOperations065 {
    void *(*allocate)(PreviewOriginalHeap065 *heap, unsigned int bytes, unsigned int alignment);
    void (*release)(PreviewOriginalHeap065 *heap, void *memory);
} PreviewOriginalHeapOperations065;

struct PreviewOriginalHeap065 {
    const PreviewOriginalHeapOperations065 *operations;
    PreviewFixture065 *fixture;
};

static PreviewFixture065 preview_fixture065;

static void *preview_allocate065(void *context, EffectCacheAllocation065 role, unsigned int target_bytes,
                                 __SIZE_TYPE__ native_bytes, unsigned int alignment)
{
    PreviewFixture065 *fixture = context;
    unsigned int at = (fixture->next + 47) & ~15u;
    if (fixture->allocation_count >= 256 || native_bytes > sizeof(fixture->arena) ||
        at > sizeof(fixture->arena) - native_bytes || sizeof(fixture->arena) - at - native_bytes < 32 || alignment > 16) {
        fixture->failed = 1;
        return 0;
    }
    PreviewAllocation065 *record = fixture->allocations + fixture->allocation_count++;
    record->memory = fixture->arena + at;
    record->role = (unsigned int)role;
    record->target_bytes = target_bytes;
    record->native_bytes = native_bytes;
    record->live = 1;
    fixture->next = at + (unsigned int)native_bytes + 32;
    return record->memory;
}

static void preview_release065(void *context, EffectCacheAllocation065 role, void *memory,
                                unsigned int target_bytes, __SIZE_TYPE__ native_bytes)
{
    PreviewFixture065 *fixture = context;
    (void)role;
    (void)target_bytes;
    (void)native_bytes;
    if (memory == 0)
        return;
    for (unsigned int index = 0; index < fixture->allocation_count; ++index) {
        PreviewAllocation065 *record = fixture->allocations + index;
        if (record->memory == memory) {
            if (!record->live || fixture->release_count >= 256) {
                fixture->failed = 1;
                return;
            }
            record->live = 0;
            fixture->released[fixture->release_count++] = index;
            return;
        }
    }
    fixture->failed = 1;
}

static const EffectCacheMemory065 preview_memory065 = {
    preview_allocate065, preview_release065, &preview_fixture065
};

void *effect_preview_original_allocate065(PreviewOriginalHeap065 *heap, unsigned int bytes, unsigned int alignment)
{
    EffectCacheAllocation065 role = bytes == 320 ? EFFECT_CACHE_PREVIEW065 : EFFECT_CACHE_PREVIEW_VECTOR065;
    (void)alignment;
    return preview_allocate065(heap->fixture, role, bytes, bytes, 4);
}

void effect_preview_original_release065(PreviewOriginalHeap065 *heap, void *memory)
{
    preview_release065(heap->fixture, EFFECT_CACHE_PREVIEW065, memory, 0, 0);
}

const PreviewOriginalHeapOperations065 effect_preview_original_operations065 = {
    effect_preview_original_allocate065, effect_preview_original_release065
};

static PreviewOriginalHeap065 preview_original_heap065 = {
    &effect_preview_original_operations065, &preview_fixture065
};

void effect_preview_fixture065_reset(void)
{
    unsigned char *bytes = (unsigned char *)&preview_fixture065;
    for (__SIZE_TYPE__ index = 0; index < sizeof(preview_fixture065); ++index)
        bytes[index] = 0xa5;
    preview_fixture065.next = 0;
    preview_fixture065.allocation_count = 0;
    preview_fixture065.release_count = 0;
    preview_fixture065.failed = 0;
}

const EffectCacheMemory065 *effect_preview_fixture065_memory(void)
{
    return &preview_memory065;
}

void *effect_preview_fixture065_heap(void)
{
    return &preview_original_heap065;
}

void *effect_preview_fixture065_state(void)
{
    return &preview_fixture065;
}

void *effect_preview_fixture065_seed(unsigned int role, unsigned int count)
{
    unsigned int target = role == EFFECT_CACHE_PREVIEW065 ? 320 : count * 4;
    __SIZE_TYPE__ native = role == EFFECT_CACHE_PREVIEW065 ? sizeof(EffectPreview065) : (__SIZE_TYPE__)count * sizeof(void *);
    return preview_allocate065(&preview_fixture065, (EffectCacheAllocation065)role, target, native, 4);
}

const unsigned int effect_preview_layout065[] = {
    sizeof(void *), sizeof(EffectPreview065), sizeof(EffectPreviewVector065), sizeof(EffectCacheEntry065),
    sizeof(EffectCacheView065), __builtin_offsetof(EffectCacheView065, begin),
    __builtin_offsetof(EffectCacheEntry065, primary_preview), __builtin_offsetof(EffectCacheEntry065, previews),
    sizeof(PreviewAllocation065), __builtin_offsetof(PreviewAllocation065, role),
    __builtin_offsetof(PreviewAllocation065, target_bytes), __builtin_offsetof(PreviewAllocation065, native_bytes),
    __builtin_offsetof(PreviewAllocation065, live), sizeof(PreviewFixture065),
    __builtin_offsetof(PreviewFixture065, allocations), __builtin_offsetof(PreviewFixture065, released),
    __builtin_offsetof(PreviewFixture065, arena)
};
