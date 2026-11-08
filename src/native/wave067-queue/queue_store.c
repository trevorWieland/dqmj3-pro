#include "file_queue.h"

static void add_block067(EffectQueueStore067 *store, unsigned int count)
{
    EffectQueueBlock067 *block = effect_queue_allocate067(EFFECT_QUEUE_BLOCK067, 12, sizeof(*block));
    EffectQueueNode067 *nodes = effect_queue_allocate067(EFFECT_QUEUE_NODES067, count * 12u, count * sizeof(*nodes));
    if (block == 0 || nodes == 0)
        __builtin_trap();
    block->nodes = nodes;
    block->previous = store->blocks;
    block->capacity = count;
    store->blocks = block;
    store->unused_begin = nodes;
    store->unused_end = nodes + count;
}

EffectQueueStore067 *effect_queue_store_create067(void)
{
    EffectQueueStore067 *store = effect_queue_allocate067(EFFECT_QUEUE_STORE067, 24, sizeof(*store));
    if (store == 0)
        __builtin_trap();
    store->blocks = 0;
    store->free_nodes = 0;
    store->unused_begin = 0;
    store->unused_end = 0;
    store->sentinel = 0;
    store->count = 0;
    add_block067(store, 1);
    store->sentinel = store->unused_begin++;
    store->sentinel->next = store->sentinel;
    store->sentinel->previous = store->sentinel;
    return store;
}

static EffectQueueNode067 *take_node067(EffectQueueStore067 *store)
{
    if (store->free_nodes != 0) {
        EffectQueueNode067 *node = store->free_nodes;
        store->free_nodes = node->next;
        return node;
    }
    if (store->unused_begin == store->unused_end) {
        unsigned int count = 32;
        if (store->blocks != 0) {
            unsigned int previous = store->blocks->capacity;
            count = previous + (previous >> 1) + (previous >> 3);
            if (count < previous + 32u)
                count = previous + 32u;
        }
        add_block067(store, count);
    }
    return store->unused_begin++;
}

void effect_queue_push067(EffectQueueWorker067 *worker, EffectRequestTask066 *task)
{
    const EffectQueueServices067 *services = effect_queue_services067();
    services->mutex_lock(services->context, &worker->mutex);
    if (worker->pending == 0)
        worker->pending = effect_queue_store_create067();
    EffectQueueStore067 *store = worker->pending;
    EffectQueueNode067 *sentinel = store->sentinel;
    EffectQueueNode067 *node = take_node067(store);
    node->task = task;
    node->next = sentinel;
    node->previous = sentinel->previous;
    sentinel->previous->next = node;
    sentinel->previous = node;
    ++store->count;
    services->mutex_unlock(services->context, &worker->mutex);
}

void effect_queue_store_clear067(EffectQueueStore067 **owner)
{
    EffectQueueStore067 *store = *owner;
    if (store != 0) {
        if (store->sentinel != 0) {
            EffectQueueNode067 *node = store->sentinel->next;
            while (node != store->sentinel) {
                EffectQueueNode067 *next = node->next;
                node->previous->next = node->next;
                node->next->previous = node->previous;
                --store->count;
                node->next = store->free_nodes;
                store->free_nodes = node;
                node = next;
            }
            store->sentinel->next = store->free_nodes;
            store->free_nodes = store->sentinel;
            while (store->blocks != 0) {
                EffectQueueBlock067 *block = store->blocks;
                store->blocks = block->previous;
                effect_queue_release067(EFFECT_QUEUE_NODES067, block->nodes, block->capacity * 12u,
                    block->capacity * sizeof(*block->nodes));
                effect_queue_release067(EFFECT_QUEUE_BLOCK067, block, 12, sizeof(*block));
            }
            store->free_nodes = 0;
            store->unused_begin = 0;
            store->unused_end = 0;
        }
        effect_queue_release067(EFFECT_QUEUE_STORE067, store, 24, sizeof(*store));
    }
    *owner = 0;
}
