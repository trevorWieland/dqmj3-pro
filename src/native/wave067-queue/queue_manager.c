#include "file_queue.h"

const EffectQueueManagerOperations067 effect_queue_manager_operations067 = {0, effect_queue_manager_destroy067};

EffectQueueManager067 *effect_queue_manager_construct067(EffectQueueManager067 *manager)
{
    const EffectQueueServices067 *services = effect_queue_services067();
    manager->operations = &effect_queue_manager_operations067;
    manager->worker = 0;
    EffectQueueWorker067 *worker = effect_queue_allocate067(EFFECT_QUEUE_WORKER067, 4136, sizeof(*worker));
    if (worker != 0) {
        worker->thread_token = 0;
        worker->joined = 1;
        worker->running = 1;
        worker->mutex.kind = 0;
        worker->mutex.owner = 0;
        worker->mutex.depth = 0xffffffffu;
        worker->pending = 0;
        worker->deferred = 0;
        worker->current = 0;
        services->mutex_initialize(services->context, &worker->mutex);
        int result = services->thread_create(services->context, worker, effect_queue_worker_run067, 4096, 15, -2);
        if (result < 0) {
            services->fatal_error(services->context);
            __builtin_trap();
        }
    }
    if (manager->worker != worker) {
        if (manager->worker != 0) {
            effect_queue_worker_finalize067(manager->worker);
            effect_queue_release067(EFFECT_QUEUE_WORKER067, manager->worker, 4136, sizeof(*manager->worker));
        }
        manager->worker = worker;
    }
    return manager;
}

void effect_queue_manager_destroy067(EffectQueueManager067 *manager)
{
    manager->operations = &effect_queue_manager_operations067;
    if (manager->worker != 0) {
        effect_queue_worker_finalize067(manager->worker);
        effect_queue_release067(EFFECT_QUEUE_WORKER067, manager->worker, 4136, sizeof(*manager->worker));
    }
    effect_queue_release067(EFFECT_QUEUE_MANAGER067, manager, 8, sizeof(*manager));
}

static void enqueue067(void *context, EffectRequestTask066 *task)
{
    effect_queue_push067(context, task);
}

EffectRequestTask066 *effect_queue_request_async067(EffectQueueManager067 *manager, const unsigned short *path,
    unsigned int source_selector, EffectRequestHeap066 *heap, unsigned int alignment)
{
    EffectRequestFactory066 factory = {enqueue067, manager->worker};
    return effect_request_async066(&factory, path, source_selector, heap, alignment);
}
