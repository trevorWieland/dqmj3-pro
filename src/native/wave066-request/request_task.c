#include "request.h"

static void request_base_delete_uninvoked066(EffectRequestTask066 *task)
{
    (void)task;
    __builtin_trap();
}

static void request_base_load_uninvoked066(EffectRequestTask066 *task)
{
    (void)task;
    __builtin_trap();
}

const EffectRequestTaskOperations066 effect_request_base_operations066 = {
    effect_request_base_finalize066, request_base_delete_uninvoked066, request_base_load_uninvoked066
};

const EffectRequestTaskOperations066 effect_request_task_operations066 = {
    0, effect_request_destroy066, effect_request_load066
};

EffectRequestTask066 *effect_request_base_init066(EffectRequestTask066 *task,
    unsigned char source_selector, const unsigned short *path)
{
    const EffectRequestMemory066 *memory = effect_request_memory066();
    task->operations = &effect_request_base_operations066;
    task->control = 0;
    EffectRequestControl066 *next = memory->allocate(memory->context, EFFECT_REQUEST_CONTROL066,
        8, sizeof(*next), 4);
    if (next != 0)
        effect_request_control_init066(next, source_selector, path);
    EffectRequestControl066 *previous = task->control;
    if (previous != next) {
        if (previous != 0)
            effect_request_control_release066(previous);
        task->control = next;
    }
    return task;
}

EffectRequestTask066 *effect_request_construct066(EffectRequestTask066 *task, unsigned char source_selector,
    const unsigned short *path, EffectRequestHeap066 *heap, unsigned int alignment)
{
    effect_request_base_init066(task, source_selector, path);
    task->operations = &effect_request_task_operations066;
    EffectRequestProvider066 *provider = &task->embedded_provider;
    provider->operations = &effect_request_provider_operations066;
    provider->heap = heap;
    provider->alignment = alignment;
    provider->data = 0;
    provider->data_bytes.low = 0;
    provider->data_bytes.high = 0;
    provider->file_bytes.low = 0xffffffffu;
    provider->file_bytes.high = 0xffffffffu;
    task->provider = provider;
    return task;
}

void effect_request_load066(EffectRequestTask066 *task)
{
    EffectRequestProvider066 *provider = task->provider;
    unsigned char selector = effect_request_selector066(task);
    const unsigned short *path = effect_request_path066(task);
    if (selector < 5) {
        if (selector == 3)
            provider->operations->reset(provider, task);
        else
            provider->operations->load(provider, task, selector, path);
    }
}

EffectRequestTask066 *effect_request_base_finalize066(EffectRequestTask066 *task)
{
    task->operations = &effect_request_base_operations066;
    if (task->control != 0)
        effect_request_control_release066(task->control);
    return task;
}

void effect_request_destroy066(EffectRequestTask066 *task)
{
    task->operations = &effect_request_task_operations066;
    task->provider->operations->destroy(task->provider);
    effect_request_base_finalize066(task);
    const EffectRequestMemory066 *memory = effect_request_memory066();
    memory->release(memory->context, EFFECT_REQUEST_TASK066, task, 60, sizeof(*task));
}
