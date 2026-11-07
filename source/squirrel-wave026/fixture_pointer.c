#include "fixture_internal.h"

SQ_COERCION_FIXTURE026 SqPrototypeU32 fixture_pointer_budget026(char *destination, SqCoercionAddress026 address)
{
    sq_coercion_pointer_text026(destination, "generator", address);
    SqPrototypeU32 count = 0;
    while (destination[count]) ++count;
    return count + 1;
}
