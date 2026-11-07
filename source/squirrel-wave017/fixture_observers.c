#include "fixture_internal.h"

static SqPrototypeU32 object_references(const SqPrefixObject012 *object)
{
    if (!(object->type & 0x08000000u)) return 0;
    SqPrototypePrefix011 *prefix = object->value.reference;
    return prefix->references;
}

void fixture_record(SqPrototypeU32 operation, const void *object, SqPrototypeU32 size)
{
    if (script_fixture017.count >= 128) { script_fixture017.overflow = 1; return; }
    SqScriptClosure017 *s = fixture_script(0);
    ScriptObservation017 *row = &script_fixture017.observations[script_fixture017.count++];
    *row = (ScriptObservation017){{operation, fixture_identity(object), size,
        fixture_table_identity(s->reference.prefix.vtable), fixture_identity(fixture_shared()->chain),
        fixture_identity(s->defaults.values), s->defaults.size, s->defaults.capacity,
        fixture_identity(s->outers.values), s->outers.size, s->outers.capacity,
        s->function.type, fixture_identity(s->function.value.reference), object_references(&s->function),
        s->environment.type, fixture_identity(s->environment.value.reference), object_references(&s->environment),
        fixture_identity(s->reference.prefix.weak), fixture_weak(0)->object.type, fixture_identity(fixture_weak(0)->object.value.reference),
        fixture_table_identity(fixture_prototype(0)->reference.vtable), fixture_prototype(0)->reference.references,
        (SqPrototypeU32)fixture_string_table()->used, fixture_weak(5)->object.type}};
}

static void disposed(void *pointer, SqPrototypeU32 bytes)
{
    fixture_record(2, pointer, bytes);
    SqScriptClosure017 *s = fixture_script(0);
    SqPrototypeU32 variant = script_fixture017.variant;
    if (variant == 4 && pointer == fixture_values(0)) s->outers = (SqPrefixVector012){fixture_values(3), 2, 2};
    if (variant == 5 && pointer == fixture_native(0)) s->defaults = (SqPrefixVector012){fixture_values(4), 2, 2};
    if (variant == 6 && pointer == fixture_values(1)) s->function = (SqPrefixObject012){0x08002000u, {.reference = fixture_prototype(2)}};
    if (variant == 7 && pointer == fixture_prototype(0)) s->environment = (SqPrefixObject012){0x08010000u, {.reference = fixture_weak(1)}};
    if (variant == 8 && script_fixture017.root < 2 && pointer == fixture_weak(2)) s->reference.prefix.weak = fixture_weak(1);
}

void sq_script_closure_deallocate017(void *pointer, SqPrototypeU32 bytes)
{
    SqPrototypeU32 logical = 999;
    for (SqPrototypeU32 i = 0; i < 3; ++i)
        if (pointer == fixture_script(i)) logical = bytes - (sizeof(SqScriptClosure017) - 64);
    for (SqPrototypeU32 i = 0; i < 6; ++i)
        if (pointer == fixture_values(i)) logical = bytes / sizeof(SqPrefixObject012) * 8;
    disposed(pointer, logical);
}

void sq_native_closure_deallocate013(void *pointer, SqPrototypeU32 bytes)
{
    for (SqPrototypeU32 i = 0; i < 6; ++i) if (pointer == fixture_values(i)) { sq_script_closure_deallocate017(pointer, bytes); return; }
    SqPrototypeU32 logical = 999;
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        if (pointer == fixture_native(i)) logical = bytes - (sizeof(SqNativeClosure013) - 72);
        if (pointer == fixture_masks(i)) logical = bytes;
    }
    disposed(pointer, logical);
}

void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes)
{
    SqPrototypeU32 index = fixture_identity(pointer) - 11;
    SqPrototypeU32 count = index < 3 ? script_fixture017.prototype_shape[index] : 0;
    SqPrototypeU32 adjustment = __builtin_offsetof(SqPrototype011, instructions) - 96;
    adjustment += count * (3 * (sizeof(SqPrefixObject012) - 8) + sizeof(SqPrototypeOuter011) - 20 + sizeof(SqPrototypeLocal011) - 20);
    script_fixture017.disposed |= 1u << index;
    disposed(pointer, bytes - adjustment);
}

void sq_weak_deallocate014(void *pointer, SqPrototypeU32 bytes)
{
    disposed(pointer, bytes - (sizeof(SqWeakReference014) - 20));
}

void sq_string_deallocate_value015(SqString015 *string, SqPrototypeU32 bytes)
{
    disposed(string, bytes - (sizeof(void *) == 4 ? 32 : 56) + 32);
}

void sq_string_deallocate_buckets015(SqString015 **buckets, SqPrototypeU32 bytes)
{
    disposed(buckets, bytes / sizeof(SqString015 *) * 4);
}

static void alternate_destroy(void *opaque)
{
    SqScriptClosure017 *closure = opaque;
    fixture_record(3, closure, 0);
    closure->defaults.size = 0;
    sq_script_closure_destroy017(closure);
}

static void alternate_release(void *opaque)
{
    SqScriptClosure017 *closure = opaque;
    sq_script_closure_release017(closure);
}

const SqPrototypeVTable011 script_alternate_table017 = {alternate_destroy, 0, alternate_release};

static _Noreturn void fixture_unused_allocation(void)
{
    for (;;) { }
}

void *sq_weak_allocate014(SqPrototypeU32 bytes) { (void)bytes; fixture_unused_allocation(); }
SqString015 *sq_string_allocate_value015(SqPrototypeU32 bytes) { (void)bytes; fixture_unused_allocation(); }
SqString015 **sq_string_allocate_buckets015(SqPrototypeU32 bytes) { (void)bytes; fixture_unused_allocation(); }
_Noreturn void sq_string_missing015(void) { fixture_unused_allocation(); }
