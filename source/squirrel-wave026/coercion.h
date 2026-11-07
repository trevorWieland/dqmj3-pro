#ifndef DQMJ3_COERCION026_H
#define DQMJ3_COERCION026_H

#include "../squirrel-wave022/vm_call.h"
#include "../squirrel-wave020/lookup_error.h"

typedef __UINTPTR_TYPE__ SqCoercionAddress026;

void sq_value_to_string026(void *vm, const SqPrefixObject012 *input, SqPrefixObject012 *destination);
void sq_index_to_string026(void *vm, SqPrototypeI32 index);
void sq_coercion_integer_text026(char *destination, SqPrototypeI32 value);
void sq_coercion_float_text026(char *destination, double value);
void sq_coercion_boolean_text026(char *destination, SqPrototypeU32 value);
void sq_coercion_pointer_text026(char *destination, const char *type, SqCoercionAddress026 address);
_Noreturn void sq_coercion_allocation_failure026(void);
_Noreturn void sq_coercion_format_failure026(void);

#endif
