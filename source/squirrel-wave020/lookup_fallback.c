#include "lookup.h"

static _Bool defaults(void *vm, SqPrototypeU32 index, const SqPrefixObject012 *key, SqPrefixObject012 *destination)
{
    SqLookupSharedStorage020 *shared = sq_lookup_shared020(vm);
    return sq_table_get019((SqTable019 *)shared->default_delegates[index].value.reference, key, destination);
}

static _Bool call_get(void *vm, const SqPrefixObject012 *receiver, const SqPrefixObject012 *key, SqPrefixObject012 *destination)
{
    sq_lookup_push020(vm, receiver);
    sq_lookup_push020(vm, key);
    return sq_lookup_meta_call020(vm, receiver->value.reference, 7, 2, destination);
}

_Bool sq_lookup_fallback020(void *vm, const SqPrefixObject012 *receiver, const SqPrefixObject012 *key,
    SqPrefixObject012 *destination, SqPrototypeU32 raw)
{
    switch (receiver->type) {
    case 0x08004000u: {
        SqLookupClassStorage020 *klass = receiver->value.reference;
        if (!sq_table_get019(klass->members, key, destination)) return 0;
        SqPrototypeU32 member = destination->value.bits;
        if (member & 0x02000000u)
            sq_lookup_assign_unwrapped020(destination, klass->members32.values[member & 0x00ffffffu].primary);
        else sq_prefix_assign(destination, &klass->members44.values[member & 0x00ffffffu].primary);
        return 1;
    }
    case 0x0a000020u:
    case 0x0a000080u: {
        SqTable019 *delegate = receiver->type == 0x0a000020u ? ((SqTable019 *)receiver->value.reference)->delegate :
            ((SqLookupUserdataStorage020 *)receiver->value.reference)->delegate;
        if (delegate) {
            SqPrefixObject012 temporary = {0x0a000020u, {.reference = delegate}};
            sq_prefix_retain(temporary.type, temporary.value);
            _Bool found = sq_lookup_get020(vm, &temporary, key, destination, raw, 0);
            sq_prefix_release(temporary.type, temporary.value);
            if (found) return 1;
            if (raw) return 0;
            if (call_get(vm, receiver, key, destination)) return 1;
        }
        if (receiver->type == 0x0a000020u && !raw) return defaults(vm, 0, key, destination);
        return 0;
    }
    case 0x08000010u:
        if (key->type & 0x04000000u) {
            SqPrototypeI32 index = sq_lookup_integer020(key);
            SqString015 *string = receiver->value.reference;
            SqPrototypeU32 magnitude = index < 0 ? 0u - (SqPrototypeU32)index : (SqPrototypeU32)index;
            if (magnitude >= (SqPrototypeU32)string->length) return 0;
            SqPrototypeU32 offset = index < 0 ? (SqPrototypeU32)string->length - (SqPrototypeU32)index : (SqPrototypeU32)index;
            SqPrototypeI32 byte = string->value[offset];
            sq_prefix_scalar(destination, 0x05000002u, (SqPrototypeU32)byte);
            return 1;
        }
        return raw ? 0 : defaults(vm, 2, key, destination);
    case 0x0a008000u:
        if (raw) return 0;
        if (call_get(vm, receiver, key, destination)) return 1;
        return defaults(vm, 8, key, destination);
    case 0x08000040u: return raw ? 0 : defaults(vm, 1, key, destination);
    case 0x01000008u:
    case 0x05000002u:
    case 0x05000004u: return raw ? 0 : defaults(vm, 3, key, destination);
    case 0x08000400u: return raw ? 0 : defaults(vm, 4, key, destination);
    case 0x08000100u:
    case 0x08000200u: return raw ? 0 : defaults(vm, 5, key, destination);
    case 0x08001000u: return raw ? 0 : defaults(vm, 6, key, destination);
    case 0x08010000u: return raw ? 0 : defaults(vm, 9, key, destination);
    default: return 0;
    }
}
