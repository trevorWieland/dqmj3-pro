#include "fixture_mixed.h"
extern void sq_predecessor_prototype_deallocate047(void*,SqPrototypeU32);
extern void sq_predecessor_script_deallocate047(void*,SqPrototypeU32);
extern void sq_predecessor_vector_deallocate047(void*,SqPrototypeU32);
void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes)
{
    if(mixed047.variant>=256&&pointer==fixture_nested047()) {
        if(bytes!=mixed047.child_bytes)execute_fixture028.fault=4741;fixture_lifetime047(pointer,bytes,1);return;
    }
    sq_predecessor_prototype_deallocate047(pointer,bytes);
}
void sq_script_closure_deallocate017(void *pointer,SqPrototypeU32 bytes)
{
    if(mixed047.variant>=256&&(__UINTPTR_TYPE__)pointer>=(__UINTPTR_TYPE__)(execute_fixture028.memory+0xc0000)&&(__UINTPTR_TYPE__)pointer<(__UINTPTR_TYPE__)(execute_fixture028.memory+0xc8000)) {fixture_lifetime047(pointer,bytes,3);return;}
    if(mixed047.variant>=256&&(__UINTPTR_TYPE__)pointer>=(__UINTPTR_TYPE__)(execute_fixture028.memory+0xb0000)&&(__UINTPTR_TYPE__)pointer<(__UINTPTR_TYPE__)(execute_fixture028.memory+0xb8000)) {
        if(bytes!=sizeof(SqScriptClosure017))execute_fixture028.fault=4742;fixture_lifetime047(pointer,bytes,2);return;
    }
    sq_predecessor_script_deallocate047(pointer,bytes);
}
void sq_deallocate(void *pointer,SqPrototypeU32 bytes)
{
    if(mixed047.variant==256&&(pointer==execute_fixture028.memory+0x9000||pointer==execute_fixture028.memory+0x17000)) {if(bytes!=4*sizeof(SqPrefixObject012))execute_fixture028.fault=4743;fixture_lifetime047(pointer,bytes,4);return;}
    if(mixed047.variant>=256&&(__UINTPTR_TYPE__)pointer>=(__UINTPTR_TYPE__)(execute_fixture028.memory+0xc0000)&&(__UINTPTR_TYPE__)pointer<(__UINTPTR_TYPE__)(execute_fixture028.memory+0xc8000)) {fixture_lifetime047(pointer,bytes,3);return;}
    sq_predecessor_vector_deallocate047(pointer,bytes);
}
