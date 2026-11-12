void *memset(void *memory, int value, __SIZE_TYPE__ bytes)
{
    volatile unsigned char *out = memory;
    for (__SIZE_TYPE__ index = 0; index < bytes; ++index)
        out[index] = (unsigned char)value;
    return memory;
}

