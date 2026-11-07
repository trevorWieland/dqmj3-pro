#include "resource062.h"

void *fn_0017821c(void *, const void *, unsigned int);

static Word062 header_word062(const void *memory)
{
    Word062 result;
    fn_0017821c(&result, memory, 4);
    return result;
}

void resource_request_headers062(Resource062 *resource,
    ResourceEnvironment062 *environment, ResourceManager062 *manager, Word062 outbound)
{
    static const Word062 base[2][4] = {
        {519, 648, 777, 906}, {3, 132, 261, 390}
    };
    const ResourcePayloadRecord062 *found;
    ResourceMetadata062 metadata = {0};
    ResourceBlock062 block;
    ResourcePayloadRecord062 queued;
    Word062 current;
    Word062 request = base[outbound != 0][resource->index] + (Word062)resource->cursor;
    found = resource_header_lookup062(environment, resource->index, outbound);
    if (found != (void *)0)
        fn_0017821c(metadata.record, found->bytes, 240);
    metadata.ordinal = resource->index;
    current = resource_current_header062(environment);
    metadata.valid = current != 0 && header_word062(metadata.record) == current;
    resource_metadata_slice062(&block, &metadata, &resource->cursor);
    resource_manager_post_block062(manager, &block, request, 3);
    if (!resource_channel_ready062(environment, resource->channel, request))
        return;
    resource_metadata_receive062(resource_manager_record062(manager,
        resource->channel->methods->second(resource->channel)),
        &resource->metadata, &resource->cursor);
    if (resource->cursor < 2)
        return;
    ++resource->index;
    fn_0017821c(queued.bytes, resource->metadata.record, 240);
    resource_queue_header062(resource->sink, queued,
        resource->metadata.valid != 0, outbound, resource_environment_heap062(environment));
    if (resource->index == 4) {
        if (outbound != 0) {
            resource->phase = 7;
        } else {
            resource->phase = 3;
            resource->index = 0;
        }
    }
    resource->cursor = 0;
}

void resource_saved_headers062(Resource062 *resource, ResourceEnvironment062 *environment,
    Word062 outbound)
{
    ResourceSaved062 saved;
    ResourcePayloadRecord062 record;
    Word062 selected;
    fn_0017821c(&saved, resource->unpacked, sizeof(saved));
    if (outbound != 0) {
        record = saved.second[resource->index];
        resource_queue_header062(resource->sink, record, 0, 1,
            resource_environment_heap062(environment));
        ++resource->index;
        if (resource->index == 4) {
            resource->alternate = 0;
            resource->phase = 7;
        }
    } else {
        selected = resource->index == saved.selected;
        record = saved.first[resource->index];
        resource_queue_header062(resource->sink, record, selected, 0,
            resource_environment_heap062(environment));
        ++resource->index;
        if (resource->index == 4) {
            resource->phase = 3;
            resource->index = 0;
        }
    }
}
