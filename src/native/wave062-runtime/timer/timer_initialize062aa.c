#include "timer062aa.h"

SdkTimer062aa *sdk_timer_initialize062aa(SdkTimer062aa *timer, SdkWord062s timeout)
{
    SdkTimerMap062aa *map = &timer->map;
    map->pools = 0;
    map->free_nodes = 0;
    map->next = 0;
    map->limit = 0;
    map->head = 0;
    map->count = 0;
    map->allow_duplicates = 0;
    map->address_tag = (SdkByte062s)(__UINTPTR_TYPE__)timer;
    SdkTimerPool062aa *pool = sdk_allocate062s(sizeof(*pool));
    SdkTimerNode062aa *storage = sdk_allocate062s(32 * sizeof(*storage));
    pool->storage = storage;
    pool->next = map->pools;
    pool->capacity = 32;
    map->pools = pool;
    map->next = storage + 1;
    map->limit = storage + 32;
    storage->left = 0;
    storage->right = 0;
    storage->black = 0;
    map->head = storage;
    storage->parent = 0;
    storage->left = storage;
    storage->right = storage;
    timer->timeout = timeout;
    sdk_clock_current062u(&timer->last);
    return timer;
}
