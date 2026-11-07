#include "class.h"
#include "../squirrel-wave030/class_internal.h"
#include "../squirrel-wave020/lookup_error.h"

_Bool sq_vm_class_create034(void *vm,SqPrefixObject012 *result,SqPrototypeI32 base_index,SqPrototypeU32 attributes_index)
{
    SqClass030 *base=0;
    SqPrefixObject012 attributes={0x01000001u,{.reference=0}};
    if(base_index!=-1) {
        const SqPrefixObject012 *object=sq_lookup_stack020(vm)+sq_lookup_base020(vm)+base_index;
        if(object->type!=0x08004000u) {
            sq_lookup_raise_format020(vm,"trying to inherit from a %s",sq_lookup_object_type_name020(object));
            sq_prefix_release(attributes.type,attributes.value);
            return 0;
        }
        base=object->value.reference;
    }
    if(attributes_index!=255)
        sq_prefix_assign(&attributes,sq_lookup_stack020(vm)+sq_lookup_base020(vm)+(SqPrototypeI32)attributes_index);
    SqPrefixState012 *shared=sq_native_creation_shared016(vm);
    SqClass030 *klass=sq_vm_class_allocate034();
    if(klass)sq_class_initialize030(klass,shared,base);
    if(!klass)sq_class_failure030();
    SqPrefixObject012 temporary={0x08004000u,{.reference=klass}};
    sq_prefix_retain(temporary.type,temporary.value);
    sq_prefix_assign(result,&temporary);
    sq_prefix_release(temporary.type,temporary.value);
    klass=result->value.reference;
    if(klass->common.values56.values[17].type!=0x01000001u) {
        SqPrefixObject012 discarded={0x01000001u,{.reference=0}};
        sq_lookup_push020(vm,result);
        sq_lookup_push020(vm,&attributes);
        klass=result->value.reference;
        sq_vm_call022(vm,klass->common.values56.values+17,2,sq_lookup_top020(vm)-2,&discarded,0);
        sq_lookup_pop020(vm);
        sq_lookup_pop020(vm);
        sq_prefix_release(discarded.type,discarded.value);
    }
    klass=result->value.reference;
    sq_prefix_assign(&klass->common.attributes,&attributes);
    sq_prefix_release(attributes.type,attributes.value);
    return 1;
}
