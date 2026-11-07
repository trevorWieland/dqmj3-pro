#include "native_wave027_owner_session_fixture.h"

static void primitive(OwnerSessionArchiveFixture *archive, unsigned int kind, unsigned int handle,
    unsigned long long offset, unsigned int requested, unsigned int copied, int result)
{
    unsigned int index = archive->primitive_count++;
    if (index < 128) {
        OwnerArchiveEvent *event = &archive->primitives[index];
        event->kind = kind;
        event->identifier = handle;
        event->offset = offset;
        event->requested = requested;
        event->copied = copied;
        event->result = result;
    }
}

int owner_session_kernel_open(void *context, unsigned long long title, unsigned int *handle)
{
    OwnerSessionArchiveFixture *archive = context;
    int result = pattern_owner_archive_open(&archive->provider, title, 0, 1, 1, 0, handle);
    if (result >= 0)
        archive->handle_live = 1;
    primitive(archive, 10, result >= 0 ? *handle : 0, title, 0, 0, result);
    return result;
}

int owner_session_kernel_read(void *context, unsigned int handle, unsigned long long offset,
    void *output, unsigned int bytes, unsigned int *copied)
{
    OwnerSessionArchiveFixture *archive = context;
    int result = (int)0xd820ebf8u;
    if (handle == 0xa532 && archive->handle_live != 0)
        result = pattern_owner_archive_read(&archive->provider, copied, offset, output, bytes);
    primitive(archive, 11, handle, offset, bytes, result >= 0 ? *copied : 0, result);
    return result;
}

int owner_session_kernel_priority(void *context, unsigned int *priority)
{
    OwnerSessionArchiveFixture *archive = context;
    int result = pattern_owner_archive_priority(&archive->provider, priority);
    primitive(archive, 12, 0, result >= 0 ? *priority : 0, 0, 0, result);
    return result;
}

int owner_session_kernel_file_close(void *context, unsigned int handle)
{
    OwnerSessionArchiveFixture *archive = context;
    int result = (int)0xd820ebf8u;
    if (handle == 0xa532 && archive->handle_live != 0 && archive->provider.live != 0) {
        pattern_owner_archive_close(&archive->provider);
        result = 0;
    }
    primitive(archive, 13, handle, 0, 0, 0, result);
    return result;
}

int owner_session_kernel_handle_close(void *context, unsigned int handle)
{
    OwnerSessionArchiveFixture *archive = context;
    int result = (int)0xd820ebf8u;
    if (handle == 0xa532 && archive->handle_live != 0 && archive->provider.live == 0) {
        archive->handle_live = 0;
        ++archive->kernel_closes;
        result = 0;
    }
    primitive(archive, 14, handle, 0, 0, 0, result);
    return result;
}

static void close_archive(void *context, unsigned int handle)
{
    owner_session_kernel_file_close(context, handle);
    owner_session_kernel_handle_close(context, handle);
}

const OwnerArchiveOperations owner_session_archive_operations = {
    owner_session_kernel_open, owner_session_kernel_read, owner_session_kernel_priority, close_archive
};

const unsigned int owner_session_layout_values[] = {
    sizeof(OwnerSessionFixture), __builtin_offsetof(OwnerSessionFixture, archive),
    __builtin_offsetof(OwnerSessionFixture, backend), sizeof(OwnerArchiveBackend), sizeof(OwnerArchiveFile),
    sizeof(OwnerArchiveEvent),
    __builtin_offsetof(OwnerArchiveBackend, archive_operations), __builtin_offsetof(OwnerArchiveBackend, archive_context),
    __builtin_offsetof(OwnerArchiveBackend, delete_owner), __builtin_offsetof(OwnerArchiveBackend, failure),
    __builtin_offsetof(OwnerArchiveBackend, owner_context), __builtin_offsetof(OwnerArchiveBackend, handle),
    __builtin_offsetof(OwnerArchiveBackend, mounted), __builtin_offsetof(OwnerArchiveBackend, header),
    __builtin_offsetof(OwnerArchiveBackend, file), __builtin_offsetof(OwnerArchiveBackend, stream),
    __builtin_offsetof(OwnerArchiveBackend, event_count), __builtin_offsetof(OwnerArchiveBackend, events),
    __builtin_offsetof(OwnerArchiveFile, file), __builtin_offsetof(OwnerArchiveFile, backend),
    __builtin_offsetof(OwnerArchiveFile, offset), __builtin_offsetof(OwnerArchiveFile, bytes),
    __builtin_offsetof(OwnerArchiveFile, identifier), __builtin_offsetof(OwnerArchiveFile, live),
    __builtin_offsetof(OwnerArchiveEvent, kind), __builtin_offsetof(OwnerArchiveEvent, identifier),
    __builtin_offsetof(OwnerArchiveEvent, offset), __builtin_offsetof(OwnerArchiveEvent, requested),
    __builtin_offsetof(OwnerArchiveEvent, copied), __builtin_offsetof(OwnerArchiveEvent, result),
    sizeof(PatternOwnerArchiveProvider), __builtin_offsetof(PatternOwnerArchiveProvider, image),
    __builtin_offsetof(PatternOwnerArchiveProvider, image_bytes), __builtin_offsetof(PatternOwnerArchiveProvider, open_result),
    __builtin_offsetof(PatternOwnerArchiveProvider, read_result), __builtin_offsetof(PatternOwnerArchiveProvider, maximum_chunk),
    __builtin_offsetof(PatternOwnerArchiveProvider, priority), __builtin_offsetof(PatternOwnerArchiveProvider, open_calls),
    __builtin_offsetof(PatternOwnerArchiveProvider, read_calls), __builtin_offsetof(PatternOwnerArchiveProvider, priority_calls),
    __builtin_offsetof(PatternOwnerArchiveProvider, close_calls), __builtin_offsetof(PatternOwnerArchiveProvider, live),
    __builtin_offsetof(PatternOwnerArchiveProvider, offsets), __builtin_offsetof(PatternOwnerArchiveProvider, requests),
    __builtin_offsetof(PatternOwnerArchiveProvider, copied),
    sizeof(OwnerSessionArchiveFixture), __builtin_offsetof(OwnerSessionArchiveFixture, handle_live),
    __builtin_offsetof(OwnerSessionArchiveFixture, kernel_closes), __builtin_offsetof(OwnerSessionArchiveFixture, primitive_count),
    __builtin_offsetof(OwnerSessionArchiveFixture, primitives)
};
