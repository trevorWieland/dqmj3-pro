#ifndef DQMJ3_ARCHIVE032_GZIP_FIXTURE_H
#define DQMJ3_ARCHIVE032_GZIP_FIXTURE_H
#include "../src/native/wave036/gzip.h"

typedef struct ArchiveGzipAllocation {
    void *memory;
    unsigned int bytes;
    unsigned int alignment;
    unsigned int live;
} ArchiveGzipAllocation;
typedef struct ArchiveGzipHeap {
    unsigned char *memory;
    unsigned int capacity;
    unsigned int used;
    unsigned int fail_at;
    unsigned int allocations;
    unsigned int releases;
    ArchiveGzipAllocation entries[32];
    void *released[32];
    unsigned char *external_output;
    unsigned int external_live;
    unsigned int invalid_releases;
    ArchiveGzipView *view;
    ArchiveGzipBuffer *intervening;
    unsigned int reentry_mode;
    unsigned int reentry_at;
} ArchiveGzipHeap;
typedef struct ArchiveGzipSdkHeap ArchiveGzipSdkHeap;
typedef struct ArchiveGzipSdkOperations {
    void *(*allocate)(ArchiveGzipSdkHeap *heap, unsigned int bytes, unsigned int alignment);
    void (*release)(ArchiveGzipSdkHeap *heap, void *memory);
} ArchiveGzipSdkOperations;
struct ArchiveGzipSdkHeap {
    const ArchiveGzipSdkOperations *operations;
    ArchiveGzipHeap *context;
};
void *archive_gzip_fixture_allocate(void *context, unsigned int bytes, unsigned int alignment);
void archive_gzip_fixture_release(void *context, void *memory);
extern const ArchiveGzipSdkOperations archive_gzip_sdk_operations;
extern const unsigned int archive_gzip_layout_values[];
#endif
