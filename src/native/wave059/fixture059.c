#include "inflate059.h"
#include "fixture058.h"

static Word058 allocation_count;
static Word058 allocation_arguments[64];

typedef struct HeaderRegion059 {
    Header059 header;
    Byte058 extra[64];
    Byte058 name[64];
    Byte058 comment[64];
} HeaderRegion059;

void fixture_attach_header059(Stream058 *stream, HeaderRegion059 *region, Word058 maximum)
{
    Word058 index;
    region->header.text = 0;
    region->header.time = 0;
    region->header.extra_flags = 0;
    region->header.operating_system = 0;
    region->header.extra = region->extra;
    region->header.extra_length = 0;
    region->header.extra_maximum = maximum;
    region->header.name = region->name;
    region->header.name_maximum = maximum;
    region->header.comment = region->comment;
    region->header.comment_maximum = maximum;
    region->header.header_crc = 0;
    region->header.done = 0;
    for (index = 0; index < 64; ++index) {
        region->extra[index] = 0xa7;
        region->name[index] = 0xa7;
        region->comment[index] = 0xa7;
    }
    stream->state->header = &region->header;
}

void fixture_reset059(void)
{
    Word058 index;
    allocation_count = 0;
    for (index = 0; index < 64; ++index)
        allocation_arguments[index] = 0;
}

void *fixture_allocate059(void *context, Word058 count, Word058 bytes)
{
    if (allocation_count < 32) {
        allocation_arguments[allocation_count * 2] = count;
        allocation_arguments[allocation_count * 2 + 1] = bytes;
        ++allocation_count;
    }
    return fixture_allocate058(context, count, bytes);
}

const Word058 *fixture_allocation_arguments059(void)
{
    return allocation_arguments;
}

Word058 fixture_allocation_count059(void)
{
    return allocation_count;
}

#define O(type, field) ((Word058)__builtin_offsetof(type, field))

const Word058 fixture_layout059[] = {
    sizeof(Header059), O(Header059, text), O(Header059, time), O(Header059, extra_flags),
    O(Header059, operating_system), O(Header059, extra), O(Header059, extra_length),
    O(Header059, extra_maximum), O(Header059, name), O(Header059, name_maximum),
    O(Header059, comment), O(Header059, comment_maximum), O(Header059, header_crc), O(Header059, done),
    O(State058, untouched_0010), O(State058, untouched_0018), O(State058, untouched_length),
    O(State058, untouched_distance), O(State058, untouched_extra), O(State058, untouched_counts),
    O(State058, untouched_work), O(State058, untouched_tail)
};
