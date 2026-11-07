#include "reference_prefix.h"

SqU32 sq_prefix_count(const void *object)
{
    SqU32 count;
    __builtin_memcpy(&count, (const unsigned char *)object + __builtin_offsetof(SqPrototypePrefix011, references), sizeof(count));
    return count;
}

static void publish_count(void *object, SqU32 count)
{
    __builtin_memcpy((unsigned char *)object + __builtin_offsetof(SqPrototypePrefix011, references), &count, sizeof(count));
}

void sq_prefix_retain(SqU32 type, SqPrefixValue012 value)
{
    if (type & 0x08000000u) publish_count(value.reference, sq_prefix_count(value.reference) + 1);
}

void sq_prefix_release(SqU32 type, SqPrefixValue012 value)
{
    if (type & 0x08000000u) {
        SqU32 count = sq_prefix_count(value.reference) - 1;
        publish_count(value.reference, count);
        if (!count) {
            sq_prefix_finalize012(type, value.reference);
        }
    }
}

SqPrefixObject012 *sq_prefix_assign(SqPrefixObject012 *destination, const SqPrefixObject012 *source)
{
    SqPrefixObject012 incoming = *source;
    SqPrefixObject012 previous = *destination;
    sq_prefix_retain(incoming.type, incoming.value);
    *destination = incoming;
    sq_prefix_release(previous.type, previous.value);
    return destination;
}

void sq_prefix_clear(SqPrefixObject012 *object)
{
    SqPrefixObject012 previous = *object;
    object->type = 0x01000001u;
    object->value.reference = 0;
    sq_prefix_release(previous.type, previous.value);
}

void sq_prefix_scalar(SqPrefixObject012 *object, SqU32 type, SqU32 bits)
{
    sq_prefix_release(object->type, object->value);
    object->type = type;
    object->value.bits = bits;
}
