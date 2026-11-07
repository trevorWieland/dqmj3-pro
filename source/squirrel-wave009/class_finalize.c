#include "class_internal.h"

void fn_00665f20(SqClass009 *klass)
{
    const SqObject null = {0x01000001u, {.reference = 0}};
    SqClassMember009 fill = {null, null};
    fn_0019e864(&klass->attributes, &null);
    fn_001a51e0(&klass->members32, 0, &fill);
    release_member(&fill);
    fill = (SqClassMember009){null, null};
    fn_001a51e0(&klass->members44, 0, &fill);
    release_member(&fill);
    for (SqU32 index = 0; index < klass->values56.size; ++index)
        release_object(klass->values56.values + index);
    klass->values56.size = 0;
    if (klass->members) {
        release_reference(klass->members);
        klass->members = 0;
    }
    if (klass->base) {
        release_reference(&klass->base->reference);
        klass->base = 0;
    }
}
