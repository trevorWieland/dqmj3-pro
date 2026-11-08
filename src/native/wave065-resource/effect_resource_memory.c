#include "effect_resource_memory.h"

static void resource_allocator_uninvoked_0_065(void)
{
    __builtin_trap();
}

static void resource_allocator_uninvoked_1_065(void)
{
    __builtin_trap();
}

static void *resource_allocator_allocate065(EffectAllocator065 *base, unsigned int bytes, unsigned int alignment)
{
    EffectResourceAllocator065 *allocator = (EffectResourceAllocator065 *)base;
    if (!allocator->pending_active || allocator->pending.logical_bytes != bytes ||
        allocator->pending.alignment != alignment)
        __builtin_trap();
    EffectResourceAllocationRequest065 request = allocator->pending;
    allocator->pending_active = 0;
    return allocator->memory->allocate(allocator->memory->context, request.role, request.logical_bytes,
                                        request.physical_bytes, request.alignment);
}

static void resource_allocator_release065(EffectAllocator065 *base, void *memory)
{
    EffectResourceAllocator065 *allocator = (EffectResourceAllocator065 *)base;
    allocator->memory->release(allocator->memory->context, memory);
}

static const EffectAllocatorOperations065 resource_allocator_operations065 = {
    resource_allocator_uninvoked_0_065, resource_allocator_uninvoked_1_065,
    resource_allocator_allocate065, resource_allocator_release065
};

int effect_resource_allocator_init065(EffectResourceAllocator065 *allocator, const EffectResourceMemory065 *memory)
{
    if (allocator == 0 || memory == 0 || memory->allocate == 0 || memory->release == 0)
        return 0;
    allocator->base.operations = &resource_allocator_operations065;
    allocator->memory = memory;
    allocator->pending_active = 0;
    return 1;
}

void *effect_resource_allocate065(EffectResourceAllocator065 *allocator, EffectResourceAllocation065 role,
                                  unsigned int logical_bytes, __SIZE_TYPE__ physical_bytes, unsigned int alignment)
{
    if (allocator->pending_active)
        __builtin_trap();
    allocator->pending.role = role;
    allocator->pending.logical_bytes = logical_bytes;
    allocator->pending.physical_bytes = physical_bytes;
    allocator->pending.alignment = alignment;
    allocator->pending_active = 1;
    return allocator->base.operations->allocate(&allocator->base, logical_bytes, alignment);
}

void effect_resource_release065(EffectResourceAllocator065 *allocator, void *memory)
{
    allocator->base.operations->release(&allocator->base, memory);
}
