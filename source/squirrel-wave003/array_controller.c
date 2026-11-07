#include "vm_controller.h"

static SqI32 requested_array_size(const SqObject *value)
{
    return value->type == 0x05000004u ? (SqI32)value->value.floating : value->value.integer;
}

SqI32 fn_001b33dc(SqControllerVM *vm)
{
    SqObject *length = fn_00173d40(&vm->frame, vm->frame.base + 1);
    SqArray *array;
    if (fn_00157ff4(&vm->frame) <= 2) {
        array = fn_00665a44(vm->shared, (SqU32)requested_array_size(length));
    } else {
        array = fn_00665a44(vm->shared, 0);
        SqObject *fill = fn_00173d40(&vm->frame, vm->frame.base + 2);
        fn_0019d320(&array->vector, (SqU32)requested_array_size(length), fill);
        if (array->vector.size <= (array->vector.capacity >> 2) && array->vector.size > 4) {
            array->vector.values = sq_reallocate(array->vector.values,
                                                array->vector.capacity * sizeof(SqObject),
                                                array->vector.size * sizeof(SqObject));
            array->vector.capacity = array->vector.size;
        }
    }
    SqObject result;
    result.type = 0x08000040u;
    result.value.reference = (SqRef *)array;
    if (!array) {
        sq_assert_array(0, &result);
    }
    array->reference.references++;
    fn_00173d1c(&vm->frame, &result);
    if ((result.type & 0x08000000u) && --result.value.reference->references == 0) {
        result.value.reference->vtable->release(result.value.reference);
    }
    return 1;
}
