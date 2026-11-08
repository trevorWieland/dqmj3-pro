#include "effect065_cached_composed_fixture.c"
#include "../src/native/wave066-request/request.h"

typedef EffectRequestHeap066 RequestHeap066;
typedef EffectRequestHeapOperations066 RequestHeapOperations066;

static void request_heap_uninvoked_0_066(void) { __builtin_trap(); }
static void request_heap_uninvoked_1_066(void) { __builtin_trap(); }

static void *request_heap_allocate066(RequestHeap066 *heap, unsigned int bytes, unsigned char alignment)
{
    if (heap->context != &graph_fixture065)
        __builtin_trap();
    return graph_allocate065(0x660001, bytes, bytes, alignment, 0);
}

static void request_heap_release066(RequestHeap066 *heap, void *memory)
{
    if (heap->context != &graph_fixture065)
        __builtin_trap();
    graph_event065(0x660012, memory == 0 ? 0xffffffff : graph_slot065(memory), 0, 0, 0, 0);
    if (memory != 0)
        graph_release065(memory, 0, 0);
}

static const RequestHeapOperations066 request_heap_operations066 = {
    request_heap_uninvoked_0_066, request_heap_uninvoked_1_066,
    request_heap_allocate066, request_heap_release066
};

static RequestHeap066 request_heap066 = {&request_heap_operations066, &graph_fixture065};

void *effect_request_user_heap066(void) { return &request_heap066; }

static void *request_global_allocate066(void *context, EffectRequestAllocation066 role, unsigned int logical,
                                         __SIZE_TYPE__ physical, unsigned int alignment)
{
    if (context != &graph_fixture065 || alignment != 4)
        __builtin_trap();
    if (role == EFFECT_REQUEST_TASK066 && (logical != 60 || physical != sizeof(EffectRequestTask066)))
        __builtin_trap();
    if (role == EFFECT_REQUEST_CONTROL066 && (logical != 8 || physical != sizeof(EffectRequestControl066)))
        __builtin_trap();
    if (role == EFFECT_REQUEST_STRING066 && logical != physical)
        __builtin_trap();
    return graph_allocate065(0x660100u + role, logical, physical, alignment, 0);
}

static void request_global_release066(void *context, EffectRequestAllocation066 role, void *memory,
                                       unsigned int logical, __SIZE_TYPE__ physical)
{
    if (context != &graph_fixture065)
        __builtin_trap();
    unsigned int slot = graph_slot065(memory);
    EffectGraphAllocationFixture065 *record = graph_fixture065.records + slot;
    if (record->role != 0x660100u + role || record->logical_bytes != logical || record->physical_bytes != physical)
        __builtin_trap();
    graph_release065(memory, 0, 0);
}

static const EffectRequestMemory066 request_global_memory066 = {
    request_global_allocate066, request_global_release066, &graph_fixture065
};

void effect_request_fixture_bind066(void)
{
    effect_request_bind_memory066(&request_global_memory066);
}

void *effect_request_fixture_task_allocate066(unsigned int reference)
{
    if (reference)
        return cached_sdk_allocate065(&cached_fixture065.heap, 60, 4);
    return request_global_allocate066(&graph_fixture065, EFFECT_REQUEST_TASK066, 60, sizeof(EffectRequestTask066), 4);
}

const unsigned int effect_request_layout066[] = {
    sizeof(EffectRequestTask066), sizeof(EffectRequestProvider066), sizeof(EffectRequestControl066),
    __builtin_offsetof(EffectRequestTask066, control), __builtin_offsetof(EffectRequestTask066, embedded_provider),
    __builtin_offsetof(EffectRequestTask066, provider), __builtin_offsetof(EffectRequestProvider066, heap),
    __builtin_offsetof(EffectRequestProvider066, alignment), __builtin_offsetof(EffectRequestProvider066, data),
    __builtin_offsetof(EffectRequestProvider066, data_bytes), __builtin_offsetof(EffectRequestProvider066, file_bytes),
    __builtin_offsetof(EffectRequestProvider066, unknown_20), __builtin_offsetof(EffectRequestControl066, path)
};
