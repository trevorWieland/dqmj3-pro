#include "effect_cached.h"

static const EffectCachedEngineServices065 *active_cached_services065;

int effect_bind_cached_services065(const EffectCachedEngineServices065 *services)
{
    active_cached_services065 = services;
    return services != 0;
}

const EffectCachedEngineServices065 *effect_cached_services065(void)
{
    return active_cached_services065;
}
