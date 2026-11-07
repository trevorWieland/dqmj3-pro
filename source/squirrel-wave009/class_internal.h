#ifndef DQMJ3_SQUIRREL_CLASS_INTERNAL009_H
#define DQMJ3_SQUIRREL_CLASS_INTERNAL009_H

#include "class_release.h"

static inline void release_reference(SqRef *reference)
{
    reference->references -= 1;
    if (!reference->references)
        reference->vtable->release(reference);
}

static inline void release_object(const SqObject *object)
{
    if (object->type & 0x08000000u)
        release_reference(object->value.reference);
}

static inline void release_member(const SqClassMember009 *member)
{
    release_object(&member->secondary);
    release_object(&member->primary);
}

#endif
