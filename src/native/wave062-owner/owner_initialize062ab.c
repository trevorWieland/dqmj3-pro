#include "owner062ab.h"

static void initialize88(SdkOwnerMap88062ab *map)
{
    map->pools = 0;
    map->head = 0;
    map->count = 0;
    map->allow_duplicates = 0;
    map->address_tag = (SdkByte062s)(__UINTPTR_TYPE__)&sdk_owner_identity062ab;
    map->limit = 0;
    map->next = 0;
    map->free_nodes = 0;
    SdkOwnerPool88062ab *pool = sdk_allocate062s(sizeof(*pool));
    pool->storage = sdk_allocate062s(32 * sizeof(*pool->storage));
    pool->next = map->pools;
    pool->capacity = 32;
    map->pools = pool;
    map->next = pool->storage;
    map->limit = pool->storage + 32;
    SdkOwnerNode88062ab *head = map->next++;
    head->left = 0;
    head->right = 0;
    head->black = 0;
    map->head = head;
    head->parent = 0;
    head->left = head;
    head->right = head;
}

static void initialize56(SdkOwnerMap56062ab *map, const void *tag)
{
    map->pools = 0;
    map->head = 0;
    map->count = 0;
    map->allow_duplicates = 0;
    map->address_tag = (SdkByte062s)(__UINTPTR_TYPE__)tag;
    map->limit = 0;
    map->next = 0;
    map->free_nodes = 0;
    SdkOwnerPool56062ab *pool = sdk_allocate062s(sizeof(*pool));
    pool->storage = sdk_allocate062s(32 * sizeof(*pool->storage));
    pool->next = map->pools;
    pool->capacity = 32;
    map->pools = pool;
    map->next = pool->storage;
    map->limit = pool->storage + 32;
    SdkOwnerNode56062ab *head = map->next++;
    head->left = 0;
    head->right = 0;
    head->black = 0;
    map->head = head;
    head->parent = 0;
    head->left = head;
    head->right = head;
}

SdkOwner062ab *sdk_owner_initialize062ab(SdkOwner062ab *owner)
{
    owner->identity = &sdk_owner_base_identity062ab;
    owner->component = 8;
    sdk_config_select062ab(8)->component = owner->component;
    owner->identity = &sdk_owner_identity062ab;
    initialize88(&owner->map88);
    initialize56(&owner->map56, owner->map88.head);
    owner->stamp.low = 0;
    owner->stamp.high = 0;
    sdk_mutex_initialize062u(&owner->mutex, 1);
    SdkWord062s timeout = 3u * sdk_config_select062ab(1)->parameter_006c;
    sdk_timer_initialize062aa(&owner->timer, timeout);
    owner->reference_a = 0;
    owner->stamp.low = 0;
    owner->reference_b = 0;
    owner->stamp.high = 0;
    return owner;
}
