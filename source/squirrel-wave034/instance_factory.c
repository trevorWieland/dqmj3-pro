#include "class.h"
#include "../squirrel-wave030/class_internal.h"

_Bool sq_vm_create_instance034(void *vm,SqClass030 *klass,SqPrefixObject012 *result,SqPrefixObject012 *constructor)
{
    SqClassInstance030 *instance=sq_class_create_instance030(klass);
    if(!instance)sq_class_failure030();
    SqPrefixObject012 temporary={0x0a008000u,{.reference=instance}};
    sq_prefix_retain(temporary.type,temporary.value);
    sq_prefix_assign(result,&temporary);
    sq_prefix_release(temporary.type,temporary.value);
    SqPrefixObject012 name=sq_class_constructor_name030(sq_native_creation_shared016(vm));
    if(!sq_table_get019(klass->common.members,&name,constructor)) {
        const SqPrefixObject012 null={0x01000001u,{.reference=0}};
        sq_prefix_assign(constructor,&null);
        return 1;
    }
    SqPrototypeU32 descriptor=constructor->value.bits;
    SqPrototypeU32 index=descriptor&0x00ffffffu;
    if(descriptor&0x02000000u) {
        SqPrefixObject012 value=klass->common.members32.values[index].primary;
        if(value.type==0x08010000u)value=((const SqWeakReference014*)value.value.reference)->object;
        sq_prefix_assign(constructor,&value);
    } else sq_prefix_assign(constructor,&klass->common.members44.values[index].primary);
    return 1;
}
