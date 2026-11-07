#ifndef DQMJ3_SQUIRREL_ARRAY_RELEASE007_H
#define DQMJ3_SQUIRREL_ARRAY_RELEASE007_H

#include "../squirrel-wave002/array_views.h"

typedef struct {
    const SqVTable *vtable;
    SqU32 references;
    void *weak;
} SqWeakPrefix007;

typedef struct {
    SqWeakPrefix007 prefix;
    SqObject object;
} SqWeakObject007;

extern const SqVTable sq_release007_weak_vtable;
void sq_deallocate(void *pointer, SqU32 bytes);
void fn_00665bd4(SqRef *reference);
SqRef *fn_00665c60(SqRef *reference);
SqVector *fn_0077f3f8(SqVector *vector);
void fn_0024d73c(SqRef **head, SqRef *reference);

_Static_assert(sizeof(void *) != 4 || sizeof(SqWeakPrefix007) == 12, "target weak prefix extent");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqWeakObject007, object) == 12, "target weak payload");

#endif
