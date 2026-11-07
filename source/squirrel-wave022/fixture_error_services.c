#include "fixture.h"
#include "../squirrel-wave020/lookup_error.h"

void sq_lookup_format_integer020(char *destination,SqPrototypeI32 integer)
{(void)destination;(void)integer;call_fixture022.fault=15;}
void sq_lookup_format_float020(char *destination,double floating)
{(void)destination;(void)floating;call_fixture022.fault=16;}

void *sq_lookup_reallocate020(void *storage,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes)
{
    if(storage||old_bytes||new_bytes>512){call_fixture022.fault=17;return 0;}
    call_fixture022.scratch_bytes=new_bytes;
    return call_fixture022.memory+0x32000;
}

SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes)
{
    if(bytes>512||call_fixture022.string_allocations++){call_fixture022.fault=18;return 0;}
    call_fixture022.string_bytes=bytes;
    return (void*)(call_fixture022.memory+0x26000);
}

SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes)
{(void)bytes;call_fixture022.fault=19;return 0;}

void sq_string_deallocate_value015(SqString015 *pointer,SqPrototypeU32 bytes)
{sq_deallocate(pointer,bytes);}
void sq_string_deallocate_buckets015(SqString015 **pointer,SqPrototypeU32 bytes)
{sq_deallocate(pointer,bytes);}

_Noreturn void sq_string_missing015(void){for(;;){}}
