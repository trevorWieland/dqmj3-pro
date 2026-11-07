#ifndef DQMJ3_ARCHIVE032_FIXTURE_H
#define DQMJ3_ARCHIVE032_FIXTURE_H
#include "../src/native/wave032/archive.h"

typedef struct ArchiveFixture {
    unsigned char *memory;
    ArchiveView *view;
    unsigned int capacity;
    unsigned int fail;
    unsigned int allocations;
    unsigned int requested_bytes;
    unsigned int requested_alignment;
    unsigned int releases;
    void *released[4];
    unsigned int image_live;
    unsigned int view_live;
} ArchiveFixture;
typedef struct ArchiveFixtureHeap ArchiveFixtureHeap;
typedef struct ArchiveFixtureHeapOperations {
    void *(*allocate)(ArchiveFixtureHeap *heap, unsigned int bytes, unsigned int alignment);
    void (*release)(ArchiveFixtureHeap *heap, void *memory);
} ArchiveFixtureHeapOperations;
struct ArchiveFixtureHeap {
    const ArchiveFixtureHeapOperations *operations;
    ArchiveFixture *fixture;
};
void *archive_fixture_allocate(void *context, unsigned int bytes, unsigned int alignment);
void archive_fixture_release(void *context, void *memory);
void *archive_fixture_heap_allocate(ArchiveFixtureHeap *heap, unsigned int bytes, unsigned int alignment);
void archive_fixture_heap_release(ArchiveFixtureHeap *heap, void *memory);
extern const ArchiveFixtureHeapOperations archive_fixture_heap_operations;
extern const unsigned int archive032_layout_values[];
#endif
