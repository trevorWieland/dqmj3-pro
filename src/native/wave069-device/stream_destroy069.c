#include "device069.h"

unsigned int effect_file_sdk_stream_handle069(EffectFileSdk069 *state, const EffectFileStream069 *stream)
{
    if (stream->handle == 0) {
        state->services->fatal(state->services->context);
        __builtin_trap();
    }
    return stream->handle;
}

EffectFileStream069 *effect_file_sdk_stream_destroy069(EffectFileSdk069 *state, EffectFileStream069 *stream)
{
    if (stream->handle != 0) {
        state->services->close_handle(state->services->context, stream->handle);
        stream->handle = 0;
    }
    return stream;
}

void effect_file_sdk_stream_release069(EffectFileSdk069 *state, EffectFileStream069 *stream)
{
    if (stream->handle != 0) {
        unsigned int handle = effect_file_sdk_stream_handle069(state, stream);
        effect_file_sdk_file_close069(state, &handle);
    }
    stream->link.operations->destroy(state, stream);
    EffectFileStreamPool069 *pool = state->stream_pool;
    const EffectFileSdkServices069 *services = state->services;
    services->lock(services->context, &pool->mutex);
    stream->link.next = pool->free_streams;
    pool->free_streams = stream;
    --pool->live_count;
    services->unlock(services->context, &pool->mutex);
}
