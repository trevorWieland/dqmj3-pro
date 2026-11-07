#include "vm_call.h"

static SqPrototypeI32 length(const SqPrefixObject012 *value)
{ return value->type==0x05000004u?(SqPrototypeI32)value->value.floating:value->value.integer; }

SqPrototypeI32 sq_vm_array_native022(void *vm)
{
    SqPrototypeI32 base=sq_lookup_base020(vm);
    SqPrefixObject012 *argument=sq_lookup_stack020(vm)+base+1;
    SqOpaqueArray012 *array;
    if(sq_lookup_top020(vm)-base<=2) {
        array=sq_opaque_array_create012(sq_native_creation_shared016(vm),(SqPrototypeU32)length(argument));
    } else {
        array=sq_opaque_array_create012(sq_native_creation_shared016(vm),0);
        SqPrefixObject012 *fill=sq_lookup_stack020(vm)+base+2;
        sq_prefix_vector_resize(&array->vector,(SqPrototypeU32)length(argument),fill);
        if(array->vector.size<=array->vector.capacity>>2 && array->vector.size>4) {
            array->vector.values=sq_vm_call_reallocate022(array->vector.values,array->vector.capacity*sizeof(SqPrefixObject012),array->vector.size*sizeof(SqPrefixObject012));
            array->vector.capacity=array->vector.size;
        }
    }
    if(!array)sq_vm_array_failure022();
    SqPrefixObject012 result={0x08000040u,{.reference=array}};
    sq_prefix_retain(result.type,result.value);
    sq_vm_push022(vm,&result);
    sq_prefix_release(result.type,result.value);
    return 1;
}
