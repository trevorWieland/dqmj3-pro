#include "native_wave013_file_owner_backend_fixture.h"

int pattern_owner_backend_work(void *context)
{
    return ((PatternOwnerBackendFixture *)context)->required_work;
}

int pattern_owner_backend_mount(void *context, unsigned long long archive, unsigned char *work, unsigned int bytes)
{
    PatternOwnerBackendFixture *fixture = context;
    ++fixture->mount_calls;
    fixture->archive = archive;
    fixture->work = work;
    fixture->work_bytes = bytes;
    if (fixture->mount_result >= 0)
        fixture->provider.registered = 1;
    return fixture->mount_result;
}

int pattern_owner_backend_unmount(void *context, const char *name)
{
    PatternOwnerBackendFixture *fixture = context;
    (void)name;
    ++fixture->unmount_calls;
    if (fixture->provider.registered != 0)
        pattern_owner_provider_close(&fixture->provider.provider);
    return 0;
}

int pattern_owner_backend_open(void *context, const unsigned short *path, PatternOwnerOpenedFile *opened)
{
    PatternOwnerBackendFixture *fixture = context;
    if (fixture->provider.registered == 0)
        return (int)0xc8804465u;
    unsigned int position = 0;
    while (position < 63 && path[position] != 0 && path[position] != ':')
        ++position;
    if (path[position] != ':')
        return (int)0xe0e0ebf6u;
    const unsigned short *relative = path + position + 1;
    unsigned int length = 0;
    while (length < 63 && relative[length] != 0)
        ++length;
    PatternOwnerPath descriptor = {4, relative, (length + 1) * 2};
    PatternOwnerFile *file = (void *)0;
    int result = pattern_owner_provider_open(&fixture->provider.provider, &file, &descriptor, 1);
    if (result >= 0) {
        PatternOwnerFixtureFile *actual = (PatternOwnerFixtureFile *)file;
        PatternOwnerStream *stream = &fixture->streams[actual->identifier];
        pattern_owner_stream_init(stream, file);
        opened->stream = &stream->stream;
        opened->tagged = 0;
    }
    return result;
}

void pattern_owner_backend_release(void *context, PatternOwnerOpenedFile *file)
{
    (void)context;
    pattern_owner_stream_release((PatternOwnerStream *)file->stream);
    file->stream = (void *)0;
}

void pattern_owner_backend_delete(void *context, PatternFileOwner *owner)
{
    PatternOwnerBackendFixture *fixture = context;
    pattern_owner_provider_delete_owner(&fixture->provider, owner);
}

void pattern_owner_backend_failure(void *context, unsigned int reason)
{
    PatternOwnerBackendFixture *fixture = context;
    ++fixture->failure_calls;
    fixture->failure_reason = reason;
}

static void observe_configuration(PatternOwnerBackendFixture *fixture, unsigned int kind)
{
    unsigned int call = fixture->cfg_query_count++;
    if (call < 4) {
        fixture->cfg_query_kind[call] = kind;
        for (unsigned int index = 0; index < fixture->provider.watched_count && index < 16; ++index)
            fixture->cfg_query_flags[call][index] = fixture->provider.watched_flags[index];
    }
}

int pattern_owner_backend_region(void *context, unsigned char *region)
{
    PatternOwnerBackendFixture *fixture = context;
    observe_configuration(fixture, 1);
    unsigned int index = fixture->region_calls < 1 ? 0 : 1;
    ++fixture->region_calls;
    *region = fixture->regions[index];
    return 0;
}

int pattern_owner_backend_language(void *context, unsigned char *language)
{
    PatternOwnerBackendFixture *fixture = context;
    observe_configuration(fixture, 2);
    ++fixture->language_calls;
    *language = fixture->language;
    return 0;
}

void pattern_owner_backend_cfg_failure(void *context, int result)
{
    PatternOwnerBackendFixture *fixture = context;
    (void)result;
    ++fixture->cfg_failure_calls;
}
