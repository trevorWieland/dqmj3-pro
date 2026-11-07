void *memset(void *pointer, int value, __SIZE_TYPE__ bytes)
{
    unsigned char *target = pointer;
    for (__SIZE_TYPE__ index = 0; index < bytes; ++index)
        target[index] = (unsigned char)value;
    return pointer;
}

void __aeabi_memclr4(void *pointer, unsigned int bytes)
{
    memset(pointer, 0, bytes);
}
