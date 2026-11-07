#include "type_error.h"

static SqPrefixObject012 string_object(void *vm,const char *text)
{
    SqString015 *string=fn_0019ba68(sq_native_creation_shared016(vm),(const SqStringByte015*)text,-1);
    SqPrefixObject012 object={0x08000010u,{.reference=string}};
    sq_prefix_retain(object.type,object.value);
    return object;
}

void sq_native_type_error025(void *vm,SqPrototypeI32 index,SqPrototypeI32 mask,SqPrototypeU32 actual_type)
{
    SqPrefixObject012 expected=string_object(vm,"");
    SqPrototypeU32 selected=0;
    for(SqPrototypeU32 bit=0;bit<16;bit++) {
        SqPrototypeU32 type=1u<<bit;
        if(!((SqPrototypeU32)mask&type))continue;
        if(selected) {
            SqPrefixObject012 separator=string_object(vm,"|");
            sq_string_concat025(vm,&expected,&separator,&expected);
            sq_prefix_clear(&separator);
        }
        selected++;
        SqPrefixObject012 name=string_object(vm,sq_lookup_type_name020(type));
        sq_string_concat025(vm,&expected,&name,&expected);
        sq_prefix_clear(&name);
    }
    const SqString015 *names=expected.value.reference;
    sq_lookup_raise_format020(vm,"parameter %d has an invalid type '%s' ; expected: '%s'",index,
        sq_lookup_type_name020(actual_type),(const char*)names->value);
    sq_prefix_clear(&expected);
}
