#include "exception.h"

#if __SIZEOF_POINTER__ == 4
#define TRAP_OFFSET 120
#else
#define TRAP_OFFSET __builtin_offsetof(SqExecuteStorage028,traps)
#endif
SqTrapVector028 sq_exception_traps035(const void *vm)
{SqTrapVector028 value;__builtin_memcpy(&value,(const unsigned char*)vm+TRAP_OFFSET,sizeof(value));return value;}
void sq_exception_publish_traps035(void *vm,SqTrapVector028 vector)
{__builtin_memcpy((unsigned char*)vm+TRAP_OFFSET,&vector,sizeof(vector));}
SqPrototypeU32 sq_exception_notify035(const void *vm)
{return sq_lookup_shared020(vm)->unaccessed_00a0[9];}
void sq_exception_set_notify035(void *vm,SqPrototypeU32 value)
{sq_lookup_shared020(vm)->unaccessed_00a0[9]=(unsigned char)value;}
void *sq_exception_error_slot035(void *vm)
{return(unsigned char*)vm+__builtin_offsetof(SqLookupVmStorage020,error);}
SqPrefixObject012 sq_exception_error035(const void *vm)
{SqPrefixObject012 value;__builtin_memcpy(&value,(const unsigned char*)vm+__builtin_offsetof(SqLookupVmStorage020,error),sizeof(value));return value;}
