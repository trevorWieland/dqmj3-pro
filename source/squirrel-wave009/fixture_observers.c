#include "fixture_internal.h"

void fixture_record(SqU32 operation, SqU32 object, SqU32 references)
{
    if (class_fixture009.count >= 128) { class_fixture009.overflow = 1; return; }
    SqClass009 *root = fixture_class(0);
    ClassObservation009 *row = &class_fixture009.observations[class_fixture009.count++];
    *row = (ClassObservation009){{operation, object, references, fixture_table_identity(root->reference.vtable),
        fixture_identity(fixture_shared()->chain), root->attributes.type, fixture_payload(&root->attributes),
        fixture_identity(root->members), fixture_identity(root->base), fixture_identity(root->members32.values), root->members32.size,
        fixture_identity(root->members44.values), root->members44.size, fixture_identity(root->values56.values), root->values56.size,
        fixture_weak(0)->object.type, fixture_weak(1)->object.type, root->locked, root->instance_bytes, !!root->release_hook}};
}

void fixture_residual_ownership(void)
{
    SqClass009 *root = fixture_class(0);
    root->members32 = (SqClassMemberVector009){fixture_members(2), 1, 2};
    root->members44 = (SqClassMemberVector009){fixture_members(3), 1, 2};
    root->values56 = (SqVector){fixture_values(1), 1, 2};
    fixture_set_reference(&fixture_members(2)[0].primary, fixture_node(10));
    fixture_set_reference(&fixture_members(2)[0].secondary, fixture_node(11));
    fixture_set_reference(&fixture_members(3)[0].primary, fixture_node(12));
    fixture_set_reference(&fixture_members(3)[0].secondary, fixture_node(13));
    fixture_set_reference(fixture_values(1), fixture_node(14));
    fixture_set_reference(&root->attributes, fixture_node(15));
    root->reference.weak = fixture_weak(1);
}

static void observer_release(SqRef *reference)
{
    fixture_record(1, fixture_identity(reference), reference->references);
    SqClass009 *root = fixture_class(0);
    SqU32 variant = class_fixture009.variant;
    if (variant == 5 && reference == fixture_node(8)) root->members32.size = 1;
    if ((variant == 6 || variant == 20) && reference == fixture_node(1)) {
        root->members32.values = fixture_members(2); root->members32.size = 2;
        fixture_set_reference(&fixture_members(2)[0].primary, fixture_node(10));
        fixture_set_reference(&fixture_members(2)[1].primary, fixture_node(11));
        fixture_set_reference(&fixture_members(2)[1].secondary, fixture_node(12));
    }
    if (variant == 7 && reference == fixture_node(0)) {
        root->members44.values = fixture_members(3); root->members44.size = 1;
        fixture_set_reference(&fixture_members(3)[0].primary, fixture_node(10));
        fixture_set_reference(&fixture_members(3)[0].secondary, fixture_node(11));
    }
    if (variant == 8 && reference == fixture_node(4)) {
        root->values56.values = fixture_values(1); root->values56.size = 1;
        fixture_set_reference(fixture_values(1), fixture_node(10));
    }
    if (variant == 9 && reference == fixture_node(6)) root->members = fixture_node(10);
    if (variant == 10 && reference == fixture_node(9)) fixture_residual_ownership();
}

static void alternate_destructor(SqRef *reference)
{
    fixture_record(4, fixture_identity(reference), reference->references);
    class_fixture009.class_table->unknown_0(reference);
}

const SqVTable class_observer_table009 = {0, 0, observer_release};
const SqVTable class_alternate_table009 = {alternate_destructor, 0, fn_00665ee0};

SqI32 fixture_release_hook(void *tag, SqI32 size)
{
    fixture_record(3, fixture_identity(tag), (SqU32)size);
    if (class_fixture009.variant == 11 && tag == fixture_class(1)) fixture_residual_ownership();
    if (class_fixture009.variant == 12 && tag == fixture_class(0)) fixture_class(0)->reference.vtable = &class_alternate_table009;
    if (class_fixture009.variant == 13 && tag == fixture_class(0))
        fixture_class(0)->attributes = (SqObject){0x05000002u, {.integer = 733}};
    return -37;
}

void sq_deallocate(void *pointer, SqU32 bytes)
{
    SqU32 logical = 999;
    for (SqU32 i = 0; i < 3; ++i) if (pointer == fixture_class(i) && bytes == sizeof(SqClass009)) logical = 1;
    for (SqU32 i = 0; i < 2; ++i) {
        if (pointer == fixture_array(i) && bytes == sizeof(SqArray)) logical = 1;
        if (pointer == fixture_generator(i) && bytes == sizeof(SqGenerator008)) logical = 1;
    }
    for (SqU32 i = 0; i < 6; ++i) if (pointer == fixture_members(i) && bytes % sizeof(SqClassMember009) == 0) logical = bytes / sizeof(SqClassMember009);
    for (SqU32 i = 0; i < 4; ++i) if (pointer == fixture_values(i) && bytes % sizeof(SqObject) == 0) logical = bytes / sizeof(SqObject);
    fixture_record(2, fixture_identity(pointer), logical);
}

void *sq_reallocate(void *pointer, SqU32 old_bytes, SqU32 new_bytes)
{
    fixture_record(5, fixture_identity(pointer), (old_bytes / sizeof(SqClassMember009) << 16) | (new_bytes / sizeof(SqClassMember009)));
    if (old_bytes > 512 || new_bytes > 512) return 0;
    unsigned char *source = pointer;
    unsigned char *target = (unsigned char *)fixture_members(5);
    SqU32 bytes = old_bytes < new_bytes ? old_bytes : new_bytes;
    for (SqU32 i = 0; i < bytes; ++i) target[i] = source[i];
    if (class_fixture009.variant == 26) fixture_class(0)->attributes = (SqObject){0x05000002u, {.integer = 911}};
    return target;
}
