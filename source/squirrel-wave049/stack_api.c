#include "startup.h"

SqPrefixObject012 *sq_startup_absolute049(SqVm040 *vm,SqPrototypeI32 index)
{
    return vm->stack.values+index;
}

SqPrefixObject012 *sq_startup_relative049(SqVm040 *vm,SqPrototypeI32 index)
{
    return vm->stack.values+(SqPrototypeI32)((SqPrototypeU32)vm->top+(SqPrototypeU32)index);
}

void fn_00173cd0(SqVm040 *vm,SqPrototypeI32 count)
{
    for (SqPrototypeI32 index=0;index<count;index++) {
        vm->top--;
        sq_prefix_assign(vm->stack.values+vm->top,sq_startup_services040()->live_null_template);
    }
}

void fn_00173cb8(SqVm040 *vm,SqPrototypeI32 count)
{
    if (vm->top<count)
        sq_startup_assert049();
    fn_00173cd0(vm,count);
}

void fn_00173d14(SqVm040 *vm)
{
    sq_vm_push022(vm,&vm->root);
}

void fn_001580cc(SqVm040 *vm,SqPrototypeI32 value)
{
    SqPrefixObject012 temporary={0x05000002u,{.integer=value}};
    sq_vm_push022(vm,&temporary);
    sq_prefix_release(temporary.type,temporary.value);
}

void fn_00158128(SqVm040 *vm,const SqStringByte015 *string,SqPrototypeI32 length)
{
    if (string) {
        SqString015 *value=fn_0019ba68(sq_shared_prefix040(vm->shared),string,length);
        if (!value)
            sq_startup_assert049();
        SqPrefixObject012 temporary={0x08000010u,{.reference=value}};
        sq_prefix_retain(temporary.type,temporary.value);
        sq_vm_push022(vm,&temporary);
        sq_prefix_release(temporary.type,temporary.value);
    } else {
        sq_vm_push022(vm,sq_startup_services040()->live_null_template);
    }
}

SqPrototypeI32 fn_001581d0(SqVm040 *vm,const SqStringByte015 *message)
{
    SqString015 *string=fn_0019ba68(sq_shared_prefix040(vm->shared),message,-1);
    if (!string)
        sq_startup_assert049();
    SqPrefixObject012 temporary={0x08000010u,{.reference=string}};
    sq_prefix_retain(temporary.type,temporary.value);
    sq_prefix_assign(&vm->error,&temporary);
    sq_prefix_release(temporary.type,temporary.value);
    return -1;
}
