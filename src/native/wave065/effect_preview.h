#ifndef DQMJ3_EFFECT_PREVIEW065_H
#define DQMJ3_EFFECT_PREVIEW065_H

#if defined(__arm__)
#define EFFECT_FLOAT_ABI065 __attribute__((pcs("aapcs-vfp")))
#else
#define EFFECT_FLOAT_ABI065
#endif

typedef struct EffectTranslation065 {
    float x;
    float y;
    float z;
} EffectTranslation065;

typedef struct EffectPreview065 {
    unsigned char unknown_000[260];
    float position[3];
    unsigned char unknown_110[24];
    float default_128[4];
    unsigned char unknown_138[8];
} EffectPreview065;

typedef struct EffectPreviewHeader065 {
    unsigned int unknown_00;
    int count;
} EffectPreviewHeader065;

typedef struct EffectPreviewVector065 {
    EffectPreview065 **begin;
    EffectPreview065 **end;
    EffectPreview065 **capacity_end;
} EffectPreviewVector065;

typedef struct EffectCacheEntry065 {
    int references;
    int resource_references;
    int key;
    unsigned int resource_slot;
    void *file_task;
    EffectPreview065 *primary_preview;
    EffectPreviewVector065 previews;
    unsigned char mode;
    unsigned char loaded;
    unsigned char unknown_26[2];
} EffectCacheEntry065;

typedef struct EffectCacheView065 {
    unsigned int unidentified_00;
    void *low_begin;
    void *low_end;
    void *low_capacity_end;
    unsigned int unidentified_10[3];
    EffectCacheEntry065 *begin;
    EffectCacheEntry065 *end;
    EffectCacheEntry065 *capacity_end;
    void *owner;
} EffectCacheView065;

typedef enum EffectCacheAllocation065 {
    EFFECT_CACHE_PREVIEW065,
    EFFECT_CACHE_PREVIEW_VECTOR065
} EffectCacheAllocation065;

typedef struct EffectCacheMemory065 {
    void *(*allocate)(void *context, EffectCacheAllocation065 role, unsigned int target_bytes,
                      __SIZE_TYPE__ native_bytes, unsigned int alignment);
    void (*release)(void *context, EffectCacheAllocation065 role, void *memory,
                    unsigned int target_bytes, __SIZE_TYPE__ native_bytes);
    void *context;
} EffectCacheMemory065;

int effect_bind_cache_memory065(const EffectCacheMemory065 *memory);
void fn_005e6a68(const unsigned char *source, EffectPreview065 *destination, unsigned int index);
void fn_005e7318(const unsigned char *source, EffectPreviewHeader065 *header);
EFFECT_FLOAT_ABI065 void fn_002a41c4(EffectCacheView065 *cache, unsigned int index,
                                    const unsigned char *source, EffectTranslation065 translation);

_Static_assert(sizeof(EffectPreview065) == 320, "preview fixed byte storage");
_Static_assert(__builtin_offsetof(EffectPreview065, position) == 260, "preview position offset");
_Static_assert(__builtin_offsetof(EffectPreview065, default_128) == 296, "preview default value offset");
_Static_assert(sizeof(EffectCacheEntry065) == (sizeof(void *) == 4 ? 40 : 64), "effect cache entry width");
_Static_assert(__builtin_offsetof(EffectCacheEntry065, previews) == (sizeof(void *) == 4 ? 24 : 32), "preview vector view");
_Static_assert(__builtin_offsetof(EffectCacheView065, begin) == (sizeof(void *) == 4 ? 28 : 48), "cache entry collection view");

#endif
