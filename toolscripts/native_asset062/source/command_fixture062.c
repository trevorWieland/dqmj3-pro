#include "record_provider062.h"

void fixture_queue_header062(ResourceSink062 *sink,
    const ResourcePayloadRecord062 *payload, Word062 valid, Word062 outbound,
    const ResourceHeapServices062 *heap)
{
    resource_queue_header062(sink, *payload, valid, outbound, heap);
}

#define O(type, member) ((Word062)__builtin_offsetof(type, member))

const Word062 fixture_command_layout062[] = {
    sizeof(ResourcePayloadRecord062), sizeof(ResourceManagerSlot062),
    sizeof(ResourceManager062), O(ResourceManager062,pending) + O(ResourceManagerSlot062,request),
    O(ResourceManager062,pending) + O(ResourceManagerSlot062,kind), O(ResourceManager062,pending) + O(ResourceManagerSlot062,block),
    O(ResourceManager062,slots), sizeof(ResourceSink062),
    O(ResourceSink062,first), O(ResourceSink062,second),
    O(ResourceManager062,methods), O(ResourceManager062,binding),
    O(ResourceManagerMethods062,request), O(ResourceBinding062,enabled),
    sizeof(ResourceSaved062), O(ResourceSaved062,first),
    O(ResourceSaved062,selected), O(ResourceSaved062,second),
    sizeof(Resource062), O(Resource062,channel), O(Resource062,sink),
    O(Resource062,metadata), O(Resource062,prepared), O(Resource062,outgoing),
    O(Resource062,incoming), O(Resource062,scratch)
};

const ResourceManagerMethods062 fixture_manager_methods062 = {
    {0, 0, 0, 0, 0, 0}, resource_manager_query062
};
