#include "startup.h"

SqPrototypeI32 fn_00166f0c(SqVm040 *vm,SqPrototypeI32 index,SqPrototypeU32 static_slot)
{
    SqPrototypeI32 count=(SqPrototypeI32)((SqPrototypeU32)vm->top-(SqPrototypeU32)vm->base);
    if (count<3) {
        sq_startup_formatted_error049(vm,"not enough params in the stack");
        return -1;
    }
    SqPrefixObject012 *self;
    if (index<0)
        self=sq_startup_relative049(vm,index);
    else
        self=sq_startup_absolute049(vm,(SqPrototypeI32)((SqPrototypeU32)vm->base+(SqPrototypeU32)index-1));
    if (self->type==0x0a000020u || self->type==0x08004000u) {
        SqPrefixObject012 *key=sq_startup_relative049(vm,-2);
        if (key->type==0x01000001u)
            return fn_001581d0(vm,(const SqStringByte015*)"null is not a valid key");
        SqPrefixObject012 *value=sq_startup_relative049(vm,-1);
        sq_vm_new_slot034(vm,self,key,value,static_slot!=0);
        fn_00173cd0(vm,2);
    }
    return 0;
}
