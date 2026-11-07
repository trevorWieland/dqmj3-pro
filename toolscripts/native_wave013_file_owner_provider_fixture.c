#include "native_wave013_file_owner_provider_fixture.h"

static int file_identifier(const PatternOwnerPath *path)
{
    if (path->type != 4 || path->bytes < 14 || path->text[0] != '/')
        return -1;
    unsigned int position = 1;
    unsigned int identifier = 0;
    while (position < 4 && path->text[position] >= '0' && path->text[position] <= '9') {
        identifier = identifier * 10 + path->text[position] - '0';
        ++position;
    }
    if (position == 1 || path->text[position] != '.' || path->text[position + 1] != 't' ||
        path->text[position + 2] != 'x' || path->text[position + 3] != 't' || path->text[position + 4] != 0 ||
        path->bytes != (position + 5) * 2 || identifier >= PATTERN_OWNER_FIXTURE_FILES)
        return -1;
    return (int)identifier;
}

int pattern_owner_provider_open(PatternOwnerFixtureProvider *provider, PatternOwnerFile **file,
    const PatternOwnerPath *path, unsigned int mode)
{
    PatternOwnerProviderFixture *environment = provider->environment;
    int identifier = file_identifier(path);
    unsigned int call = environment->open_calls++;
    if (call < 8) {
        environment->open_ids[call] = (unsigned int)identifier;
        environment->open_modes[call] = mode;
        for (unsigned int index = 0; index < environment->watched_count && index < 16; ++index)
            environment->open_flags[call][index] = environment->watched_flags[index];
    }
    if ((int)call == environment->open_error_index)
        return environment->open_error;
    if (identifier < 0 || mode != 1 || environment->registered == 0)
        return (int)0xe0e0ebf6u;
    PatternOwnerFixtureFile *opened = &environment->files[identifier];
    ++opened->open_calls;
    opened->live = 1;
    *file = &opened->file;
    return 0;
}

int pattern_owner_provider_read(PatternOwnerFile *base, unsigned int *read_bytes,
    unsigned long long offset, void *output, unsigned int bytes)
{
    PatternOwnerFixtureFile *file = (PatternOwnerFixtureFile *)base;
    unsigned int available = offset < file->bytes ? file->bytes - (unsigned int)offset : 0;
    unsigned int copied = bytes < available ? bytes : available;
    if (file->chunk_bytes != 0 && copied > file->chunk_bytes)
        copied = file->chunk_bytes;
    unsigned int call = file->read_calls++;
    if (call < PATTERN_OWNER_FIXTURE_READS) {
        file->offsets[call] = offset;
        file->requests[call] = bytes;
        file->copied[call] = copied;
    }
    unsigned char *destination = output;
    for (unsigned int index = 0; index < copied; ++index)
        destination[index] = file->data[(unsigned int)offset + index];
    *read_bytes = copied;
    return 0;
}

int pattern_owner_provider_size(PatternOwnerFile *base, unsigned long long *bytes)
{
    PatternOwnerFixtureFile *file = (PatternOwnerFixtureFile *)base;
    ++file->size_calls;
    *bytes = file->bytes;
    return 0;
}

void pattern_owner_provider_file_close(PatternOwnerFile *base)
{
    PatternOwnerFixtureFile *file = (PatternOwnerFixtureFile *)base;
    PatternOwnerProviderFixture *environment = file->environment;
    ++file->close_calls;
    file->live = 0;
    unsigned int call = environment->close_calls++;
    if (call < 8)
        environment->close_ids[call] = file->identifier;
}

void pattern_owner_provider_close(PatternOwnerFixtureProvider *provider)
{
    ++provider->environment->provider_close_calls;
    provider->environment->registered = 0;
}

void pattern_owner_provider_delete_owner(PatternOwnerProviderFixture *environment, PatternFileOwner *owner)
{
    PatternFileOwner *snapshot = &environment->owner_snapshot;
    snapshot->operations = owner->operations;
    snapshot->allocation.next = owner->allocation.next;
    snapshot->allocation.previous = owner->allocation.previous;
    snapshot->allocation.data = owner->allocation.data;
    snapshot->allocation.bytes = owner->allocation.bytes;
    snapshot->allocation.unknown_flag = owner->allocation.unknown_flag;
    snapshot->initialized = owner->initialized;
    snapshot->mounted = owner->mounted;
    snapshot->bypass_at_sign = owner->bypass_at_sign;
    snapshot->file_id = owner->file_id;
    snapshot->storage = owner->storage;
    snapshot->scratch = owner->scratch;
    snapshot->file_buffer = owner->file_buffer;
    snapshot->resource_work = owner->resource_work;
    snapshot->candidate_storage = owner->candidate_storage;
    snapshot->final_flag = owner->final_flag;
    ++environment->delete_calls;
    environment->owner_retired = 1;
}

void pattern_owner_provider_heap_free(PatternOwnerFixtureHeapController *controller, PatternFileOwner *owner)
{
    pattern_owner_provider_delete_owner(controller->environment, owner);
}
