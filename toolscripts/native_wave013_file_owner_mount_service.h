#ifndef DQMJ3_WAVE013_OWNER_MOUNT_SERVICE_H
#define DQMJ3_WAVE013_OWNER_MOUNT_SERVICE_H

typedef struct PatternOwnerArchiveProvider {
    const unsigned char *image;
    unsigned int image_bytes;
    int open_result;
    int read_result;
    unsigned int maximum_chunk;
    unsigned int priority;
    unsigned int open_calls;
    unsigned int read_calls;
    unsigned int priority_calls;
    unsigned int close_calls;
    unsigned int live;
    unsigned long long offsets[64];
    unsigned int requests[64];
    unsigned int copied[64];
} PatternOwnerArchiveProvider;

int pattern_owner_archive_open(PatternOwnerArchiveProvider *provider, unsigned long long title,
    unsigned int media, unsigned int content, unsigned int flags, unsigned int attributes, unsigned int *handle);
int pattern_owner_archive_read(PatternOwnerArchiveProvider *provider, unsigned int *copied,
    unsigned long long offset, void *output, unsigned int bytes);
int pattern_owner_archive_priority(PatternOwnerArchiveProvider *provider, unsigned int *priority);
void pattern_owner_archive_close(PatternOwnerArchiveProvider *provider);

#endif
