#include "execute_views.h"

static SqU32 divide_integer(SqU32 numerator, SqU32 denominator, _Bool remainder_result)
{
    _Bool negative_numerator = (numerator & 0x80000000u) != 0;
    _Bool negative_denominator = (denominator & 0x80000000u) != 0;
    if (negative_numerator) numerator = 0u - numerator;
    if (negative_denominator) denominator = 0u - denominator;
    SqU32 quotient = 0;
    SqU32 remainder = 0;
    for (SqU32 bit = 32; bit--;) {
        _Bool carry = (remainder & 0x80000000u) != 0;
        remainder = (remainder << 1) | ((numerator >> bit) & 1);
        if (carry || remainder >= denominator) {
            remainder -= denominator;
            quotient |= 1u << bit;
        }
    }
    SqU32 result = remainder_result ? remainder : quotient;
    _Bool negative = remainder_result ? negative_numerator : negative_numerator != negative_denominator;
    return negative ? 0u - result : result;
}

_Bool fn_001a1234(SqExecuteVM *vm, SqI32 operation, SqObject *destination,
                  const SqObject *left, const SqObject *right)
{
    if (!(left->type & 0x04000000u) || !(right->type & 0x04000000u))
        sq_execute_unsupported(vm, -17);
    if (left->type == 0x05000002u && right->type == 0x05000002u) {
        SqU32 a = left->value.bits;
        SqU32 b = right->value.bits;
        SqU32 result;
        switch (operation) {
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': case '%':
            if (!b) {
                sq_execute_error(&vm->base, operation == '/' ? "division by zero" : "modulo by zero");
                return 0;
            }
            result = divide_integer(a, b, operation == '%');
            break;
        default: result = 0xdeadbeefu;
        }
        sq_execute_scalar(destination, 0x05000002u, result);
        return 1;
    }
    float a = left->type == 0x05000002u ? (float)left->value.integer : left->value.floating;
    float b = right->type == 0x05000002u ? (float)right->value.integer : right->value.floating;
    float result;
    switch (operation) {
    case '+': result = a + b; break;
    case '-': result = a - b; break;
    case '*': result = a * b; break;
    case '/': result = a / b; break;
    case '%': sq_execute_unsupported(vm, -117);
    default: result = 15.0f;
    }
    SqU32 bits;
    __builtin_memcpy(&bits, &result, 4);
    sq_execute_scalar(destination, 0x05000004u, bits);
    return 1;
}
