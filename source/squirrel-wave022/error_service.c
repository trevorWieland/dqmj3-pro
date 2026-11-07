#include "vm_call.h"
#include "../squirrel-wave020/lookup_error.h"

void sq_vm_call_error022(void *vm,const char *message)
{ sq_lookup_raise_format020(vm,message); }
