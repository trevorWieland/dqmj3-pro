#ifndef DQMJ3_VM_CALL022_H
#define DQMJ3_VM_CALL022_H
#include "../squirrel-wave020/lookup.h"
#include "../squirrel-wave017/script_closure.h"
#include "../squirrel-wave013/native_closure_release.h"
#include "../squirrel-wave012/array_reference.h"

typedef struct SqVmCallFrame022 {
    const void *instruction;
    SqPrefixObject012 *literals;
    SqPrefixObject012 closure;
    void *generator;
    SqPrototypeI32 traps, previous_base, previous_top, target, calls, root;
    unsigned short varargs_size, varargs_base;
} SqVmCallFrame022;

typedef struct SqVmCallVector022 {
    SqVmCallFrame022 *values;
    SqPrototypeU32 size, capacity;
} SqVmCallVector022;

typedef struct SqVmCallStorage022 {
    SqLookupVmStorage020 common;
#if __SIZEOF_POINTER__ == 4
    SqPrototypeI32 native_depth;
#else
    SqVmCallFrame022 *call_stack;
    SqPrototypeI32 call_count, allocated_calls;
    SqVmCallVector022 call_vector;
    SqPrototypeI32 native_depth;
#endif
} SqVmCallStorage022;

SqPrefixVector012 sq_vm_stack_vector022(const void *vm);
void sq_vm_publish_stack022(void *vm,SqPrefixVector012 vector);
SqVmCallVector022 sq_vm_call_vector022(const void *vm);
void sq_vm_publish_calls022(void *vm,SqVmCallVector022 vector);
SqVmCallFrame022 *sq_vm_call_stack022(const void *vm);
void sq_vm_set_call_stack022(void *vm,SqVmCallFrame022 *frames);
SqPrototypeI32 sq_vm_call_count022(const void *vm);
void sq_vm_set_call_count022(void *vm,SqPrototypeI32 count);
SqPrototypeI32 sq_vm_allocated_calls022(const void *vm);
void sq_vm_set_allocated_calls022(void *vm,SqPrototypeI32 count);
SqPrototypeI32 sq_vm_native_depth022(const void *vm);
void sq_vm_set_native_depth022(void *vm,SqPrototypeI32 count);
SqVmCallFrame022 *sq_vm_current022(const void *vm);
void sq_vm_set_current022(void *vm,SqVmCallFrame022 *frame);
void sq_vm_set_top022(void *vm,SqPrototypeI32 top);
void sq_vm_set_base022(void *vm,SqPrototypeI32 base);
void sq_vm_call_frames_resize022(SqVmCallVector022 *vector,SqPrototypeU32 requested,const SqVmCallFrame022 *fill);
void sq_vm_push022(void *vm,const SqPrefixObject012 *value);
void sq_vm_raise_object022(void *vm,const SqPrefixObject012 *error);
_Bool sq_vm_call022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 arguments,SqPrototypeI32 base,
    SqPrefixObject012 *result,SqPrototypeU32 raise_error);
_Bool sq_vm_call_native022(void *vm,SqNativeClosure013 *closure,SqPrototypeI32 arguments,SqPrototypeI32 base,
    SqPrefixObject012 *result,_Bool *suspend);
SqPrototypeI32 sq_vm_array_native022(void *vm);

_Bool sq_vm_execute022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 target,SqPrototypeI32 arguments,
    SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeU32 execution_type);
_Bool sq_vm_create_instance022(void *vm,SqLookupClassStorage020 *klass,SqPrefixObject012 *instance,SqPrefixObject012 *constructor);
void sq_vm_call_error022(void *vm,const char *message);
void sq_vm_call_type_error022(void *vm,SqPrototypeI32 index,SqPrototypeI32 mask,SqPrototypeU32 type);
void *sq_vm_call_reallocate022(void *storage,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes);
_Noreturn void sq_vm_array_failure022(void);

_Static_assert(__builtin_offsetof(SqVmCallStorage022,common)==0,"exact020 named common binding");
_Static_assert(sizeof(void*)!=4||sizeof(SqVmCallFrame022)==48,"target actual frame size");
_Static_assert(sizeof(void*)!=8||sizeof(SqVmCallFrame022)==72,"native opaque frame size");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqVmCallFrame022,closure)==8,"target closure field");
_Static_assert(sizeof(void*)!=8||__builtin_offsetof(SqVmCallFrame022,closure)==16,"native closure field");
_Static_assert(sizeof(void*)!=4||__builtin_offsetof(SqVmCallStorage022,native_depth)==144,"target native depth");
_Static_assert(_Generic(((SqNativeClosure013*)0)->function,SqPrototypeI32(*)(void*):1,default:0),"exact stored native callable ABI");
#endif
