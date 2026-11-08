#include "request.h"

static const EffectRequestMemory066 *active_request_memory066;

int effect_request_bind_memory066(const EffectRequestMemory066 *memory)
{
    active_request_memory066 = memory;
    return memory != 0;
}

const EffectRequestMemory066 *effect_request_memory066(void)
{
    return active_request_memory066;
}
