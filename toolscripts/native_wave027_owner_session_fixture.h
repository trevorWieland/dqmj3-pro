#ifndef DQMJ3_WAVE027_OWNER_SESSION_FIXTURE_H
#define DQMJ3_WAVE027_OWNER_SESSION_FIXTURE_H

#include "native_wave013_file_owner_game_fixture.h"
#include "native_wave013_file_owner_mount_service.h"
#include "../src/native/wave027/owner_archive.h"

typedef struct OwnerSessionArchiveFixture {
    PatternOwnerArchiveProvider provider;
    unsigned int handle_live;
    unsigned int kernel_closes;
    unsigned int primitive_count;
    OwnerArchiveEvent primitives[128];
} OwnerSessionArchiveFixture;

typedef struct OwnerSessionFixture {
    PatternGameEnvironment game;
    OwnerSessionArchiveFixture archive;
    OwnerArchiveBackend backend;
} OwnerSessionFixture;

int owner_session_kernel_open(void *context, unsigned long long title, unsigned int *handle);
int owner_session_kernel_read(void *context, unsigned int handle, unsigned long long offset,
    void *output, unsigned int bytes, unsigned int *copied);
int owner_session_kernel_priority(void *context, unsigned int *priority);
int owner_session_kernel_file_close(void *context, unsigned int handle);
int owner_session_kernel_handle_close(void *context, unsigned int handle);

extern const OwnerArchiveOperations owner_session_archive_operations;
extern const unsigned int owner_session_layout_values[];

#endif
