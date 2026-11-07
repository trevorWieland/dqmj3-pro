#include "startup.h"

static SqPrefixObject012 *indexed(SqVm040 *vm,SqPrototypeI32 index)
{
    if (index<0)
        return sq_startup_relative049(vm,index);
    SqPrototypeI32 absolute=(SqPrototypeI32)((SqPrototypeU32)vm->base+(SqPrototypeU32)index-1);
    return sq_startup_absolute049(vm,absolute);
}

SqPrototypeI32 fn_00177160(SqVm040 *vm,SqPrototypeI32 index,const SqStringByte015 *name)
{
    SqPrefixObject012 *object=indexed(vm,index);
    if (object->type!=0x08000200u)
        return fn_001581d0(vm,(const SqStringByte015*)"the object is not a nativeclosure");
    SqNativeClosure013 *closure=object->value.reference;
    SqString015 *string=fn_0019ba68(sq_shared_prefix040(vm->shared),name,-1);
    if (!string)
        sq_startup_assert049();
    SqPrefixObject012 temporary={0x08000010u,{.reference=string}};
    sq_prefix_retain(temporary.type,temporary.value);
    sq_prefix_assign(&closure->name,&temporary);
    sq_prefix_release(temporary.type,temporary.value);
    return 0;
}

SqPrototypeI32 fn_00177270(SqVm040 *vm,SqPrototypeI32 parameters,const SqStringByte015 *mask)
{
    SqPrefixObject012 *object=sq_startup_relative049(vm,-1);
    if (object->type!=0x08000200u)
        return fn_001581d0(vm,(const SqStringByte015*)"native closure expected");
    SqNativeClosure013 *closure=object->value.reference;
    closure->parameter_check=parameters;
    if (mask) {
        SqPrefixPodVector012 parsed={0,0,0};
        if (!fn_0017875c(&parsed,mask)) {
            SqPrototypeI32 result=fn_001581d0(vm,(const SqStringByte015*)"invalid typemask");
            if (parsed.capacity)
                sq_startup_release045(parsed.values,parsed.capacity*sizeof(SqPrototypeU32));
            return result;
        }
        SqPrefixPodVector012 *checks=&closure->type_checks;
        if (checks->capacity<parsed.size) {
            SqPrototypeU32 capacity=parsed.size?parsed.size:4;
            checks->values=sq_startup_resize045(checks->values,checks->capacity*sizeof(SqPrototypeU32),
                capacity*sizeof(SqPrototypeU32),_Alignof(SqPrototypeU32));
            checks->capacity=capacity;
        }
        checks->size=parsed.size;
        SqPrototypeU32 *destination=checks->values;
        const SqPrototypeU32 *source=parsed.values;
        for (SqPrototypeU32 index=0;index<parsed.size;index++)
            destination[index]=source[index];
        if (parsed.capacity)
            sq_startup_release045(parsed.values,parsed.capacity*sizeof(SqPrototypeU32));
    } else {
        closure->type_checks.size=0;
    }
    if ((SqPrototypeU32)parameters==0xfffe7961u)
        closure->parameter_check=(SqPrototypeI32)closure->type_checks.size;
    return 0;
}
