#include "contract_fixture.h"
extern SqPrototypeU32 fixture_original_call022(void *,const SqPrefixObject012 *,SqPrototypeI32,SqPrototypeI32,SqPrefixObject012 *,SqPrototypeU32);
extern SqPrototypeI32 fixture_original_array022(void *);
extern void *fixture_original_assign022(void *,const void *);
extern void fixture_original_push022(void *,const SqPrefixObject012 *);
SqCallContractFixture022 contract_fixture022;

static void assign(void *destination,const SqPrefixObject012 *value)
{
    if(call_fixture022.source)sq_prefix_assign(destination,value);else fixture_original_assign022(destination,value);
}

void fixture_contract_reset022(void){contract_fixture022=(SqCallContractFixture022){0};}

void fixture_contract_prepare022(SqPrototypeU32 mode,SqPrototypeU32 raise_error)
{
    fixture_prepare022(5,mode>=14?2:1,mode==14?2:0);contract_fixture022.mode=mode;contract_fixture022.raise_error=raise_error;
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    contract_fixture022.callable=contract_fixture022.script_owner=empty;
    if(mode==1)contract_fixture022.callable=(SqPrefixObject012){0x05000002u,{.integer=99}};
    if(mode==2||mode==5||mode==6) {
        SqScriptClosure017 *script=(void*)(call_fixture022.memory+0x2c000);*script=(SqScriptClosure017){0};
        script->reference.prefix=(SqPrototypePrefix011){&sq_script_closure_vtable017,1,0};
        script->shared=&fixture_shared022()->common;script->environment=empty;
        script->function=(SqPrefixObject012){0x08002000u,{.reference=fixture_prototype022(0)}};
        fixture_prototype022(0)->reference.references++;
        script->reference.next=script->shared->chain;
        if(script->reference.next)script->reference.next->previous=&script->reference;
        script->shared->chain=&script->reference;
        contract_fixture022.script_owner=(SqPrefixObject012){0x08000100u,{.reference=script}};
        if(mode==2)contract_fixture022.callable=contract_fixture022.script_owner;
    }
    if(mode>=3&&mode<=7) {
        SqLookupClassStorage020 *klass=(void*)(call_fixture022.memory+0x2e000);*klass=(SqLookupClassStorage020){0};
        klass->reference.prefix.references=1;
        contract_fixture022.callable=(SqPrefixObject012){0x08004000u,{.reference=klass}};
    }
}

void fixture_contract_call022(SqPrototypeU32 source)
{
    call_fixture022.source=source;call_fixture022.phase=2;
    const SqPrefixObject012 *callable=&contract_fixture022.callable;
    if(contract_fixture022.mode>=10)callable=sq_lookup_stack020(fixture_vm022())+sq_lookup_top020(fixture_vm022())-1;
    call_fixture022.returned=source?sq_vm_call022(fixture_vm022(),callable,2,3,fixture_result022(),contract_fixture022.raise_error):
        fixture_original_call022(fixture_vm022(),callable,2,3,fixture_result022(),contract_fixture022.raise_error);
}

_Bool fixture_execute_contract022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 target,SqPrototypeI32 arguments,
    SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeU32 execution_type)
{
    contract_fixture022.execute_visits++;contract_fixture022.target=target;contract_fixture022.arguments=arguments;
    contract_fixture022.base=base;contract_fixture022.transported_raise_error=raise_error;contract_fixture022.execution_type=(SqPrototypeI32)execution_type;
    if(vm!=fixture_vm022()||callable->type!=0x08000100u){call_fixture022.fault=10;return 0;}
    SqPrefixObject012 receiver=sq_lookup_stack020(vm)[base];
    contract_fixture022.receiver_type=receiver.type;contract_fixture022.receiver_payload=fixture_payload022(receiver);
    if(contract_fixture022.mode==6)return 0;
    SqPrefixObject012 value={0x08002000u,{.reference=fixture_prototype022(0)}};
    assign(result,&value);return 1;
}

_Bool fixture_class_contract022(void *vm,SqLookupClassStorage020 *klass,SqPrefixObject012 *instance,SqPrefixObject012 *constructor)
{
    contract_fixture022.class_visits++;
    if(vm!=fixture_vm022()||klass!=(void*)(call_fixture022.memory+0x2e000)){call_fixture022.fault=11;return 0;}
    SqPrefixObject012 value={0x08002000u,{.reference=fixture_prototype022(0)}};assign(instance,&value);
    if(contract_fixture022.mode==4||contract_fixture022.mode==7) {
        SqPrefixObject012 native={0x08000200u,{.reference=call_fixture022.memory+0x20000}};assign(constructor,&native);
        if(contract_fixture022.mode==7) {
            SqPrefixObject012 empty={0x01000001u,{.reference=0}};
            assign(sq_lookup_stack020(vm)+sq_lookup_top020(vm)-1,&empty);
        }
    } else if(contract_fixture022.mode>=5)assign(constructor,&contract_fixture022.script_owner);
    return 1;
}

SqPrototypeI32 fixture_native_dispatch022(void *vm)
{
    if(!contract_fixture022.mode||contract_fixture022.mode==4||contract_fixture022.mode==7)
        return call_fixture022.source?sq_vm_array_native022(vm):fixture_original_array022(vm);
    contract_fixture022.native_visits++;
    contract_fixture022.native_top=sq_lookup_top020(vm);contract_fixture022.native_base=sq_lookup_base020(vm);
    contract_fixture022.native_calls=sq_vm_call_count022(vm);contract_fixture022.native_depth=sq_vm_native_depth022(vm);
    SqPrototypeU32 mode=contract_fixture022.mode;
    if(mode==11||mode==13) {
        SqPrefixObject012 value={0x08002000u,{.reference=fixture_prototype022(0)}};
        if(call_fixture022.source)sq_vm_push022(vm,&value);else fixture_original_push022(vm,&value);
    }
    return mode==10?0:mode==11?1:mode==12||mode>=14?-1:-666;
}

void fixture_contract_cleanup022(SqPrototypeU32 source)
{
    fixture_cleanup022(source);
    SqPrefixObject012 empty={0x01000001u,{.reference=0}};
    if(contract_fixture022.script_owner.type&0x08000000u)assign(&contract_fixture022.script_owner,&empty);
}

SqPrototypeU32 fixture_contract_snapshot022(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    SqPrototypeU32 count=fixture_snapshot022(output,capacity);
    if(!count||capacity<count+16)return 0;
    output[count++]=contract_fixture022.mode;output[count++]=contract_fixture022.execute_visits;output[count++]=contract_fixture022.class_visits;
    output[count++]=contract_fixture022.native_visits;output[count++]=(SqPrototypeU32)contract_fixture022.target;
    output[count++]=(SqPrototypeU32)contract_fixture022.arguments;output[count++]=(SqPrototypeU32)contract_fixture022.base;
    output[count++]=contract_fixture022.transported_raise_error;output[count++]=(SqPrototypeU32)contract_fixture022.execution_type;
    output[count++]=contract_fixture022.receiver_type;output[count++]=contract_fixture022.receiver_payload;
    output[count++]=(SqPrototypeU32)contract_fixture022.native_top;output[count++]=(SqPrototypeU32)contract_fixture022.native_base;
    output[count++]=(SqPrototypeU32)contract_fixture022.native_calls;output[count++]=(SqPrototypeU32)contract_fixture022.native_depth;
    output[count++]=sizeof(SqVmCallFrame022);
    return count;
}
