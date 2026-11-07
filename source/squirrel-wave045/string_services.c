#include "initialization.h"

SqStringTable015 *sq_string_table015(const SqPrefixState012 *prefix)
{
    return sq_startup_strings045(sq_startup_full_shared045((SqPrefixState012*)prefix));
}

void sq_string_provision_table015(SqPrefixState012 *prefix,SqStringTable015 *table)
{
    sq_startup_set_strings045(sq_startup_full_shared045(prefix),table);
}

SqPrototypeU32 sq_string_length015(const SqStringByte015 *input)
{
    SqPrototypeU32 size=0;
    while (input[size])
        size++;
    return size;
}

SqPrototypeI32 sq_string_compare015(const void *left,const void *right,SqPrototypeU32 size)
{
    const unsigned char *a=left,*b=right;
    for (SqPrototypeU32 index=0;index<size;index++)
        if (a[index]!=b[index])
            return (SqPrototypeI32)a[index]-b[index];
    return 0;
}

void sq_string_copy015(void *destination,const void *source,SqPrototypeU32 size)
{
    unsigned char *output=destination;
    const unsigned char *input=source;
    for (SqPrototypeU32 index=0;index<size;index++)
        output[index]=input[index];
}

void sq_string_zero015(void *destination,SqPrototypeU32 size)
{
    unsigned char *output=destination;
    for (SqPrototypeU32 index=0;index<size;index++)
        output[index]=0;
}

SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes)
{
    return sq_startup_allocate045(bytes,_Alignof(SqString015));
}

SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes)
{
    return sq_startup_allocate045(bytes,_Alignof(SqString015*));
}

void sq_string_deallocate_value015(SqString015 *pointer,SqPrototypeU32 bytes)
{
    sq_startup_release045(pointer,bytes);
}

void sq_string_deallocate_buckets015(SqString015 **pointer,SqPrototypeU32 bytes)
{
    sq_startup_release045(pointer,bytes);
}

_Noreturn void sq_string_missing015(void)
{
    __builtin_trap();
}
