#ifndef DQMJ3_WAVE027_OWNER_ARCHIVE_H
#define DQMJ3_WAVE027_OWNER_ARCHIVE_H

#include "../wave013/pattern_file_owner_stream.h"

_Static_assert(sizeof(unsigned int) == 4, "Archive fields require32-bit words");
_Static_assert(sizeof(unsigned short) == 2, "Archive names require16-bit units");

struct OwnerArchiveBackend;

typedef struct OwnerArchiveOperations {
    int (*open)(void *context, unsigned long long title, unsigned int *handle);
    int (*read)(void *context, unsigned int handle, unsigned long long offset,
        void *output, unsigned int bytes, unsigned int *copied);
    int (*priority)(void *context, unsigned int *priority);
    void (*close)(void *context, unsigned int handle);
} OwnerArchiveOperations;

typedef struct OwnerArchiveEvent {
    unsigned int kind;
    unsigned int identifier;
    unsigned long long offset;
    unsigned int requested;
    unsigned int copied;
    int result;
} OwnerArchiveEvent;

typedef struct OwnerArchiveFile {
    PatternOwnerFile file;
    struct OwnerArchiveBackend *backend;
    unsigned long long offset;
    unsigned long long bytes;
    unsigned int identifier;
    unsigned int live;
} OwnerArchiveFile;

typedef struct OwnerArchiveBackend {
    const OwnerArchiveOperations *archive_operations;
    void *archive_context;
    void (*delete_owner)(void *context, PatternFileOwner *owner);
    void (*failure)(void *context, unsigned int reason);
    void *owner_context;
    unsigned int handle;
    unsigned int mounted;
    unsigned int header[10];
    OwnerArchiveFile file;
    PatternOwnerStream stream;
    unsigned int event_count;
    OwnerArchiveEvent events[128];
} OwnerArchiveBackend;

int owner_archive_read_exact(OwnerArchiveBackend *backend, unsigned long long offset, void *output, unsigned int bytes);
unsigned int owner_archive_u32(const unsigned char *bytes);
unsigned long long owner_archive_u64(const unsigned char *bytes);
void owner_archive_event(OwnerArchiveBackend *backend, unsigned int kind, unsigned int identifier,
    unsigned long long offset, unsigned int requested, unsigned int copied, int result);
int owner_archive_find(OwnerArchiveBackend *backend, const unsigned short *name,
    unsigned int units, unsigned long long *offset, unsigned long long *bytes);

int owner_archive_work(void *context);
int owner_archive_mount(void *context, unsigned long long title, unsigned char *work, unsigned int bytes);
int owner_archive_unmount(void *context, const char *name);
int owner_archive_open(void *context, const unsigned short *path, PatternOwnerOpenedFile *opened);
void owner_archive_release(void *context, PatternOwnerOpenedFile *opened);
void owner_archive_delete(void *context, PatternFileOwner *owner);
void owner_archive_failure(void *context, unsigned int reason);

#endif
