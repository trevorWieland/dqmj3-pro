#include "fixture_internal.h"

void fixture_record(SqPrototypeU32 operation, const void *object, SqPrototypeU32 size)
{
    if (string_fixture015.count >= 64) { string_fixture015.overflow = 1; return; }
    SqString015 *current = fixture_string(string_fixture015.current_value);
    StringObservation015 *row = &string_fixture015.observations[string_fixture015.count++];
    *row = (StringObservation015){{operation, fixture_identity(object), size,
        fixture_identity(fixture_table()->buckets), (SqPrototypeU32)fixture_table()->slots, (SqPrototypeU32)fixture_table()->used,
        fixture_identity(current), fixture_vtable_identity(current->reference.vtable), current->reference.references,
        fixture_identity(current->reference.weak), fixture_identity(current->next), (SqPrototypeU32)current->length,
        current->hash, fixture_identity(current->shared), fixture_first_bytes(current->value),
        fixture_weak(0)->object.type, fixture_identity(fixture_weak(0)->object.value.reference),
        fixture_first_bytes(fixture_input()), string_fixture015.value_allocations, string_fixture015.disposed_values}};
}

SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes)
{
    SqString015 *string = fixture_string(string_fixture015.next_value++);
    string_fixture015.current_value = string_fixture015.next_value - 1;
    string_fixture015.value_allocations += 1;
    string->reference = (SqPrototypePrefix011){&string_alternate_vtable015, 0x55667788u, fixture_weak(1)};
    string->shared = fixture_state(1); string->next = fixture_string(7); string->length = 3; string->hash = 0x11223344u;
    for (SqPrototypeU32 i = 0; i < 128; ++i) string->value[i] = 0x5a;
    fixture_record(1, string, bytes - (sizeof(void *) == 4 ? 32 : 56) + 32);
    if (string_fixture015.variant == 10) fixture_input()[0] ^= 0x40;
    return string;
}

SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes)
{
    SqString015 **buckets = fixture_buckets(++string_fixture015.bucket_allocations);
    for (SqPrototypeU32 i = 0; i < 64; ++i) buckets[i] = fixture_string(7);
    fixture_record(2, buckets, bytes / sizeof(SqString015 *) * 4);
    return buckets;
}

void sq_string_deallocate_value015(SqString015 *string, SqPrototypeU32 bytes)
{
    string_fixture015.disposed_values |= 1u << (fixture_identity(string) - 11);
    fixture_record(4, string, bytes - (sizeof(void *) == 4 ? 32 : 56) + 32);
}

void sq_string_deallocate_buckets015(SqString015 **buckets, SqPrototypeU32 bytes)
{
    fixture_record(5, buckets, bytes / sizeof(SqString015 *) * 4);
    if (string_fixture015.variant == 11) {
        SqString015 *current = fixture_string(string_fixture015.current_value);
        current->reference.weak = fixture_weak(1);
        fixture_weak(1)->object = (SqPrototypeObject011){0x08000010u, {.reference = current}};
    }
}

void *sq_weak_allocate014(SqPrototypeU32 bytes)
{
    SqWeakReference014 *weak = fixture_weak(string_fixture015.weak_allocations++);
    fixture_record(3, weak, bytes == sizeof(SqWeakReference014) ? 20 : bytes);
    return weak;
}

void sq_weak_deallocate014(void *pointer, SqPrototypeU32 bytes)
{
    fixture_record(6, pointer, bytes == sizeof(SqWeakReference014) ? 20 : bytes);
}

void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes)
{
    fixture_record(99, pointer, bytes);
}

static void alternate_destructor(void *opaque)
{
    SqString015 *string = opaque;
    fixture_record(7, string, 0);
    string->length += 7;
    if (string_fixture015.root < 5) {
        string->reference.weak = fixture_weak(1);
        fixture_weak(1)->object = (SqPrototypeObject011){0x08000010u, {.reference = string}};
    }
    fn_0068f564(string);
}

static void alternate_release(void *opaque)
{
    SqString015 *string = opaque;
    fn_0024d9cc(string);
}

const SqPrototypeVTable011 string_alternate_vtable015 = {alternate_destructor, 0, alternate_release};

_Noreturn void sq_string_missing015(void)
{
    for (;;) { }
}
