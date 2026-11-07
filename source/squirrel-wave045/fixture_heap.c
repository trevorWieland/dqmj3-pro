#include "fixture.h"

static void event(SqFixtureHeap045 *heap,SqPrototypeU32 kind,SqPrototypeU32 allocation,SqPrototypeU32 bytes,SqPrototypeU32 alignment)
{
    if (heap->events>=2048)
        __builtin_trap();
    heap->records[heap->events++]=(SqHeapEvent045){kind,allocation,bytes,alignment};
}

void *sq_fixture_allocate045(void *context,SqPrototypeU32 bytes,SqPrototypeU32 alignment)
{
    SqFixtureHeap045 *heap=context;
    SqPrototypeU32 ordinal=heap->allocations++;
    if (ordinal>=1024 || !alignment || (alignment&(alignment-1)))
        __builtin_trap();
    SqAllocation045 *entry=heap->entries+ordinal;
    entry->memory=0;
    entry->bytes=bytes;
    entry->alignment=alignment;
    entry->active=0;
    event(heap,1,ordinal+1,bytes,alignment);
    if (ordinal+1==heap->fail_ordinal || heap->used>0xffffffffu-16-alignment)
        return 0;
    SqPrototypeU32 start=(heap->used+16+alignment-1)&~(alignment-1);
    if (start>heap->capacity || bytes>heap->capacity-start)
        return 0;
    entry->memory=heap->memory+start;
    entry->active=1;
    for (SqPrototypeU32 index=1;index<=16;index++)
        heap->memory[start-index]=0;
    heap->used=start+bytes;
    return entry->memory;
}

static SqAllocation045 *allocation(SqFixtureHeap045 *heap,void *pointer,SqPrototypeU32 *ordinal)
{
    for (SqPrototypeU32 index=0;index<heap->allocations;index++)
        if (heap->entries[index].memory==pointer && heap->entries[index].active) {
            *ordinal=index+1;
            return heap->entries+index;
        }
    __builtin_trap();
}

void sq_fixture_release045(void *context,void *pointer,SqPrototypeU32 bytes)
{
    SqFixtureHeap045 *heap=context;
    if (pointer) {
        SqPrototypeU32 ordinal=0;
        SqAllocation045 *entry=allocation(heap,pointer,&ordinal);
        if (bytes && bytes!=entry->bytes)
            __builtin_trap();
        event(heap,2,ordinal,bytes,entry->alignment);
        entry->active=0;
    }
}

void *sq_fixture_resize045(void *context,void *pointer,SqPrototypeU32 old_bytes,SqPrototypeU32 bytes,SqPrototypeU32 alignment)
{
    SqFixtureHeap045 *heap=context;
    if (pointer) {
        SqPrototypeU32 ordinal=0;
        SqAllocation045 *entry=allocation(heap,pointer,&ordinal);
        if (old_bytes!=entry->bytes)
            __builtin_trap();
    } else if (old_bytes) {
        __builtin_trap();
    }
    unsigned char *next=sq_fixture_allocate045(context,bytes,alignment);
    if (!next)
        return 0;
    const unsigned char *previous=pointer;
    SqPrototypeU32 copied=old_bytes<bytes?old_bytes:bytes;
    for (SqPrototypeU32 index=0;index<copied;index++)
        next[index]=previous[index];
    if (pointer)
        sq_fixture_release045(context,pointer,old_bytes);
    return next;
}

static void *sdk_allocate(SqSdkHeap045 *heap,SqPrototypeU32 bytes,SqPrototypeU32 alignment)
{
    return sq_fixture_allocate045(heap->context,bytes,alignment);
}

static void sdk_release(SqSdkHeap045 *heap,void *pointer)
{
    sq_fixture_release045(heap->context,pointer,0);
}

const SqSdkOperations045 sq_sdk_operations045={sdk_allocate,sdk_release};

SqPrototypeI32 sq_startup_require_engine045(void *vm,SqPrototypeU32 identity)
{
    (void)vm;
    (void)identity;
    __builtin_trap();
}

static void uninvoked_vm_operation(void *object)
{
    (void)object;
    __builtin_trap();
}

const SqPrototypeVTable011 sq_fixture_vm_operations045={uninvoked_vm_operation,uninvoked_vm_operation,uninvoked_vm_operation};
const SqPrefixObject012 sq_fixture_null045={0x01000001u,{.reference=0}};
