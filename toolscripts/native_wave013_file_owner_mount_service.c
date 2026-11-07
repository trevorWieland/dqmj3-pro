#include "native_wave013_file_owner_mount_service.h"

int pattern_owner_archive_open(PatternOwnerArchiveProvider *provider, unsigned long long title,
    unsigned int media, unsigned int content, unsigned int flags, unsigned int attributes, unsigned int *handle)
{
    ++provider->open_calls;
    if (title != 0x000400db00010302ull || media != 0 || content != 1 || flags != 1 || attributes != 0)
        return (int)0xe0e0ebf6u;
    if (provider->open_result < 0)
        return provider->open_result;
    provider->live = 1;
    *handle = 0xa532;
    return 0;
}

int pattern_owner_archive_read(PatternOwnerArchiveProvider *provider, unsigned int *read_bytes,
    unsigned long long offset, void *output, unsigned int bytes)
{
    unsigned int call = provider->read_calls++;
    if (provider->live == 0)
        return (int)0xd820ebf8u;
    if (provider->read_result < 0)
        return provider->read_result;
    unsigned int available = offset < provider->image_bytes ? provider->image_bytes - (unsigned int)offset : 0;
    unsigned int copied = bytes < available ? bytes : available;
    if (provider->maximum_chunk != 0 && copied > provider->maximum_chunk)
        copied = provider->maximum_chunk;
    if (call < 64) {
        provider->offsets[call] = offset;
        provider->requests[call] = bytes;
        provider->copied[call] = copied;
    }
    unsigned char *destination = output;
    for (unsigned int index = 0; index < copied; ++index)
        destination[index] = provider->image[(unsigned int)offset + index];
    *read_bytes = copied;
    return 0;
}

int pattern_owner_archive_priority(PatternOwnerArchiveProvider *provider, unsigned int *priority)
{
    ++provider->priority_calls;
    *priority = provider->priority;
    return 0;
}

void pattern_owner_archive_close(PatternOwnerArchiveProvider *provider)
{
    ++provider->close_calls;
    provider->live = 0;
}

const unsigned int pattern_owner_archive_layout_values[] = {
    sizeof(PatternOwnerArchiveProvider), __builtin_offsetof(PatternOwnerArchiveProvider, image),
    __builtin_offsetof(PatternOwnerArchiveProvider, image_bytes), __builtin_offsetof(PatternOwnerArchiveProvider, open_calls),
    __builtin_offsetof(PatternOwnerArchiveProvider, live), __builtin_offsetof(PatternOwnerArchiveProvider, offsets),
    __builtin_offsetof(PatternOwnerArchiveProvider, requests), __builtin_offsetof(PatternOwnerArchiveProvider, copied)
};
