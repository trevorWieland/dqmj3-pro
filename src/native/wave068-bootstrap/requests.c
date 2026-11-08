#include "bootstrap.h"

EffectRequestTask066 *effect_file_request_async068(EffectFileBootstrap068 *state, const unsigned short *path,
    EffectRequestHeap066 *heap, unsigned int alignment, unsigned int source_selector)
{
    return effect_queue_request_async067(state->manager, path, source_selector, heap, alignment);
}
