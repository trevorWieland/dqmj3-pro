#include "lookup.h"

_Bool sq_lookup_get020(void *vm, const SqPrefixObject012 *receiver, const SqPrefixObject012 *key,
    SqPrefixObject012 *destination, SqPrototypeU32 raw, SqPrototypeU32 rooted)
{
    if (receiver->type == 0x0a000020u) {
        if (sq_table_get019((SqTable019 *)receiver->value.reference, key, destination)) return 1;
    } else if (receiver->type == 0x08000040u) {
        if (key->type & 0x04000000u) {
            SqPrototypeI32 index = sq_lookup_integer020(key);
            SqOpaqueArray012 *array = receiver->value.reference;
            if (index < 0 || (SqPrototypeU32)index >= array->vector.size) return 0;
            sq_lookup_assign_unwrapped020(destination, array->vector.values[index]);
            return 1;
        }
    } else if (receiver->type == 0x0a008000u) {
        SqLookupInstanceStorage020 *instance = receiver->value.reference;
        if (sq_table_get019(instance->klass->members, key, destination)) {
            SqPrototypeU32 member = destination->value.bits;
            if (member & 0x02000000u)
                sq_lookup_assign_unwrapped020(destination, instance->values[member & 0x00ffffffu]);
            else sq_prefix_assign(destination, &instance->klass->members44.values[member & 0x00ffffffu].primary);
            return 1;
        }
    }
    if (sq_lookup_fallback020(vm, receiver, key, destination, raw)) return 1;
    if (rooted) {
        const SqPrefixObject012 *current = sq_lookup_stack020(vm) + sq_lookup_base020(vm);
        if (current->type == receiver->type) {
            _Bool pointer = (receiver->type & 0x08000000u) || (receiver->type & 0x00ffffffu) == 0x800;
            _Bool equal = pointer ? current->value.reference == receiver->value.reference : current->value.bits == receiver->value.bits;
            if (equal) return sq_table_get019(sq_lookup_root020(vm), key, destination);
        }
    }
    return 0;
}
