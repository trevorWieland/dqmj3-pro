void __aeabi_memcpy(void *destination, const void *source, unsigned int bytes)
{
    unsigned char *output = destination;
    const unsigned char *input = source;
    for (unsigned int index = 0; index < bytes; index++) output[index] = input[index];
}
