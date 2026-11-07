#include "coercion.h"

void sq_coercion_pointer_text026(char *destination, const char *type, SqCoercionAddress026 address)
{
    if (!type) sq_coercion_format_failure026();
    *destination++ = '(';
    while (*type) *destination++ = *type++;
    const char separator[] = " : 0x";
    for (SqPrototypeU32 index = 0; index < sizeof(separator) - 1; ++index)
        *destination++ = separator[index];
    const char digits[] = "0123456789abcdef";
    for (SqPrototypeU32 index = 2 * sizeof(address); index; --index)
        *destination++ = digits[(address >> ((index - 1) * 4)) & 15u];
    *destination++ = ')';
    *destination = 0;
}
