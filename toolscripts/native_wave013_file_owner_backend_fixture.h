#ifndef DQMJ3_WAVE013_OWNER_BACKEND_FIXTURE_H
#define DQMJ3_WAVE013_OWNER_BACKEND_FIXTURE_H

#include "native_wave013_file_owner_provider_fixture.h"

typedef struct PatternOwnerBackendFixture {
    PatternOwnerProviderFixture provider;
    PatternOwnerStream streams[PATTERN_OWNER_FIXTURE_FILES];
    int required_work;
    int mount_result;
    unsigned int mount_calls;
    unsigned int unmount_calls;
    unsigned int failure_calls;
    unsigned int failure_reason;
    unsigned long long archive;
    unsigned char *work;
    unsigned int work_bytes;
    unsigned char regions[2];
    unsigned char language;
    unsigned char cfg_reserved;
    unsigned int region_calls;
    unsigned int language_calls;
    unsigned int cfg_failure_calls;
    unsigned int cfg_query_count;
    unsigned int cfg_query_kind[4];
    unsigned int cfg_query_flags[4][16];
} PatternOwnerBackendFixture;

int pattern_owner_backend_work(void *context);
int pattern_owner_backend_mount(void *context, unsigned long long archive, unsigned char *work, unsigned int bytes);
int pattern_owner_backend_unmount(void *context, const char *name);
int pattern_owner_backend_open(void *context, const unsigned short *path, PatternOwnerOpenedFile *file);
void pattern_owner_backend_release(void *context, PatternOwnerOpenedFile *file);
void pattern_owner_backend_delete(void *context, PatternFileOwner *owner);
void pattern_owner_backend_failure(void *context, unsigned int reason);

int pattern_owner_backend_region(void *context, unsigned char *region);
int pattern_owner_backend_language(void *context, unsigned char *language);
void pattern_owner_backend_cfg_failure(void *context, int result);

#endif
