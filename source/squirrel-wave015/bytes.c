#include "string.h"

SqPrototypeU32 sq_string_length015(const SqStringByte015 *input)
{
    SqPrototypeU32 length = 0;
    while (input[length]) ++length;
    return length;
}

SqPrototypeI32 sq_string_compare015(const void *left, const void *right, SqPrototypeU32 bytes)
{
    const unsigned char *a = left;
    const unsigned char *b = right;
    for (SqPrototypeU32 index = 0; index < bytes; ++index)
        if (a[index] != b[index]) return (SqPrototypeI32)a[index] - b[index];
    return 0;
}

void sq_string_copy015(void *destination, const void *source, SqPrototypeU32 bytes)
{
    unsigned char *output = destination;
    const unsigned char *input = source;
    for (SqPrototypeU32 index = 0; index < bytes; ++index) output[index] = input[index];
}

void sq_string_zero015(void *destination, SqPrototypeU32 bytes)
{
    unsigned char *output = destination;
    for (SqPrototypeU32 index = 0; index < bytes; ++index) output[index] = 0;
}

SqStringTable015 *sq_string_table015(const SqPrefixState012 *shared)
{
    SqStringTable015 *table;
    __builtin_memcpy(&table, shared->unknown_0000 + 20, sizeof(table));
    return table;
}

void sq_string_provision_table015(SqPrefixState012 *shared, SqStringTable015 *table)
{
    __builtin_memcpy(shared->unknown_0000 + 20, &table, sizeof(table));
}
