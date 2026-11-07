#include "call_views.h"

void fn_0019d408(SqCallVector *vector, SqU32 requested, const SqCallInfo *fill)
{
    if (vector->capacity < requested) {
        SqU32 capacity = requested ? requested : 4;
        vector->values = sq_reallocate(vector->values, vector->capacity * sizeof(SqCallInfo),
                                      capacity * sizeof(SqCallInfo));
        vector->capacity = capacity;
    }
    while (vector->size < requested) {
        SqCallInfo *frame = vector->values + vector->size;
        *frame = *fill;
        if (frame->closure.type & 0x08000000u) {
            frame->closure.value.reference->references++;
        }
        vector->size++;
    }
    for (SqU32 index = requested; index < vector->size; index++) {
        SqObject *object = &vector->values[index].closure;
        if ((object->type & 0x08000000u) && --object->value.reference->references == 0) {
            object->value.reference->vtable->release(object->value.reference);
        }
    }
    vector->size = requested;
}

void fn_00198230(SqCallVM *vm, const SqObject *error)
{
    fn_0019e864(&vm->last_error, error);
}
