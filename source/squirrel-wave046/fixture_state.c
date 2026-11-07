#include "fixture_state.h"

SqGeneratorFixture046 generator_fixture046;

static void frame(SqVmCallFrame022 *value)
{
    *value=(SqVmCallFrame022){0};value->closure.type=0x01000001u;
}

static void owner(SqPrefixObject012 *slot,SqPrototypeU32 kind)
{
    SqPrefixObject012 value=fixture_value044(kind);sq_prefix_assign(slot,&value);
}

void fixture_prepare046(SqPrototypeU32 profile,SqPrototypeU32 cleanup)
{
    SqGeneratorFixture044 *heap=&generator_fixture044;
    generator_fixture046=(SqGeneratorFixture046){0};generator_fixture046.profile=profile;generator_fixture046.cleanup=cleanup;
    SqVm040 *vm=(void*)(heap->memory+0x6000);*vm=(SqVm040){0};generator_fixture046.vm=vm;
    vm->shared=(void*)(heap->memory+0x1000);
    vm->root.type=vm->error.type=vm->error_handler.type=vm->debug_hook.type=vm->temporary.type=0x01000001u;
    const SqPrefixObject012 null={0x01000001u,{.reference=0}};
    sq_prefix_vector_resize(&vm->stack,16,&null);sq_prefix_vector_resize(&vm->varargs,6,&null);
    SqPrototypeU32 pool=profile>=28&&profile<36?12:4;
    vm->calls.values=fixture_allocate044(pool*sizeof(SqVmCallFrame022),12);vm->calls.size=vm->calls.capacity=pool;
    for(SqPrototypeU32 index=0;index<pool;index++)frame(vm->calls.values+index);
    vm->call_stack=vm->calls.values;vm->allocated_calls=4;vm->call_count=1;vm->current=vm->call_stack;
    sq_prefix_assign(&vm->current->closure,&heap->script);
    vm->current->instruction=heap->memory+0x50000;vm->current->literals=vm->stack.values;
    vm->current->previous_base=1;vm->current->previous_top=3;vm->current->target=5;vm->current->calls=1;vm->current->root=1;
    vm->current->generator=heap->generator;
    SqPrototypeU32 cohort=profile>=20?(profile-20)%8:profile%8;
    SqPrototypeI32 count=cohort==0?0:cohort==1?1:3;
    vm->base=2;vm->top=2+count;
    for(SqPrototypeI32 index=0;index<count;index++) {
        if(index==0)vm->stack.values[2+index]=(SqPrefixObject012){0x05000002u,{.integer=37}};
        else owner(vm->stack.values+2+index,(SqPrototypeU32)(index-1));
    }
    if(cohort>=3) {
        vm->current->varargs_size=3;vm->current->varargs_base=1;
        owner(vm->varargs.values+1,1);owner(vm->varargs.values+2,3);
        vm->varargs.values[3]=(SqPrefixObject012){0x05000002u,{.integer=-9}};
    }
    if(cohort>=4) {
        vm->traps.values=fixture_allocate044(3*sizeof(SqTrap028),14);vm->traps.size=vm->traps.capacity=3;
        for(SqPrototypeU32 index=0;index<3;index++)vm->traps.values[index]=(SqTrap028){(SqPrototypeI32)index+1,(SqPrototypeI32)index+5,(void*)(heap->memory+0x50000+index*8),(SqPrototypeI32)index+3};
        vm->current->traps=2;
    }
    if(cohort>=5) {
        sq_prefix_vector_resize(&heap->generator->stack,4,&null);owner(heap->generator->stack.values+3,3);
        heap->generator->varargs.values=fixture_allocate044(sizeof(SqPrefixObject012),7);heap->generator->varargs.capacity=1;
        heap->generator->traps.values=fixture_allocate044(sizeof(SqTrap028),8);heap->generator->traps.capacity=1;
    }
    if((profile>=8&&profile<16)||profile>=20) {
        if(!sq_generator_yield046(heap->generator,vm)){generator_fixture046.fault=1;return;}
        for(SqPrototypeU32 index=0;index<vm->varargs.size;index++)sq_prefix_clear(vm->varargs.values+index);
        vm->varargs.size=0;sq_prefix_clear(&vm->current->closure);
        vm->base=1;vm->top=2;vm->call_count=cohort>=6||(profile>=28&&profile<36)?4:1;
        vm->current=vm->call_stack;
        for(SqPrototypeI32 index=0;index<vm->call_count;index++)sq_prefix_assign(&vm->call_stack[index].closure,&heap->script);
        if(profile>=20) {
            vm->varargs.values=sq_reallocate(vm->varargs.values,vm->varargs.capacity*sizeof(SqPrefixObject012),sizeof(SqPrefixObject012));
            vm->varargs.capacity=1;
            if(vm->traps.capacity>1) {
                vm->traps.values=sq_reallocate(vm->traps.values,vm->traps.capacity*sizeof(SqTrap028),sizeof(SqTrap028));
                vm->traps.capacity=1;
            }
        }
        if(profile>=28&&profile<36) {
            owner(&vm->calls.values[8].closure,2);owner(&vm->calls.values[11].closure,3);
            sq_prefix_assign(&vm->calls.values[10].closure,&heap->script);
            sq_prefix_assign(&vm->debug_hook,&heap->script);
        }
        if(profile>=36) {
            vm->call_count=1;owner(&vm->calls.values[1].closure,2);
            vm->calls.values[1].target=42;vm->calls.values[1].previous_top=67;
        }
        generator_fixture046.mode=1;
    }
    if(profile==16) {
        if(!sq_generator_yield046(heap->generator,vm)){generator_fixture046.fault=5;return;}
    }
    if(profile>=16&&profile<20) {
        heap->generator->state=(unsigned char)(profile==16?1:profile==17?2:profile==18?0:2);
        generator_fixture046.mode=profile>=18?1:0;
        owner(&vm->error,0);
    }
}

SqPrototypeU32 fixture_execute046(void)
{
    SqGeneratorFixture046 *fixture=&generator_fixture046;
    fixture->result=fixture->mode?sq_generator_resume046(generator_fixture044.generator,fixture->vm,6):sq_generator_yield046(generator_fixture044.generator,fixture->vm);
    if(fixture->cleanup)fixture_clear046();
    return !fixture->fault&&!generator_fixture044.fault;
}

void fixture_clear046(void)
{
    SqVm040 *vm=generator_fixture046.vm;
    for(SqPrototypeU32 index=0;index<vm->stack.size;index++)sq_prefix_clear(vm->stack.values+index);
    for(SqPrototypeU32 index=0;index<vm->varargs.size;index++)sq_prefix_clear(vm->varargs.values+index);
    for(SqPrototypeU32 index=0;index<vm->calls.size;index++)sq_prefix_clear(&vm->calls.values[index].closure);
    sq_prefix_clear(&vm->error);sq_prefix_clear(&vm->debug_hook);
    if(vm->stack.capacity)fixture_deallocate044(vm->stack.values,vm->stack.capacity*sizeof(SqPrefixObject012));
    if(vm->varargs.capacity)fixture_deallocate044(vm->varargs.values,vm->varargs.capacity*sizeof(SqPrefixObject012));
    if(vm->calls.capacity)fixture_deallocate044(vm->calls.values,vm->calls.capacity*sizeof(SqVmCallFrame022));
    if(vm->traps.capacity)fixture_deallocate044(vm->traps.values,vm->traps.capacity*sizeof(SqTrap028));
    sq_prefix_release(0x08000400u,(SqPrefixValue012){.reference=generator_fixture044.generator});
    sq_prefix_clear(&generator_fixture044.script);
}

void *sq_lookup_reallocate020(void *storage,SqPrototypeU32 previous,SqPrototypeU32 next)
{return sq_reallocate(storage,previous,next);}
void sq_generator_debug046(SqVm040 *vm,SqPrototypeI32 event,SqPrototypeI32 line)
{(void)vm;(void)event;(void)line;sq_generator_unsupported046(2);}
_Noreturn void sq_generator_unsupported046(SqPrototypeU32 reason)
{generator_fixture046.fault=reason;for(;;){}}
