#include "class_internal.h"

void fn_001a51e0(SqClassMemberVector009 *vector, SqU32 requested, const SqClassMember009 *fill)
{
    if (vector->capacity < requested) {
        SqU32 capacity = requested ? requested : 4;
        vector->values = sq_reallocate(vector->values, vector->capacity * sizeof(SqClassMember009),
            capacity * sizeof(SqClassMember009));
        vector->capacity = capacity;
    }
    if (vector->size < requested) {
        while (vector->size < requested) {
            SqClassMember009 *member = vector->values + vector->size;
            if (member) {
                const SqObject null = {0x01000001u, {.reference = 0}};
                *member = (SqClassMember009){null, null};
                fn_0019e864(&member->primary, &fill->primary);
                fn_0019e864(&member->secondary, &fill->secondary);
            }
            vector->size += 1;
        }
    } else {
        for (SqU32 index = requested; index < vector->size; ++index) {
            SqClassMember009 *member = vector->values + index;
            release_member(member);
        }
        vector->size = requested;
    }
}
