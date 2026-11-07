#include "reference_prefix.h"

static SqPrefixObject012 read_object(const void *storage)
{
    SqPrefixObject012 object;
    __builtin_memcpy(&object, storage, sizeof(object));
    return object;
}

static SqU32 read_word(const void *storage, SqU32 offset)
{
    SqU32 value;
    __builtin_memcpy(&value, (const unsigned char *)storage + offset, sizeof(value));
    return value;
}

static void write_word(void *storage, SqU32 offset, SqU32 value)
{
    __builtin_memcpy((unsigned char *)storage + offset, &value, sizeof(value));
}

static unsigned char *read_values(const void *vector)
{
    unsigned char *values;
    __builtin_memcpy(&values, (const unsigned char *)vector + __builtin_offsetof(SqVector, values), sizeof(values));
    return values;
}

SqObject *sq_prefix_assign_legacy(SqObject *destination, const SqObject *source)
{
    SqPrefixObject012 incoming = read_object(source);
    SqPrefixObject012 previous = read_object(destination);
    sq_prefix_retain(incoming.type, incoming.value);
    __builtin_memcpy(destination, &incoming, sizeof(incoming));
    sq_prefix_release(previous.type, previous.value);
    return destination;
}

void sq_prefix_vector_resize_legacy(SqVector *vector, SqU32 requested, const SqObject *fill)
{
    SqU32 capacity = read_word(vector, __builtin_offsetof(SqVector, capacity));
    if (capacity < requested) {
        SqU32 next_capacity = requested ? requested : 4;
        void *values = sq_reallocate(read_values(vector), capacity * sizeof(SqObject), next_capacity * sizeof(SqObject));
        __builtin_memcpy((unsigned char *)vector + __builtin_offsetof(SqVector, values), &values, sizeof(values));
        write_word(vector, __builtin_offsetof(SqVector, capacity), next_capacity);
    }
    SqU32 size = read_word(vector, __builtin_offsetof(SqVector, size));
    if (size < requested) {
        while (read_word(vector, __builtin_offsetof(SqVector, size)) < requested) {
            SqU32 index = read_word(vector, __builtin_offsetof(SqVector, size));
            SqPrefixObject012 incoming = read_object(fill);
            __builtin_memcpy(read_values(vector) + index * sizeof(SqObject), &incoming, sizeof(incoming));
            sq_prefix_retain(incoming.type, incoming.value);
            write_word(vector, __builtin_offsetof(SqVector, size), index + 1);
        }
    } else {
        for (SqU32 index = requested; index < read_word(vector, __builtin_offsetof(SqVector, size)); index++) {
            SqPrefixObject012 previous = read_object(read_values(vector) + index * sizeof(SqObject));
            sq_prefix_release(previous.type, previous.value);
        }
        write_word(vector, __builtin_offsetof(SqVector, size), requested);
    }
}

SqVector *sq_prefix_vector_destroy_legacy(SqVector *vector)
{
    if (read_word(vector, __builtin_offsetof(SqVector, capacity))) {
        for (SqU32 index = 0; index < read_word(vector, __builtin_offsetof(SqVector, size)); index++) {
            SqPrefixObject012 previous = read_object(read_values(vector) + index * sizeof(SqObject));
            sq_prefix_release(previous.type, previous.value);
        }
        sq_deallocate(read_values(vector), read_word(vector, __builtin_offsetof(SqVector, capacity)) * sizeof(SqObject));
    }
    return vector;
}

_Static_assert(__builtin_offsetof(SqObject, type) == __builtin_offsetof(SqPrefixObject012, type), "tag representation offset");
_Static_assert(__builtin_offsetof(SqObject, value) == __builtin_offsetof(SqPrefixObject012, value), "payload representation offset");
_Static_assert(sizeof(((SqObject *)0)->value.reference) == sizeof(void *), "legacy reference storage width");
