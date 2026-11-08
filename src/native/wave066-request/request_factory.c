#include "request.h"

static int request_prefix066(const unsigned short *path, const char *prefix)
{
    while (*prefix != 0)
        if (*path++ != (unsigned char)*prefix++)
            return 0;
    return 1;
}

unsigned char effect_request_resolve_full_path066(const unsigned short *path, unsigned int selector,
    unsigned short **resolved)
{
    if (selector != 5)
        __builtin_trap();
    *resolved = effect_request_copy_path066(path, 128);
    if (request_prefix066(*resolved, "rom:"))
        return 0;
    if (request_prefix066(*resolved, "data:"))
        return 1;
    if (request_prefix066(*resolved, "sdmc:"))
        return 2;
    if (request_prefix066(*resolved, "patch:")) {
        const EffectRequestFiles066 *files = effect_request_files066();
        void *stream = 0;
        int result = files->open(files->context, &stream, *resolved, 1);
        files->finalize(files->context, stream);
        if (result >= 0)
            return 4;
        static const unsigned short rom[] = {'r', 'o', 'm', 0};
        effect_request_replace_prefix066(*resolved, 5, rom);
        return 0;
    }
    return 5;
}

static EffectRequestTask066 *request_create066(const unsigned short *path, unsigned int source_selector,
    EffectRequestHeap066 *heap, unsigned int payload_alignment)
{
    unsigned short *resolved = 0;
    unsigned char selector = effect_request_resolve_full_path066(path, source_selector, &resolved);
    const EffectRequestMemory066 *memory = effect_request_memory066();
    EffectRequestTask066 *task = memory->allocate(memory->context, EFFECT_REQUEST_TASK066, 60, sizeof(*task), 4);
    if (task != 0)
        effect_request_construct066(task, selector, resolved, heap, payload_alignment);
    effect_request_release_path066(resolved);
    return task;
}

EffectRequestTask066 *effect_request_sync066(EffectRequestFactory066 *factory, const unsigned short *path,
    unsigned int source_selector, EffectRequestHeap066 *heap, unsigned int payload_alignment)
{
    (void)factory;
    EffectRequestTask066 *task = request_create066(path, source_selector, heap, payload_alignment);
    if (task == 0)
        __builtin_trap();
    task->operations->load(task);
    return task;
}

EffectRequestTask066 *effect_request_async066(EffectRequestFactory066 *factory, const unsigned short *path,
    unsigned int source_selector, EffectRequestHeap066 *heap, unsigned int payload_alignment)
{
    EffectRequestTask066 *task = request_create066(path, source_selector, heap, payload_alignment);
    if (factory == 0 || factory->enqueue == 0)
        __builtin_trap();
    factory->enqueue(factory->context, task);
    return task;
}
