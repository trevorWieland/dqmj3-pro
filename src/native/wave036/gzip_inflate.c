#include "gzip.h"

static voidpf gzip_allocate(voidpf context, uInt count, uInt bytes)
{
    const ArchiveServices *services = context;
    if (count != 0 && bytes > 0xffffffffu / count)
        return Z_NULL;
    return services->allocate(services->context, count * bytes, _Alignof(void *));
}

static void gzip_release(voidpf context, voidpf memory)
{
    const ArchiveServices *services = context;
    services->release(services->context, memory);
}

int fn_005f5eac(ArchiveGzipView *view, unsigned char *output)
{
    ArchiveGzipBuffer *buffer = view->buffer;
    const ArchiveServices *services = archive_services();
    z_stream stream;
    stream.next_in = (Bytef *)buffer->input;
    stream.avail_in = buffer->input_bytes;
    stream.zalloc = gzip_allocate;
    stream.zfree = gzip_release;
    stream.opaque = (voidpf)services;
    int initialized = inflateInit2_(&stream, 31, ZLIB_VERSION, sizeof(stream));
    if (initialized != Z_OK)
        return 0;
    if (output == (void *)0) {
        buffer->output = services->allocate(services->context, buffer->output_bytes, _Alignof(void *));
        buffer->owns_output = 1;
    } else {
        buffer->output = output;
    }
    stream.next_out = buffer->output;
    stream.avail_out = buffer->output_bytes;
    inflate(&stream, Z_FINISH);
    int result = inflate(&stream, Z_FINISH);
    if (result == Z_STREAM_END) {
        inflateEnd(&stream);
        return 1;
    }
    if (buffer->owns_output != 0)
        services->release(services->context, buffer->output);
    buffer->output = (void *)0;
    inflateEnd(&stream);
    return 0;
}
