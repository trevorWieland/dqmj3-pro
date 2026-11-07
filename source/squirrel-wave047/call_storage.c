#include "execute.h"
SqPrefixVector012 sq_vm_stack_vector047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->stack;}
void sq_vm_publish_stack047(void *opaque,SqPrefixVector012 value)
{SqVm040 *vm=opaque;vm->stack=value;}
SqVmCallVector022 sq_vm_call_vector047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->calls;}
void sq_vm_publish_calls047(void *opaque,SqVmCallVector022 value)
{SqVm040 *vm=opaque;vm->calls=value;}
SqVmCallFrame022 *sq_vm_call_stack047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->call_stack;}
void sq_vm_set_call_stack047(void *opaque,SqVmCallFrame022 *value)
{SqVm040 *vm=opaque;vm->call_stack=value;}
SqPrototypeI32 sq_vm_call_count047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->call_count;}
void sq_vm_set_call_count047(void *opaque,SqPrototypeI32 value)
{SqVm040 *vm=opaque;vm->call_count=value;}
SqPrototypeI32 sq_vm_allocated_calls047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->allocated_calls;}
void sq_vm_set_allocated_calls047(void *opaque,SqPrototypeI32 value)
{SqVm040 *vm=opaque;vm->allocated_calls=value;}
SqPrototypeI32 sq_vm_native_depth047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->native_depth;}
void sq_vm_set_native_depth047(void *opaque,SqPrototypeI32 value)
{SqVm040 *vm=opaque;vm->native_depth=value;}
SqVmCallFrame022 *sq_vm_current047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->current;}
void sq_vm_set_current047(void *opaque,SqVmCallFrame022 *value)
{SqVm040 *vm=opaque;vm->current=value;}
void sq_vm_set_top047(void *opaque,SqPrototypeI32 value)
{SqVm040 *vm=opaque;vm->top=value;}
void sq_vm_set_base047(void *opaque,SqPrototypeI32 value)
{SqVm040 *vm=opaque;vm->base=value;}
SqPrefixObject012 *sq_execution_error047(void *opaque)
{SqVm040 *vm=opaque;return &vm->error;}
void sq_vm_push047(void *opaque,const SqPrefixObject012 *value)
{SqVm040 *vm=opaque;SqPrototypeI32 position=vm->top++;sq_prefix_assign(vm->stack.values+position,value);}
void sq_vm_raise_object047(void *opaque,const SqPrefixObject012 *error)
{SqVm040 *vm=opaque;SqPrefixObject012 previous=vm->error;sq_prefix_retain(error->type,error->value);vm->error=*error;sq_prefix_release(previous.type,previous.value);}
