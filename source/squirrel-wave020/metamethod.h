#ifndef DQMJ3_SQUIRREL_METAMETHOD020_H
#define DQMJ3_SQUIRREL_METAMETHOD020_H

#include "../squirrel-wave019/table.h"
#include "../squirrel-wave016/native_create.h"

typedef struct SqLookupMetaVTable020 {
    SqPrototypeVTable011 prefix;
    void (*uninvoked_slot3)(void);
    void (*uninvoked_slot4)(void);
    _Bool (*get_method)(void *owner, void *vm, SqPrototypeU32 selector, SqPrefixObject012 *destination);
} SqLookupMetaVTable020;

typedef void (*SqLookupPublicationObserver020)(void *context, const SqTable019 *table,
    const SqLookupMetaVTable020 *storage);

void sq_lookup_bind_names020(SqPrefixState012 *shared, SqPrefixVector012 *names);
SqPrefixVector012 *sq_lookup_names020(const SqPrefixState012 *shared);
_Bool sq_lookup_table_meta020(SqTable019 *table, void *vm, SqPrototypeU32 selector, SqPrefixObject012 *destination);
void sq_lookup_publish_table_methods020(SqTable019 *table, SqLookupMetaVTable020 *storage,
    SqLookupPublicationObserver020 observer, void *context);

_Static_assert(__builtin_offsetof(SqLookupMetaVTable020, prefix) == 0, "named lifetime prefix");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqLookupMetaVTable020, get_method) == 20, "original virtual slot five");
_Static_assert(sizeof(void *) != 8 || __builtin_offsetof(SqLookupMetaVTable020, get_method) == 40, "native virtual slot five");
_Static_assert(sizeof(void *) <= 20, "metamethod pointer slot does not overlap string015 pointer slot");
_Static_assert(_Generic(((SqLookupMetaVTable020 *)0)->get_method,
    _Bool (*)(void *, void *, SqPrototypeU32, SqPrefixObject012 *): 1, default: 0), "exact opaque method callback");

#endif
