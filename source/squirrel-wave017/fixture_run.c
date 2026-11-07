#include "fixture_internal.h"

SqPrototypeU32 fixture_execute(void)
{
    SqScriptClosure017 *s = fixture_script(0);
    if (script_fixture017.root == 3) {
        fn_006a7780(fixture_weak(0));
        if (script_fixture017.variant) fn_006a7780(fixture_weak(5));
    }
    if (script_fixture017.root == 1) {
        if (sq_script_closure_destroy017(s) != s) return 0;
    } else sq_script_closure_release017(s);
    if (script_fixture017.root == 2) {
        fn_006a7780(fixture_weak(0));
        if (script_fixture017.variant) fn_006a7780(fixture_weak(5));
    }
    return 1;
}

static SqPrototypeU32 payload(const SqPrefixObject012 *object)
{
    return object->type & 0x08000000u ? fixture_identity(object->value.reference) : object->value.bits;
}

SqPrototypeU32 fixture_snapshot(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    if (capacity < 8192) return 0;
    SqPrototypeU32 at = 0;
    output[at++] = script_fixture017.count; output[at++] = script_fixture017.overflow;
    output[at++] = fixture_identity(fixture_shared()->chain); output[at++] = (SqPrototypeU32)fixture_string_table()->used;
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqScriptClosure017 *s = fixture_script(i);
        output[at++] = fixture_table_identity(s->reference.prefix.vtable); output[at++] = s->reference.prefix.references;
        output[at++] = fixture_identity(s->reference.prefix.weak); output[at++] = fixture_identity(s->reference.next); output[at++] = fixture_identity(s->reference.previous);
        output[at++] = s->function.type; output[at++] = payload(&s->function); output[at++] = s->environment.type; output[at++] = payload(&s->environment);
        output[at++] = fixture_identity(s->defaults.values); output[at++] = s->defaults.size; output[at++] = s->defaults.capacity;
        output[at++] = fixture_identity(s->outers.values); output[at++] = s->outers.size; output[at++] = s->outers.capacity;
    }
    for (SqPrototypeU32 i = 0; i < 3; ++i) {
        SqPrototype011 *p = fixture_prototype(i);
        output[at++] = fixture_table_identity(p->reference.vtable); output[at++] = p->reference.references; output[at++] = fixture_identity(p->reference.weak);
        output[at++] = p->name.type; output[at++] = payload(&p->name); output[at++] = p->source_name.type; output[at++] = payload(&p->source_name);
        output[at++] = (SqPrototypeU32)p->function_count;
    }
    for (SqPrototypeU32 i = 0; i < 2; ++i) {
        SqNativeClosure013 *n = fixture_native(i);
        output[at++] = fixture_table_identity(n->reference.prefix.vtable); output[at++] = n->reference.prefix.references;
        output[at++] = fixture_identity(n->reference.prefix.weak); output[at++] = fixture_identity(n->reference.next); output[at++] = fixture_identity(n->reference.previous);
        output[at++] = n->name.type; output[at++] = payload(&n->name); output[at++] = n->environment.type; output[at++] = payload(&n->environment);
    }
    for (SqPrototypeU32 i = 0; i < 4; ++i) {
        SqString015 *s = fixture_string(i);
        output[at++] = fixture_table_identity(s->reference.vtable); output[at++] = s->reference.references; output[at++] = fixture_identity(s->reference.weak);
        output[at++] = fixture_identity(s->next); output[at++] = (SqPrototypeU32)s->length; output[at++] = s->hash;
        for (SqPrototypeU32 j = 0; j < 8; ++j) output[at++] = (unsigned char)s->value[j];
    }
    for (SqPrototypeU32 i = 0; i < 6; ++i) {
        SqWeakReference014 *weak = fixture_weak(i);
        output[at++] = fixture_table_identity(weak->prefix.vtable); output[at++] = weak->prefix.references; output[at++] = fixture_identity(weak->prefix.weak);
        output[at++] = weak->object.type; output[at++] = payload(&weak->object);
    }
    for (SqPrototypeU32 i = 0; i < 6; ++i) for (SqPrototypeU32 j = 0; j < 8; ++j) {
        output[at++] = fixture_values(i)[j].type; output[at++] = payload(fixture_values(i) + j);
    }
    for (SqPrototypeU32 i = 0; i < 4; ++i) output[at++] = fixture_identity(fixture_string_buckets()[i]);
    for (SqPrototypeU32 i = 0; i < script_fixture017.count; ++i)
        for (SqPrototypeU32 j = 0; j < 24; ++j) output[at++] = script_fixture017.observations[i].words[j];
    return at;
}
