#include "construction062x.h"

SdkAddressList062x *sdk_address_list_initialize062x(SdkAddressList062x *list)
{
    list->methods = &sdk_address_list_identity062x;
    list->pools = 0;
    list->free_nodes = 0;
    list->next = 0;
    list->limit = 0;
    list->head = 0;
    list->count = 0;
    SdkAddressListPool062x *pool = sdk_allocate062s(sizeof(*pool));
    SdkAddressListNode062x *node = sdk_allocate062s(sizeof(*node));
    pool->storage = node;
    pool->next = list->pools;
    pool->capacity = 1;
    list->pools = pool;
    list->next = node;
    list->limit = node + 1;
    list->head = node;
    list->next = node + 1;
    node->next = node;
    node->previous = node;
    return list;
}
