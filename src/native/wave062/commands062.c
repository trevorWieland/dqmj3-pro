#include "record_provider062.h"

void *fn_0017821c(void *, const void *, unsigned int);
void *fn_00301a9c(void *, const void *, unsigned int);

Word062 resource_manager_matches062(ResourceManager062 *manager,
    Word062 request, Word062 slot)
{
    if (manager->binding->enabled == 0)
        return 0;
    return manager->methods->request(manager, slot) == request;
}

const ResourceBlock062 *resource_manager_record062(ResourceManager062 *manager,
    Word062 slot)
{
    return &manager->slots[slot].block;
}

void resource_manager_post_word062(ResourceManager062 *manager,
    const Word062 *value, Word062 request)
{
    Word062 word = *value;
    manager->pending.request = request;
    manager->pending.kind = 2;
    fn_0017821c(manager->pending.block.bytes, &word, 4);
}

void resource_manager_post_block062(ResourceManager062 *manager,
    const ResourceBlock062 *block, Word062 request, Word062 kind)
{
    fn_00301a9c(manager->pending.block.bytes, block->bytes, 128);
    manager->pending.request = request;
    manager->pending.kind = kind;
}

void resource_queue_header062(ResourceSink062 *sink, ResourcePayloadRecord062 payload,
    Word062 valid, Word062 outbound, const ResourceHeapServices062 *heap)
{
    ResourceRecord062 record = {0};
    fn_0017821c(record.record, payload.bytes, 240);
    record.valid = (Byte062)valid;
    resource_record_append062(outbound != 0 ? &sink->second : &sink->first,
        &record, heap);
}

Word062 resource_manager_query062(ResourceManager062 *manager, Word062 slot)
{
    return manager->slots[slot].request;
}
