#include "fixture.h"

void *sq_startup_fixture_allocate040(void *context,SqPrototypeU32 bytes,SqPrototypeU32 alignment)
{
    SqStartupFixtureHeap040 *heap=context;
    SqPrototypeU32 index=heap->allocations++;
    if (index>=16 || !alignment || (alignment&(alignment-1)))
        return 0;
    SqStartupFixtureAllocation040 *entry=heap->entries+index;
    entry->bytes=bytes;
    entry->alignment=alignment;
    if (heap->used>0xffffffffu-16-alignment)
        return 0;
    SqPrototypeU32 start=(heap->used+16+alignment-1)&~(alignment-1);
    if (start>heap->capacity || bytes>heap->capacity-start)
        return 0;
    entry->memory=heap->memory+start;
    heap->used=start+bytes;
    return entry->memory;
}

static void *sdk_allocate(SqStartupSdkHeap040 *heap,SqPrototypeU32 bytes,SqPrototypeU32 alignment)
{
    return sq_startup_fixture_allocate040(heap->context,bytes,alignment);
}

static void uninvoked_vm_operation(void *object)
{
    (void)object;
    __builtin_trap();
}

static void uninvoked_sdk_release(SqStartupSdkHeap040 *heap,void *memory)
{
    (void)heap;
    (void)memory;
    __builtin_trap();
}

const SqStartupSdkOperations040 sq_startup_sdk_operations040={sdk_allocate,uninvoked_sdk_release};
const SqPrototypeVTable011 sq_startup_fixture_vm_operations040={uninvoked_vm_operation,uninvoked_vm_operation,uninvoked_vm_operation};
const SqPrefixObject012 sq_startup_fixture_null040={0x01000001u,{.reference=0}};
