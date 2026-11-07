#include "class.h"
#include "../squirrel-wave030/class_internal.h"
#include "../squirrel-wave020/lookup_error.h"

static _Bool metamethod(void *vm,const SqPrefixObject012 *self,const SqPrefixObject012 *key,
    const SqPrefixObject012 *value,SqPrefixObject012 *result)
{
    sq_lookup_push020(vm,self);
    sq_lookup_push020(vm,key);
    sq_lookup_push020(vm,value);
    return sq_lookup_meta_call020(vm,self->value.reference,13,3,result);
}

_Bool sq_vm_new_slot034(void *vm,const SqPrefixObject012 *self,const SqPrefixObject012 *key,
    const SqPrefixObject012 *value,SqPrototypeU32 raw_static)
{
    if(key->type==0x01000001u) {
        sq_lookup_raise_format020(vm,"null cannot be used as index");
        return 0;
    }
    if(self->type==0x0a000020u) {
        SqTable019 *table=self->value.reference;
        _Bool fallback=1;
        if(table->delegate) {
            SqPrefixObject012 previous={0x01000001u,{.reference=0}};
            if(!sq_table_get019(table,key,&previous))fallback=!metamethod(vm,self,key,value,&previous);
            sq_prefix_release(previous.type,previous.value);
        }
        if(fallback)sq_table_new_slot019(self->value.reference,key,value);
        return 1;
    }
    if(self->type==0x0a008000u) {
        SqPrefixObject012 discarded={0x01000001u,{.reference=0}};
        _Bool success=metamethod(vm,self,key,value,&discarded);
        if(!success)sq_lookup_raise_format020(vm,"class instances do not support the new slot operator");
        sq_prefix_release(discarded.type,discarded.value);
        return success;
    }
    if(self->type==0x08004000u) {
        if(sq_class_new_slot034(self->value.reference,sq_native_creation_shared016(vm),key,value,raw_static))return 1;
        const SqClass030 *klass=self->value.reference;
        if(klass->common.locked)
            sq_lookup_raise_format020(vm,"trying to modify a class that has already been instantiated");
        else {
            SqString015 *string=sq_lookup_stringify020(vm,key);
            if(!string)sq_class_failure030();
            SqPrefixObject012 temporary={0x08000010u,{.reference=string}};
            sq_prefix_retain(temporary.type,temporary.value);
            sq_lookup_raise_format020(vm,"the property '%s' already exists",(const char*)string->value);
            sq_prefix_release(temporary.type,temporary.value);
        }
        return 0;
    }
    const char *key_name=sq_lookup_object_type_name020(key);
    const char *self_name=sq_lookup_object_type_name020(self);
    sq_lookup_raise_format020(vm,"indexing %s with %s",self_name,key_name);
    return 0;
}
