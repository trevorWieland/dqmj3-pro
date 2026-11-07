#include "execute_views.h"

_Bool sq_execute_identical(const SqObject *left, const SqObject *right)
{
    if ((left->type & 0x00ffffffu) > 8) return left->value.reference == right->value.reference;
    return left->value.bits == right->value.bits;
}

_Bool fn_00199144(SqExecuteVM *vm, const SqObject *left, const SqObject *right, SqI32 *result)
{
    if (left->type == right->type) {
        if (sq_execute_identical(left, right)) { *result = 0; return 1; }
        if (left->type == 0x05000002u) {
            SqU32 difference = left->value.bits - right->value.bits;
            __builtin_memcpy(result, &difference, 4);
            return 1;
        }
        if (left->type == 0x05000004u) {
            *result = left->value.floating < right->value.floating ? -1 : 1;
            return 1;
        }
        sq_execute_unsupported(vm, -400);
    }
    if ((left->type & 0x04000000u) && (right->type & 0x04000000u)) {
        float a = left->type == 0x05000002u ? (float)left->value.integer : left->value.floating;
        float b = right->type == 0x05000002u ? (float)right->value.integer : right->value.floating;
        *result = a == b ? 0 : b > a ? -1 : 1;
        return 1;
    }
    if (left->type == 0x01000001u) { *result = -1; return 1; }
    if (right->type == 0x01000001u) { *result = 1; return 1; }
    sq_execute_unsupported(vm, -401);
}
