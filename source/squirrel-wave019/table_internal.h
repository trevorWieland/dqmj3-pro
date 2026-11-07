#ifndef DQMJ3_SQUIRREL_TABLE_INTERNAL019_H
#define DQMJ3_SQUIRREL_TABLE_INTERNAL019_H

#include "table.h"

extern const SqPrototypeVTable011 sq_table_vtable019;
_Bool sq_table_key_equal019(const SqPrefixObject012 *left, const SqPrefixObject012 *right);
SqTableNode019 *sq_table_find_node019(SqTable019 *table, const SqPrefixObject012 *key);
_Bool sq_table_new_slot019(SqTable019 *table, const SqPrefixObject012 *key, const SqPrefixObject012 *value);
void sq_table_rehash019(SqTable019 *table, SqPrototypeU32 force);
_Bool sq_table_delegate019(SqTable019 *table, SqTable019 *delegate);
void sq_table_release019(SqTable019 *table);
SqTable019 *sq_table_destroy019(SqTable019 *table);
void sq_table_deallocate019(void *pointer, SqPrototypeU32 bytes);
_Noreturn void sq_table_invalid019(void);

#endif
