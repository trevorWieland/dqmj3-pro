#include "fixture_internal.h"

void fixture_record(SqPrototypeU32 operation, SqPrototypeU32 object, SqPrototypeU32 references)
{
    if (native_fixture013.count >= 128) { native_fixture013.overflow = 1; return; }
    SqNativeClosure013 *root = fixture_native(0);
    NativeObservation013 *row = &native_fixture013.observations[native_fixture013.count++];
    *row = (NativeObservation013){{operation, object, references, fixture_table_identity(root->reference.prefix.vtable),
        fixture_identity(fixture_shared()->chain), root->name.type, fixture_payload(&root->name),
        root->environment.type, fixture_payload(&root->environment), fixture_identity(root->outers.values),
        root->outers.size, root->outers.capacity, fixture_identity(root->type_checks.values),
        root->type_checks.size, root->type_checks.capacity, fixture_weak(0)->object.type}};
}

static void observer_release(void *opaque)
{
    SqPrototypePrefix011 *prefix = opaque;
    fixture_record(1, fixture_identity(opaque), prefix->references);
    SqNativeClosure013 *root = fixture_native(0);
    SqPrototypeU32 variant = native_fixture013.variant;
    if (variant == 4 && opaque == fixture_reference(0)) {
        fixture_set_reference(&root->environment, fixture_reference(3)); root->reference.prefix.weak = fixture_weak(1);
    }
    if (variant == 5 && opaque == fixture_reference(1)) root->outers = (SqPrefixVector012){fixture_values(1), 1, 2};
    if (variant == 6 && opaque == fixture_reference(2)) root->outers = (SqPrefixVector012){fixture_values(2), 2, 2};
    if (variant == 19 && opaque == fixture_reference(1)) root->function = fixture_other_callable;
    if (variant == 20 && opaque == fixture_reference(1)) fixture_set_reference(&root->name, fixture_reference(3));
    if (variant == 21 && opaque == fixture_reference(2)) root->outers.size = 1;
}

static void alternate_destructor(void *opaque)
{
    fixture_record(4, fixture_identity(opaque), 0);
    native_fixture013.native_table->destroy(opaque);
}

static void alternate_release(void *opaque)
{
    SqNativeClosure013 *closure = opaque;
    fn_00299518(closure);
}

const SqPrototypeVTable011 native_observer_table013 = {0, 0, observer_release};
const SqPrototypeVTable011 native_alternate_table013 = {alternate_destructor, 0, alternate_release};

SqPrototypeI32 fixture_callable(void *opaque)
{
    (void)opaque;
    native_fixture013.callable_count += 1;
    return -37;
}

SqPrototypeI32 fixture_other_callable(void *opaque)
{
    (void)opaque;
    native_fixture013.callable_count += 1;
    return -41;
}

void sq_native_closure_deallocate013(void *pointer, SqPrototypeU32 bytes)
{
    SqPrototypeU32 logical = 999;
    for (SqPrototypeU32 i = 0; i < 3; ++i) if (pointer == fixture_native(i) && bytes == sizeof(SqNativeClosure013)) logical = 1;
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        if (pointer == fixture_values(i) && bytes % sizeof(SqPrefixObject012) == 0) logical = bytes / sizeof(SqPrefixObject012);
        if (pointer == fixture_masks(i) && bytes % sizeof(SqPrototypeI32) == 0) logical = bytes / sizeof(SqPrototypeI32);
    }
    fixture_record(2, fixture_identity(pointer), logical);
    if (native_fixture013.variant == 7 && pointer == fixture_values(0))
        fixture_native(0)->type_checks = (SqPrefixPodVector012){fixture_masks(1), 3, 8};
    if (native_fixture013.variant == 8 && pointer == fixture_masks(0)) fixture_native(0)->reference.prefix.weak = fixture_weak(1);
}

void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes)
{
    SqPrototype011 *p = pointer;
    SqPrototypeU32 adjustment = __builtin_offsetof(SqPrototype011, instructions) - 96;
    adjustment += (SqPrototypeU32)(p->literal_count + p->parameter_count + p->function_count) * (sizeof(SqPrototypeObject011) - 8);
    adjustment += (SqPrototypeU32)p->outer_count * (sizeof(SqPrototypeOuter011) - 20);
    adjustment += (SqPrototypeU32)p->local_count * (sizeof(SqPrototypeLocal011) - 20);
    fixture_record(2, fixture_identity(pointer), bytes - adjustment);
}
