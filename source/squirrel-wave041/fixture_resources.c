#include "fixture.h"
#define sq_class_deallocate030 fixture_class_deallocate_saved041
#include "../squirrel-wave038/fixture_resources.c"
#undef sq_class_deallocate030

void sq_class_deallocate030(void *pointer,SqPrototypeU32 bytes)
{
    fixture_capture_deallocate041(pointer,bytes);
    fixture_class_deallocate_saved041(pointer,bytes);
}

void *sq_script_create_allocate038(SqPrototypeU32 bytes);
void *sq_script_create_reallocate038(void *storage,SqPrototypeU32 previous,SqPrototypeU32 next);
static SqTerminalSink041 terminal_sink;
volatile SqPrototypeU32 fixture_terminal_calls041;
__attribute__((noinline)) void fixture_terminal_marker041(void){fixture_terminal_calls041++;}

void *sq_script_create_allocate041(SqPrototypeU32 bytes)
{
    if(capture_fixture041.fail_allocation)return 0;
    return sq_script_create_allocate038(bytes);
}

void *sq_script_create_reallocate041(void *storage,SqPrototypeU32 previous,SqPrototypeU32 next)
{
    return sq_script_create_reallocate038(storage,previous,next);
}

void fixture_terminal_sink041(SqTerminalSink041 sink){terminal_sink=sink;}

_Noreturn void sq_capture_assert041(SqPrototypeU32 reason)
{
    capture_fixture041.terminal_kind=1;capture_fixture041.terminal_reason=reason;
    if(terminal_sink)terminal_sink(0x4100u+reason);
    fixture_terminal_marker041();for(;;){}
}

_Noreturn void sq_capture_storage_fault041(SqPrototypeU32 reason)
{
    capture_fixture041.terminal_kind=2;capture_fixture041.terminal_reason=reason;
    if(terminal_sink)terminal_sink(0x4200u+reason);
    fixture_terminal_marker041();for(;;){}
}
