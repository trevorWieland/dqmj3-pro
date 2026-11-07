void *memset(void *pointer, int value, __SIZE_TYPE__ bytes);

void __aeabi_memclr8(void *pointer, unsigned int bytes)
{
    memset(pointer, 0, bytes);
}
