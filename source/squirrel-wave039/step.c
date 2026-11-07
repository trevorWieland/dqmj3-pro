#include "iteration.h"
#include "../squirrel-wave025/type_error.h"

static SqPrototypeI32 array_next(SqOpaqueArray012 *array,const SqPrefixObject012 *cursor,SqPrefixObject012 *key,SqPrefixObject012 *value)
{
    SqPrototypeU32 position=(SqPrototypeU32)sq_class_clone_cursor030(cursor);
    if(position>=array->vector.size)return -1;
    sq_prefix_scalar(key,0x05000002u,position);
    SqPrefixObject012 incoming=array->vector.values[position];
    if(incoming.type==0x08010000u)incoming=((SqWeakReference014*)incoming.value.reference)->object;
    sq_prefix_assign(value,&incoming);return (SqPrototypeI32)(position+1);
}
static _Bool meta_next(void *vm,const SqPrefixObject012 *self,SqPrefixObject012 *key,SqPrefixObject012 *value,SqPrefixObject012 *cursor,SqPrototypeI32 exit_displacement,SqPrototypeI32 *jump)
{
    SqPrefixObject012 next={0x01000001u,{.reference=0}};
    sq_lookup_push020(vm,self);sq_lookup_push020(vm,cursor);
    _Bool success=sq_lookup_meta_call020(vm,self->value.reference,9,2,&next);
    if(success) {
        sq_prefix_assign(key,&next);sq_prefix_assign(cursor,key);
        if(next.type==0x01000001u)*jump=exit_displacement;
        else if(sq_iteration_get039(vm,self,&next,value))*jump=1;
        else{sq_vm_call_error022(vm,"_nexti returned an invalid idx");success=0;}
    } else sq_vm_call_error022(vm,"_nexti failed");
    sq_prefix_release(next.type,next.value);return success;
}
_Bool sq_iteration_step039(void *vm,const SqPrefixObject012 *self,SqPrefixObject012 *key,SqPrefixObject012 *value,SqPrefixObject012 *cursor,SqPrototypeI32 key_register,SqPrototypeI32 exit_displacement,SqPrototypeI32 *jump)
{
    (void)key_register;SqPrototypeI32 next;
    if(self->type==0x08000040u)next=array_next(self->value.reference,cursor,key,value);
    else if(self->type==0x08000010u)next=sq_string_next039(self->value.reference,cursor,key,value);
    else if(self->type==0x0a000020u)next=sq_table_next039(self->value.reference,0,cursor,key,value);
    else if(self->type==0x08004000u)next=sq_class_next039(self->value.reference,cursor,key,value);
    else if(self->type==0x0a008000u||self->type==0x0a000080u) {
        SqTable019 *delegate;
        if(self->type==0x0a008000u)delegate=((SqClassInstance030*)self->value.reference)->delegate;
        else delegate=((SqLookupUserdataStorage020*)self->value.reference)->delegate;
        if(!delegate)return 0;
        return meta_next(vm,self,key,value,cursor,exit_displacement,jump);
    } else if(self->type==0x08000400u)sq_iteration_generator_unsupported039(self->value.reference);
    else {
        sq_lookup_raise_format020(vm,"cannot iterate %s",sq_lookup_type_name020(self->type));return 0;
    }
    if(next==-1){*jump=exit_displacement;return 1;}
    sq_prefix_scalar(cursor,0x05000002u,(SqPrototypeU32)next);*jump=1;return 1;
}
