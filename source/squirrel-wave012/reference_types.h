#ifndef SQ_PORTABLE_REFERENCE_TYPES012_H
#define SQ_PORTABLE_REFERENCE_TYPES012_H

#include "../squirrel-wave011/prototype_release.h"

typedef SqPrototypeObject011 SqPrefixObject012;
typedef SqPrototypeValue011 SqPrefixValue012;

typedef struct {
    SqPrefixObject012 *values;
    SqPrototypeU32 size;
    SqPrototypeU32 capacity;
} SqPrefixVector012;

typedef struct {
    void *values;
    SqPrototypeU32 size;
    SqPrototypeU32 capacity;
} SqPrefixPodVector012;

typedef struct SqPrefixCollectable012 SqPrefixCollectable012;

struct SqPrefixCollectable012 {
    SqPrototypePrefix011 prefix;
    SqPrefixCollectable012 *next;
    SqPrefixCollectable012 *previous;
};

typedef struct SqPrefixState012 {
    unsigned char unknown_0000[68];
    SqPrefixCollectable012 *chain;
} SqPrefixState012;

_Static_assert(sizeof(void *) != 4 || sizeof(SqPrefixCollectable012) == 20, "target collectable prefix");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqPrefixCollectable012, next) == 12, "target chain link");
_Static_assert(sizeof(void *) != 8 || sizeof(SqPrefixCollectable012) == 40, "native collectable prefix");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqPrefixState012, chain) == 68, "target shared chain");
_Static_assert(sizeof(void *) != 8 || __builtin_offsetof(SqPrefixState012, chain) == 72, "native shared chain");

#endif
