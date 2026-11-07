#ifndef DQMJ3_SQUIRREL_NATIVE_CREATE_FIXTURE016_H
#define DQMJ3_SQUIRREL_NATIVE_CREATE_FIXTURE016_H

#include "native_create.h"

SqPrototypeU32 fixture_native_bind016(void *arena, SqPrototypeU32 bytes, const SqPrototypeVTable011 *native_table,
    const SqPrototypeVTable011 *prototype_table, const SqPrototypeVTable011 *base_table);
void fixture_native_prepare016(SqPrototypeU32 captures, SqPrototypeU32 flags);
void fixture_native_run016(SqPrototypeU32 source, SqPrototypeU32 captures, SqPrototypeU32 cleanup);
SqPrototypeU32 fixture_native_snapshot016(SqPrototypeU32 *output, SqPrototypeU32 capacity);
SqPrototypeI32 fixture_native_callable016(void *vm);
void fixture_prefix_unsupported012(SqU32 type, void *pointer);

#endif
