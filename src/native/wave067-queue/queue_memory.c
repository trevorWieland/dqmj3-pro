#include "file_queue.h"

static const EffectQueueServices067 *active_queue_services067;

int effect_queue_bind067(const EffectQueueServices067 *services)
{
    active_queue_services067 = services;
    return services != 0;
}

const EffectQueueServices067 *effect_queue_services067(void)
{
    return active_queue_services067;
}

void *effect_queue_allocate067(EffectQueueAllocation067 role, unsigned int logical_bytes, __SIZE_TYPE__ native_bytes)
{
    const EffectQueueServices067 *services = effect_queue_services067();
    return services->allocate(services->context, role, logical_bytes, native_bytes);
}

void effect_queue_release067(EffectQueueAllocation067 role, void *pointer, unsigned int logical_bytes, __SIZE_TYPE__ native_bytes)
{
    const EffectQueueServices067 *services = effect_queue_services067();
    services->release(services->context, role, pointer, logical_bytes, native_bytes);
}
