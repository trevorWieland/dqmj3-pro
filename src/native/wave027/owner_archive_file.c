#include "owner_archive.h"

void owner_archive_event(OwnerArchiveBackend *backend, unsigned int kind, unsigned int identifier,
    unsigned long long offset, unsigned int requested, unsigned int copied, int result)
{
    unsigned int index = backend->event_count++;
    if (index < 128) {
        OwnerArchiveEvent *event = &backend->events[index];
        event->kind = kind;
        event->identifier = identifier;
        event->offset = offset;
        event->requested = requested;
        event->copied = copied;
        event->result = result;
    }
}

static int read_file(PatternOwnerFile *base, unsigned int *copied, unsigned long long offset,
    void *output, unsigned int bytes)
{
    OwnerArchiveFile *file = (OwnerArchiveFile *)base;
    unsigned long long available = offset < file->bytes ? file->bytes - offset : 0;
    unsigned int requested = available < bytes ? (unsigned int)available : bytes;
    int result = 0;
    *copied = 0;
    if (file->live == 0)
        result = (int)0xd820ebf8u;
    else if (requested != 0) {
        if (offset > ~0ull - file->offset)
            result = (int)0xe0e0ebf6u;
        else
            result = file->backend->archive_operations->read(file->backend->archive_context,
                file->backend->handle, file->offset + offset, output, requested, copied);
    }
    owner_archive_event(file->backend, 4, file->identifier, offset, bytes, *copied, result);
    return result;
}

static int file_size(PatternOwnerFile *base, unsigned long long *bytes)
{
    OwnerArchiveFile *file = (OwnerArchiveFile *)base;
    int result = file->live ? 0 : (int)0xd820ebf8u;
    if (result >= 0)
        *bytes = file->bytes;
    owner_archive_event(file->backend, 3, file->identifier, result >= 0 ? *bytes : 0, 0, 0, result);
    return result;
}

static void close_file(PatternOwnerFile *base)
{
    OwnerArchiveFile *file = (OwnerArchiveFile *)base;
    owner_archive_event(file->backend, 5, file->identifier, 0, 0, 0, 0);
    file->live = 0;
}

const PatternOwnerFileOperations owner_archive_file_operations = {
    read_file, {(void *)0, (void *)0}, file_size,
    {(void *)0, (void *)0, (void *)0, (void *)0, (void *)0, (void *)0, (void *)0, (void *)0}, close_file
};
