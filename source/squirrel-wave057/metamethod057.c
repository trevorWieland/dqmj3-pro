#include "../../source/squirrel-wave047/execute.h"
#include "../../source/squirrel-wave045/initialization.h"
#include "../../source/squirrel-wave019/table_internal.h"

_Noreturn void sq_compose_unsupported057(SqPrototypeU32 reason);

SqPrefixVector012 *sq_lookup_names057(const SqPrefixState012 *prefix)
{
    return sq_startup_metamethod_names045(sq_startup_full_shared045((SqPrefixState012*)prefix));
}

void sq_lookup_bind_names057(SqPrefixState012 *prefix,SqPrefixVector012 *names)
{
    sq_startup_set_vector045(sq_startup_full_shared045(prefix),SQ_STARTUP_METAMETHOD_NAMES045,names);
}

_Bool sq_lookup_table_meta057(SqTable019 *table,void *vm,SqPrototypeU32 selector,SqPrefixObject012 *destination)
{
    SqTable019 *delegate=table->delegate;
    if(!delegate)
        return 0;
    SqPrefixVector012 *names=sq_startup_metamethod_names045(sq_execution_shared047(vm));
    if(selector>=names->size)
        sq_compose_unsupported057(13);
    return sq_table_get019(delegate,names->values+selector,destination);
}

_Bool sq_lookup_meta_call057(void *vm,void *owner,SqPrototypeU32 selector,
    SqPrototypeI32 arguments,SqPrefixObject012 *destination)
{
    const SqPrototypeVTable011 *prefix;
    __builtin_memcpy(&prefix,owner,sizeof(prefix));
    if(prefix!=&sq_table_vtable019)
        sq_compose_unsupported057(14);
    SqPrefixObject012 callable={0x01000001u,{.reference=0}};
    _Bool success=sq_lookup_table_meta057(owner,vm,selector,&callable);
    if(success)
        success=sq_lookup_invoke020(vm,&callable,arguments,sq_lookup_top047(vm)-arguments,destination,0);
    for(SqPrototypeI32 index=0;index<arguments;index++)
        sq_lookup_pop047(vm);
    sq_prefix_release(callable.type,callable.value);
    return success;
}

SqPrototypeU32 sq_compose_meta_contract057(SqVm040 *vm,SqPrototypeU32 *output)
{
    SqPrefixState012 *prefix=sq_shared_prefix040(vm->shared);
    SqPrefixVector012 *names=sq_startup_metamethod_names045(vm->shared);
    SqPrefixVector012 *types=sq_startup_type_names045(vm->shared);
    SqTable019 *table=sq_startup_allocate045(sizeof(*table),_Alignof(SqTable019));
    SqTable019 *delegate=sq_startup_allocate045(sizeof(*delegate),_Alignof(SqTable019));
    sq_table_initialize019(table,prefix,0);
    sq_table_initialize019(delegate,prefix,0);
    SqPrefixObject012 table_owner={0x0a000020u,{.reference=table}};
    SqPrefixObject012 delegate_owner={0x0a000020u,{.reference=delegate}};
    SqPrefixObject012 integer={0x05000002u,{.integer=0x5757}};
    SqPrefixObject012 result={0x01000001u,{.reference=0}};
    sq_prefix_retain(table_owner.type,table_owner.value);
    sq_prefix_retain(delegate_owner.type,delegate_owner.value);
    output[3]=sq_lookup_table_meta057(table,vm,7,&result);
    if(!sq_table_new_slot019(delegate,names->values+7,&integer)||!sq_table_delegate019(table,delegate))
        sq_compose_unsupported057(24);
    output[0]=sq_lookup_table_meta057(table,vm,7,&result);
    output[1]=result.type;
    output[2]=result.value.bits;
    output[4]=names->size;
    output[5]=types->size;
    sq_prefix_clear(&result);
    output[6]=result.type;
    sq_prefix_clear(&table_owner);
    sq_prefix_clear(&delegate_owner);
    return 7;
}
