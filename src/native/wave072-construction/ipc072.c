#include "device072.h"

int effect_file_open_direct072(EffectFileConstruction072 *state, unsigned int *output, unsigned int archive,
    unsigned int archive_type, const void *archive_path, unsigned int archive_bytes,
    unsigned int file_type, const void *file_path, unsigned int file_bytes, unsigned int flags, unsigned int attributes)
{
    EffectFileMessage072 message = {{0}, {archive_path, file_path}, 0};
    message.words[0] = 0x08030204;
    message.words[1] = 0;
    message.words[2] = archive;
    message.words[3] = archive_type;
    message.words[4] = archive_bytes;
    message.words[5] = file_type;
    message.words[6] = file_bytes;
    message.words[7] = flags;
    message.words[8] = attributes;
    message.words[9] = (archive_bytes << 14) | 0x802;
    message.words[11] = (file_bytes << 14) | 2;
    int result = state->services->send_sync(state->services->context, state->service_handle, &message);
    if (result >= 0) {
        *output = message.words[3];
        result = (int)message.words[1];
    }
    return result;
}

int effect_file_read_ipc072(EffectFileConstruction072 *state, const unsigned int *handle,
    unsigned int *read_bytes, unsigned long long offset, void *output, unsigned int bytes)
{
    EffectFileMessage072 message = {{0}, {0, 0}, output};
    message.words[0] = 0x080200c2;
    message.words[1] = (unsigned int)offset;
    message.words[2] = (unsigned int)(offset >> 32);
    message.words[3] = bytes;
    message.words[4] = (bytes << 4) | 12;
    int result = state->services->send_sync(state->services->context, *handle, &message);
    if (result >= 0) {
        *read_bytes = message.words[2];
        result = (int)message.words[1];
    }
    return result;
}

int effect_file_stream_read072(EffectFileConstruction072 *state, EffectFileStream069 *stream,
    unsigned int *read_bytes, unsigned long long offset, void *output, unsigned int bytes)
{
    unsigned int handle = effect_file_sdk_stream_handle069(state->destruction, stream);
    return effect_file_read_ipc072(state, &handle, read_bytes, offset, output, bytes);
}

unsigned int effect_file_cached_service072(EffectFileConstruction072 *state)
{
    if (!state->service_ready) state->services->fatal(state->services->context);
    return state->service_handle;
}

int effect_file_priority_ipc072(EffectFileConstruction072 *state, const unsigned int *handle, int *priority)
{
    EffectFileMessage072 message = {{0}, {0, 0}, 0};
    message.words[0] = 0x08630000;
    int result = state->services->send_sync(state->services->context, *handle, &message);
    if (result >= 0) {
        *priority = (int)message.words[2];
        result = (int)message.words[1];
    }
    return result;
}

int effect_file_priority072(EffectFileConstruction072 *state, int *priority)
{
    unsigned int handle = effect_file_cached_service072(state);
    return effect_file_priority_ipc072(state, &handle, priority);
}
