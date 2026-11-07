#include "resource062.h"
#include "asset061.h"

void *fn_0017821c(void *, const void *, unsigned int);
void *fn_00158f6c(void *, unsigned int);
void *fn_00301f50(void *, unsigned int);

static Word062 seed_word062(const ResourceBlock062 *block)
{
    Word062 result;
    fn_0017821c(&result, block->bytes, 4);
    return result;
}

static void resource_agree_seed062(Resource062 *resource,
    ResourceEnvironment062 *environment, ResourceManager062 *manager,
    signed char linked)
{
    Word062 first = resource->channel->methods->first(resource->channel);
    Word062 second = resource->channel->methods->second(resource->channel);
    Word062 seed;
    if (linked == 0 && resource_manager_matches062(manager, 2, second)) {
        seed = seed_word062(resource_manager_record062(manager, second));
        resource_manager_post_word062(manager, &seed, 2);
    }
    if (!resource_channel_ready062(environment, resource->channel, 2))
        return;
    seed = seed_word062(resource_manager_record062(manager, first));
    if (seed != seed_word062(resource_manager_record062(manager, second)) || seed == 0)
        return;
    resource_seed062(seed);
    resource->seed = seed;
    resource->phase = 2;
    resource->index = 0;
}

static void resource_compress_packet062(Resource062 *resource,
    ResourceEnvironment062 *environment)
{
    fn_00301f50(resource->prepared, 7656);
    resource_populate_prepared062(environment, resource->prepared);
    resource_snapshot062(resource->prepared + 2264);
    resource->scratch = resource_allocate062(267972);
    fn_00158f6c(resource->scratch, 267972);
    resource->outgoing.compressed_bytes = resource_compress062(
        resource->outgoing.bytes, 7656, resource->prepared, 7656, resource->scratch);
    if (resource->outgoing.compressed_bytes < 0)
        fn_0017821c(resource->outgoing.bytes, resource->prepared, 7656);
    resource_release062(resource->scratch);
    resource->scratch = (void *)0;
    resource->phase = 6;
}

static void resource_exchange_packet062(Resource062 *resource,
    ResourceEnvironment062 *environment, ResourceManager062 *manager)
{
    ResourceBlock062 block = {0};
    Word062 request = (Word062)resource->cursor + 1036;
    Word062 sent = resource_packet_slice062(&block, &resource->outgoing,
        &resource->cursor);
    Word062 received;
    resource_manager_post_block062(manager, &block, request, 8);
    if (!resource_channel_ready062(environment, resource->channel, request))
        return;
    received = resource_packet_receive062(resource_manager_record062(manager,
        resource->channel->methods->second(resource->channel)),
        &resource->incoming, &resource->cursor);
    if (!(sent & received))
        return;
    if (resource->incoming.compressed_bytes > 0) {
        AssetWorkspace061 *workspace = resource_allocate062(sizeof(*workspace));
        resource->scratch = workspace;
        fn_00158f6c(workspace, sizeof(*workspace));
        asset_decode061(resource->unpacked, 7656, resource->incoming.bytes,
            (Word062)resource->incoming.compressed_bytes, workspace);
        resource_release062(resource->scratch);
        resource->scratch = (void *)0;
    } else {
        fn_0017821c(resource->unpacked, resource->incoming.bytes, 7656);
    }
    resource->phase = 7;
}

void resource_step062(Resource062 *resource, ResourceEnvironment062 *environment)
{
    signed char linked = resource_linked_mode062(environment);
    ResourceManager062 *manager = resource->channel->manager;
    switch (resource->phase) {
    case 1:
        resource_agree_seed062(resource, environment, manager, linked);
        break;
    case 2:
        if (resource->alternate != 0)
            resource_saved_headers062(resource, environment, 0);
        else
            resource_request_headers062(resource, environment, manager, 0);
        break;
    case 3:
        if (resource->alternate != 0)
            resource_saved_headers062(resource, environment, 1);
        else
            resource_request_headers062(resource, environment, manager, 1);
        break;
    case 5:
        resource_compress_packet062(resource, environment);
        resource_exchange_packet062(resource, environment, manager);
        break;
    case 6:
        resource_exchange_packet062(resource, environment, manager);
        break;
    default:
        break;
    }
}
