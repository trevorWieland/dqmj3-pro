#include "array_views.h"

SqArray *fn_00665a44(SqState *state, SqU32 requested)
{
    SqArray *array = sq_allocate(sizeof(SqArray));
    if (array) {
        SqObject fill;
        array->reference.vtable = &sq_array_vtable;
        array->reference.references = 0;
        array->reference.weak = 0;
        array->vector.values = 0;
        array->vector.size = 0;
        array->vector.capacity = 0;
        fill.type = 0x01000001u;
        fill.value.bits = 0;
        fn_0019d320(&array->vector, requested, &fill);
        if ((fill.type & 0x08000000u) && --fill.value.reference->references == 0) {
            fill.value.reference->vtable->release(fill.value.reference);
        }
        array->shared = state;
        array->reference.next = 0;
        array->reference.previous = 0;
        fn_0019e8c4(&state->chain, &array->reference);
    }
    return array;
}
