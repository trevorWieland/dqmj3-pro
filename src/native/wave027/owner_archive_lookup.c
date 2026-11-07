#include "owner_archive.h"

unsigned int owner_archive_u32(const unsigned char *bytes)
{
    return (unsigned int)bytes[0] | (unsigned int)bytes[1] << 8 |
        (unsigned int)bytes[2] << 16 | (unsigned int)bytes[3] << 24;
}

unsigned long long owner_archive_u64(const unsigned char *bytes)
{
    return owner_archive_u32(bytes) | (unsigned long long)owner_archive_u32(bytes + 4) << 32;
}

int owner_archive_read_exact(OwnerArchiveBackend *backend, unsigned long long offset, void *output, unsigned int bytes)
{
    unsigned int copied = 0;
    int result = backend->archive_operations->read(backend->archive_context, backend->handle, offset, output, bytes, &copied);
    return result < 0 ? result : copied == bytes ? 0 : (int)0xd9004676u;
}

int owner_archive_find(OwnerArchiveBackend *backend, const unsigned short *name,
    unsigned int units, unsigned long long *offset, unsigned long long *bytes)
{
    if (backend->header[2] != 4 || backend->header[6] != 4 || backend->header[4] < 24)
        return (int)0xe0e0ebf6u;
    unsigned char word[4], directory[24], metadata[32], encoded_name[128];
    int result = owner_archive_read_exact(backend, backend->header[1], word, 4);
    if (result < 0)
        return result;
    unsigned int directory_offset = owner_archive_u32(word);
    if (directory_offset > backend->header[4] - 24)
        return (int)0xe0e0ebf6u;
    result = owner_archive_read_exact(backend, (unsigned long long)backend->header[3] + directory_offset, directory, 24);
    if (result < 0)
        return result;
    if (owner_archive_u32(directory + 20) != 0)
        return (int)0xe0e0ebf6u;
    result = owner_archive_read_exact(backend, backend->header[5], word, 4);
    if (result < 0)
        return result;
    unsigned int current = owner_archive_u32(word);
    unsigned int visited = 0;
    while (current != 0xffffffffu) {
        if (++visited > backend->header[8] / 32 || backend->header[8] < 32 || current > backend->header[8] - 32)
            return (int)0xe0e0ebf6u;
        unsigned long long at = (unsigned long long)backend->header[7] + current;
        result = owner_archive_read_exact(backend, at, metadata, 32);
        if (result < 0)
            return result;
        unsigned int name_bytes = owner_archive_u32(metadata + 28);
        if (name_bytes > sizeof(encoded_name) || (name_bytes & 1) != 0 || name_bytes > backend->header[8] - current - 32)
            return (int)0xe0e0ebf6u;
        result = owner_archive_read_exact(backend, at + 32, encoded_name, name_bytes);
        if (result < 0)
            return result;
        unsigned int index = 0;
        if (owner_archive_u32(metadata) == directory_offset && name_bytes == units * 2) {
            for (; index < units; ++index) {
                unsigned int unit = encoded_name[index * 2] | (unsigned int)encoded_name[index * 2 + 1] << 8;
                if (name[index] != unit)
                    break;
            }
            if (index == units) {
                unsigned long long relative = owner_archive_u64(metadata + 8);
                if (relative > ~0ull - backend->header[9])
                    return (int)0xe0e0ebf6u;
                *offset = backend->header[9] + relative;
                *bytes = owner_archive_u64(metadata + 16);
                return 0;
            }
        }
        current = owner_archive_u32(metadata + 24);
    }
    return (int)0xc8804470u;
}
