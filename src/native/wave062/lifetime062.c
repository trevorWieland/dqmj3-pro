#include "resource062.h"

void *memory_zero_aligned(void *, unsigned int);

static Byte062 *resource_snapshot_member_initialize062(Byte062 *memory)
{
    memory_zero_aligned(memory, 2696);
    return memory;
}

Byte062 *resource_snapshot_initialize062(Byte062 *memory)
{
    for (Word062 index = 0; index < 2; ++index)
        resource_snapshot_member_initialize062(memory + index * 2696);
    return memory;
}

Resource062 *resource_initialize062(Resource062 *resource,
    ResourceChannel062 *channel, ResourceSink062 *sink)
{
    resource->phase = 0;
    resource->index = 0;
    resource->alternate = 0;
    resource_snapshot_initialize062(resource->unpacked + 2264);
    resource->channel = channel;
    resource->sink = sink;
    resource_snapshot_initialize062(resource->prepared + 2264);
    resource->scratch = (void *)0;
    memory_zero_aligned(resource->prepared, 7656);
    return resource;
}

Resource062 *resource_destroy062(Resource062 *resource,
    const ResourceHeapServices062 *heap)
{
    void *memory = resource->scratch;
    if (memory != (void *)0) {
        heap->dispose(heap->context, memory);
        resource->scratch = (void *)0;
    }
    return resource;
}
