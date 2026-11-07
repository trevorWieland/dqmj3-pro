#include "execute.h"

static void pop_call(void *vm)
{
    SqPrototypeI32 count=sq_vm_call_count047(vm)-1;
    sq_vm_set_call_count047(vm,count);
    sq_prefix_clear(&sq_vm_current047(vm)->closure);
    sq_vm_set_current047(vm,count?sq_vm_call_stack047(vm)+count-1:0);
}

static SqPrototypeI32 negative_bits(SqPrototypeI32 value)
{
    SqPrototypeU32 bits=0u-(SqPrototypeU32)value;
    SqPrototypeI32 result;
    __builtin_memcpy(&result,&bits,sizeof(result));
    return result;
}

static void publish_frame(void *vm,const SqVmCallFrame022 *local)
{
    SqVmCallFrame022 *current=sq_vm_call_stack047(vm)+sq_vm_call_count047(vm);
    sq_vm_set_current047(vm,current);
    current->instruction=local->instruction;
    current->literals=local->literals;
    sq_prefix_assign(&current->closure,&local->closure);
    current->generator=local->generator;
    current->traps=local->traps;
    current->previous_base=local->previous_base;
    current->previous_top=local->previous_top;
    current->target=local->target;
    current->calls=local->calls;
    current->root=local->root;
    current->varargs_size=local->varargs_size;
    current->varargs_base=local->varargs_base;
    sq_vm_set_call_count047(vm,sq_vm_call_count047(vm)+1);
}

_Bool sq_vm_call_native047(SqVm040 *vm,SqNativeClosure013 *closure,SqPrototypeI32 arguments,SqPrototypeI32 base,
    SqPrefixObject012 *result,_Bool *suspend)
{
    SqPrototypeI32 depth=sq_vm_native_depth047(vm);
    if(depth>99) { sq_vm_call_error022(vm,"Native stack overflow");return 0; }
    SqPrototypeI32 check=closure->parameter_check;
    if((check>0 && check!=arguments)||(check<0 && arguments<negative_bits(check))) {
        sq_vm_call_error022(vm,"wrong number of parameters");return 0;
    }
    SqPrototypeU32 masks=closure->type_checks.size;
    for(SqPrototypeI32 index=0;index<arguments && (SqPrototypeU32)index<masks;index++) {
        const SqPrototypeI32 *values=closure->type_checks.values;
        SqPrototypeI32 mask=values[index];
        SqPrototypeU32 type=sq_lookup_stack047(vm)[base+index].type;
        if(mask!=-1 && !(type&(SqPrototypeU32)mask)) {
            sq_vm_call_type_error022(vm,index,mask,type);return 0;
        }
    }
    sq_vm_set_native_depth047(vm,depth+1);
    SqPrefixVector012 stack=sq_vm_stack_vector047(vm);
    if(sq_lookup_top047(vm)+10>(SqPrototypeI32)stack.size) {
        SqPrefixObject012 empty={0x01000001u,{.reference=0}};
        sq_prefix_vector_resize(&stack,stack.size+20,&empty);
        sq_vm_publish_stack047(vm,stack);
    }
    SqPrototypeI32 old_top=sq_lookup_top047(vm),old_base=sq_lookup_base047(vm);
    sq_vm_set_top047(vm,base+arguments);
    SqVmCallFrame022 local={0};
    local.closure.type=0x01000001u;
    SqPrefixObject012 owner={0x08000200u,{.reference=closure}};
    sq_prefix_retain(owner.type,owner.value);
    sq_prefix_assign(&local.closure,&owner);
    sq_prefix_release(owner.type,owner.value);
    local.previous_base=base-old_base;local.previous_top=old_top-old_base;local.calls=1;
    if(sq_vm_call_count047(vm)==sq_vm_allocated_calls047(vm)) {
        SqVmCallFrame022 empty={0};empty.closure.type=0x01000001u;
        SqPrototypeI32 allocated=sq_vm_allocated_calls047(vm)*2;
        SqVmCallVector022 vector=sq_vm_call_vector047(vm);
        sq_vm_call_frames_resize022(&vector,(SqPrototypeU32)allocated,&empty);
        sq_vm_publish_calls047(vm,vector);
        sq_vm_set_call_stack047(vm,vector.values);
        sq_vm_set_allocated_calls047(vm,allocated);
    }
    publish_frame(vm,&local);
    sq_vm_set_base047(vm,base);
    SqPrototypeU32 outers=closure->outers.size;
    for(SqPrototypeU32 index=0;index<outers;index++)sq_vm_push047(vm,closure->outers.values+index);
    if(closure->environment.type==0x08010000u) {
        const SqWeakReference014 *weak=closure->environment.value.reference;
        SqPrefixObject012 *receiver=sq_lookup_stack047(vm)+base;
        SqPrototypeU32 previous_type=receiver->type;
        SqPrefixValue012 previous_value=receiver->value;
        receiver->value=weak->object.value;
        receiver->type=weak->object.type;
        sq_prefix_retain(receiver->type,receiver->value);
        sq_prefix_release(previous_type,previous_value);
    }
    SqPrototypeI32 returned=closure->function(vm);
    sq_vm_set_native_depth047(vm,sq_vm_native_depth047(vm)-1);
    *suspend=returned==-666;
    if(returned<0 && !*suspend) {
        sq_vm_set_top047(vm,old_top);sq_vm_set_base047(vm,old_base);pop_call(vm);
        SqPrefixObject012 error;
        error=vm->error;
        sq_vm_raise_object047(vm,&error);
        sq_prefix_clear(&local.closure);
        return 0;
    }
    if(returned) {
        SqPrefixObject012 *top=sq_lookup_stack047(vm)+sq_lookup_top047(vm)-1;
        sq_prefix_assign(result,top);sq_prefix_clear(top);
    } else {
        SqPrefixObject012 empty={0x01000001u,{.reference=0}};
        sq_prefix_assign(result,&empty);
    }
    sq_vm_set_top047(vm,old_top);sq_vm_set_base047(vm,old_base);pop_call(vm);
    sq_prefix_clear(&local.closure);
    return 1;
}

_Bool sq_vm_native_bridge047(void *vm,SqNativeClosure013 *closure,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,_Bool *suspend)
{return sq_vm_call_native047(vm,closure,arguments,base,result,suspend);}
