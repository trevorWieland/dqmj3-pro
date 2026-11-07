#include "fixture_api.h"
static SqPrototypeU32 trap_allocations,closure_allocations,vector_allocations;
void fixture_resources_reset047(void)
{trap_allocations=closure_allocations=vector_allocations=0;}
void *sq_exception_reallocate035(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{
    if(next>4096||previous>next||trap_allocations>=4){execute_fixture028.fault=4701;return 0;}
    unsigned char *value=execute_fixture028.memory+0xe0000+trap_allocations++*4096;
    if(old)for(SqPrototypeU32 i=0;i<previous;i++)value[i]=((unsigned char*)old)[i];return value;
}
void *sq_script_create_allocate041(SqPrototypeU32 bytes)
{
    if(bytes!=sizeof(SqScriptClosure017)||closure_allocations>=8){execute_fixture028.fault=4702;return 0;}
    return execute_fixture028.memory+0xb0000+closure_allocations++*4096;
}
void *sq_script_create_reallocate041(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{
    if(next>4096||previous>next||vector_allocations>=8){execute_fixture028.fault=4703;return 0;}
    unsigned char *value=execute_fixture028.memory+0xc0000+vector_allocations++*4096;
    if(old)for(SqPrototypeU32 i=0;i<previous;i++)value[i]=((unsigned char*)old)[i];return value;
}
_Noreturn void sq_capture_assert041(SqPrototypeU32 reason)
{execute_fixture028.fault=0x4710+reason;for(;;){}}
_Noreturn void sq_capture_storage_fault041(SqPrototypeU32 reason)
{execute_fixture028.fault=0x4720+reason;for(;;){}}
_Noreturn void sq_exception_generator_unsupported035(void *value)
{(void)value;execute_fixture028.fault=4730;for(;;){}}
