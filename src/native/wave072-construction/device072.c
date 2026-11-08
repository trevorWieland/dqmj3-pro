#include "device072.h"

EffectFileDevice068 *effect_file_device_construct072(EffectFileConstruction072 *state, EffectFileDevice068 *device)
{
    device->unknown_04 = 0;
    device->owner = 0;
    for (unsigned int index = 0; index < 5; ++index) device->children[index] = 0;
    for (unsigned int index = 0; index < 2; ++index) {
        EffectFileCache072 *cache = device->interior.directory + index;
        cache->first = cache->second = cache->capacity = 0;
        cache->view = 0;
        cache = device->interior.files + index;
        cache->first = cache->second = cache->capacity = 0;
        cache->view = 0;
        device->interior.directory_state[index] = 0;
        device->interior.file_state[index] = 0;
        EffectFileEmbedded069 *embedded = device->embedded + index;
        embedded->type = state->embedded_type;
        embedded->unknown_04 = embedded->unknown_08 = 0;
        embedded->required_empty_0c = 0;
        embedded->head = 0;
        embedded->header_flags = 0;
        embedded->free_nodes = 0;
        embedded->mutex.kind = 0;
        embedded->mutex.owner = 0;
        embedded->mutex.depth = 0xffffffffu;
    }
    device->link.operations = state->device_operations;
    return device;
}

int effect_file_stream_attach072(EffectFileConstruction072 *state, EffectFileDevice068 *device,
    EffectFileStream069 **output, unsigned int handle)
{
    (void)device;
    EffectFileStream069 *stream = effect_file_pool_allocate072(state, state->stream_pool);
    if (stream) {
        stream->link.operations = state->stream_operations;
        stream->handle = handle;
        *output = stream;
        return 0;
    }
    state->services->close_handle(state->services->context, handle);
    return (int)0xd8604659u;
}

int effect_file_device_initialize072(EffectFileConstruction072 *state, EffectFileDevice068 *device,
    EffectFileStream069 *stream, unsigned int entries, unsigned int entry_bytes,
    void *workspace, unsigned int workspace_bytes, unsigned int copy_tables)
{
    unsigned int header[10], second[10], received;
    int result = stream->link.operations->read(stream, &received, 0, header, sizeof(header));
    if (result < 0) return result;
    if (received != sizeof(header)) return (int)0xc8a04554u;
    unsigned int table_bytes = 0;
    unsigned int required;
    if (copy_tables) {
        result = stream->link.operations->read(stream, &received, 0, second, sizeof(second));
        required = 0xffffffffu;
        if (result >= 0 && received == sizeof(second)) {
            table_bytes = second[2] + second[4] + second[6] + second[8];
            if ((int)table_bytes >= 0) required = entries * 32 + entry_bytes * 24 + table_bytes;
        }
    } else required = entries * 32 + entry_bytes * 24;
    if (required > workspace_bytes) return (int)0xd8604659u;
    unsigned char *backing = workspace;
    if (copy_tables) {
        unsigned int offset = sizeof(header);
        for (unsigned int index = 0; index < 4; ++index) {
            unsigned int bytes = header[2 + index * 2];
            result = stream->link.operations->read(stream, &received, offset, backing, bytes);
            if (result < 0) return result;
            EffectFileView072 *view = device->interior.views + index;
            view->memory = backing;
            view->bytes = bytes;
            view->reader = 0;
            view->position.owner = device;
            backing += bytes;
            offset += received;
        }
    } else {
        for (unsigned int index = 0; index < 4; ++index) {
            EffectFileView072 *view = device->interior.views + index;
            view->memory = 0;
            view->bytes = header[2 + index * 2];
            view->reader = device;
            view->position.offset = header[1 + index * 2];
        }
    }
    for (unsigned int index = 0; index < 2; ++index) {
        EffectFileCache072 *cache = device->interior.directory + index;
        cache->first = cache->second = 0;
        cache->capacity = index ? header[4] : header[2] >> 2;
        cache->view = device->interior.views + index;
        cache = device->interior.files + index;
        cache->first = cache->second = 0;
        cache->capacity = index ? header[8] : header[6] >> 2;
        cache->view = device->interior.views + 2 + index;
    }
    effect_file_pool_initialize072(device->embedded, 32, backing, entries * 32, 4, 0);
    effect_file_mutex_initialize072(&device->embedded[0].mutex);
    effect_file_pool_initialize072(device->embedded + 1, 24, backing + entries * 32, entry_bytes * 24, 4, 0);
    effect_file_mutex_initialize072(&device->embedded[1].mutex);
    device->interior.data_offset = header[9];
    int priority;
    result = effect_file_priority072(state, &priority);
    if (result < 0) state->services->fatal(state->services->context);
    device->unknown_04 = (unsigned int)priority;
    unsigned int bucket = priority < -8 ? 0 : priority < 0 ? 1 : priority == 0 ? 2 : priority <= 8 ? 3 : 4;
    device->children[bucket] = stream;
    device->owner = stream;
    return 0;
}

int effect_file_device_factory072(EffectFileConstruction072 *state, EffectFileDevice068 **output,
    unsigned int entries, unsigned int entry_bytes, void *workspace, unsigned int workspace_bytes,
    unsigned int copy_tables, const unsigned int selector[3])
{
    EffectFileDevice068 *device = effect_file_device_allocate072(state);
    if (!device) return (int)0xd8604659u;
    unsigned char *bytes = (unsigned char *)device;
    for (__SIZE_TYPE__ index = 0; index < sizeof(*device); ++index) bytes[index] = 0;
    device = effect_file_device_construct072(state, device);
    if (!device) return (int)0xd8604659u;
    unsigned char empty = 0;
    unsigned int handle = 0;
    int result = effect_file_open_direct072(state, &handle, 3, 1, &empty, 1, 2, selector, 12, 1, 0);
    EffectFileStream069 *stream = 0;
    if (result >= 0) {
        result = device->link.operations->attach(device, &stream, handle);
        if (result >= 0) {
            result = effect_file_device_initialize072(state, device, stream, entries, entry_bytes,
                workspace, workspace_bytes, copy_tables);
            if (result < 0) stream->link.operations->release(state->destruction, stream);
        }
    }
    if (result >= 0) {
        *output = device;
        return 0;
    }
    device->link.operations->release(device);
    return result;
}
