#include "file_queue.h"

static void recycle_head067(EffectQueueStore067 *store)
{
    EffectQueueNode067 *node = store->sentinel->next;
    if (node != store->sentinel) {
        node->previous->next = node->next;
        node->next->previous = node->previous;
        --store->count;
        node->next = store->free_nodes;
        store->free_nodes = node;
    }
}

static void join_if_needed067(EffectQueueWorker067 *worker)
{
    if (!worker->joined) {
        const EffectQueueServices067 *services = effect_queue_services067();
        if (services->thread_join(services->context, worker) < 0) {
            services->fatal_error(services->context);
            __builtin_trap();
        }
        worker->joined = 1;
    }
}

void effect_queue_worker_run067(EffectQueueWorker067 *worker)
{
    const EffectQueueServices067 *services = effect_queue_services067();
    while (worker->running) {
        services->mutex_lock(services->context, &worker->mutex);
        if (worker->pending == 0) {
            services->mutex_unlock(services->context, &worker->mutex);
            services->sleep(services->context, 10000000);
            continue;
        }
        EffectQueueStore067 *store = worker->pending;
        if (store->count == 0)
            __builtin_trap();
        EffectRequestTask066 *task = store->sentinel->next->task;
        worker->current = task;
        recycle_head067(store);
        if (store->count == 0)
            effect_queue_store_clear067(&worker->pending);
        services->mutex_unlock(services->context, &worker->mutex);
        if (task == 0) {
            services->sleep(services->context, 10000000);
            continue;
        }
        task->operations->load(task);
        worker->current = 0;
        services->sleep(services->context, 0);
    }
}

EffectQueueWorker067 *effect_queue_worker_finalize067(EffectQueueWorker067 *worker)
{
    const EffectQueueServices067 *services = effect_queue_services067();
    worker->running = 0;
    if (services->thread_join(services->context, worker) < 0) {
        services->fatal_error(services->context);
        __builtin_trap();
    }
    worker->joined = 1;
    join_if_needed067(worker);
    if (worker->thread_token != 0) {
        services->thread_close(services->context, worker);
        worker->thread_token = 0;
    }
    if (worker->pending != 0) {
        EffectQueueStore067 *store = worker->pending;
        while (store->sentinel->next != store->sentinel) {
            EffectRequestTask066 *task = store->sentinel->next->task;
            if (task != 0)
                task->operations->destroy(task);
            recycle_head067(store);
        }
        effect_queue_store_clear067(&worker->pending);
    }
    if (worker->deferred != 0)
        worker->deferred->operations->destroy(worker->deferred);
    join_if_needed067(worker);
    if (worker->thread_token != 0) {
        services->thread_close(services->context, worker);
        worker->thread_token = 0;
    }
    return worker;
}
