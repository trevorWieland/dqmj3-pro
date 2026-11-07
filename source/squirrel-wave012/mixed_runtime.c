void *memset(void *destination, int value, __SIZE_TYPE__ bytes)
{
    unsigned char *output = destination;
    for (__SIZE_TYPE__ index = 0; index < bytes; index++) output[index] = (unsigned char)value;
    return destination;
}

void *memcpy(void *destination, const void *source, __SIZE_TYPE__ bytes)
{
    unsigned char *output = destination;
    const unsigned char *input = source;
    for (__SIZE_TYPE__ index = 0; index < bytes; index++) output[index] = input[index];
    return destination;
}

void __aeabi_memcpy(void *destination, const void *source, unsigned int bytes) { memcpy(destination, source, bytes); }
void __aeabi_memcpy4(void *destination, const void *source, unsigned int bytes) { memcpy(destination, source, bytes); }
void __aeabi_memclr(void *destination, unsigned int bytes) { memset(destination, 0, bytes); }
void __aeabi_memclr4(void *destination, unsigned int bytes) { memset(destination, 0, bytes); }
void __aeabi_memclr8(void *destination, unsigned int bytes) { memset(destination, 0, bytes); }
