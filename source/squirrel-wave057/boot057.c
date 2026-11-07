#include "../../source/squirrel-wave045/fixture.h"
#include "../../source/squirrel-wave049/startup.h"

static SqFixtureHeap045 heap057;
static SqStartupMemory045 memory057;
static SqStartupServices040 services057;
static SqVm040 *live_vm057;

SqVm040 *sq_compose_boot057(void *arena,SqPrototypeU32 bytes,SqPrototypeU32 stack_size)
{
    if(live_vm057||!arena||((__UINTPTR_TYPE__)arena&15)||bytes<1048576||stack_size<3||stack_size>1024)
        return 0;
    heap057=(SqFixtureHeap045){.memory=arena,.capacity=bytes};
    memory057=(SqStartupMemory045){&heap057,sq_fixture_allocate045,sq_fixture_resize045,sq_fixture_release045};
    services057=(SqStartupServices040){&heap057,sq_fixture_allocate045,
        &sq_fixture_vm_operations045,&sq_fixture_null045};
    if(!sq_startup_bind_memory045(&memory057)||!sq_startup_bind040(&services057))
        return 0;
    live_vm057=fn_00146994(stack_size);
    return live_vm057;
}

SqPrototypeU32 sq_compose_heap_events057(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    if(!output||capacity<heap057.events*4)
        return 0;
    for(SqPrototypeU32 index=0;index<heap057.events;index++) {
        const SqHeapEvent045 *event=heap057.records+index;
        output[index*4]=event->kind;
        output[index*4+1]=event->allocation;
        output[index*4+2]=event->bytes;
        output[index*4+3]=event->alignment;
    }
    return heap057.events*4;
}

SqPrototypeU32 sq_compose_heap_counts057(SqPrototypeU32 *output)
{
    SqPrototypeU32 active=0;
    for(SqPrototypeU32 index=0;index<heap057.allocations;index++)
        active+=heap057.entries[index].active!=0;
    output[0]=heap057.allocations;
    output[1]=active;
    output[2]=heap057.events;
    output[3]=heap057.used;
    return 4;
}

SqPrototypeU32 sq_compose_heap_allocations057(SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    if(!output||capacity<heap057.allocations*4)
        return 0;
    for(SqPrototypeU32 index=0;index<heap057.allocations;index++) {
        const SqAllocation045 *entry=heap057.entries+index;
        output[index*4]=entry->memory?(SqPrototypeU32)((unsigned char*)entry->memory-heap057.memory):0xffffffffu;
        output[index*4+1]=entry->bytes;
        output[index*4+2]=entry->alignment;
        output[index*4+3]=entry->active;
    }
    return heap057.allocations*4;
}

SqPrototypeU32 sq_compose_observe057(const SqVm040 *vm,SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    if(!vm||!output||capacity<32)
        return 0;
    const SqSharedState040 *shared=vm->shared;
    SqPrefixState012 *prefix=sq_shared_prefix040((SqSharedState040*)shared);
    SqPrototypeU32 chain=0;
    const SqPrefixCollectable012 *previous=0;
    for(const SqPrefixCollectable012 *entry=prefix->chain;entry;entry=entry->next) {
        if(entry->previous!=previous||++chain>1024)
            __builtin_trap();
        previous=entry;
    }
    SqPrefixVector012 *names=sq_startup_metamethod_names045((SqSharedState040*)shared);
    SqStringTable015 *strings=sq_startup_strings045(shared);
    SqPrototypeU32 at=0;
    output[at++]=sizeof(void*);
    output[at++]=sizeof(*vm);
    output[at++]=sizeof(*shared);
    output[at++]=(SqPrototypeU32)vm->top;
    output[at++]=(SqPrototypeU32)vm->base;
    output[at++]=(SqPrototypeU32)vm->call_count;
    output[at++]=(SqPrototypeU32)vm->native_depth;
    output[at++]=vm->stack.size;
    output[at++]=names->size;
    output[at++]=(SqPrototypeU32)strings->used;
    output[at++]=chain;
    output[at++]=vm->root.type;
    output[at++]=vm->error.type;
    output[at++]=vm->traps.size;
    for(SqPrototypeU32 index=0;index<16;index++)
        output[at++]=prefix->unknown_0000[index];
    return at;
}
