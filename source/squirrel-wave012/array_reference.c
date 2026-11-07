#include "array_reference.h"

SqOpaqueArray012 *sq_opaque_array_create012(SqPrefixState012 *state, SqPrototypeU32 requested)
{
    SqOpaqueArray012 *array = sq_opaque_array_allocate012(sizeof(*array));
    if (array) {
        array->reference.prefix.vtable = &sq_opaque_array_vtable012;
        array->reference.prefix.references = 0;
        array->reference.prefix.weak = 0;
        array->vector.values = 0;
        array->vector.size = 0;
        array->vector.capacity = 0;
        SqPrefixObject012 fill;
        fill.type = 0x01000001u;
        fill.value.reference = 0;
        sq_prefix_vector_resize(&array->vector, requested, &fill);
        sq_prefix_release(fill.type, fill.value);
        array->shared = state;
        array->reference.next = 0;
        array->reference.previous = 0;
        SqPrefixCollectable012 *previous = state->chain;
        if (previous) previous->previous = &array->reference;
        array->reference.next = previous;
        state->chain = &array->reference;
    }
    return array;
}

void sq_opaque_array_release012(SqOpaqueArray012 *array)
{
    array->reference.prefix.vtable->destroy(array);
    sq_deallocate(array, sizeof(*array));
}

SqOpaqueArray012 *sq_opaque_array_destroy012(SqOpaqueArray012 *array)
{
    array->reference.prefix.vtable = &sq_opaque_array_vtable012;
    if (!(array->reference.prefix.references & 0x80000000u))
        sq_prefix_chain_unlink012(&array->shared->chain, &array->reference);
    sq_prefix_vector_destroy(&array->vector);
    array->reference.prefix.vtable = &sq_prototype_base_vtable011;
    if (array->reference.prefix.weak) {
        SqPrototypeWeak011 *weak = array->reference.prefix.weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }
    return array;
}

void sq_prefix_chain_unlink012(SqPrefixCollectable012 **head, SqPrefixCollectable012 *object)
{
    if (object->previous) object->previous->next = object->next;
    else *head = object->next;
    if (object->next) object->next->previous = object->previous;
    object->next = 0;
    object->previous = 0;
}
