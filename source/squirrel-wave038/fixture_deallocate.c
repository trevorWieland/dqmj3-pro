#define sq_script_closure_deallocate017 fixture_script_deallocate_saved038
#include "../squirrel-wave034/fixture_services019.c"
#undef sq_script_closure_deallocate017

void sq_script_closure_deallocate017(void *pointer,SqPrototypeU32 bytes)
{
    if(fixture_owned030(pointer))sq_class_deallocate030(pointer,bytes);
    else fixture_script_deallocate_saved038(pointer,bytes);
}
