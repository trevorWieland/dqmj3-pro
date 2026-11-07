#include "native_archive032_fixture.h"

void *archive_fixture_allocate(void *context, unsigned int bytes, unsigned int alignment)
{
    ArchiveFixture *fixture = context;
    ++fixture->allocations;
    fixture->requested_bytes = bytes;
    fixture->requested_alignment = alignment;
    if (fixture->fail || bytes > fixture->capacity || alignment != _Alignof(void *))
        return (void *)0;
    fixture->image_live = 1;
    return fixture->memory;
}

void archive_fixture_release(void *context, void *memory)
{
    ArchiveFixture *fixture = context;
    if (memory != (void *)0) {
        if (fixture->releases < 4)
            fixture->released[fixture->releases] = memory;
        ++fixture->releases;
        if (memory == fixture->memory)
            fixture->image_live = 0;
        if (memory == fixture->view)
            fixture->view_live = 0;
    }
}

void *archive_fixture_heap_allocate(ArchiveFixtureHeap *heap, unsigned int bytes, unsigned int alignment)
{
    return archive_fixture_allocate(heap->fixture, bytes, alignment);
}

void archive_fixture_heap_release(ArchiveFixtureHeap *heap, void *memory)
{
    archive_fixture_release(heap->fixture, memory);
}

const ArchiveFixtureHeapOperations archive_fixture_heap_operations = {
    archive_fixture_heap_allocate, archive_fixture_heap_release
};

const unsigned int archive032_layout_values[] = {
    sizeof(void *), sizeof(ArchiveView), sizeof(ArchiveImage), sizeof(ArchiveServices), sizeof(ArchiveFixture),
    __builtin_offsetof(ArchiveFixture, memory), __builtin_offsetof(ArchiveFixture, view),
    __builtin_offsetof(ArchiveFixture, capacity), __builtin_offsetof(ArchiveFixture, fail),
    __builtin_offsetof(ArchiveFixture, allocations), __builtin_offsetof(ArchiveFixture, requested_bytes),
    __builtin_offsetof(ArchiveFixture, requested_alignment), __builtin_offsetof(ArchiveFixture, releases),
    __builtin_offsetof(ArchiveFixture, released), __builtin_offsetof(ArchiveFixture, image_live),
    __builtin_offsetof(ArchiveFixture, view_live), sizeof(ArchiveFixtureHeap)
};
