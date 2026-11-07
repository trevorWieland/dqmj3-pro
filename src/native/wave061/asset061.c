#include "asset061.h"

Signed058 asset_status061(Signed058 status)
{
    if (status == 0 || status == 1)
        return 0;
    if (status == -5)
        return -2;
    if (status == -4 || status == -2)
        return -4;
    return -1;
}

void *asset_allocate061(void *context, Word058 count, Word058 size)
{
    AssetSpace061 *space = context;
    Word058 bytes = count * size;
    Byte058 *memory;
    if ((Word058)(space->end - space->cursor) < bytes)
        return (void *)0;
    memory = space->cursor;
    space->cursor += bytes;
    return memory;
}

void asset_dispose061(void *context, void *memory)
{
    (void)context;
    (void)memory;
}

Signed058 asset_decode061(Byte058 *output, Word058 capacity, const Byte058 *input,
    Word058 bytes, AssetWorkspace061 *workspace)
{
    static const Byte058 version[] = "1";
    Stream058 stream;
    AssetSpace061 space;
    Signed058 result;
    Word058 produced;
    if (workspace == (void *)0)
        return -4;
    space.cursor = (Byte058 *)&workspace->state;
    space.end = space.cursor + sizeof(workspace->state);
    stream.next_input = input;
    stream.available_input = bytes;
    stream.total_input = 0;
    stream.next_output = output;
    stream.available_output = capacity;
    stream.total_output = 0;
    stream.message = (void *)0;
    stream.state = (void *)0;
    stream.allocate = asset_allocate061;
    stream.dispose = asset_dispose061;
    stream.context = &space;
    stream.data_type = 0;
    stream.checksum = 0;
    stream.reserved = 0;
    result = fn_00733c00(&stream, 15, version, sizeof(stream));
    if (result != 0)
        return asset_status061(result);
    result = stream_inflate059(&stream, 4, workspace->fixed, &workspace->fast);
    if (result != 1) {
        fn_00733bb0(&stream);
        return asset_status061(result);
    }
    produced = stream.total_output;
    result = fn_00733bb0(&stream);
    return result == 0 ? (Signed058)produced : asset_status061(result);
}
