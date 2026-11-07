#include "coercion.h"
#include "float_text.h"

void sq_coercion_integer_text026(char *destination, SqPrototypeI32 value)
{
    char reverse[16];
    SqPrototypeU32 count = 0, magnitude = value < 0 ? 0u - (SqPrototypeU32)value : (SqPrototypeU32)value;
    do { reverse[count++] = (char)('0' + magnitude % 10); magnitude /= 10; } while (magnitude);
    if (value < 0) *destination++ = '-';
    while (count) *destination++ = reverse[--count];
    *destination = 0;
}

void sq_coercion_boolean_text026(char *destination, SqPrototypeU32 value)
{
    const char *text = value ? "true" : "false";
    do { *destination++ = *text; } while (*text++);
}

void sq_coercion_float_text026(char *destination, double value)
{
    float narrowed = (float)value;
    SqPrototypeU32 bits;
    __builtin_memcpy(&bits, &narrowed, sizeof(bits));
    if ((bits & 0x7f800000u) == 0x7f800000u) {
        if (bits >> 31) *destination++ = '-';
        const char *text = bits & 0x007fffffu ? "nan" : "inf";
        for (SqPrototypeU32 index = 0; index < 4; ++index) destination[index] = text[index];
        return;
    }
    if (!sq_float_binary32_text026(destination, bits)) sq_coercion_format_failure026();
}
