#ifndef DQMJ3_SQUIRREL_TABLE_LOOKUP019_H
#define DQMJ3_SQUIRREL_TABLE_LOOKUP019_H

#include "../squirrel-wave012/reference_prefix.h"
#include "../squirrel-wave015/string.h"

typedef struct SqTableNode019 {
    SqPrefixObject012 value;
    SqPrefixObject012 key;
    struct SqTableNode019 *next;
} SqTableNode019;

typedef struct SqTable019 {
    SqPrefixCollectable012 reference;
    SqPrefixState012 *shared;
    struct SqTable019 *delegate;
    SqTableNode019 *first_free;
    SqTableNode019 *nodes;
    SqPrototypeI32 node_count;
    SqPrototypeI32 used;
} SqTable019;

SqPrototypeU32 sq_table_hash019(const SqPrefixObject012 *key);
_Bool sq_table_get019(SqTable019 *table, const SqPrefixObject012 *key, SqPrefixObject012 *destination);
_Bool sq_table_set019(SqTable019 *table, const SqPrefixObject012 *key, const SqPrefixObject012 *value);
void sq_table_allocate_nodes019(SqTable019 *table, SqPrototypeI32 count);
SqTable019 *sq_table_initialize019(SqTable019 *table, SqPrefixState012 *shared, SqPrototypeI32 requested);
void *sq_table_allocate019(SqPrototypeU32 bytes);

_Static_assert(sizeof(void *) != 4 || sizeof(SqTableNode019) == 20, "Measured target table node");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqTableNode019, key) == 8, "Measured key field");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqTableNode019, next) == 16, "Measured collision link");
_Static_assert(sizeof(void *) != 4 || sizeof(SqTable019) == 44, "Measured target table extent");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqTable019, nodes) == 32, "Measured node storage");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqTable019, node_count) == 36, "Measured bucket count");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqString015, hash) == 24, "Measured target string hash");

#endif
