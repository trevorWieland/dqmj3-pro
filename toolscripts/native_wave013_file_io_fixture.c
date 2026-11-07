#include "native_wave013_file_io_fixture.h"

unsigned int pattern_fixture_size(PatternRuleStream *stream)
{
    PatternMemoryProvider *provider = (PatternMemoryProvider *)stream;
    ++provider->size_calls;
    return provider->advertised_size;
}

unsigned int pattern_fixture_read(PatternRuleStream *stream, void *destination, unsigned int bytes)
{
    PatternMemoryProvider *provider = (PatternMemoryProvider *)stream;
    unsigned int copied = bytes;
    if (copied > provider->available_bytes)
        copied = provider->available_bytes;
    if (copied > provider->copy_limit)
        copied = provider->copy_limit;
    if (copied > 16384)
        copied = 16384;
    unsigned char *output = destination;
    for (unsigned int index = 0; index < copied; ++index)
        output[index] = provider->data[index];
    ++provider->read_calls;
    provider->last_request = bytes;
    provider->copied_bytes = copied;
    provider->last_destination = destination;
    return provider->read_result;
}
