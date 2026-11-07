#include "startup.h"

_Bool fn_001544a0(SqVm040 *vm,const SqVm040 *parent,SqPrototypeU32 stack_size)
{
    SqPrefixObject012 null={0x01000001u,{.reference=0}};
    sq_prefix_vector_resize(&vm->stack,stack_size,&null);
    vm->allocated_calls=4;
    SqVmCallFrame022 empty={.closure={0x01000001u,{.reference=0}}};
    sq_vm_call_frames_resize022(&vm->calls,(SqPrototypeU32)vm->allocated_calls,&empty);
    vm->call_count=0;
    vm->call_stack=vm->calls.values;
    vm->base=0;
    vm->top=0;
    if (parent) {
        sq_prefix_assign(&vm->root,&parent->root);
        sq_prefix_assign(&vm->error_handler,&parent->error_handler);
        sq_prefix_assign(&vm->debug_hook,&parent->debug_hook);
    } else {
        SqTable019 *table=sq_startup_allocate045(sizeof(*table),_Alignof(SqTable019));
        if (table)
            sq_table_initialize019(table,sq_shared_prefix040(vm->shared),0);
        table->delegate=0;
        SqPrefixObject012 object={0x0a000020u,{.reference=table}};
        if (!table)
            sq_startup_assert049();
        sq_prefix_retain(object.type,object.value);
        sq_prefix_assign(&vm->root,&object);
        sq_prefix_release(object.type,object.value);
    }
    fn_00158fd0(vm);
    return 1;
}
