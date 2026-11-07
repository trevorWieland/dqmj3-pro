#define allocate fixture_allocate034
#define sq_class_reallocate030 fixture_class_reallocate_saved034
#include "../squirrel-wave030/fixture_class_services.c"
#undef allocate
#undef sq_class_reallocate030
#include "fixture.h"
#include "../squirrel-wave031/execute.h"

SqClass030 *sq_vm_class_allocate034(void) { return fixture_allocate034(sizeof(SqClass030),1); }
void *sq_class_reallocate030(void *storage,SqPrototypeU32 previous,SqPrototypeU32 next)
{
    fixture_observe_allocation034();
    return fixture_class_reallocate_saved034(storage,previous,next);
}
void *sq_execute_allocate_table031(SqPrototypeU32 bytes)
{
    if(bytes!=sizeof(SqTable019))sq_class_failure030();
    return sq_class_allocate_table030();
}
void sq_execute_debug028(void *vm,SqPrototypeI32 event,SqPrototypeI32 line)
{ (void)vm;(void)event;(void)line;sq_class_failure030(); }
void sq_execute_error_handler028(void *vm,const SqPrefixObject012 *error)
{ (void)vm;(void)error;sq_class_failure030(); }
_Noreturn void sq_execute_unsupported028(void *vm,SqPrototypeI32 reason)
{ (void)vm;(void)reason;sq_class_failure030(); }
_Noreturn void sq_type_error_format_unsupported025(void) { sq_class_failure030(); }

