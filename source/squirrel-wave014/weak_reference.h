#ifndef DQMJ3_SQUIRREL_WEAK_REFERENCE014_H
#define DQMJ3_SQUIRREL_WEAK_REFERENCE014_H

#include "../squirrel-wave011/prototype_release.h"

typedef SqPrototypeWeak011 SqWeakReference014;
extern const SqPrototypeVTable011 sq_weak_vtable014;
void *sq_weak_allocate014(SqPrototypeU32 bytes);
void sq_weak_deallocate014(void *pointer, SqPrototypeU32 bytes);
SqWeakReference014 *fn_00233b7c(SqPrototypePrefix011 *owner, SqPrototypeU32 type);
void fn_006a7780(SqWeakReference014 *weak);
SqWeakReference014 *fn_006a77c0(SqWeakReference014 *weak);

_Static_assert(sizeof(void *) != 4 || sizeof(SqWeakReference014) == 20, "original weak size");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqWeakReference014, object) == 12, "noncollectable target object");
_Static_assert(_Generic(((SqPrototypeVTable011 *)0)->destroy, void (*)(void *): 1, default: 0), "exact opaque callback");

#endif
