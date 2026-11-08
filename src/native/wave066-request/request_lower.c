#include "request_lower.h"

static const EffectRequestLowerServices066 *active_lower_services066;

int effect_request_bind_lower066(const EffectRequestLowerServices066 *services)
{
    active_lower_services066 = services;
    return services != 0;
}

void effect_request_release_lower066(EffectRequestLower066 *lower)
{
    const EffectRequestLowerServices066 *services = active_lower_services066;
    if (lower->region_28 != 0) {
        services->release_region(services->context, 0x30000, lower->region_28);
        lower->region_28 = 0;
    }
    if (lower->region_2c != 0) {
        services->release_region(services->context, 0x20000, lower->region_2c);
        lower->region_2c = 0;
    }
    if (lower->region_30 != 0) {
        services->release_region(services->context, 0x30000, lower->region_30);
        lower->region_30 = 0;
    }
    if (lower->region_24 != 0) {
        services->release_region(services->context, 0x30000, lower->region_24);
        lower->region_24 = 0;
    }
    if (lower->linear_buffer != 0) {
        services->release_linear(services->context, lower->linear_buffer);
        lower->linear_buffer = 0;
    }
    if (lower->block_0c != 0) {
        services->release_block(services->context, lower->block_0c);
        lower->block_0c = 0;
    }
    if (lower->block_1c != 0) {
        services->release_block(services->context, lower->block_1c);
        lower->block_1c = 0;
    }
    if (lower->object != 0) {
        services->release_block(services->context, lower->object);
        lower->object = 0;
    }
}

void effect_request_reset_lower066(EffectOwningCacheFields065 *cache, unsigned int index)
{
    EffectRequestLower066 *lower = cache->low_begin;
    effect_request_release_lower066(lower + index);
    EffectAuxiliaryOpaque065 *auxiliary = cache->auxiliary[index];
    if (auxiliary != 0)
        auxiliary->operations->destroy(auxiliary);
    cache->auxiliary[index] = 0;
}
