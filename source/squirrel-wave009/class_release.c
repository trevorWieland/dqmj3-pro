#include "class_internal.h"

static void destroy_members(SqClassMemberVector009 *vector)
{
    if (vector->capacity) {
        for (SqU32 index = 0; index < vector->size; ++index) {
            SqClassMember009 *member = vector->values + index;
            release_member(member);
        }
        sq_deallocate(vector->values, vector->capacity * sizeof(SqClassMember009));
    }
}

void fn_00665ee0(SqRef *reference)
{
    SqClass009 *klass = (SqClass009 *)reference;
    if (klass->release_hook)
        klass->release_hook(klass->type_tag, 0);
    reference->vtable->unknown_0(reference);
    sq_deallocate(reference, sizeof(SqClass009));
}

SqRef *fn_00666144(SqRef *reference)
{
    SqClass009 *klass = (SqClass009 *)reference;
    reference->vtable = &sq_class_vtable;
    if (!(reference->references & 0x80000000u))
        fn_0024d73c(&klass->shared->chain, reference);
    fn_00665f20(klass);
    release_object(&klass->attributes);
    fn_0077f3f8(&klass->values56);
    destroy_members(&klass->members44);
    destroy_members(&klass->members32);
    reference->vtable = &sq_release007_weak_vtable;
    if (reference->weak) {
        ((SqWeakObject007 *)reference->weak)->object.type = 0x01000001u;
        ((SqWeakObject007 *)reference->weak)->object.value.reference = 0;
    }
    return reference;
}
