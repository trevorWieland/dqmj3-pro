#include "fixture.h"
#include "../squirrel-wave019/table_internal.h"
#include "../squirrel-wave015/string.h"

static SqPrefixObject012 object(SqPrototypeU32 type,void *pointer)
{return(SqPrefixObject012){type,{.reference=pointer}};}

static SqPrototypeI32 fixture_lookup_capture038(void *vm)
{
    SqCaptureFixture038 *fixture=&capture_fixture038;
    SqScriptClosure017 *head=(void*)sq_lookup_shared020(vm)->common.chain;
    fixture->meta_calls++;fixture->meta_function=head->function.value.reference==fixture->child_function;
    fixture->meta_references=head->reference.prefix.references;
    fixture->meta_outers=head->outers.size;fixture->meta_defaults=head->defaults.size;
    if(fixture->variant>=48&&fixture->meta_calls==1) {
        while(head->outers.size<head->outers.capacity)
            head->outers.values[head->outers.size++]=(SqPrefixObject012){0x01000001u,{.reference=0}};
    }
    sq_vm_push022(vm,&fixture->value);return 1;
}

static void value(void)
{
    SqCaptureFixture038 *fixture=&capture_fixture038;
    SqPrototypeU32 kind=(fixture->variant/2)%6;
    SqPrefixObject012 temporary={0x05000002u,{.integer=1700+(SqPrototypeI32)fixture->variant}};
    if(kind==1)temporary=object(0x08000010u,fn_0019ba68(fixture_state019(0),(const SqStringByte015*)"captured\xff",9));
    if(kind==2)temporary=object(0x08002000u,fixture_prototype038(1,0,1,0,0,0));
    if(kind==3) {
        SqNativeClosure013 *native=fixture_native019(2);
        temporary=object(0x08000200u,native);
    }
    if(kind==4) {
        SqPrefixObject012 target=object(0x08000010u,fn_0019ba68(fixture_state019(0),(const SqStringByte015*)"weak-captured",13));
        sq_prefix_assign(&fixture->anchor,&target);
        temporary=object(0x08010000u,fn_00233b7c(target.value.reference,target.type));
    }
    if(kind==5) {
        SqPrototype011 *function=fixture_prototype038(1,0,1,0,0,0);
        fixture_instruction038(function,0,SQ28_RETURN,255,0,0,0);
        if(!sq_script_create038(fixture_vm020(),&fixture->value,function))sq_class_failure030();
        return;
    }
    sq_prefix_assign(&fixture->value,&temporary);
}

void fixture_capture_program038(void)
{
    SqCaptureFixture038 *fixture=&capture_fixture038;
    SqPrototypeU32 capture=fixture->variant>=48?3:fixture->variant/12;_Bool defaults=fixture->variant&1;
    _Bool growing=fixture->variant>=48,parent_outer=capture==2||fixture->variant>=52;
    void *vm=fixture_vm020();fixture_execute_storage034();value();
    if(defaults) {
        SqPrefixObject012 string=object(0x08000010u,fn_0019ba68(fixture_state019(0),(const SqStringByte015*)"default\x80",8));
        sq_prefix_assign(&fixture->default_value,&string);
    }
    SqPrototype011 *child=fixture_prototype038(defaults?5:2,0,defaults?2:1,0,growing?2:1,defaults?1:0);
    fixture->child_function=child;child->outers[0].kind=capture==2?2:(capture?1:0);
    child->outers[0].source=(SqPrefixObject012){0x05000002u,{.integer=capture==2?0:2}};
    if(capture==1||capture==3) {
        SqPrefixObject012 key=object(0x08000010u,fn_0019ba68(fixture_state019(0),(const SqStringByte015*)"capture-key",11));
        sq_prefix_assign(&child->outers[0].source,&key);
    }
    if(growing) {
        child->outers[1].kind=(SqPrototypeI32)((fixture->variant-48)/2);
        if(child->outers[1].kind==1)sq_prefix_assign(&child->outers[1].source,&child->outers[0].source);
        else child->outers[1].source=(SqPrefixObject012){0x05000002u,{.integer=parent_outer?0:2}};
    }
    if(defaults)child->defaults[0]=3;
    fixture_instruction038(child,0,SQ28_LOADFREE,2,0,0,0);
    if(defaults) {
        fixture_instruction038(child,1,31,3,0,0,0);
        fixture_instruction038(child,2,32,3,2,0,0);
        fixture_instruction038(child,3,32,3,1,0,0);
        fixture_instruction038(child,4,SQ28_RETURN,1,3,0,0);
    } else fixture_instruction038(child,1,SQ28_RETURN,1,2,0,0);
    SqPrototype011 *parent=fixture_prototype038(5,2,1,1,parent_outer?1:0,0);
    fixture->parent_function=parent;
    SqPrefixObject012 child_object=object(0x08002000u,child);
    sq_prefix_assign(parent->functions,&child_object);
    sq_prefix_assign(parent->literals,&fixture->value);sq_prefix_assign(parent->literals+1,&fixture->default_value);
    if(parent_outer) {
        parent->outers[0].kind=0;parent->outers[0].source=(SqPrefixObject012){0x05000002u,{.integer=2}};
        sq_prefix_assign(sq_lookup_stack020(vm)+2,&fixture->value);
    }
    fixture_instruction038(parent,0,parent_outer?SQ28_LOADNULLS:SQ28_LOAD,2,parent_outer?1:0,0,0);
    fixture_instruction038(parent,1,SQ28_LOAD,3,1,0,0);
    fixture_instruction038(parent,2,48,1,0,0,0);
    fixture_instruction038(parent,3,SQ28_LOADNULLS,2,2,0,0);
    fixture_instruction038(parent,4,SQ28_RETURN,1,1,0,0);
    if(capture==1) {
        if(!sq_table_new_slot019(fixture_table_at020(0x9000),&child->outers[0].source,&fixture->value))sq_class_failure030();
    }
    if(capture==3) {
        SqNativeClosure013 *native=fixture_native019(1);*native=(SqNativeClosure013){0};
        native->reference.prefix=(SqPrototypePrefix011){&sq_native_closure_vtable013,1,0};
        native->shared=fixture_state019(0);native->environment.type=native->name.type=0x01000001u;
        native->reference.next=native->shared->chain;
        if(native->shared->chain)native->shared->chain->previous=&native->reference;
        native->shared->chain=&native->reference;
        native->function=fixture_lookup_capture038;native->parameter_check=2;
        SqPrefixObject012 method=object(0x08000200u,native);
        sq_table_new_slot019(fixture_table_at020(0x9100),sq_lookup_names020(&fixture_shared020()->common)->values+7,&method);
        sq_table_delegate019(fixture_table_at020(0x9000),fixture_table_at020(0x9100));
    }
    if(!sq_script_create038(vm,&fixture->parent,parent))sq_class_failure030();
    sq_execute_assign028(sq_lookup_stack020(vm),&(SqPrefixObject012){0x0a000020u,{.reference=fixture_table_at020(0x9000)}});
    sq_execute_assign028(sq_lookup_stack020(vm)+2,&(SqPrefixObject012){0x01000001u,{.reference=0}});
    sq_vm_set_top022(vm,1);fixture->parent_calls++;
    if(!sq_vm_call022(vm,&fixture->parent,1,0,&fixture->child,0))sq_class_failure030();
    fixture_capture_observe038(1);
    sq_prefix_clear(&fixture->parent);
    sq_prefix_clear(&fixture->value);sq_prefix_clear(&fixture->default_value);
    if(capture==1) {
        SqPrefixObject012 null={0x01000001u,{.reference=0}};
        if(!sq_table_set019(fixture_table_at020(0x9000),&child->outers[0].source,&null))sq_class_failure030();
    }
    if((fixture->variant/2)%6==4)sq_prefix_clear(&fixture->anchor);
    fixture_capture_observe038(2);
    sq_vm_set_top022(vm,1);fixture->child_calls++;
    if(!sq_vm_call022(vm,&fixture->child,1,0,&fixture->result_value,0))sq_class_failure030();
    fixture_capture_observe038(3);
    if(fixture->cleanup) {
        sq_prefix_clear(&fixture->child);fixture_capture_observe038(4);
        sq_prefix_clear(&fixture->result_value);
        sq_execute_clear028(sq_execute_temporary028(vm));
        fixture_cleanup_stack034();sq_prefix_clear(&fixture_vm020()->error);
    }
    fixture_capture_observe038(5);fixture->result=1;
}
