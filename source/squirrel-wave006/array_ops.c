#include "execute_views.h"

_Bool sq_execute_vararg_get(SqExecuteVM *vm, SqObject *destination, const SqObject *key)
{
    if (!vm->base.current->varargs_size) {
        sq_execute_error(&vm->base, "the function doesn't have var args");
        return 0;
    }
    if (!(key->type & 0x04000000u)) {
        sq_execute_error(&vm->base, "indexing 'vargv' with %s", fn_00191f20(key));
        return 0;
    }
    SqI32 index;
    if (key->type == 0x05000004u) {
        float number = key->value.floating;
        if (!(number == number)) index = 0;
        else if (number >= 2147483648.0f) index = 2147483647;
        else if (number < -2147483648.0f) index = -2147483647 - 1;
        else index = (SqI32)number;
    } else index = key->value.integer;
    if (index < 0 || index >= vm->base.current->varargs_size) {
        sq_execute_error(&vm->base, "vargv index out of range");
        return 0;
    }
    SqVector vector = sq_execute_varargs(vm);
    fn_0019e864(destination, vector.values + vm->base.current->varargs_base + index);
    return 1;
}

void sq_execute_array_new(SqExecuteVM *vm, SqObject *destination, SqU32 capacity)
{
    SqArray *array = fn_00665a44(vm->base.shared, 0);
    SqObject object = {0x08000040u, {.reference = (SqRef *)array}};
    if (!array) sq_assert_array(0, &object);
    array->reference.references++;
    fn_0019e864(destination, &object);
    sq_execute_release(object.type, object.value);
    if (!capacity) capacity = 4;
    array->vector.values = sq_reallocate(array->vector.values, array->vector.capacity * sizeof(SqObject), capacity * sizeof(SqObject));
    array->vector.capacity = capacity;
}

void sq_execute_array_append(SqArray *array, const SqObject *input)
{
    SqObject value = *input;
    if (value.type & 0x08000000u) value.value.reference->references++;
    if (array->vector.size >= array->vector.capacity) {
        SqU32 capacity = array->vector.size ? array->vector.size * 2 : 4;
        array->vector.values = sq_reallocate(array->vector.values, array->vector.capacity * sizeof(SqObject), capacity * sizeof(SqObject));
        array->vector.capacity = capacity;
    }
    SqObject *destination = array->vector.values + array->vector.size++;
    *destination = value;
    if (value.type & 0x08000000u) value.value.reference->references++;
    sq_execute_release(value.type, value.value);
}
