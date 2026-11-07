#include "type_error.h"

void sq_type_error_string025(void *vm,const SqPrefixObject012 *input,SqPrefixObject012 *destination)
{
    (void)vm;
    if(input->type!=0x08000010u)sq_type_error_string_unsupported025();
    sq_prefix_assign(destination,input);
}

_Bool sq_string_concat025(void *vm,const SqPrefixObject012 *left,const SqPrefixObject012 *right,SqPrefixObject012 *destination)
{
    SqPrefixObject012 first={0x01000001u,{.reference=0}},second=first;
    sq_type_error_string025(vm,left,&first);
    sq_type_error_string025(vm,right,&second);
    const SqString015 *a=first.value.reference,*b=second.value.reference;
    SqPrototypeU32 left_bytes=(SqPrototypeU32)a->length,right_bytes=(SqPrototypeU32)b->length;
    SqPrototypeU32 bytes=left_bytes+right_bytes;
    SqPrefixState012 *shared=sq_native_creation_shared016(vm);
    char *buffer=sq_lookup_scratch020(shared,(SqPrototypeI32)bytes+1);
    sq_string_copy015((SqStringByte015*)buffer,a->value,left_bytes);
    sq_string_copy015((SqStringByte015*)buffer+left_bytes,b->value,right_bytes);
    buffer=sq_lookup_scratch020(shared,-1);
    SqString015 *string=fn_0019ba68(shared,(const SqStringByte015*)buffer,(SqPrototypeI32)bytes);
    SqPrefixObject012 result={0x08000010u,{.reference=string}};
    sq_prefix_retain(result.type,result.value);
    sq_prefix_assign(destination,&result);
    sq_prefix_clear(&result);
    sq_prefix_clear(&second);
    sq_prefix_clear(&first);
    return 1;
}
