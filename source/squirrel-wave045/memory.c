#include "initialization.h"

static const SqStartupMemory045 *startup_memory;

_Bool sq_startup_bind_memory045(const SqStartupMemory045 *memory)
{
    if (!memory || !memory->allocate || !memory->resize || !memory->release)
        return 0;
    startup_memory=memory;
    return 1;
}

void *sq_startup_allocate045(SqPrototypeU32 bytes,SqPrototypeU32 alignment)
{
    return startup_memory->allocate(startup_memory->context,bytes,alignment);
}

void *sq_startup_resize045(void *pointer,SqPrototypeU32 old_bytes,SqPrototypeU32 new_bytes,SqPrototypeU32 alignment)
{
    return startup_memory->resize(startup_memory->context,pointer,old_bytes,new_bytes,alignment);
}

void sq_startup_release045(void *pointer,SqPrototypeU32 bytes)
{
    startup_memory->release(startup_memory->context,pointer,bytes);
}
