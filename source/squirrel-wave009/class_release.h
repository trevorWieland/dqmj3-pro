#ifndef DQMJ3_SQUIRREL_CLASS_RELEASE009_H
#define DQMJ3_SQUIRREL_CLASS_RELEASE009_H

#include "../squirrel-wave008/generator_release.h"

typedef struct {
    SqObject primary;
    SqObject secondary;
} SqClassMember009;

typedef struct {
    SqClassMember009 *values;
    SqU32 size;
    SqU32 capacity;
} SqClassMemberVector009;

typedef struct SqClass009 SqClass009;

struct SqClass009 {
    SqRef reference;
    SqState *shared;
    SqRef *members;
    SqClass009 *base;
    SqClassMemberVector009 members32;
    SqClassMemberVector009 members44;
    SqVector values56;
    SqObject attributes;
    void *type_tag;
    SqI32 (*release_hook)(void *, SqI32);
    unsigned char locked;
    SqU32 instance_bytes;
};

extern const SqVTable sq_class_vtable;
void fn_00665ee0(SqRef *reference);
SqRef *fn_00666144(SqRef *reference);
void fn_00665f20(SqClass009 *klass);
void fn_001a51e0(SqClassMemberVector009 *vector, SqU32 requested, const SqClassMember009 *fill);

_Static_assert(sizeof(void *) != 4 || sizeof(SqClass009) == 92, "target class allocation");
_Static_assert(sizeof(void *) != 4 || sizeof(SqClassMember009) == 16, "target member record stride");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqClass009, attributes) == 68, "target class attributes");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqClass009, release_hook) == 80, "target release hook");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqClass009, instance_bytes) == 88, "target instance payload extent");

#endif
