#ifndef DQMJ3_EFFECT_CACHED065_H
#define DQMJ3_EFFECT_CACHED065_H

#include "../wave065/effect_preview.h"
#include "../wave065-owner/effect_owner.h"

typedef struct EffectAuxiliaryOpaque065 EffectAuxiliaryOpaque065;

typedef struct EffectOwningCacheFields065 {
    unsigned int unknown_00;
    void *low_begin;
    void *low_end;
    void *low_capacity_end;
    EffectAuxiliaryOpaque065 **auxiliary;
    unsigned int unknown_14;
    unsigned int unknown_18;
    EffectCacheEntry065 *begin;
    EffectCacheEntry065 *end;
    EffectCacheEntry065 *capacity_end;
    EffectRegistrationView065 *registration;
} EffectOwningCacheFields065;

typedef struct EffectCachedEngineServices065 {
    void *preferred_heap;
    void *(*default_heap)(void *context);
    void *(*request)(void *context, const unsigned short *path, void *heap,
                     unsigned int alignment, unsigned int priority, int asynchronous);
    unsigned char (*ready)(void *context, void *request);
    const unsigned char *(*bytes)(void *context, void *request);
    void (*release_request)(void *context, void *request);
    void (*reset_low)(void *context, EffectOwningCacheFields065 *cache, unsigned int index);
    int (*load_low)(void *context, EffectOwningCacheFields065 *cache, unsigned int index, const unsigned char *bytes);
    unsigned int (*low_count)(void *context, const EffectOwningCacheFields065 *cache);
    void *(*low_at)(void *context, EffectOwningCacheFields065 *cache, unsigned int index);
    void *context;
} EffectCachedEngineServices065;

int effect_bind_cached_services065(const EffectCachedEngineServices065 *services);
const EffectCachedEngineServices065 *effect_cached_services065(void);
void effect_cached_member_name065(char *output, int key, const char *suffix);
void effect_cached_path065(unsigned short *output, int key, int mode);
void fn_002a4a48(EffectOwningCacheFields065 *cache, int index, int key, int asynchronous, int mode);
void fn_002a4b8c(EffectOwningCacheFields065 *cache, int index);
int fn_002a4674(EffectOwningCacheFields065 *cache, int key, int mode);
EFFECT_FLOAT_ABI065 void *fn_002a47cc(EffectOwningCacheFields065 *cache, int key, unsigned char kind,
                                      int mode, EffectTranslation065 translation);

_Static_assert(sizeof(EffectOwningCacheFields065) == (sizeof(void *) == 4 ? 44 : 80), "measured cache field view");
_Static_assert(__builtin_offsetof(EffectOwningCacheFields065, auxiliary) == (sizeof(void *) == 4 ? 16 : 32), "real auxiliary pointer");
_Static_assert(__builtin_offsetof(EffectOwningCacheFields065, begin) == (sizeof(void *) == 4 ? 28 : 48), "measured cache entry collection");
_Static_assert(__builtin_offsetof(EffectOwningCacheFields065, registration) == (sizeof(void *) == 4 ? 40 : 72), "registration owner field");

#endif
