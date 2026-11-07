#include "generator_state.h"
#include "../squirrel-wave020/lookup_error.h"

void sq_generator_raise_literal046(SqVm040 *vm,const char *text)
{
    SqPrefixState012 *shared=&vm->shared->common.common.common.common;
    SqPrototypeU32 length=sq_string_length015((const SqStringByte015*)text);
    for(SqPrototypeU32 index=0;index<length;index++)if(text[index]=='%')sq_generator_unsupported046(1);
    char *buffer=sq_lookup_scratch020(shared,(SqPrototypeI32)length+100);
    for(SqPrototypeU32 index=0;index<=length;index++)buffer[index]=text[index];
    buffer=sq_lookup_scratch020(shared,-1);
    SqString015 *string=fn_0019ba68(shared,(const SqStringByte015*)buffer,-1);
    SqPrefixObject012 temporary={0x08000010u,{.reference=string}};
    sq_prefix_retain(temporary.type,temporary.value);
    sq_prefix_assign(&vm->error,&temporary);
    sq_prefix_release(temporary.type,temporary.value);
}
