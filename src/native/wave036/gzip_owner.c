#include "gzip.h"

const ArchiveGzipOperations archive_gzip_operations = {fn_005f601c};

static void release_buffer(ArchiveGzipBuffer *buffer)
{
    const ArchiveServices *services = archive_services();
    if (buffer->owns_output != 0)
        services->release(services->context, buffer->output);
    services->release(services->context, buffer);
}

ArchiveGzipView *fn_005f5f90(ArchiveGzipView *view)
{
    const ArchiveServices *services = archive_services();
    view->operations = &archive_gzip_operations;
    view->buffer = (void *)0;
    ArchiveGzipBuffer *fresh = services->allocate(services->context,
        sizeof(ArchiveGzipBuffer), _Alignof(ArchiveGzipBuffer));
    if (fresh != (void *)0) {
        fresh->input = (void *)0;
        fresh->input_bytes = 0;
        fresh->output = (void *)0;
        fresh->output_bytes = 0;
        fresh->owns_output = 0;
    }
    ArchiveGzipBuffer *prior = view->buffer;
    if (prior != fresh) {
        if (prior != (void *)0)
            release_buffer(prior);
        view->buffer = fresh;
    }
    return view;
}

ArchiveGzipView *fn_005f601c(ArchiveGzipView *view)
{
    view->operations = &archive_gzip_operations;
    if (view->buffer != (void *)0)
        release_buffer(view->buffer);
    return view;
}

void fn_005f5d60(ArchiveGzipView *view, const unsigned char *input, unsigned int bytes)
{
    view->buffer->input = input;
    view->buffer->input_bytes = bytes;
    view->buffer->output_bytes = archive_word(input + bytes - 4);
}

void fn_005f5d98(ArchiveGzipView *view)
{
    view->buffer->input = (void *)0;
    view->buffer->input_bytes = 0;
}

unsigned int archive_gzip_output_size(const ArchiveGzipView *view)
{
    return view->buffer->output_bytes;
}
