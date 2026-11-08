#ifndef DQMJ3_EFFECT_REQUEST_LOWER066_H
#define DQMJ3_EFFECT_REQUEST_LOWER066_H

#include "../wave065-cached/effect_cached.h"

typedef struct EffectRequestLower066 {
    void *object;
    void *serialized_tail;
    unsigned int unknown_08;
    void *block_0c;
    unsigned int unknown_10;
    unsigned int unknown_14;
    unsigned int unknown_18;
    void *block_1c;
    void *linear_buffer;
    void *region_24;
    void *region_28;
    void *region_2c;
    void *region_30;
} EffectRequestLower066;

typedef struct EffectRequestLowerServices066 {
    void (*release_region)(void *context, unsigned int region, void *memory);
    void (*release_linear)(void *context, void *memory);
    void (*release_block)(void *context, void *memory);
    void *context;
} EffectRequestLowerServices066;

typedef struct EffectRequestAuxiliaryOperations066 {
    void (*uninvoked_0)(void);
    void (*destroy)(EffectAuxiliaryOpaque065 *auxiliary);
} EffectRequestAuxiliaryOperations066;

struct EffectAuxiliaryOpaque065 {
    const EffectRequestAuxiliaryOperations066 *operations;
};

int effect_request_bind_lower066(const EffectRequestLowerServices066 *services);
void effect_request_release_lower066(EffectRequestLower066 *lower);
void effect_request_reset_lower066(EffectOwningCacheFields065 *cache, unsigned int index);

_Static_assert(sizeof(EffectRequestLower066) == (sizeof(void *) == 4 ? 52 : 96), "lower owning field view");

#endif
