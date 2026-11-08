#include "device069.h"

EffectFileDevice068 *effect_file_sdk_device_destroy069(EffectFileSdk069 *state, EffectFileDevice068 *device)
{
    device->owner = 0;
    device->link.operations = state->device_base_operations;
    for (unsigned int index = 0; index < 5; ++index) {
        EffectFileStream069 *stream = device->children[index];
        if (stream != 0)
            stream->link.operations->release(state, stream);
    }
    EffectFileEmbedded069 *embedded = device->embedded + 1;
    embedded->type = state->embedded_subtype;
    if (embedded->borrowed_view != 0)
        embedded->borrowed_view = 0;
    state->embedded_destroy(state, embedded);
    embedded = device->embedded;
    embedded->type = state->embedded_subtype;
    if (embedded->borrowed_view != 0)
        embedded->borrowed_view = 0;
    state->embedded_destroy(state, embedded);
    return device;
}
