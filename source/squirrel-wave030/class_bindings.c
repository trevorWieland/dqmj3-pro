#include "class_internal.h"

void sq_class_bind_constructor_name030(SqPrefixState012 *shared,const SqPrefixObject012 *name)
{
#if __SIZEOF_POINTER__ == 4
    __builtin_memcpy(shared->unknown_0000+60,name,sizeof(*name));
#else
    SqClassSharedStorage030 *storage=(void*)shared;
    storage->constructor_name=*name;
#endif
}

SqPrefixObject012 sq_class_constructor_name030(const SqPrefixState012 *shared)
{
    SqPrefixObject012 name;
#if __SIZEOF_POINTER__ == 4
    __builtin_memcpy(&name,shared->unknown_0000+60,sizeof(name));
#else
    const SqClassSharedStorage030 *storage=(const void*)shared;
    name=storage->constructor_name;
#endif
    return name;
}

void sq_class_add_chain030(SqPrefixState012 *shared,SqPrefixCollectable012 *node)
{
    node->next=shared->chain;
    if(shared->chain)shared->chain->previous=node;
    shared->chain=node;
}

void sq_class_remove_chain030(SqPrefixState012 *shared,SqPrefixCollectable012 *node)
{
    if(node->previous)node->previous->next=node->next;
    else shared->chain=node->next;
    if(node->next)node->next->previous=node->previous;
    node->next=node->previous=0;
}

void sq_class_reset_weak030(SqPrototypePrefix011 *prefix)
{
    prefix->vtable=&sq_prototype_base_vtable011;
    if(prefix->weak) {
        SqPrototypeWeak011 *weak=prefix->weak;
        weak->object.type=0x01000001u;
        weak->object.value.reference=0;
    }
}

void sq_class_release_member030(const SqLookupMember020 *member)
{
    sq_prefix_release(member->secondary.type,member->secondary.value);
    sq_prefix_release(member->primary.type,member->primary.value);
}
