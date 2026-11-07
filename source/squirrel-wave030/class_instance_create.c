#include "class_internal.h"

void sq_class_lock030(SqClass030 *klass)
{
    SqLookupClassStorage020 *current=&klass->common;
    current->locked=1;
    if(current->base)sq_class_lock030((void*)current->base);
}

SqClassInstance030 *sq_class_instance_initialize030(SqClassInstance030 *storage,SqPrefixState012 *shared,
    SqClass030 *klass,SqPrototypeU32 allocation_bytes)
{
    storage->reference.prefix=(SqPrototypePrefix011){&sq_class_instance_vtable030.prefix,0,0};
    storage->values[0]=(SqPrefixObject012){0x01000001u,{.reference=0}};
    storage->allocation_bytes=allocation_bytes;
    storage->klass=klass;
    for(SqPrototypeU32 index=0;index<klass->common.members32.size;index++) {
        storage->values[index]=klass->common.members32.values[index].primary;
        sq_prefix_retain(storage->values[index].type,storage->values[index].value);
    }
    storage->user_pointer=0;
    storage->release_hook=0;
    klass->common.reference.prefix.references++;
    storage->delegate=klass->common.members;
    storage->reference.next=storage->reference.previous=0;
    storage->shared=shared;
    sq_class_add_chain030(shared,&storage->reference);
    return storage;
}

SqClassInstance030 *sq_class_create_instance030(SqClass030 *klass)
{
    if(!klass->common.locked) {
        klass->common.locked=1;
        if(klass->common.base)sq_class_lock030((void*)klass->common.base);
    }
    SqPrototypeU32 count=klass->common.members32.size;
    SqPrototypeU32 objects=count?count:1;
    SqPrototypeU32 extra=klass->common.instance_bytes;
    SqPrefixState012 *shared=klass->common.shared;
    SqPrototypeU32 bytes=__builtin_offsetof(SqClassInstance030,values)+objects*sizeof(SqPrefixObject012)+extra;
    SqClassInstance030 *instance=sq_class_allocate030(bytes);
    if(instance)sq_class_instance_initialize030(instance,shared,klass,bytes);
    extra=klass->common.instance_bytes;
    if(extra) {
        if(!instance)sq_class_failure030();
        instance->user_pointer=(unsigned char*)instance+bytes-extra;
    }
    return instance;
}

_Bool sq_vm_create_instance022(void *vm,SqLookupClassStorage020 *common,
    SqPrefixObject012 *result,SqPrefixObject012 *constructor)
{
    SqClass030 *klass=(void*)common;
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
