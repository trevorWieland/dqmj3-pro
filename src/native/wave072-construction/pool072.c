#include "device072.h"

static __UINTPTR_TYPE__ pool_quotient072(__UINTPTR_TYPE__ value, unsigned int divisor)
{
    __UINTPTR_TYPE__ quotient = 0, remainder = 0;
    for (unsigned int bit = sizeof(value) * 8; bit-- > 0;) {
        remainder = (remainder << 1) | ((value >> bit) & 1);
        if (remainder >= divisor) {
            remainder -= divisor;
            quotient |= (__UINTPTR_TYPE__)1 << bit;
        }
    }
    return quotient;
}

void effect_file_atomic_initialize072(EffectQueueMutex067 *mutex)
{
    __atomic_exchange_n(&mutex->kind, 1u, __ATOMIC_RELAXED);
}

int effect_file_mutex_initialize072(EffectQueueMutex067 *mutex)
{
    effect_file_atomic_initialize072(mutex);
    mutex->owner = 0;
    mutex->depth = 0;
    return 0;
}

void effect_file_pool_initialize072(EffectFilePool072 *pool, unsigned int entry_bytes, void *backing,
    unsigned int bytes, unsigned int alignment, unsigned int flags)
{
    __UINTPTR_TYPE__ begin = (__UINTPTR_TYPE__)backing;
    unsigned int stride = (unsigned int)pool_quotient072(entry_bytes + alignment - 1, alignment) * alignment;
    __UINTPTR_TYPE__ aligned = pool_quotient072(begin + alignment - 1, alignment) * alignment;
    unsigned int capacity = (unsigned int)pool_quotient072(begin + bytes - aligned, stride) * stride;
    pool->header_flags = flags;
    pool->entry_bytes = stride;
    pool->backing = (void *)aligned;
    pool->capacity_bytes = capacity;
    pool->live_count = 0;
    pool->alignment = alignment;
    void *head = 0;
    if (capacity) {
        unsigned char *node = (unsigned char *)aligned + capacity - stride;
        for (;;) {
            *(void **)node = head;
            head = node;
            if (node == (unsigned char *)aligned) break;
            node -= stride;
        }
    }
    pool->free_nodes = head;
}

void *effect_file_pool_allocate072(EffectFileConstruction072 *state, EffectFilePool072 *pool)
{
    const EffectFileServices072 *services = state->services;
    services->lock(services->context, &pool->mutex);
    void *result = pool->free_nodes;
    if (result) {
        pool->free_nodes = *(void **)result;
        ++pool->live_count;
        if (pool->header_flags & 1) {
            unsigned char *bytes = result;
            for (unsigned int index = 0; index < pool->entry_bytes; ++index) bytes[index] = 0;
        }
    }
    services->unlock(services->context, &pool->mutex);
    return result;
}

EffectFileDevice068 *effect_file_device_allocate072(EffectFileConstruction072 *state)
{
    const EffectFileServices072 *services = state->services;
    services->lock(services->context, &state->guard_mutex);
    if (!(state->device_guard & 1) && services->once(services->context, &state->device_guard)) {
        EffectFilePool072 *pool = state->device_pool;
        pool->unknown_04 = 0;
        pool->unknown_08 = 0;
        pool->required_empty_0c = 0;
        pool->head = 0;
        pool->header_flags = 0;
        pool->free_nodes = 0;
        pool->mutex.kind = 0;
        pool->mutex.owner = 0;
        pool->mutex.depth = 0xffffffffu;
        pool->type = state->pool_type;
        effect_file_pool_initialize072(pool, sizeof(EffectFileDevice068), state->devices,
            state->device_slots * sizeof(EffectFileDevice068), 4, 0);
        effect_file_mutex_initialize072(&pool->mutex);
    }
    EffectFileDevice068 *result = effect_file_pool_allocate072(state, state->device_pool);
    services->unlock(services->context, &state->guard_mutex);
    return result;
}
