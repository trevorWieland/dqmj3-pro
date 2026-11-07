#include "vm_call.h"

#if __SIZEOF_POINTER__ == 4
#define CALL_OFFSET(name,target) target
#else
#define CALL_OFFSET(name,target) __builtin_offsetof(SqVmCallStorage022,name)
#endif

static SqPrototypeI32 integer(const void *vm,SqPrototypeU32 offset)
{
    SqPrototypeI32 value;
    __builtin_memcpy(&value,(const unsigned char*)vm+offset,sizeof(value));
    return value;
}

static void publish_integer(void *vm,SqPrototypeU32 offset,SqPrototypeI32 value)
{ __builtin_memcpy((unsigned char*)vm+offset,&value,sizeof(value)); }

SqPrefixVector012 sq_vm_stack_vector022(const void *vm)
{
    SqPrefixVector012 value;
    __builtin_memcpy(&value,(const unsigned char*)vm+24,sizeof(value));
    return value;
}

void sq_vm_publish_stack022(void *vm,SqPrefixVector012 value)
{ __builtin_memcpy((unsigned char*)vm+24,&value,sizeof(value)); }

SqVmCallVector022 sq_vm_call_vector022(const void *vm)
{
    SqVmCallVector022 value;
    __builtin_memcpy(&value,(const unsigned char*)vm+CALL_OFFSET(call_vector,108),sizeof(value));
    return value;
}

void sq_vm_publish_calls022(void *vm,SqVmCallVector022 value)
{ __builtin_memcpy((unsigned char*)vm+CALL_OFFSET(call_vector,108),&value,sizeof(value)); }

SqVmCallFrame022 *sq_vm_call_stack022(const void *vm)
{
    SqVmCallFrame022 *value;
    __builtin_memcpy(&value,(const unsigned char*)vm+CALL_OFFSET(call_stack,96),sizeof(value));
    return value;
}

void sq_vm_set_call_stack022(void *vm,SqVmCallFrame022 *value)
{ __builtin_memcpy((unsigned char*)vm+CALL_OFFSET(call_stack,96),&value,sizeof(value)); }

SqPrototypeI32 sq_vm_call_count022(const void *vm) { return integer(vm,CALL_OFFSET(call_count,100)); }
void sq_vm_set_call_count022(void *vm,SqPrototypeI32 value) { publish_integer(vm,CALL_OFFSET(call_count,100),value); }
SqPrototypeI32 sq_vm_allocated_calls022(const void *vm) { return integer(vm,CALL_OFFSET(allocated_calls,104)); }
void sq_vm_set_allocated_calls022(void *vm,SqPrototypeI32 value) { publish_integer(vm,CALL_OFFSET(allocated_calls,104),value); }
SqPrototypeI32 sq_vm_native_depth022(const void *vm) { return integer(vm,CALL_OFFSET(native_depth,144)); }
void sq_vm_set_native_depth022(void *vm,SqPrototypeI32 value) { publish_integer(vm,CALL_OFFSET(native_depth,144),value); }

SqVmCallFrame022 *sq_vm_current022(const void *vm)
{
    SqVmCallFrame022 *value;
    __builtin_memcpy(&value,(const unsigned char*)vm+132,sizeof(value));
    return value;
}

void sq_vm_set_current022(void *vm,SqVmCallFrame022 *value)
{ __builtin_memcpy((unsigned char*)vm+132,&value,sizeof(value)); }

void sq_vm_set_top022(void *vm,SqPrototypeI32 value)
{ publish_integer(vm,__builtin_offsetof(SqLookupVmStorage020,top),value); }
void sq_vm_set_base022(void *vm,SqPrototypeI32 value)
{ publish_integer(vm,__builtin_offsetof(SqLookupVmStorage020,base),value); }

void sq_vm_push022(void *vm,const SqPrefixObject012 *value)
{
    SqPrototypeI32 top=sq_lookup_top020(vm);
    sq_vm_set_top022(vm,top+1);
    sq_prefix_assign(sq_lookup_stack020(vm)+top,value);
}

void sq_vm_raise_object022(void *vm,const SqPrefixObject012 *error)
{
    unsigned char *destination=(unsigned char*)vm+__builtin_offsetof(SqLookupVmStorage020,error);
    SqPrefixObject012 previous;
    __builtin_memcpy(&previous,destination,sizeof(previous));
    sq_prefix_retain(error->type,error->value);
    __builtin_memcpy(destination,error,sizeof(*error));
    sq_prefix_release(previous.type,previous.value);
}
