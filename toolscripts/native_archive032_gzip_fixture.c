#include "native_archive032_gzip_fixture.h"

void *archive_gzip_fixture_allocate(void *context, unsigned int bytes, unsigned int alignment)
{
    ArchiveGzipHeap *heap = context;
    unsigned int index = heap->allocations++;
    if (index >= 32)
        return (void *)0;
    ArchiveGzipAllocation *entry = &heap->entries[index];
    entry->bytes = bytes;
    entry->alignment = alignment;
    if (heap->fail_at == index + 1 || alignment == 0 || (alignment & (alignment - 1)) != 0)
        return (void *)0;
    if (heap->used > 0xffffffffu - 16 - alignment)
        return (void *)0;
    unsigned int at = (heap->used + 16 + alignment - 1) & ~(alignment - 1);
    if (at > heap->capacity || bytes > heap->capacity - at)
        return (void *)0;
    entry->memory = heap->memory + at;
    entry->live = 1;
    heap->used = at + bytes;
    if (index + 1 == heap->reentry_at && heap->view != (void *)0) {
        if (heap->reentry_mode == 1)
            heap->view->buffer = heap->intervening;
        else if (heap->reentry_mode == 2)
            heap->view->buffer = entry->memory;
    }
    return entry->memory;
}

void archive_gzip_fixture_release(void *context, void *memory)
{
    ArchiveGzipHeap *heap = context;
    if (memory == (void *)0)
        return;
    unsigned int at = heap->releases++;
    if (at < 32)
        heap->released[at] = memory;
    for (unsigned int index = 0; index < heap->allocations && index < 32; ++index) {
        if (heap->entries[index].memory == memory && heap->entries[index].live != 0) {
            heap->entries[index].live = 0;
            return;
        }
    }
    if (heap->external_output == memory && heap->external_live != 0) {
        heap->external_live = 0;
        return;
    }
    ++heap->invalid_releases;
}

static void *sdk_allocate(ArchiveGzipSdkHeap *heap, unsigned int bytes, unsigned int alignment)
{
    return archive_gzip_fixture_allocate(heap->context, bytes, alignment);
}

static void sdk_release(ArchiveGzipSdkHeap *heap, void *memory)
{
    archive_gzip_fixture_release(heap->context, memory);
}

const ArchiveGzipSdkOperations archive_gzip_sdk_operations = {sdk_allocate, sdk_release};

const unsigned int archive_gzip_layout_values[] = {
    sizeof(void *), sizeof(ArchiveGzipView), sizeof(ArchiveGzipBuffer),
    __builtin_offsetof(ArchiveGzipBuffer, input), __builtin_offsetof(ArchiveGzipBuffer, input_bytes),
    __builtin_offsetof(ArchiveGzipBuffer, output), __builtin_offsetof(ArchiveGzipBuffer, output_bytes),
    __builtin_offsetof(ArchiveGzipBuffer, owns_output), sizeof(ArchiveGzipHeap),
    __builtin_offsetof(ArchiveGzipHeap, memory), __builtin_offsetof(ArchiveGzipHeap, capacity),
    __builtin_offsetof(ArchiveGzipHeap, used), __builtin_offsetof(ArchiveGzipHeap, fail_at),
    __builtin_offsetof(ArchiveGzipHeap, allocations), __builtin_offsetof(ArchiveGzipHeap, releases),
    __builtin_offsetof(ArchiveGzipHeap, entries), __builtin_offsetof(ArchiveGzipHeap, released),
    __builtin_offsetof(ArchiveGzipHeap, external_output), __builtin_offsetof(ArchiveGzipHeap, external_live),
    __builtin_offsetof(ArchiveGzipHeap, invalid_releases), __builtin_offsetof(ArchiveGzipHeap, view),
    __builtin_offsetof(ArchiveGzipHeap, intervening), __builtin_offsetof(ArchiveGzipHeap, reentry_mode),
    sizeof(ArchiveGzipAllocation), __builtin_offsetof(ArchiveGzipAllocation, memory),
    __builtin_offsetof(ArchiveGzipAllocation, bytes), __builtin_offsetof(ArchiveGzipAllocation, alignment),
    __builtin_offsetof(ArchiveGzipAllocation, live), sizeof(z_stream), sizeof(uLong), sizeof(ArchiveServices),
    __builtin_offsetof(z_stream, next_in), __builtin_offsetof(z_stream, avail_in),
    __builtin_offsetof(z_stream, total_in), __builtin_offsetof(z_stream, next_out),
    __builtin_offsetof(z_stream, avail_out), __builtin_offsetof(z_stream, total_out),
    __builtin_offsetof(z_stream, msg), __builtin_offsetof(z_stream, state),
    __builtin_offsetof(z_stream, zalloc), __builtin_offsetof(z_stream, zfree),
    __builtin_offsetof(z_stream, opaque), __builtin_offsetof(z_stream, data_type),
    __builtin_offsetof(z_stream, adler), __builtin_offsetof(z_stream, reserved),
    __builtin_offsetof(ArchiveGzipHeap, reentry_at)
};
