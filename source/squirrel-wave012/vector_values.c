#include "reference_prefix.h"

void sq_prefix_vector_resize(SqPrefixVector012 *vector, SqU32 requested, const SqPrefixObject012 *fill)
{
    if (vector->capacity < requested) {
        SqU32 capacity = requested ? requested : 4;
        vector->values = sq_reallocate(vector->values, vector->capacity * sizeof(SqPrefixObject012), capacity * sizeof(SqPrefixObject012));
        vector->capacity = capacity;
    }
    while (vector->size < requested) {
        SqPrefixObject012 *slot = vector->values + vector->size;
        *slot = *fill;
        sq_prefix_retain(slot->type, slot->value);
        vector->size++;
    }
    if (vector->size > requested) {
        for (SqU32 index = requested; index < vector->size; index++) {
            SqPrefixObject012 *slot = vector->values + index;
            sq_prefix_release(slot->type, slot->value);
        }
        vector->size = requested;
    }
}

SqPrefixVector012 *sq_prefix_vector_destroy(SqPrefixVector012 *vector)
{
    if (vector->capacity) {
        for (SqU32 index = 0; index < vector->size; index++) {
            SqPrefixObject012 *slot = vector->values + index;
            sq_prefix_release(slot->type, slot->value);
        }
        sq_deallocate(vector->values, vector->capacity * sizeof(SqPrefixObject012));
    }
    return vector;
}
