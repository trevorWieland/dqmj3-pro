#include "execute.h"
SqTrapVector028 sq_exception_traps047(const void *opaque)
{const SqVm040 *vm=opaque;return vm->traps;}
void sq_exception_publish_traps047(void *opaque,SqTrapVector028 value)
{SqVm040 *vm=opaque;vm->traps=value;}
SqPrototypeU32 sq_exception_notify047(const void *opaque)
{
    const SqSharedState040 *shared=sq_execution_shared047(opaque);
#if __SIZEOF_POINTER__ == 4
    return shared->target.flag_00a9;
#else
    return shared->fields.flag_00a9;
#endif
}
void sq_exception_set_notify047(void *opaque,SqPrototypeU32 value)
{
    SqSharedState040 *shared=sq_execution_shared047(opaque);
#if __SIZEOF_POINTER__ == 4
    shared->target.flag_00a9=(unsigned char)value;
#else
    shared->fields.flag_00a9=(unsigned char)value;
#endif
}
void *sq_exception_error_slot047(void *opaque){return sq_execution_error047(opaque);}
SqPrefixObject012 sq_exception_error047(const void *opaque){return *sq_execution_error047((void*)opaque);}
