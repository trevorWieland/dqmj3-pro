#include "execute_views.h"

static SqU32 shift(SqU32 value, SqU32 amount, SqI32 operation)
{
    amount &= 255;
    if (!amount) return value;
    if (amount >= 32) return operation == 5 && value & 0x80000000u ? 0xffffffffu : 0;
    if (operation == 4) return value << amount;
    SqU32 shifted = value >> amount;
    if (operation == 5 && value & 0x80000000u) shifted |= 0xffffffffu << (32 - amount);
    return shifted;
}

_Bool sq_execute_bitwise(SqExecuteVM *vm, SqObject *destination, const SqObject *left,
                         const SqObject *right, SqI32 operation)
{
    if (left->type != 0x05000002u || right->type != 0x05000002u) {
        sq_execute_error(&vm->base, "bitwise op between '%s' and '%s'", fn_00191f20(left), fn_00191f20(right));
        return 0;
    }
    SqU32 a = left->value.bits;
    SqU32 b = right->value.bits;
    SqU32 result;
    switch (operation) {
    case 0: result = a & b; break;
    case 2: result = a | b; break;
    case 3: result = a ^ b; break;
    case 4: case 5: case 6: result = shift(a, b, operation); break;
    default:
        sq_execute_error(&vm->base, "internal vm error bitwise op failed");
        return 0;
    }
    sq_execute_scalar(destination, 0x05000002u, result);
    return 1;
}

_Bool sq_execute_unary(SqExecuteVM *vm, SqObject *destination, const SqObject *value, SqI32 operation)
{
    if (value->type == 0x05000002u) {
        SqU32 bits = operation == SQ_NEG ? 0u - value->value.bits : ~value->value.bits;
        sq_execute_scalar(destination, 0x05000002u, bits);
        return 1;
    }
    if (operation == SQ_NEG && value->type == 0x05000004u) {
        float number;
        SqU32 bits;
        __builtin_memcpy(&number, &value->value.bits, 4);
        number = -number;
        __builtin_memcpy(&bits, &number, 4);
        sq_execute_scalar(destination, 0x05000004u, bits);
        return 1;
    }
    if (operation == SQ_NEG && (value->type == 0x0a000020u || value->type == 0x0a000800u || value->type == 0x0a008000u))
        sq_execute_unsupported(vm, -45);
    sq_execute_error(&vm->base, operation == SQ_NEG ? "attempt to negate a %s" : "attempt to perform a bitwise op on a %s", fn_00191f20(value));
    return 0;
}
