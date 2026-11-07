#ifndef RESOURCE062_H
#define RESOURCE062_H

#include "packets062.h"
#include "records062.h"

typedef struct ResourceManager062 ResourceManager062;
typedef struct ResourceSink062 ResourceSink062;
typedef struct ResourceEnvironment062 ResourceEnvironment062;
typedef struct ResourceChannel062 ResourceChannel062;

typedef struct ResourceChannelMethods062 {
    Word062 (*first)(ResourceChannel062 *);
    Word062 (*second)(ResourceChannel062 *);
} ResourceChannelMethods062;

struct ResourceChannel062 {
    const ResourceChannelMethods062 *methods;
    void *binding;
    ResourceManager062 *manager;
};

typedef struct ResourcePayloadRecord062 {
    Byte062 bytes[240];
} ResourcePayloadRecord062;

typedef struct ResourceSaved062 {
    Byte062 unknown[336];
    ResourcePayloadRecord062 first[4];
    signed char selected;
    Byte062 padding[3];
    ResourcePayloadRecord062 second[4];
    Word062 tail;
} ResourceSaved062;

typedef struct Resource062 {
    Byte062 phase;
    Byte062 padding_0001[3];
    Signed062 index;
    Signed062 cursor;
    Word062 seed;
    Byte062 alternate;
    Byte062 padding_0011[7];
    Byte062 unpacked[7656];
    ResourceChannel062 *channel;
    ResourceSink062 *sink;
    ResourceMetadata062 metadata;
    Byte062 prepared[7656];
    ResourcePacket062 outgoing;
    ResourcePacket062 incoming;
    void *scratch;
} Resource062;

signed char resource_linked_mode062(ResourceEnvironment062 *);
Word062 resource_channel_ready062(ResourceEnvironment062 *, ResourceChannel062 *, Word062);
Word062 resource_manager_matches062(ResourceManager062 *, Word062, Word062);
const ResourceBlock062 *resource_manager_record062(ResourceManager062 *, Word062);
void resource_manager_post_word062(ResourceManager062 *, const Word062 *, Word062);
void resource_manager_post_block062(ResourceManager062 *, const ResourceBlock062 *,
    Word062, Word062);
const ResourcePayloadRecord062 *resource_header_lookup062(ResourceEnvironment062 *, Signed062, Word062);
Word062 resource_current_header062(ResourceEnvironment062 *);
const ResourceHeapServices062 *resource_environment_heap062(ResourceEnvironment062 *);
void resource_queue_header062(ResourceSink062 *, ResourcePayloadRecord062, Word062,
    Word062, const ResourceHeapServices062 *);
void resource_seed062(Word062);
void resource_populate_prepared062(ResourceEnvironment062 *, Byte062 *);
void resource_snapshot062(Byte062 *);
void *resource_allocate062(Word062);
void resource_release062(void *);
Signed062 resource_compress062(Byte062 *, Word062, const Byte062 *, Word062, void *);
void resource_request_headers062(Resource062 *, ResourceEnvironment062 *,
    ResourceManager062 *, Word062);
void resource_saved_headers062(Resource062 *, ResourceEnvironment062 *, Word062);
void resource_step062(Resource062 *, ResourceEnvironment062 *);

Byte062 *resource_snapshot_initialize062(Byte062 *);
Resource062 *resource_initialize062(Resource062 *, ResourceChannel062 *, ResourceSink062 *);
Resource062 *resource_destroy062(Resource062 *, const ResourceHeapServices062 *);

#endif
