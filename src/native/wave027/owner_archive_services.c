#include "owner_archive.h"

extern const PatternOwnerFileOperations owner_archive_file_operations;

int owner_archive_work(void *context)
{
    (void)context;
    return 0;
}

int owner_archive_mount(void *context, unsigned long long title, unsigned char *work, unsigned int bytes)
{
    OwnerArchiveBackend *backend = context;
    int result = 0;
    (void)work;
    if (backend->mounted != 0 || title != 0x000400db00010302ull)
        result = (int)0xe0e0ebf6u;
    else {
        unsigned int handle = 0;
        result = backend->archive_operations->open(backend->archive_context, title, &handle);
        if (result >= 0) {
            backend->handle = handle;
            unsigned char header[40];
            result = owner_archive_read_exact(backend, 0, header, 40);
            if (result >= 0) {
                for (unsigned int index = 0; index < 10; ++index)
                    backend->header[index] = owner_archive_u32(header + index * 4);
                if (backend->header[0] != 40)
                    result = (int)0xe0e0ebf6u;
            }
            if (result >= 0) {
                unsigned int priority = 0;
                result = backend->archive_operations->priority(backend->archive_context, &priority);
            }
            if (result < 0) {
                backend->archive_operations->close(backend->archive_context, backend->handle);
                backend->handle = 0;
            } else {
                backend->mounted = 1;
            }
        }
    }
    owner_archive_event(backend, 1, 0, title, bytes, 0, result);
    return result;
}

int owner_archive_unmount(void *context, const char *name)
{
    OwnerArchiveBackend *backend = context;
    static const char expected[] = "ngword:";
    unsigned int index = 0;
    while (index < sizeof(expected) && name[index] == expected[index])
        ++index;
    if (index != sizeof(expected))
        return (int)0xe0e0ebf6u;
    if (backend->mounted != 0) {
        backend->archive_operations->close(backend->archive_context, backend->handle);
        backend->handle = 0;
        backend->mounted = 0;
    }
    owner_archive_event(backend, 6, 0, 0, 0, 0, 0);
    return 0;
}

int owner_archive_open(void *context, const unsigned short *path, PatternOwnerOpenedFile *opened)
{
    OwnerArchiveBackend *backend = context;
    static const unsigned short prefix[] = {'n', 'g', 'w', 'o', 'r', 'd', ':', '/'};
    unsigned int position = 0;
    while (position < sizeof(prefix) / sizeof(prefix[0]) && path[position] == prefix[position])
        ++position;
    if (position != sizeof(prefix) / sizeof(prefix[0]))
        return (int)0xe0e0ebf6u;
    const unsigned short *name = path + position;
    unsigned int units = 0;
    while (units < 55 && name[units] != 0)
        ++units;
    if (units == 55 && name[units] != 0)
        return (int)0xe0e0ebf6u;
    unsigned int identifier = 0;
    unsigned int digit = 0;
    while (digit < units && name[digit] >= '0' && name[digit] <= '9') {
        identifier = identifier * 10 + name[digit] - '0';
        ++digit;
    }
    if (digit == 0 || units - digit != 4 || name[digit] != '.' || name[digit + 1] != 't' ||
        name[digit + 2] != 'x' || name[digit + 3] != 't')
        identifier = 0xffffffffu;
    unsigned long long offset = 0, bytes = 0;
    int result = backend->mounted == 0 ? (int)0xc8804465u : backend->file.live ? (int)0xd820ebf8u :
        owner_archive_find(backend, name, units, &offset, &bytes);
    if (result >= 0) {
        backend->file.file.operations = &owner_archive_file_operations;
        backend->file.backend = backend;
        backend->file.offset = offset;
        backend->file.bytes = bytes;
        backend->file.identifier = identifier;
        backend->file.live = 1;
        pattern_owner_stream_init(&backend->stream, &backend->file.file);
        opened->stream = &backend->stream.stream;
        opened->tagged = 0;
    }
    owner_archive_event(backend, 2, identifier, offset, 0, 0, result);
    return result;
}

void owner_archive_release(void *context, PatternOwnerOpenedFile *opened)
{
    (void)context;
    pattern_owner_stream_release((PatternOwnerStream *)opened->stream);
    opened->stream = (void *)0;
}

void owner_archive_delete(void *context, PatternFileOwner *owner)
{
    OwnerArchiveBackend *backend = context;
    owner_archive_event(backend, 7, 0, 0, 0, 0, 0);
    backend->delete_owner(backend->owner_context, owner);
}

void owner_archive_failure(void *context, unsigned int reason)
{
    OwnerArchiveBackend *backend = context;
    backend->failure(backend->owner_context, reason);
    __builtin_trap();
}
