#include "request.h"

EffectRequestControl066 *effect_request_control_init066(EffectRequestControl066 *control,
    unsigned char source_selector, const unsigned short *path)
{
    control->source_selector = source_selector;
    control->state = 0;
    control->path = effect_request_copy_path066(path, 32);
    return control;
}

void effect_request_control_release066(EffectRequestControl066 *control)
{
    effect_request_release_path066(control->path);
    const EffectRequestMemory066 *memory = effect_request_memory066();
    memory->release(memory->context, EFFECT_REQUEST_CONTROL066, control, 8, sizeof(*control));
}

unsigned char effect_request_ready066(const EffectRequestTask066 *task)
{
    return task->control->state;
}

unsigned char effect_request_selector066(const EffectRequestTask066 *task)
{
    return task->control->source_selector;
}

const unsigned short *effect_request_path066(const EffectRequestTask066 *task)
{
    return task->control->path;
}

void effect_request_set_state066(EffectRequestTask066 *task, unsigned char state)
{
    task->control->state = state;
}

const unsigned char *effect_request_bytes066(EffectRequestTask066 *task)
{
    return task->provider->operations->bytes(task->provider);
}

unsigned long long effect_request_length066(EffectRequestProvider066 *provider)
{
    return (unsigned long long)provider->data_bytes.high << 32 | provider->data_bytes.low;
}
