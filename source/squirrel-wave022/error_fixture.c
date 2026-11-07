#include "fixture.h"
#include "../squirrel-wave015/string.h"
extern void *fixture_original_assign022(void *,const void *);
static SqPrototypeU32 error_kind022;

void fixture_error_prepare022(SqPrototypeU32 kind)
{fixture_prepare022(5,1,0);error_kind022=kind;call_fixture022.error_mode=1;}

void fixture_error_call022(SqPrototypeU32 source)
{
    SqNativeClosure013 *native=(void*)(call_fixture022.memory+0x20000);
    if(error_kind022==0)sq_vm_set_native_depth022(fixture_vm022(),100);
    else native->parameter_check=error_kind022==1?3:-3;
    fixture_call022(source);
}

void fixture_error_cleanup022(SqPrototypeU32 source)
{
    fixture_cleanup022(source);
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    SqPrefixObject012 *error=&fixture_vm022()->common.error;
    if(source)sq_prefix_assign(error,&empty);else fixture_original_assign022(error,&empty);
}

SqPrototypeU32 fixture_error_snapshot022(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqPrototypeU32 count=fixture_snapshot022(output,capacity);
    SqPrefixObject012 error=fixture_vm022()->common.error;
    SqString015 *string=(void*)(call_fixture022.memory+0x26000);
    SqPrototypeU32 length=call_fixture022.string_allocations?(SqPrototypeU32)string->length:0;
    if(!count||capacity<count+8+length+1)return 0;
    output[count++]=error_kind022;output[count++]=error.type;output[count++]=fixture_payload022(error);
    output[count++]=error.type&0x08000000u?sq_prefix_count(error.value.reference):0;
    output[count++]=length;output[count++]=string->hash;
    output[count++]=(SqPrototypeU32)fixture_shared022()->scratch_capacity;
    output[count++]=(SqPrototypeU32)sq_string_table015(&fixture_shared022()->common)->used;
    for(SqPrototypeU32 index=0;index<=length;index++)output[count++]=(unsigned char)string->value[index];
    return count;
}
