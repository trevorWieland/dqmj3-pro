typedef __SIZE_TYPE__ Size062;

void *memcpy(void *destination, const void *source, Size062 bytes)
{
    unsigned char *to = destination;
    const unsigned char *from = source;
    for (Size062 index = 0; index < bytes; ++index)
        to[index] = from[index];
    return destination;
}

void *memset(void *destination, int value, Size062 bytes)
{
    unsigned char *to = destination;
    for (Size062 index = 0; index < bytes; ++index)
        to[index] = (unsigned char)value;
    return destination;
}

void __aeabi_memcpy(void *destination, const void *source, Size062 bytes)
{
    memcpy(destination, source, bytes);
}

void __aeabi_memclr8(void *destination, Size062 bytes)
{
    memset(destination, 0, bytes);
}
