#ifndef DQMJ3_SQUIRREL_STRING015_H
#define DQMJ3_SQUIRREL_STRING015_H

#include "../squirrel-wave012/reference_types.h"

typedef signed char SqStringByte015;
typedef unsigned short SqStringCode015;
typedef struct SqString015 {
    SqPrototypePrefix011 reference;
    SqPrefixState012 *shared;
    struct SqString015 *next;
    SqPrototypeI32 length;
    SqPrototypeU32 hash;
    SqStringByte015 value[];
} SqString015;
typedef struct SqStringTable015 {
    SqString015 **buckets;
    SqPrototypeI32 slots;
    SqPrototypeI32 used;
} SqStringTable015;

extern const SqPrototypeVTable011 sq_string_vtable015;
SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes);
SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes);
void sq_string_deallocate_value015(SqString015 *string, SqPrototypeU32 bytes);
void sq_string_deallocate_buckets015(SqString015 **buckets, SqPrototypeU32 bytes);
_Noreturn void sq_string_missing015(void);
SqPrototypeU32 sq_string_length015(const SqStringByte015 *input);
SqPrototypeI32 sq_string_compare015(const void *left, const void *right, SqPrototypeU32 bytes);
void sq_string_copy015(void *destination, const void *source, SqPrototypeU32 bytes);
void sq_string_zero015(void *destination, SqPrototypeU32 bytes);
SqPrototypeU32 sq_string_hash015(const SqStringByte015 *input, SqPrototypeU32 length);
SqPrototypeU32 sq_string_allocation_bytes015(SqPrototypeU32 length);
SqStringTable015 *sq_string_table015(const SqPrefixState012 *shared);
void sq_string_provision_table015(SqPrefixState012 *shared, SqStringTable015 *table);
SqString015 *fn_0016b5f0(SqStringTable015 *table, const SqStringByte015 *input, SqPrototypeI32 length);
SqString015 *fn_0019ba68(SqPrefixState012 *shared, const SqStringByte015 *input, SqPrototypeI32 length);
void fn_0024d9e0(SqStringTable015 *table, SqString015 *string);
void fn_0024d9cc(SqString015 *string);
SqString015 *fn_0068f564(SqString015 *string);

_Static_assert(sizeof(SqStringByte015) == 1 && (SqStringByte015)0x80 == -128, "signed original bytes");
_Static_assert(sizeof(SqStringCode015) == 2, "original hash conversion");
_Static_assert(sizeof(void *) != 4 || __builtin_offsetof(SqString015, value) == 28, "original byte storage");
_Static_assert(sizeof(void *) != 4 || sizeof(SqStringTable015) == 12, "original table words");
_Static_assert(sizeof(((SqPrefixState012 *)0)->unknown_0000) >= 20 + sizeof(SqStringTable015 *), "reserved opaque field storage");

#endif
