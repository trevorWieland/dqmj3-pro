#include "array_views.h"

void fn_0019d320(SqVector *vector, SqU32 requested, const SqObject *fill)
{
    if (vector->capacity < requested) {
        SqU32 capacity = requested ? requested : 4;
        vector->values = sq_reallocate(vector->values,
                                      vector->capacity * sizeof(SqObject),
                                      capacity * sizeof(SqObject));
        vector->capacity = capacity;
    }
    if (vector->size < requested) {
        while (vector->size < requested) {
            SqObject *slot = vector->values + vector->size;
            if (slot) {
                slot->type = fill->type;
                slot->value = fill->value;
                if (slot->type & 0x08000000u) {
                    slot->value.reference->references++;
                }
            }
            vector->size++;
        }
    } else {
        SqU32 index = requested;
        while (index < vector->size) {
            SqObject *slot = vector->values + index;
            if ((slot->type & 0x08000000u) && --slot->value.reference->references == 0) {
                slot->value.reference->vtable->release(slot->value.reference);
            }
            index++;
        }
        vector->size = requested;
    }
}
