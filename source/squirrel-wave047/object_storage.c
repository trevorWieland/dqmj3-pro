#include "execute.h"

void sq_execute_assign047(void *destination,const SqPrefixObject012 *source)
{
    SqPrefixObject012 incoming,old;
    __builtin_memcpy(&incoming,source,sizeof(incoming));__builtin_memcpy(&old,destination,sizeof(old));
    sq_prefix_retain(incoming.type,incoming.value);__builtin_memcpy(destination,&incoming,sizeof(incoming));sq_prefix_release(old.type,old.value);
}
void sq_execute_clear047(void *object)
{SqPrefixObject012 empty={0x01000001u,{.reference=0}};sq_execute_assign047(object,&empty);}
void sq_execute_scalar047(void *object,SqPrototypeU32 type,SqPrototypeU32 bits)
{
    SqPrefixObject012 old,value={type,{.bits=bits}};__builtin_memcpy(&old,object,sizeof(old));
    sq_prefix_release(old.type,old.value);__builtin_memcpy(object,&value,sizeof(value));
}
void *sq_execute_temporary047(void *opaque){SqVm040 *vm=opaque;return &vm->temporary;}
SqPrefixObject012 sq_execute_temporary_value047(const void *opaque){const SqVm040 *vm=opaque;return vm->temporary;}
void *sq_execute_debug_slot047(void *opaque){SqVm040 *vm=opaque;return &vm->debug_hook;}
void *sq_execute_error_handler_slot047(void *opaque){SqVm040 *vm=opaque;return &vm->error_handler;}
SqPrefixObject012 sq_execute_debug_value047(const void *opaque){const SqVm040 *vm=opaque;return vm->debug_hook;}
SqPrefixObject012 sq_execute_error_handler_value047(const void *opaque){const SqVm040 *vm=opaque;return vm->error_handler;}
SqPrefixObject012 sq_execute_root_value047(const void *opaque){const SqVm040 *vm=opaque;return vm->root;}
SqPrefixVector012 sq_execute_varargs047(const void *opaque){const SqVm040 *vm=opaque;return vm->varargs;}
void sq_execute_publish_varargs047(void *opaque,SqPrefixVector012 value){SqVm040 *vm=opaque;vm->varargs=value;}
void sq_execute_clear_stack047(void *vm,SqPrototypeI32 old_top)
{while(old_top>=sq_lookup_top047(vm))sq_execute_clear047(sq_lookup_stack047(vm)+old_top--);}
_Bool sq_execute_false047(const SqPrefixObject012 *value)
{
    if(value->type==0x05000004u&&value->value.floating==0.0f)return 1;
    return value->type&0x08000000u?value->value.reference==0:value->value.bits==0;
}
