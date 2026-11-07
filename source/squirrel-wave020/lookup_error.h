#ifndef DQMJ3_SQUIRREL_LOOKUP_ERROR020_H
#define DQMJ3_SQUIRREL_LOOKUP_ERROR020_H

#include "lookup.h"

typedef __builtin_va_list SqLookupVarargs020;

void *sq_lookup_reallocate020(void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes);
void sq_lookup_format_integer020(char *destination, SqPrototypeI32 integer);
void sq_lookup_format_float020(char *destination, double floating);
void sq_lookup_vformat020(char *destination, const char *format, SqLookupVarargs020 arguments);
const char *sq_lookup_type_name020(SqPrototypeU32 type);
const char *sq_lookup_object_type_name020(const SqPrefixObject012 *object);
char *sq_lookup_scratch020(SqPrefixState012 *shared, SqPrototypeI32 requested);
SqString015 *sq_lookup_stringify020(void *vm, const SqPrefixObject012 *object);
void sq_lookup_raise_format020(void *vm, const char *format, ...);
void sq_lookup_index_error020(void *vm, const SqPrefixObject012 *key);

#endif
