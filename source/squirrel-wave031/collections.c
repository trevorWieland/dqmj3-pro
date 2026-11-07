#include "execute.h"
#include "../squirrel-wave019/table_internal.h"

static SqPrefixObject012 *slot(void *vm,SqPrototypeI32 index)
{return sq_lookup_stack020(vm)+sq_lookup_base020(vm)+index;}
static void new_array(void *vm,SqPrefixObject012 *destination,SqPrototypeU32 capacity)
{
    SqOpaqueArray012 *array=sq_opaque_array_create012(sq_native_creation_shared016(vm),0);
    if(!array)sq_execute_unsupported028(vm,-3131);
    SqPrefixObject012 object={0x08000040u,{.reference=array}};sq_prefix_retain(object.type,object.value);
    sq_execute_assign028(destination,&object);sq_prefix_release(object.type,object.value);
    if(!capacity)capacity=4;
    array->vector.values=sq_reallocate(array->vector.values,array->vector.capacity*sizeof(SqPrefixObject012),capacity*sizeof(SqPrefixObject012));array->vector.capacity=capacity;
}
static void append_array(SqOpaqueArray012 *array,const SqPrefixObject012 *input)
{
    SqPrefixObject012 value=*input;sq_prefix_retain(value.type,value.value);
    if(array->vector.size>=array->vector.capacity) {
        SqPrototypeU32 capacity=array->vector.size?array->vector.size*2:4;
        array->vector.values=sq_reallocate(array->vector.values,array->vector.capacity*sizeof(SqPrefixObject012),capacity*sizeof(SqPrefixObject012));array->vector.capacity=capacity;
    }
    SqPrefixObject012 *destination=array->vector.values+array->vector.size++;*destination=value;
    sq_prefix_retain(destination->type,destination->value);sq_prefix_release(value.type,value.value);
}
static _Bool get(void *vm,const SqPrefixObject012 *self,const SqPrefixObject012 *key,SqPrototypeU32 raw,SqPrototypeU32 rooted)
{
    if(self->type==0x0a000020u) {
        SqTable019 *table=self->value.reference;
        if(table->delegate||key->type==0x01000001u)sq_execute_unsupported028(vm,-3120);
        if(!sq_table_find_node019(table,key)&&!raw)sq_execute_unsupported028(vm,-3121);
    } else if(self->type==0x08000040u) {
        if(key->type!=0x05000002u)sq_execute_unsupported028(vm,-3122);
    } else sq_execute_unsupported028(vm,-3123);
    SqPrefixObject012 owned={0x01000001u,{.reference=0}};
    _Bool found=sq_lookup_get020(vm,self,key,&owned,raw,rooted);
    if(found) {
        SqPrefixObject012 previous=sq_execute_temporary_value028(vm);
        __builtin_memcpy(sq_execute_temporary028(vm),&owned,sizeof(owned));sq_prefix_release(previous.type,previous.value);
    } else sq_prefix_release(owned.type,owned.value);
    return found;
}
static _Bool set(void *vm,const SqPrefixObject012 *self,const SqPrefixObject012 *key,const SqPrefixObject012 *value)
{
    if(self->type==0x0a000020u) {
        SqTable019 *table=self->value.reference;
        if(sq_table_set019(table,key,value))return 1;
        sq_execute_unsupported028(vm,-3113);
    }
    if(self->type!=0x08000040u||key->type!=0x05000002u)sq_execute_unsupported028(vm,-3114);
    SqOpaqueArray012 *array=self->value.reference;SqPrototypeI32 index=key->value.integer;
    if(index<0||(SqPrototypeU32)index>=array->vector.size)sq_execute_unsupported028(vm,-3115);
    sq_execute_assign028(array->vector.values+index,value);return 1;
}
_Bool sq_execute_collections031(void *vm,const SqInstruction028 *instruction)
{
    SqPrototypeI32 argument=instruction->argument1;
    switch(instruction->opcode) {
    case 30: {
        SqTable019 *table=sq_execute_allocate_table031(sizeof(SqTable019));if(!table)sq_execute_unsupported028(vm,-3130);
        sq_table_initialize019(table,sq_native_creation_shared016(vm),argument);table->delegate=0;
        SqPrefixObject012 object={0x0a000020u,{.reference=table}};sq_prefix_retain(object.type,object.value);
        sq_execute_assign028(slot(vm,instruction->argument0),&object);sq_prefix_release(object.type,object.value);return 1;
    }
    case 31:new_array(vm,slot(vm,instruction->argument0),(SqPrototypeU32)argument);return 1;
    case 32:{SqPrefixObject012 *self=slot(vm,instruction->argument0);if(self->type!=0x08000040u)sq_execute_unsupported028(vm,-3132);
        const SqPrefixObject012 *value=instruction->argument3?sq_vm_current022(vm)->literals+argument:slot(vm,argument);append_array(self->value.reference,value);return 1;}
    case 7:case 8:case 9:case 14: {
        _Bool preparing=instruction->opcode==7||instruction->opcode==8,literal=instruction->opcode==8||instruction->opcode==9;
        const SqPrefixObject012 *key=literal?sq_vm_current022(vm)->literals+argument:slot(vm,preparing?argument:instruction->argument2);
        const SqPrefixObject012 *self=slot(vm,preparing||literal?instruction->argument2:argument);
        if(!get(vm,self,key,0,1))sq_execute_unsupported028(vm,-3116);
        if(preparing)sq_execute_assign028(slot(vm,instruction->argument3),self);
        SqPrefixObject012 value=sq_execute_temporary_value028(vm);sq_execute_assign028(slot(vm,instruction->argument0),&value);return 1;
    }
    case 11: {
        SqPrefixObject012 *self=slot(vm,argument),*key=slot(vm,instruction->argument2),*value=slot(vm,instruction->argument3);
        if(self->type!=0x0a000020u||key->type==0x01000001u||((SqTable019*)self->value.reference)->delegate)sq_execute_unsupported028(vm,-3117);
        sq_table_new_slot019(self->value.reference,key,value);
        if(instruction->argument0!=instruction->argument3)sq_execute_assign028(slot(vm,instruction->argument0),value);return 1;
    }
    case 13: {
        if(!set(vm,slot(vm,argument),slot(vm,instruction->argument2),slot(vm,instruction->argument3)))sq_execute_unsupported028(vm,-3118);
        if(instruction->argument0!=instruction->argument3)sq_execute_assign028(slot(vm,instruction->argument0),slot(vm,instruction->argument3));return 1;
    }
    case 41: {
        _Bool found=get(vm,slot(vm,argument),slot(vm,instruction->argument2),1,0);
        SqPrefixObject012 value={0x01000008u,{.bits=found}};sq_execute_assign028(slot(vm,instruction->argument0),&value);return 1;
    }
    default:return 0;
    }
}
