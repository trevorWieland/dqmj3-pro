#include "execute.h"

#if __SIZEOF_POINTER__ == 4
#define OBJECT_OFFSET(name,target) target
#else
#define OBJECT_OFFSET(name,target) __builtin_offsetof(SqExecuteStorage028,name)
#endif

void sq_execute_assign028(void *destination,const SqPrefixObject012 *source)
{
    SqPrefixObject012 incoming,old;
    __builtin_memcpy(&incoming,source,sizeof(incoming));__builtin_memcpy(&old,destination,sizeof(old));
    sq_prefix_retain(incoming.type,incoming.value);__builtin_memcpy(destination,&incoming,sizeof(incoming));sq_prefix_release(old.type,old.value);
}
void sq_execute_clear028(void *object)
{SqPrefixObject012 empty={0x01000001u,{.reference=0}};sq_execute_assign028(object,&empty);}
void sq_execute_scalar028(void *object,SqPrototypeU32 type,SqPrototypeU32 bits)
{
    SqPrefixObject012 old,value={type,{.bits=bits}};__builtin_memcpy(&old,object,sizeof(old));
    sq_prefix_release(old.type,old.value);__builtin_memcpy(object,&value,sizeof(value));
}
static SqPrefixObject012 object(const void *vm,SqPrototypeU32 offset)
{SqPrefixObject012 value;__builtin_memcpy(&value,(const unsigned char*)vm+offset,sizeof(value));return value;}
void *sq_execute_temporary028(void *vm){return(unsigned char*)vm+OBJECT_OFFSET(temporary,88);}
SqPrefixObject012 sq_execute_temporary_value028(const void *vm){return object(vm,OBJECT_OFFSET(temporary,88));}
void *sq_execute_debug_slot028(void *vm){return(unsigned char*)vm+OBJECT_OFFSET(debug_hook,80);}
void *sq_execute_error_handler_slot028(void *vm){return(unsigned char*)vm+OBJECT_OFFSET(error_handler,72);}
SqPrefixObject012 sq_execute_debug_value028(const void *vm){return object(vm,OBJECT_OFFSET(debug_hook,80));}
SqPrefixObject012 sq_execute_error_handler_value028(const void *vm){return object(vm,OBJECT_OFFSET(error_handler,72));}
SqPrefixObject012 sq_execute_root_value028(const void *vm){return object(vm,56);}
SqPrefixVector012 sq_execute_varargs028(const void *vm)
{SqPrefixVector012 value;__builtin_memcpy(&value,(const unsigned char*)vm+OBJECT_OFFSET(varargs,36),sizeof(value));return value;}
void sq_execute_publish_varargs028(void *vm,SqPrefixVector012 value)
{__builtin_memcpy((unsigned char*)vm+OBJECT_OFFSET(varargs,36),&value,sizeof(value));}
void sq_execute_clear_stack028(void *vm,SqPrototypeI32 old_top)
{while(old_top>=sq_lookup_top020(vm))sq_execute_clear028(sq_lookup_stack020(vm)+old_top--);}
_Bool sq_execute_false028(const SqPrefixObject012 *value)
{
    if(value->type==0x05000004u&&value->value.floating==0.0f)return 1;
    return value->type&0x08000000u?value->value.reference==0:value->value.bits==0;
}
