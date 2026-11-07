#include "initialization.h"

static SqNativeClosure013 *create_closure(SqSharedState040 *shared,SqNativeCallable013 function)
{
    SqNativeClosure013 *closure=sq_startup_allocate045(sizeof(*closure),_Alignof(SqNativeClosure013));
    closure->reference.prefix.vtable=&sq_native_closure_vtable013;
    closure->reference.prefix.references=0;
    closure->reference.prefix.weak=0;
    closure->type_checks.values=0;
    closure->type_checks.size=0;
    closure->type_checks.capacity=0;
    closure->outers.values=0;
    closure->outers.size=0;
    closure->outers.capacity=0;
    sq_startup_null040(&closure->environment);
    sq_startup_null040(&closure->name);
    closure->function=function;
    closure->shared=sq_shared_prefix040(shared);
    closure->reference.previous=0;
    closure->reference.next=closure->shared->chain;
    if (closure->shared->chain)
        closure->shared->chain->previous=&closure->reference;
    closure->shared->chain=&closure->reference;
    return closure;
}

SqTable019 *fn_00159264(SqSharedState040 *shared,const SqNativeRegistration045 *methods)
{
    SqPrefixState012 *prefix=sq_shared_prefix040(shared);
    SqTable019 *table=sq_startup_allocate045(sizeof(*table),_Alignof(SqTable019));
    sq_table_initialize019(table,prefix,0);
    table->delegate=0;
    for (SqPrototypeU32 index=0;methods[index].name;index++) {
        const SqNativeRegistration045 *method=methods+index;
        SqNativeClosure013 *closure=create_closure(shared,method->function);
        closure->parameter_check=method->parameter_check;
        SqString015 *name=fn_0019ba68(prefix,method->name,-1);
        SqPrefixObject012 temporary={0x08000010u,{.reference=name}};
        sq_prefix_retain(temporary.type,temporary.value);
        sq_prefix_assign(&closure->name,&temporary);
        sq_prefix_release(temporary.type,temporary.value);
        if (method->type_mask && !fn_0017875c(&closure->type_checks,method->type_mask))
            return 0;
        SqPrefixObject012 callable={0x08000200u,{.reference=closure}};
        sq_prefix_retain(callable.type,callable.value);
        name=fn_0019ba68(prefix,method->name,-1);
        temporary.value.reference=name;
        sq_prefix_retain(temporary.type,temporary.value);
        sq_table_new_slot019(table,&temporary,&callable);
        sq_prefix_release(temporary.type,temporary.value);
        sq_prefix_release(callable.type,callable.value);
    }
    return table;
}
