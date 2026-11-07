#include "vm_call.h"

_Bool sq_vm_call022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 arguments,SqPrototypeI32 base,
    SqPrefixObject012 *result,SqPrototypeU32 raise_error)
{
    switch(callable->type) {
    case 0x08000100u:
        return sq_vm_execute022(vm,callable,sq_lookup_top020(vm)-arguments,arguments,base,result,raise_error,0);
    case 0x08000200u: {
        _Bool suspend;
        return sq_vm_call_native022(vm,callable->value.reference,arguments,base,result,&suspend);
    }
    case 0x08004000u: {
        SqPrefixObject012 constructor={0x01000001u,{.reference=0}};
        SqPrefixObject012 discarded={0x01000001u,{.reference=0}};
        sq_vm_create_instance022(vm,callable->value.reference,result,&constructor);
        _Bool returned=1;
        if(constructor.type!=0x01000001u) {
            sq_prefix_assign(sq_lookup_stack020(vm)+base,result);
            returned=sq_vm_call022(vm,&constructor,arguments,base,&discarded,raise_error);
        }
        sq_prefix_release(discarded.type,discarded.value);
        sq_prefix_release(constructor.type,constructor.value);
        return returned;
    }
    default:return 0;
    }
}
