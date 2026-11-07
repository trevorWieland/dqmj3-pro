#include "class_internal.h"

void sq_class_instance_release030(SqClassInstance030 *instance)
{
    instance->reference.prefix.references++;
    if(instance->release_hook)instance->release_hook(instance->user_pointer,0);
    instance->reference.prefix.references--;
    if(instance->reference.prefix.references)return;
    SqPrototypeU32 bytes=instance->allocation_bytes;
    instance->reference.prefix.vtable->destroy(instance);
    sq_class_deallocate030(instance,bytes);
}

SqClassInstance030 *sq_class_instance_destroy030(SqClassInstance030 *instance)
{
    instance->reference.prefix.vtable=&sq_class_instance_vtable030.prefix;
    if(!(instance->reference.prefix.references&0x80000000u))
        sq_class_remove_chain030(instance->shared,&instance->reference);
    if(instance->klass) {
        SqPrototypeU32 fields=instance->klass->common.members32.size;
        SqPrefixValue012 value={.reference=instance->klass};
        sq_prefix_release(0x08004000u,value);
        instance->klass=0;
        for(SqPrototypeU32 index=0;index<fields;index++)sq_prefix_clear(instance->values+index);
    }
    sq_prefix_release(instance->values[0].type,instance->values[0].value);
    sq_class_reset_weak030(&instance->reference.prefix);
    return instance;
}

_Bool sq_class_instance_meta030(SqClassInstance030 *instance,void *vm,SqPrototypeU32 selector,SqPrefixObject012 *result)
{
    (void)vm;
    const SqPrefixObject012 *method=instance->klass->common.values56.values+selector;
    if(method->type==0x01000001u)return 0;
    sq_prefix_assign(result,method);
    return 1;
}
