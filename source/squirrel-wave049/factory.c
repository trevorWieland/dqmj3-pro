#include "startup.h"

SqVm040 *fn_00146994(SqPrototypeU32 stack_size)
{
    SqSharedState040 *shared=sq_startup_allocate045(sizeof(*shared),_Alignof(SqSharedState040));
    if (shared)
        fn_0014c4c8(shared);
    fn_0014a6a0(shared);
    SqVm040 *vm=sq_startup_allocate045(sizeof(*vm),_Alignof(SqVm040));
    if (vm)
        fn_0015467c(vm,shared);
    SqPrefixObject012 object={0x08001000u,{.reference=vm}};
    if (!vm)
        sq_startup_assert049();
    sq_prefix_retain(object.type,object.value);
    sq_prefix_assign(sq_shared_special040(shared),&object);
    sq_prefix_release(object.type,object.value);
    if (fn_001544a0(vm,0,stack_size))
        return vm;
    vm->reference.prefix.vtable->destroy(vm);
    sq_startup_release045(vm,sizeof(*vm));
    return 0;
}
