#include "../../source/squirrel-wave047/execute.h"
#include "../../source/squirrel-wave049/startup.h"

volatile SqPrototypeU32 sq_compose_fault057;

_Noreturn void sq_compose_unsupported057(SqPrototypeU32 reason)
{
    sq_compose_fault057=reason;
    __builtin_trap();
}

void sq_execute_debug028(void *opaque,SqPrototypeI32 event,SqPrototypeI32 line)
{
    const SqVm040 *vm=opaque;
    (void)event;
    (void)line;
    if(vm->debug_hook.type!=0x01000001u)
        sq_compose_unsupported057(1);
}

_Noreturn void sq_execute_unsupported028(void *vm,SqPrototypeI32 reason)
{(void)vm;(void)reason;sq_compose_unsupported057(2);}
_Noreturn void sq_iteration_generator_unsupported039(void *generator)
{(void)generator;sq_compose_unsupported057(3);}
_Noreturn void sq_class_failure030(void)
{sq_compose_unsupported057(4);}
_Noreturn void sq_type_error_string_unsupported025(void)
{sq_compose_unsupported057(5);}
_Noreturn void sq_type_error_format_unsupported025(void)
{sq_compose_unsupported057(6);}
_Noreturn void sq_exception_generator_unsupported035(void *generator)
{(void)generator;sq_compose_unsupported057(7);}
_Noreturn void sq_capture_assert041(SqPrototypeU32 reason)
{(void)reason;sq_compose_unsupported057(8);}
_Noreturn void sq_capture_storage_fault041(SqPrototypeU32 reason)
{(void)reason;sq_compose_unsupported057(9);}
_Noreturn void sq_startup_assert049(void)
{sq_compose_unsupported057(10);}
void sq_startup_formatted_error049(SqVm040 *vm,const char *message)
{(void)vm;(void)message;sq_compose_unsupported057(11);}

_Bool sq_vm_create_instance022(void *vm,SqLookupClassStorage020 *klass,
    SqPrefixObject012 *instance,SqPrefixObject012 *constructor)
{
    (void)vm;(void)klass;(void)instance;(void)constructor;
    sq_compose_unsupported057(12);
}
