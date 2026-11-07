#include "fixture_internal.h"

void fixture_capture_text026(const SqPrefixObject012 *object)
{
    if (object->type != 0x08000010u) { lookup_fixture020.fault = 110; return; }
    const SqString015 *string = object->value.reference;
    if (string->length < 0 || string->length >= 256) { lookup_fixture020.fault = 111; return; }
    fixture_text_bytes026 = (SqPrototypeU32)string->length;
    for (SqPrototypeU32 index = 0; index <= fixture_text_bytes026; ++index)
        fixture_text026[index] = (char)string->value[index];
}

static void fixture_old_destroy026(void *owner) { fn_0068f564(owner); }

static void fixture_old_release026(void *owner)
{
    SqPrefixObject012 *published = fixture_variant026 == 51 ?
        fixture_vm020()->stack + fixture_vm020()->top - 1 : fixture_destination019();
    fixture_capture_text026(published);
    void *value = published->value.reference;
    fixture_event020(28, sq_prefix_count(value), published->type);
    sq_prefix_clear(published);
    fixture_event020(29, sq_prefix_count(value), published->type);
    fn_0024d9cc(owner);
}

static const SqPrototypeVTable011 fixture_old_vtable026 = {
    fixture_old_destroy026, 0, fixture_old_release026};

void fixture_release_observer_setup026(SqPrototypeU32 variant)
{
    SqString015 *old = fn_0019ba68(&fixture_shared020()->common,
        (const SqStringByte015 *)"previous output owner", -1);
    SqPrefixObject012 value = {0x08000010u, {.reference = old}};
    SqPrefixObject012 *destination = variant == 51 ?
        fixture_vm020()->stack + fixture_vm020()->top : fixture_destination019();
    sq_prefix_assign(destination, &value);
    old->reference.vtable = &fixture_old_vtable026;
}
