#ifndef DQMJ3_CALL_CONTRACT_FIXTURE022_H
#define DQMJ3_CALL_CONTRACT_FIXTURE022_H
#include "fixture.h"
typedef struct {
    SqPrototypeU32 mode,raise_error,execute_visits,class_visits,native_visits;
    SqPrototypeI32 target,arguments,base,execution_type,native_top,native_base,native_calls,native_depth;
    SqPrototypeU32 transported_raise_error,receiver_type,receiver_payload;
    SqPrefixObject012 callable,script_owner;
} SqCallContractFixture022;
extern SqCallContractFixture022 contract_fixture022;
void fixture_contract_reset022(void);
void fixture_contract_prepare022(SqPrototypeU32 mode,SqPrototypeU32 raise_error);
void fixture_contract_call022(SqPrototypeU32 source);
void fixture_contract_cleanup022(SqPrototypeU32 source);
SqPrototypeU32 fixture_contract_snapshot022(SqPrototypeU32 *output,SqPrototypeU32 capacity);
SqPrototypeI32 fixture_native_dispatch022(void *vm);
_Bool fixture_execute_contract022(void *vm,const SqPrefixObject012 *callable,SqPrototypeI32 target,SqPrototypeI32 arguments,
    SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeU32 execution_type);
_Bool fixture_class_contract022(void *vm,SqLookupClassStorage020 *klass,SqPrefixObject012 *instance,SqPrefixObject012 *constructor);
#endif
