#include "execute.h"

SqSharedState040 *sq_execution_shared047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->shared;}
SqPrefixObject012 *sq_lookup_stack047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->stack.values;}
SqPrototypeI32 sq_lookup_top047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->top;}
SqPrototypeI32 sq_lookup_base047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->base;}
SqTable019 *sq_lookup_root047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->root.value.reference;}
SqLookupSharedStorage020 *sq_lookup_shared047(const void *opaque)
{return &sq_execution_shared047(opaque)->common.common.common;}
SqPrefixState012 *sq_native_creation_shared047(const void *opaque)
{return &sq_execution_shared047(opaque)->common.common.common.common;}
void sq_lookup_push047(void *opaque,const SqPrefixObject012 *value)
{SqVm040 *vm=opaque;SqPrototypeI32 position=vm->top++;sq_prefix_assign(vm->stack.values+position,value);}
void sq_lookup_pop047(void *opaque)
{SqVm040 *vm=opaque;sq_prefix_clear(vm->stack.values+--vm->top);}
void sq_lookup_assign_unwrapped047(SqPrefixObject012 *destination,SqPrefixObject012 incoming)
{if(incoming.type==0x08010000u)incoming=((SqWeakReference014*)incoming.value.reference)->object;sq_prefix_assign(destination,&incoming);}
SqPrototypeI32 sq_lookup_integer047(const SqPrefixObject012 *key)
{return key->type==0x05000004u?(SqPrototypeI32)key->value.floating:key->value.integer;}
SqPrefixObject012 *sq_native_creation_top047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->stack.values+vm->top-1;}
void sq_native_creation_pop047(void *opaque)
{SqVm040 *vm=opaque;sq_prefix_clear(vm->stack.values+--vm->top);}
void sq_native_creation_push047(void *opaque,const SqPrefixObject012 *value)
{SqVm040 *vm=opaque;SqPrototypeI32 position=vm->top++;sq_prefix_assign(vm->stack.values+position,value);}
