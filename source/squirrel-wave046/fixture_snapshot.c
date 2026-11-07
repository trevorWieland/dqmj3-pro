#include "fixture_state.h"

static SqPrototypeU32 identity(const void *pointer)
{
    if(!pointer)return 0xffffffffu;
    __UINTPTR_TYPE__ address=(__UINTPTR_TYPE__)pointer,base=(__UINTPTR_TYPE__)generator_fixture044.memory;
    return address>=base&&address<base+0x80000?(SqPrototypeU32)(address-base):0xfffffffeu;
}
static SqPrototypeU32 object(SqPrototypeU32 *out,const SqPrefixObject012 *value)
{
    out[0]=value->type;out[1]=value->type&0x08000000u?fixture_identity044(value->value.reference):value->value.bits;
    out[2]=value->type&0x08000000u?sq_prefix_count(value->value.reference):0;return 3;
}
static SqPrototypeU32 vector(SqPrototypeU32 *out,const SqPrefixVector012 *values)
{
    SqPrototypeU32 at=0;out[at++]=fixture_identity044(values->values);out[at++]=values->size;out[at++]=values->capacity;
    for(SqPrototypeU32 index=0;index<values->size;index++)at+=object(out+at,values->values+index);return at;
}
static SqPrototypeU32 frame(SqPrototypeU32 *out,const SqVmCallFrame022 *value)
{
    SqPrototypeU32 at=0;out[at++]=identity(value->instruction);out[at++]=fixture_identity044(value->literals);
    at+=object(out+at,&value->closure);out[at++]=fixture_identity044(value->generator);
    out[at++]=(SqPrototypeU32)value->traps;out[at++]=(SqPrototypeU32)value->previous_base;
    out[at++]=(SqPrototypeU32)value->previous_top;out[at++]=(SqPrototypeU32)value->target;
    out[at++]=(SqPrototypeU32)value->calls;out[at++]=(SqPrototypeU32)value->root;
    out[at++]=value->varargs_size;out[at++]=value->varargs_base;return at;
}
static SqPrototypeU32 traps(SqPrototypeU32 *out,const SqTrapVector028 *values)
{
    SqPrototypeU32 at=0;out[at++]=fixture_identity044(values->values);out[at++]=values->size;out[at++]=values->capacity;
    for(SqPrototypeU32 index=0;index<values->size;index++) {
        const SqTrap028 *trap=values->values+index;
        out[at++]=(SqPrototypeU32)trap->base;out[at++]=(SqPrototypeU32)trap->top;
        out[at++]=identity(trap->instruction);out[at++]=(SqPrototypeU32)trap->target;
    }
    return at;
}

SqPrototypeU32 fixture_snapshot046(SqPrototypeU32 *out,SqPrototypeU32 capacity)
{
    if(capacity<8192)return 0;
    out[0]=fixture_snapshot044(out+1,4096);SqPrototypeU32 at=out[0]+1;
    SqGeneratorFixture046 *fixture=&generator_fixture046;SqVm040 *vm=fixture->vm;
    out[at++]=0x046046;out[at++]=sizeof(void*);out[at++]=sizeof(*vm);
    out[at++]=fixture->profile;out[at++]=fixture->cleanup;out[at++]=fixture->mode;
    out[at++]=fixture->result;out[at++]=fixture->fault;
    out[at++]=(SqPrototypeU32)vm->top;out[at++]=(SqPrototypeU32)vm->base;
    out[at++]=(SqPrototypeU32)vm->call_count;out[at++]=(SqPrototypeU32)vm->allocated_calls;
    at+=object(out+at,&vm->error);at+=vector(out+at,&vm->stack);at+=vector(out+at,&vm->varargs);
    out[at++]=vm->calls.size;out[at++]=vm->calls.capacity;
    for(SqPrototypeU32 index=0;index<vm->calls.size;index++)at+=frame(out+at,vm->calls.values+index);
    out[at++]=(fixture->profile<=16||fixture->profile>=20);
    if((fixture->profile<=16||fixture->profile>=20))at+=frame(out+at,&generator_fixture044.generator->saved);
    at+=traps(out+at,&vm->traps);at+=traps(out+at,&generator_fixture044.generator->traps);
    out[at++]=fixture_identity044(vm->stack.values);out[at++]=fixture_identity044(vm->varargs.values);
    out[at++]=fixture_identity044(generator_fixture044.generator->stack.values);out[at++]=fixture_identity044(generator_fixture044.generator->varargs.values);
    out[at++]=fixture_identity044(vm->calls.values);out[at++]=fixture_identity044(vm->traps.values);
    out[at++]=fixture_identity044(generator_fixture044.generator->traps.values);
    out[at++]=fixture_identity044(vm->shared->common.common.common.scratch);
    out[at++]=fixture->reallocations;
    for(SqPrototypeU32 index=0;index<fixture->reallocations;index++)for(SqPrototypeU32 field=0;field<4;field++)out[at++]=fixture->reallocation[index][field];
    out[at++]=fixture->observations;
    for(SqPrototypeU32 index=0;index<fixture->observations;index++)for(SqPrototypeU32 field=0;field<12;field++)out[at++]=fixture->observation[index][field];
    return at;
}
