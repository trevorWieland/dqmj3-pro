#ifndef DQMJ3_WAVE013_OWNER_PROVIDER_FIXTURE_H
#define DQMJ3_WAVE013_OWNER_PROVIDER_FIXTURE_H

#include "../src/native/wave013/pattern_file_owner_stream.h"

#define PATTERN_OWNER_FIXTURE_FILES 17
#define PATTERN_OWNER_FIXTURE_READS 64

typedef struct PatternOwnerPath {
    unsigned int type;
    const unsigned short *text;
    unsigned int bytes;
} PatternOwnerPath;

struct PatternOwnerProviderFixture;

typedef struct PatternOwnerFixtureFile {
    PatternOwnerFile file;
    struct PatternOwnerProviderFixture *environment;
    const unsigned char *data;
    unsigned int bytes;
    unsigned int identifier;
    unsigned int chunk_bytes;
    unsigned int open_calls;
    unsigned int close_calls;
    unsigned int read_calls;
    unsigned int size_calls;
    unsigned int live;
    unsigned long long offsets[PATTERN_OWNER_FIXTURE_READS];
    unsigned int requests[PATTERN_OWNER_FIXTURE_READS];
    unsigned int copied[PATTERN_OWNER_FIXTURE_READS];
} PatternOwnerFixtureFile;

struct PatternOwnerFixtureProvider;

typedef struct PatternOwnerFixtureProviderOperations {
    int (*open)(struct PatternOwnerFixtureProvider *provider, PatternOwnerFile **file,
        const PatternOwnerPath *path, unsigned int mode);
    void (*opaque_04[11])(void);
    void (*destroy)(struct PatternOwnerFixtureProvider *provider);
} PatternOwnerFixtureProviderOperations;

typedef struct PatternOwnerFixtureProvider {
    const PatternOwnerFixtureProviderOperations *operations;
    struct PatternOwnerProviderFixture *environment;
} PatternOwnerFixtureProvider;

typedef struct PatternOwnerProviderFixture {
    PatternOwnerFixtureProvider provider;
    PatternOwnerFixtureFile files[PATTERN_OWNER_FIXTURE_FILES];
    unsigned int open_calls;
    unsigned int provider_close_calls;
    unsigned int registered;
    unsigned int close_calls;
    unsigned int open_ids[8];
    unsigned int open_modes[8];
    unsigned int close_ids[8];
    int open_error_index;
    int open_error;
    unsigned int delete_calls;
    unsigned int owner_retired;
    PatternFileOwner owner_snapshot;
    const unsigned int *watched_flags;
    unsigned int watched_count;
    unsigned int open_flags[8][16];
} PatternOwnerProviderFixture;

int pattern_owner_provider_open(PatternOwnerFixtureProvider *provider, PatternOwnerFile **file,
    const PatternOwnerPath *path, unsigned int mode);
int pattern_owner_provider_read(PatternOwnerFile *file, unsigned int *read_bytes,
    unsigned long long offset, void *output, unsigned int bytes);
int pattern_owner_provider_size(PatternOwnerFile *file, unsigned long long *bytes);
void pattern_owner_provider_file_close(PatternOwnerFile *file);
void pattern_owner_provider_close(PatternOwnerFixtureProvider *provider);

struct PatternOwnerFixtureHeapController;

typedef struct PatternOwnerFixtureHeapOperations {
    void (*opaque_00)(void);
    void (*free_owner)(struct PatternOwnerFixtureHeapController *controller, PatternFileOwner *owner);
} PatternOwnerFixtureHeapOperations;

typedef struct PatternOwnerFixtureHeapController {
    const PatternOwnerFixtureHeapOperations *operations;
    PatternOwnerProviderFixture *environment;
} PatternOwnerFixtureHeapController;

void pattern_owner_provider_delete_owner(PatternOwnerProviderFixture *environment, PatternFileOwner *owner);
void pattern_owner_provider_heap_free(PatternOwnerFixtureHeapController *controller, PatternFileOwner *owner);

#endif
