#include "fixture.h"
#include "../squirrel-wave011/prototype_internal.h"
#include "../squirrel-wave019/table_internal.h"

static SqPrefixObject012 object(SqPrototypeU32 type,void *pointer)
{return(SqPrefixObject012){type,{.reference=pointer}};}

static SqPrototypeI32 fixture_capture_meta041(void *vm)
{
    SqCaptureFixture041 *fixture=&capture_fixture041;
    SqScriptClosure017 *closure=(void*)sq_lookup_shared020(vm)->common.chain;
    fixture_capture_event041(4,closure->defaults.size,closure->defaults.capacity,closure->reference.prefix.references);
    closure->defaults.values=fixture_class_reallocate_saved034(0,0,sizeof(SqPrefixObject012));
    closure->defaults.size=closure->defaults.capacity=1;
    closure->defaults.values[0]=(SqPrefixObject012){0x01000001u,{.reference=0}};
    sq_vm_push022(vm,&fixture->value);return 1;
}

static SqString015 *string(const char *value)
{return fn_0019ba68(fixture_state019(0),(const SqStringByte015*)value,-1);}

void fixture_capture_run041(void)
{
    SqCaptureFixture041 *fixture=&capture_fixture041;SqPrototypeU32 variant=fixture->variant;
    void *vm=fixture_vm020();
    SqPrefixObject012 value=object(0x08000010u,string("retained-value"));sq_prefix_assign(&fixture->value,&value);
    value=object(0x08000010u,string("default-value"));sq_prefix_assign(&fixture->default_value,&value);
    _Bool error=variant<60,mutation=variant>=60&&variant<=62;
    SqPrototypeI32 outers=error?(variant&1?2:1):(mutation?1:0),defaults=mutation?1:0;
    if(variant==68)outers=1;if(variant==69)defaults=1;
    SqPrototype011 *function=fixture_prototype038(1,0,1,0,outers,defaults);fixture->function=function;
    function->reference.references=variant==65?0xffffffffu:1;
    fixture_instruction038(function,0,SQ28_RETURN,255,0,0,0);
    if(defaults)function->defaults[0]=3;
    SqPrefixObject012 *stack=sq_lookup_stack020(vm);
    sq_prefix_assign(stack+2,&fixture->value);sq_prefix_assign(stack+3,&fixture->default_value);
    sq_table_delegate019(fixture_table_at020(0x9000),0);
    SqPrefixObject012 receiver=object(0x0a000020u,fixture_table_at020(0x9000));sq_prefix_assign(stack,&receiver);
    if(error||mutation) {
        SqPrototypeU32 lengths[]={1,49,50,51,80,80};fixture->key_length=error?lengths[variant-54]:9;
        for(SqPrototypeU32 index=0;index<fixture->key_length;index++)fixture->key[index]=(SqStringByte015)('a'+index%26);
        if(error&&variant==59)fixture->key[11]=0;fixture->key[fixture->key_length]=0;
        SqString015 *key=fn_0019ba68(fixture_state019(0),fixture->key,(SqPrototypeI32)fixture->key_length);
        for(SqPrototypeI32 index=0;index<outers;index++) {
            function->outers[index].kind=index==outers-1?1:0;
            if(index==outers-1){value=object(0x08000010u,key);sq_prefix_assign(&function->outers[index].source,&value);}
            else function->outers[index].source=(SqPrefixObject012){0x05000002u,{.integer=2}};
        }
    }
    if(error) {
        fixture->old_error_function=fixture_prototype038(1,0,1,0,0,0);
        value=object(0x08002000u,fixture->old_error_function);
        sq_prefix_assign(&fixture_vm020()->error,&value);
    }
    if(mutation) {
        SqNativeClosure013 *native=fixture_native019(1);*native=(SqNativeClosure013){0};
        native->reference.prefix=(SqPrototypePrefix011){&sq_native_closure_vtable013,1,0};
        native->shared=fixture_state019(0);native->environment.type=native->name.type=0x01000001u;
        native->reference.next=native->shared->chain;if(native->shared->chain)native->shared->chain->previous=&native->reference;
        native->shared->chain=&native->reference;native->function=fixture_capture_meta041;native->parameter_check=2;
        value=object(0x08000200u,native);
        sq_table_new_slot019(fixture_table_at020(0x9100),sq_lookup_names020(&fixture_shared020()->common)->values+7,&value);
        sq_table_delegate019(fixture_table_at020(0x9000),fixture_table_at020(0x9100));
    }
    if(variant==63||variant==64) {
        fixture->old_destination=fixture_prototype038(1,0,1,0,0,0);
        value=object(0x08002000u,fixture->old_destination);sq_prefix_assign(&fixture->destination,&value);
    }
    if(variant>=67)fixture->fail_allocation=1;
    fixture->result=sq_script_create041(vm,&fixture->destination,variant==66?0:function);
    if(fixture->destination.type==0x08000100u)fixture->created=fixture->destination.value.reference;
    if(error)fixture->created=(void*)fixture_shared020()->common.chain;
    fixture_capture_event041(5,fixture->result,fixture->created?fixture->created->reference.prefix.references:0,
        fixture->created?fixture->created->outers.size:0);
    if(fixture->cleanup) {
        if(error)sq_script_closure_release017(fixture->created);
        sq_prefix_clear(&fixture->destination);sq_prefix_clear(&fixture->weak);
        sq_prefix_clear(&fixture_vm020()->error);
        if(variant!=65){value=object(0x08002000u,function);sq_prefix_release(value.type,value.value);}
        sq_prefix_clear(&fixture->value);sq_prefix_clear(&fixture->default_value);
        for(SqPrototypeU32 index=0;index<32;index++)sq_execute_clear028(stack+index);
    }
}
