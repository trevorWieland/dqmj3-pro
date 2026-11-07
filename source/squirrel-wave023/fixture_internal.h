#ifndef DQMJ3_LOOKUP_FIXTURE023_H
#define DQMJ3_LOOKUP_FIXTURE023_H

#include "instance_meta.h"
#include "../squirrel-wave020/fixture_internal.h"

extern SqPrototypeU32 fixture_variant023;
extern SqPrototypeU32 fixture_cleanup023;
extern SqPrototypeU32 fixture_allocating023;
#ifdef _WIN32
#define SQ_FIXTURE_API023 __declspec(dllexport)
#else
#define SQ_FIXTURE_API023
#endif
SQ_FIXTURE_API023 void fixture_prepare023(SqPrototypeU32 variant, SqPrototypeU32 cleanup);
SQ_FIXTURE_API023 SqPrototypeU32 fixture_execute023(void);
SQ_FIXTURE_API023 SqPrototypeU32 fixture_snapshot023(SqPrototypeU32 *output, SqPrototypeU32 capacity);
void fixture_publish_instance023(void);
void fixture_delegate_release023(void *owner);
SqPrototypeU32 fixture_float_bits023(SqPrototypeU32 index);
SqPrototypeU32 fixture_float_count023(void);
void fixture_float023(void);
void fixture_call_initialize023(void);
void fixture_call_array_method023(void);
void fixture_call_arity_failure023(void);
void fixture_call_execute023(void);
void *fixture_array_allocate023(SqPrototypeU32 bytes);
void *fixture_vector_reallocate023(void *owner, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes);
void fixture_call_deallocate023(void *owner, SqPrototypeU32 bytes);
SqPrototypeU32 fixture_call_snapshot023(SqPrototypeU32 *output);
SqString015 *fixture_allocate_string019_saved(SqPrototypeU32 bytes);
void fixture_table_deallocate019_saved(void *owner, SqPrototypeU32 bytes);
_Bool fixture_invoke020_boundary(void *vm, const SqPrefixObject012 *callable,
    SqPrototypeI32 arguments, SqPrototypeI32 base, SqPrefixObject012 *destination, SqPrototypeU32 raise_error);
_Bool fixture_real_invoke023(void *vm, const SqPrefixObject012 *callable,
    SqPrototypeI32 arguments, SqPrototypeI32 base, SqPrefixObject012 *destination, SqPrototypeU32 raise_error);

#endif
