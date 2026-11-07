#ifndef DQMJ3_SQUIRREL_PROTOTYPE_INTERNAL011_H
#define DQMJ3_SQUIRREL_PROTOTYPE_INTERNAL011_H

#include "prototype_release.h"

static inline void release_object(const SqPrototypeObject011 *object)
{
    if (object->type & 0x08000000u) {
        SqPrototypePrefix011 *prefix = object->value.reference;
        prefix->references -= 1;
        if (!prefix->references)
            prefix->vtable->release(prefix);
    }
}

#endif
