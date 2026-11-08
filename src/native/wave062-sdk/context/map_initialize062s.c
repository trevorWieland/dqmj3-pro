#include "sdk062s.h"

SdkMap062s *sdk_map_initialize062s(SdkMap062s *map)
{
    map->pools = (void *)0;
    map->head = (void *)0;
    map->count = 0;
    map->allow_duplicates = 0;
    map->unknown_0019 = (SdkByte062s)(__UINTPTR_TYPE__)map;
    map->limit = (void *)0;
    map->next = (void *)0;
    map->free_nodes = (void *)0;
    SdkPool062s *pool = sdk_allocate062s((SdkWord062s)sizeof(*pool));
    SdkNode062s *storage = sdk_allocate062s(32 * (SdkWord062s)sizeof(*storage));
    pool->storage = storage;
    pool->next = map->pools;
    pool->capacity = 32;
    map->pools = pool;
    map->next = storage + 1;
    map->limit = storage + 32;
    storage->left = (void *)0;
    storage->right = (void *)0;
    storage->black = 0;
    map->head = storage;
    storage->parent = (void *)0;
    map->head->left = map->head;
    map->head->right = map->head;
    return map;
}
