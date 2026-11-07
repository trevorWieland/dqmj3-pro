#include "weak_reference.h"

SqWeakReference014 *fn_00233b7c(SqPrototypePrefix011 *owner, SqPrototypeU32 type)
{
    if (!owner->weak) {
        SqWeakReference014 *weak = sq_weak_allocate014(sizeof(SqWeakReference014));
        owner->weak = weak;
        weak->prefix.references = 0;
        weak->prefix.weak = 0;
        weak->prefix.vtable = &sq_weak_vtable014;
        weak->object.type = type;
        weak->object.value.reference = owner;
    }
    return owner->weak;
}

void fn_006a7780(SqWeakReference014 *weak)
{
    if (weak->object.type & 0x08000000u) {
        SqPrototypePrefix011 *target = weak->object.value.reference;
        target->weak = 0;
    }
    weak->prefix.vtable->destroy(weak);
    sq_weak_deallocate014(weak, sizeof(SqWeakReference014));
}

SqWeakReference014 *fn_006a77c0(SqWeakReference014 *weak)
{
    weak->prefix.vtable = &sq_prototype_base_vtable011;
    if (weak->prefix.weak) {
        SqWeakReference014 *dependent = weak->prefix.weak;
        dependent->object.type = 0x01000001u;
        dependent->object.value.reference = 0;
    }
    return weak;
}
