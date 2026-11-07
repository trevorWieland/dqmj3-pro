#include "record_storage.h"

static SqU32 record_word(const void *storage, SqU32 offset)
{
    SqU32 word;
    __builtin_memcpy(&word, (const unsigned char *)storage + offset, sizeof(word));
    return word;
}

static void record_publish(void *storage, SqU32 offset, SqU32 word)
{
    __builtin_memcpy((unsigned char *)storage + offset, &word, sizeof(word));
}

static unsigned char *record_values(const void *storage)
{
    unsigned char *values;
    __builtin_memcpy(&values, storage, sizeof(values));
    return values;
}

static SqPrefixObject012 record_object(const void *storage)
{
    SqPrefixObject012 object;
    __builtin_memcpy(&object, storage, sizeof(object));
    return object;
}

static void record_assign(void *destination, const void *source)
{
    SqPrefixObject012 incoming = record_object(source);
    SqPrefixObject012 previous = record_object(destination);
    sq_prefix_retain(incoming.type, incoming.value);
    __builtin_memcpy(destination, &incoming, sizeof(incoming));
    sq_prefix_release(previous.type, previous.value);
}

static void record_reserve(void *vector, SqU32 requested, SqU32 stride)
{
    SqU32 capacity = record_word(vector, __builtin_offsetof(SqVector, capacity));
    if (capacity < requested) {
        SqU32 next_capacity = requested ? requested : 4;
        void *values = sq_reallocate(record_values(vector), capacity * stride, next_capacity * stride);
        __builtin_memcpy(vector, &values, sizeof(values));
        record_publish(vector, __builtin_offsetof(SqVector, capacity), next_capacity);
    }
}

void sq_prefix_call_resize012(SqCallVector *vector, SqU32 requested, const SqCallInfo *fill)
{
    record_reserve(vector, requested, sizeof(SqCallInfo));
    while (record_word(vector, __builtin_offsetof(SqCallVector, size)) < requested) {
        SqU32 index = record_word(vector, __builtin_offsetof(SqCallVector, size));
        unsigned char *frame = record_values(vector) + index * sizeof(SqCallInfo);
        __builtin_memcpy(frame, fill, sizeof(SqCallInfo));
        SqPrefixObject012 closure = record_object(frame + __builtin_offsetof(SqCallInfo, closure));
        sq_prefix_retain(closure.type, closure.value);
        record_publish(vector, __builtin_offsetof(SqCallVector, size), index + 1);
    }
    for (SqU32 index = requested; index < record_word(vector, __builtin_offsetof(SqCallVector, size)); index++) {
        SqPrefixObject012 closure = record_object(record_values(vector) + index * sizeof(SqCallInfo) + __builtin_offsetof(SqCallInfo, closure));
        sq_prefix_release(closure.type, closure.value);
    }
    record_publish(vector, __builtin_offsetof(SqCallVector, size), requested);
}

void sq_prefix_member_resize012(SqClassMemberVector009 *vector, SqU32 requested, const SqClassMember009 *fill)
{
    record_reserve(vector, requested, sizeof(SqClassMember009));
    SqU32 size = record_word(vector, __builtin_offsetof(SqClassMemberVector009, size));
    if (size < requested) {
        while (record_word(vector, __builtin_offsetof(SqClassMemberVector009, size)) < requested) {
            SqU32 index = record_word(vector, __builtin_offsetof(SqClassMemberVector009, size));
            unsigned char *member = record_values(vector) + index * sizeof(SqClassMember009);
            SqPrefixObject012 null = {0x01000001u, {.reference = 0}};
            __builtin_memcpy(member + __builtin_offsetof(SqClassMember009, primary), &null, sizeof(null));
            __builtin_memcpy(member + __builtin_offsetof(SqClassMember009, secondary), &null, sizeof(null));
            record_assign(member + __builtin_offsetof(SqClassMember009, primary), (const unsigned char *)fill + __builtin_offsetof(SqClassMember009, primary));
            record_assign(member + __builtin_offsetof(SqClassMember009, secondary), (const unsigned char *)fill + __builtin_offsetof(SqClassMember009, secondary));
            record_publish(vector, __builtin_offsetof(SqClassMemberVector009, size), index + 1);
        }
    } else {
        for (SqU32 index = requested; index < record_word(vector, __builtin_offsetof(SqClassMemberVector009, size)); index++) {
            unsigned char *member = record_values(vector) + index * sizeof(SqClassMember009);
            SqPrefixObject012 secondary = record_object(member + __builtin_offsetof(SqClassMember009, secondary));
            sq_prefix_release(secondary.type, secondary.value);
            SqPrefixObject012 primary = record_object(member + __builtin_offsetof(SqClassMember009, primary));
            sq_prefix_release(primary.type, primary.value);
        }
        record_publish(vector, __builtin_offsetof(SqClassMemberVector009, size), requested);
    }
}

_Static_assert(sizeof(SqCallVector) == sizeof(SqVector), "call vector storage");
_Static_assert(sizeof(SqClassMemberVector009) == sizeof(SqVector), "member vector storage");
_Static_assert(sizeof(SqClassMember009) == 2 * sizeof(SqPrefixObject012), "member pair storage");
