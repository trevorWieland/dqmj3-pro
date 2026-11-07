#include "pattern_file_owner_stream.h"

static unsigned int byte_size(PatternRuleStream *base)
{
    PatternOwnerStream *stream = (PatternOwnerStream *)base;
    unsigned long long bytes = 0;
    int result = stream->file->operations->size(stream->file, &bytes);
    if (result < 0) {
        stream->cached_size = 0;
        pattern_owner_services()->failure(pattern_owner_services()->context, (unsigned int)result);
    } else {
        stream->cached_size = bytes;
    }
    return (unsigned int)bytes;
}

static unsigned int read_bytes(PatternRuleStream *base, void *output, unsigned int bytes)
{
    PatternOwnerStream *stream = (PatternOwnerStream *)base;
    unsigned int total = 0;
    unsigned char *cursor = output;
    while (bytes != 0) {
        unsigned int copied = 0;
        int result = stream->file->operations->read(stream->file, &copied, stream->position, cursor, bytes);
        if (result < 0) {
            pattern_owner_services()->failure(pattern_owner_services()->context, (unsigned int)result);
            return total;
        }
        total += copied;
        stream->position += copied;
        if (copied == bytes || copied == 0)
            break;
        cursor += copied;
        bytes -= copied;
    }
    return total;
}

const PatternRuleStreamOperations pattern_owner_stream_operations = {
    {(void *)0,(void *)0,(void *)0,(void *)0,(void *)0,(void *)0,(void *)0,(void *)0,(void *)0},
    byte_size, (void *)0, read_bytes
};

void pattern_owner_stream_init(PatternOwnerStream *stream, PatternOwnerFile *file)
{
    stream->stream.operations = &pattern_owner_stream_operations;
    stream->file = file;
    stream->position = 0;
    stream->cached_size = 0;
}

void pattern_owner_stream_release(PatternOwnerStream *stream)
{
    if (stream->file != (void *)0) {
        stream->file->operations->destroy(stream->file);
        stream->file = (void *)0;
    }
}
