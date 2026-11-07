#include "string.h"

SqPrototypeU32 sq_string_hash015(const SqStringByte015 *input, SqPrototypeU32 length)
{
    SqPrototypeU32 hash = length;
    SqPrototypeU32 step = (length >> 5) | 1;
    for (SqPrototypeU32 remaining = length; remaining >= step; remaining -= step) {
        SqStringCode015 code = (SqStringCode015)*input++;
        hash ^= (hash << 5) + (hash >> 2) + code;
    }
    return hash;
}

SqPrototypeU32 sq_string_allocation_bytes015(SqPrototypeU32 length)
{
    SqPrototypeU32 alignment = _Alignof(SqString015);
    SqPrototypeU32 nominal = (__builtin_offsetof(SqString015, value) + alignment) & ~(alignment - 1);
    return nominal + length;
}

SqString015 *fn_0016b5f0(SqStringTable015 *table, const SqStringByte015 *input, SqPrototypeI32 length)
{
    if (length < 0) length = (SqPrototypeI32)sq_string_length015(input);
    SqPrototypeU32 bucket = sq_string_hash015(input, (SqPrototypeU32)length) & ((SqPrototypeU32)table->slots - 1);
    for (SqString015 *existing = table->buckets[bucket]; existing; existing = existing->next) {
        if (existing->length == length && !sq_string_compare015(input, existing->value, (SqPrototypeU32)length))
            return existing;
    }
    SqString015 *string = sq_string_allocate_value015(sq_string_allocation_bytes015((SqPrototypeU32)length));
    if (string) {
        string->reference.references = 0;
        string->reference.weak = 0;
        string->reference.vtable = &sq_string_vtable015;
    }
    sq_string_copy015(string->value, input, (SqPrototypeU32)length);
    string->value[length] = 0;
    string->length = length;
    string->hash = sq_string_hash015(input, (SqPrototypeU32)length);
    string->next = table->buckets[bucket];
    table->buckets[bucket] = string;
    table->used += 1;
    if ((SqPrototypeU32)table->used > (SqPrototypeU32)table->slots) {
        SqPrototypeI32 old_slots = table->slots;
        SqString015 **old = table->buckets;
        table->slots *= 2;
        table->buckets = sq_string_allocate_buckets015((SqPrototypeU32)table->slots * sizeof(SqString015 *));
        sq_string_zero015(table->buckets, (SqPrototypeU32)table->slots * sizeof(SqString015 *));
        for (SqPrototypeI32 slot = 0; slot < old_slots; ++slot) {
            SqString015 *current = old[slot];
            while (current) {
                SqString015 *next = current->next;
                SqPrototypeU32 index = current->hash & ((SqPrototypeU32)table->slots - 1);
                current->next = table->buckets[index];
                table->buckets[index] = current;
                current = next;
            }
        }
        sq_string_deallocate_buckets015(old, (SqPrototypeU32)old_slots * sizeof(SqString015 *));
    }
    return string;
}

SqString015 *fn_0019ba68(SqPrefixState012 *shared, const SqStringByte015 *input, SqPrototypeI32 length)
{
    SqString015 *string = fn_0016b5f0(sq_string_table015(shared), input, length);
    string->shared = shared;
    return string;
}

void fn_0024d9e0(SqStringTable015 *table, SqString015 *string)
{
    SqPrototypeU32 bucket = string->hash & ((SqPrototypeU32)table->slots - 1);
    SqString015 *previous = 0;
    for (SqString015 *current = table->buckets[bucket]; current; current = current->next) {
        if (current == string) {
            if (previous) previous->next = current->next;
            else table->buckets[bucket] = current->next;
            table->used -= 1;
            SqPrototypeI32 length = current->length;
            current->reference.vtable->destroy(current);
            sq_string_deallocate_value015(current, sq_string_allocation_bytes015((SqPrototypeU32)length));
            return;
        }
        previous = current;
    }
    sq_string_missing015();
}

void fn_0024d9cc(SqString015 *string)
{
    fn_0024d9e0(sq_string_table015(string->shared), string);
}

SqString015 *fn_0068f564(SqString015 *string)
{
    string->reference.vtable = &sq_prototype_base_vtable011;
    if (string->reference.weak) {
        SqPrototypeWeak011 *weak = string->reference.weak;
        weak->object.type = 0x01000001u;
        weak->object.value.reference = 0;
    }
    return string;
}
