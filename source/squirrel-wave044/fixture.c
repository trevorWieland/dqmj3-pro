#include "fixture.h"
#include "../squirrel-wave011/prototype_internal.h"

SqGeneratorFixture044 generator_fixture044;

SqPrefixState012 *fixture_shared044(void)
{
    SqSharedState040 *state=(void*)(generator_fixture044.memory+0x1000);
    return &state->common.common.common.common;
}

SqPrototypeU32 fixture_bind044(void *memory,SqPrototypeU32 bytes)
{
    if(!memory||bytes<0x80000)return 0;
    generator_fixture044.memory=memory;return 1;
}

void fixture_prepare044(SqPrototypeU32 variant,SqPrototypeU32 cleanup)
{
    unsigned char *memory=generator_fixture044.memory;
    generator_fixture044=(SqGeneratorFixture044){0};generator_fixture044.memory=memory;
    generator_fixture044.variant=variant;generator_fixture044.cleanup=cleanup;generator_fixture044.bump=0x10000;
    for(SqPrototypeU32 i=0;i<0x80000;i++)memory[i]=0;
    SqSharedState040 *state=(void*)(memory+0x1000);*state=(SqSharedState040){0};
    SqStringTable015 *table=(void*)(memory+0x3000);*table=(SqStringTable015){(void*)(memory+0x3100),4,0};
    sq_string_provision_table015(fixture_shared044(),table);
#if __SIZEOF_POINTER__ == 8
    state->fields.strings=table;
#endif
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    generator_fixture044.script=generator_fixture044.value=generator_fixture044.weak=null;
}

static SqPrefixObject012 fixture_prototype044(void)
{
    SqPrototype011 *function=fixture_allocate044(__builtin_offsetof(SqPrototype011,instructions),1);
    *function=(SqPrototype011){0};function->reference.vtable=&sq_prototype_vtable011;
    function->name.type=function->source_name.type=0x01000001u;
    return(SqPrefixObject012){0x08002000u,{.reference=function}};
}

SqPrefixObject012 fixture_new_script044(void)
{
    SqPrefixObject012 prototype=fixture_prototype044();
    SqScriptClosure017 *closure=fixture_allocate044(sizeof(*closure),2);*closure=(SqScriptClosure017){0};
    closure->reference.prefix.vtable=&sq_script_closure_vtable017;closure->shared=fixture_shared044();
    closure->environment.type=closure->function.type=0x01000001u;sq_prefix_assign(&closure->function,&prototype);
    closure->reference.next=closure->shared->chain;
    if(closure->shared->chain)closure->shared->chain->previous=&closure->reference;
    closure->shared->chain=&closure->reference;
    return(SqPrefixObject012){0x08000100u,{.reference=closure}};
}

SqPrefixObject012 fixture_value044(SqPrototypeU32 kind)
{
    if(kind==0)return fixture_prototype044();
    if(kind==1)return(SqPrefixObject012){0x08000010u,{.reference=fn_0019ba68(fixture_shared044(),(const SqStringByte015*)"generator\xff",10)}};
    if(kind==2)return fixture_new_script044();
    SqNativeClosure013 *native=fixture_allocate044(sizeof(*native),3);*native=(SqNativeClosure013){0};
    native->reference.prefix.vtable=&sq_native_closure_vtable013;native->shared=fixture_shared044();
    native->environment.type=native->name.type=0x01000001u;
    native->reference.next=native->shared->chain;if(native->shared->chain)native->shared->chain->previous=&native->reference;
    native->shared->chain=&native->reference;
    return(SqPrefixObject012){0x08000200u,{.reference=native}};
}

SqPrototypeU32 fixture_execute044(void)
{
    SqGeneratorFixture044 *fixture=&generator_fixture044;
    SqPrefixObject012 script=fixture_new_script044();sq_prefix_assign(&fixture->script,&script);
    fixture->generator=sq_generator_create044(fixture_shared044(),script.value.reference);
    if(!fixture->generator){fixture->result=0;if(fixture->cleanup)sq_prefix_clear(&fixture->script);return !fixture->fault;}
    fixture->result=1;SqGenerator044 *generator=fixture->generator;generator->reference.prefix.references=1;
    if(fixture->variant==1)generator->reference.prefix.references=2;
    if(fixture->variant==16)sq_prefix_clear(&fixture->script);
    if(fixture->variant==13)sq_prefix_assign(&generator->saved.closure,&fixture->script);
    if(fixture->variant>=2&&fixture->variant!=12) {
        SqWeakReference014 *weak=fn_00233b7c(&generator->reference.prefix,0x08000400u);
        SqPrefixObject012 object={0x08010000u,{.reference=weak}};sq_prefix_assign(&fixture->weak,&object);
    }
    if(fixture->variant>=4&&fixture->variant<=9) {
        SqPrefixObject012 value=fixture_value044((fixture->variant-4)%4);
        SqPrefixVector012 *vector=fixture->variant==6?&generator->varargs:&generator->stack;
        sq_prefix_vector_resize(vector,2,&(SqPrefixObject012){0x01000001u,{.reference=0}});
        sq_prefix_assign(vector->values,&value);sq_prefix_assign(vector->values+1,&value);
        if(fixture->variant==7) {
            SqPrefixObject012 saved=fixture_new_script044();sq_prefix_assign(&generator->saved.closure,&saved);
        }
        if(fixture->variant==8||fixture->variant==9) {
            generator->traps.values=fixture_allocate044(2*sizeof(SqTrap028),8);
            generator->traps.size=1;generator->traps.capacity=2;
        }
    }
    if(fixture->variant==14||fixture->variant==15) {
        SqPrefixObject012 value=fixture_value044(fixture->variant==14?1:3);
        const SqPrefixObject012 null={0x01000001u,{.reference=0}};
        sq_prefix_vector_resize(&generator->stack,2,&null);sq_prefix_vector_resize(&generator->varargs,1,&null);
        sq_prefix_assign(generator->stack.values,&value);sq_prefix_assign(generator->stack.values+1,&value);
        sq_prefix_assign(generator->varargs.values,&value);sq_prefix_assign(&generator->saved.closure,&fixture->script);
        generator->traps.values=fixture_allocate044(2*sizeof(SqTrap028),8);
        generator->traps.size=1;generator->traps.capacity=2;
    }
    if(fixture->variant==11)sq_prefix_assign(&fixture->value,&fixture->weak);
    if(fixture->variant==3)sq_prefix_clear(&fixture->weak);
    if(fixture->variant==10) {
        fixture_shared044()->chain=generator->reference.next;
        if(generator->reference.next)generator->reference.next->previous=0;
        generator->reference.next=generator->reference.previous=0;
        generator->reference.prefix.references|=0x80000000u;
    }
    if(fixture->cleanup) {
        if(fixture->variant==1)sq_prefix_release(0x08000400u,(SqPrefixValue012){.reference=generator});
        if(fixture->variant==10)sq_generator_release044(generator);
        else sq_prefix_release(0x08000400u,(SqPrefixValue012){.reference=generator});
        sq_prefix_clear(&fixture->weak);sq_prefix_clear(&fixture->value);sq_prefix_clear(&fixture->script);
    }
    return !fixture->fault;
}
