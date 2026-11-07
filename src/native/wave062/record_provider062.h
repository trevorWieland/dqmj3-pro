#ifndef RECORD_PROVIDER062_H
#define RECORD_PROVIDER062_H

#include "resource062.h"

typedef struct ResourceManagerPointerVector062 {
    ResourceManager062 **begin;
    ResourceManager062 **end;
    ResourceManager062 **limit;
} ResourceManagerPointerVector062;

typedef struct ResourceBinding062 {
    const void *methods;
    ResourceManagerPointerVector062 registered;
    Byte062 dirty;
    signed char enabled;
} ResourceBinding062;

typedef struct ResourceManagerMethods062 {
    void (*unknown[6])(void);
    Word062 (*request)(ResourceManager062 *, Word062);
} ResourceManagerMethods062;

typedef struct ResourceManagerSlot062 {
    const void *methods;
    Word062 request;
    Word062 kind;
    ResourceBlock062 block;
} ResourceManagerSlot062;

struct ResourceManager062 {
    const ResourceManagerMethods062 *methods;
    ResourceBinding062 *binding;
    Word062 capacity;
    Byte062 reserved[4];
    ResourceManagerSlot062 pending;
    ResourceManagerSlot062 slots[8];
};

struct ResourceSink062 {
    Byte062 unknown[48];
    ResourceRecordVector062 first;
    ResourceRecordVector062 second;
};

Word062 resource_manager_query062(ResourceManager062 *, Word062);

#endif
