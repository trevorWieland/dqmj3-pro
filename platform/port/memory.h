#ifndef DQMJ3_PLATFORM_MEMORY_H
#define DQMJ3_PLATFORM_MEMORY_H

/*
 * Memory.
 *
 * The game uses three kinds of memory and a port must keep them distinct:
 *
 *   process heap   ordinary read/write memory, created once at boot;
 *   linear heap    physical, page-contiguous memory handed to the GPU and
 *                  other DMA devices; the original image calls it "linear";
 *   user heap      the application-managed heap the reconstructed allocators
 *                  implement on top of a block of process memory.
 *
 * A platform backend owns the first two. The third is game code and is not a
 * platform service, although it obtains its backing block from this header.
 *
 * Allocation never returns partially initialised storage. A successful
 * allocate returns storage aligned to the requested power of two and at least
 * DQM3_MEMORY_MIN_ALIGNMENT; the original's minimum is 8. Release accepts only
 * a pointer this heap returned, and releasing NULL is a no-op. Double release,
 * release of foreign memory and use after release are caller errors with
 * undefined behaviour, as they are on the original.
 *
 * Threading: dqm3_memory_system_heap() and dqm3_memory_linear_heap() are
 * process-wide and safe from every thread. A heap created with
 * DQM3_HEAP_THREAD_SAFE serialises its own allocate/release. A heap without
 * that flag is owned by the thread that created it; concurrent use is a bug.
 * Allocation may block briefly while another thread releases.
 *
 * Timing: allocate and release are bounded by the heap implementation, not by
 * a device. They must not sleep, yield or wait for a frame. A backend that
 * pages memory in from a device violates the contract.
 */

#include "platform.h"

typedef struct Dqm3Heap Dqm3Heap;

enum Dqm3MemoryFlags {
    DQM3_HEAP_THREAD_SAFE = 1u << 0,
    DQM3_HEAP_ZEROED = 1u << 1,
    DQM3_MEMORY_GPU_READ = 1u << 2,
    DQM3_MEMORY_GPU_WRITE = 1u << 3,
    DQM3_MEMORY_UNCACHED = 1u << 4
};

typedef struct Dqm3HeapStats {
    Dqm3Size capacity;      /* bytes the heap was created over                 */
    Dqm3Size allocated;     /* bytes currently handed to callers               */
    Dqm3Size available;     /* largest single allocation currently possible    */
    Dqm3U32 allocations;    /* live allocation count                           */
    Dqm3U32 releases;       /* completed release count, monotonic              */
} Dqm3HeapStats;

#define DQM3_MEMORY_MIN_ALIGNMENT 8u

/* The process heap. Valid after dqm3_system_initialize and until finalize. */
Dqm3Heap *dqm3_memory_system_heap(void);

/*
 * The physical, page-aligned heap used for GPU and DMA buffers. Allocations
 * from it are contiguous in physical memory and their addresses can be given
 * to dqm3_graphics_map_linear. Valid after dqm3_graphics_initialize.
 */
Dqm3Heap *dqm3_memory_linear_heap(void);

/*
 * Create a heap over caller-owned storage. The storage must outlive the heap;
 * the backend does not copy or free it. flags is a bitmask of
 * Dqm3MemoryFlags. Creating a heap over storage that is already a heap is
 * DQM3_ERR_INVALID.
 */
Dqm3Result dqm3_memory_create_heap(Dqm3Heap **heap, void *storage, Dqm3Size bytes,
    Dqm3U32 flags);

/*
 * Destroy a heap created by dqm3_memory_create_heap. All allocations must
 * already have been released. The backing storage is not freed. The system
 * and linear heaps cannot be destroyed; asking returns DQM3_ERR_INVALID.
 */
Dqm3Result dqm3_memory_destroy_heap(Dqm3Heap *heap);

/*
 * Allocate bytes from heap. alignment must be zero (natural alignment, at
 * least DQM3_MEMORY_MIN_ALIGNMENT) or a power of two. Zero bytes returns
 * DQM3_ERR_INVALID. On success *out receives the storage and the result is
 * DQM3_OK; on failure *out is NULL and the result is DQM3_ERR_NOMEM (or
 * DQM3_ERR_INVALID for a bad heap/alignment). If the heap was created with
 * DQM3_HEAP_ZEROED the storage is zeroed before it is returned.
 */
Dqm3Result dqm3_memory_allocate(Dqm3Heap *heap, Dqm3Size bytes, Dqm3Size alignment,
    void **out);

/*
 * Release storage returned by dqm3_memory_allocate or dqm3_memory_resize.
 * Releasing NULL succeeds and does nothing. Releasing a pointer the heap did
 * not return is a caller error.
 */
Dqm3Result dqm3_memory_release(Dqm3Heap *heap, void *pointer);

/*
 * Change an allocation's size in place or by moving it. On success *out is the
 * new (possibly different) storage and the old pointer is invalid. On failure
 * the original allocation is unchanged. Shrinking never fails for lack of
 * memory. Growing may move the block.
 */
Dqm3Result dqm3_memory_resize(Dqm3Heap *heap, void *pointer, Dqm3Size bytes,
    Dqm3Size alignment, void **out);

/* Snapshot the heap's counters. Fills *stats and returns DQM3_OK. */
Dqm3Result dqm3_memory_query(Dqm3Heap *heap, Dqm3HeapStats *stats);

/*
 * Query the physical address of a linear allocation for a DMA device. The
 * pointer must come from the linear heap. The returned address is meaningful
 * only to the backend's graphics/audio layer; on a platform without physical
 * addressing it is the host virtual address.
 */
Dqm3Result dqm3_memory_physical_address(const void *pointer, Dqm3U64 *address);

/*
 * Flush the CPU data cache for a range that a device will read, or invalidate
 * it for a range the device wrote. The original needs both around GPU work;
 * a cache-coherent host may implement them as no-ops. The range is rounded
 * outwards to cache lines by the backend.
 */
Dqm3Result dqm3_memory_flush_cache(const void *address, Dqm3Size bytes);
Dqm3Result dqm3_memory_invalidate_cache(const void *address, Dqm3Size bytes);

#endif
