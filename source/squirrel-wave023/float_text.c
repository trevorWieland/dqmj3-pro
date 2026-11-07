#include "float_text.h"

static SqPrototypeU32 multiply(unsigned char *digits, SqPrototypeU32 count, SqPrototypeU32 factor)
{
    SqPrototypeU32 carry = 0;
    for (SqPrototypeU32 index = 0; index < count; ++index) {
        SqPrototypeU32 product = digits[index] * factor + carry;
        digits[index] = (unsigned char)(product % 10);
        carry = product / 10;
    }
    if (carry) digits[count++] = (unsigned char)carry;
    return count;
}

_Bool sq_float_binary32_text023(char *destination, SqPrototypeU32 bits)
{
    SqPrototypeU32 field = (bits >> 23) & 255u;
    SqPrototypeU32 significand = bits & 0x007fffffu;
    if (field == 255) { *destination = 0; return 0; }
    if (bits >> 31) *destination++ = '-';
    if (!field && !significand) { *destination++ = '0'; *destination = 0; return 1; }
    SqPrototypeI32 power = field ? (SqPrototypeI32)field - 150 : -149;
    if (field) significand |= 0x00800000u;
    unsigned char exact[128], significant[14];
    SqPrototypeU32 count = 0;
    do { exact[count++] = (unsigned char)(significand % 10); significand /= 10; } while (significand);
    SqPrototypeU32 scale = power < 0 ? (SqPrototypeU32)-power : 0;
    SqPrototypeU32 multiplications = power < 0 ? scale : (SqPrototypeU32)power;
    for (SqPrototypeU32 index = 0; index < multiplications; ++index)
        count = multiply(exact, count, power < 0 ? 5u : 2u);
    SqPrototypeI32 exponent = (SqPrototypeI32)count - (SqPrototypeI32)scale - 1;
    SqPrototypeU32 length = count < 14 ? count : 14;
    for (SqPrototypeU32 index = 0; index < length; ++index) significant[index] = exact[count - index - 1];
    if (count > 14) {
        SqPrototypeU32 discarded = count - 14;
        SqPrototypeU32 next = exact[discarded - 1], nonzero = 0;
        for (SqPrototypeU32 index = 0; index + 1 < discarded; ++index) nonzero |= exact[index];
        if (next > 5 || (next == 5 && (nonzero || (significant[13] & 1u)))) {
            SqPrototypeI32 index = 13;
            while (index >= 0 && significant[index] == 9) significant[index--] = 0;
            if (index >= 0) significant[index]++;
            else { significant[0] = 1; exponent++; }
        }
    }
    while (length > 1 && !significant[length - 1]) --length;
    if (exponent < -4 || exponent >= 14) {
        *destination++ = (char)('0' + significant[0]);
        if (length > 1) {
            *destination++ = '.';
            for (SqPrototypeU32 index = 1; index < length; ++index)
                *destination++ = (char)('0' + significant[index]);
        }
        *destination++ = 'e'; *destination++ = exponent < 0 ? '-' : '+';
        SqPrototypeU32 magnitude = exponent < 0 ? (SqPrototypeU32)-exponent : (SqPrototypeU32)exponent;
        *destination++ = (char)('0' + magnitude / 10);
        *destination++ = (char)('0' + magnitude % 10);
    } else if (exponent < 0) {
        *destination++ = '0'; *destination++ = '.';
        for (SqPrototypeI32 index = -1; index > exponent; --index) *destination++ = '0';
        for (SqPrototypeU32 index = 0; index < length; ++index)
            *destination++ = (char)('0' + significant[index]);
    } else {
        SqPrototypeU32 integer = (SqPrototypeU32)exponent + 1;
        for (SqPrototypeU32 index = 0; index < integer; ++index)
            *destination++ = index < length ? (char)('0' + significant[index]) : '0';
        if (length > integer) {
            *destination++ = '.';
            for (SqPrototypeU32 index = integer; index < length; ++index)
                *destination++ = (char)('0' + significant[index]);
        }
    }
    *destination = 0;
    return 1;
}
