#include "fixture_internal.h"

void fixture18_record(SqPrototypeU32 operation, const void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes)
{
    CreationFixture018 *f = &creation_fixture018;
    if (f->events >= 64) { f->overflow = 1; return; }
    SqPrototypeU32 *row = f->observations[f->events++];
    row[0] = operation; row[1] = fixture_identity(storage); row[2] = old_bytes; row[3] = new_bytes;
    row[4] = sq_native_creation_shared016(fixture18_vm()) == fixture_shared() ? 1 : 2;
    if (operation == 1) return;
    SqScriptClosure017 *s = fixture_script(2);
    row[5] = s->reference.prefix.references; row[6] = fixture_prototype(0)->reference.references;
    row[7] = fixture_identity(fixture_shared()->chain); row[8] = s->outers.size; row[9] = s->outers.capacity;
    row[10] = s->defaults.size; row[11] = s->defaults.capacity;
    row[12] = fixture18_destination()->type; row[13] = fixture18_payload(fixture18_destination());
    row[14] = fixture_identity(fixture18_vm()->stack);
    __builtin_memcpy(row + 15, fixture18_vm()->unknown_to_shared, 4);
}

void *sq_script_create_allocate018(SqPrototypeU32 bytes)
{
    creation_fixture018.allocations++;
    fixture18_record(1, 0, 0, bytes - sizeof(SqScriptClosure017) + 64);
    if (creation_fixture018.variant == 9) fixture18_vm()->shared = fixture18_alternate_state();
    unsigned char *storage = (unsigned char *)fixture_script(2);
    for (SqPrototypeU32 i = 0; i < bytes; ++i) storage[i] = 0xa5;
    return storage;
}

void *sq_script_create_reallocate018(void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes)
{
    CreationFixture018 *f = &creation_fixture018;
    SqScriptClosure017 *s = fixture_script(2);
    SqPrefixObject012 *result;
    SqPrototypeU32 outer = !storage ? !s->outers.values && fixture_prototype(0)->outer_count != 0 : storage == fixture_values(1);
    if (storage) result = fixture_values(outer ? 4 : 5);
    else result = fixture_values(outer ? 1 : 2);
    f->reallocations++;
    fixture18_record(2, storage, old_bytes / sizeof(SqPrefixObject012) * 8, new_bytes / sizeof(SqPrefixObject012) * 8);
    for (SqPrototypeU32 i = 0; i < old_bytes; ++i) ((unsigned char *)result)[i] = ((const unsigned char *)storage)[i];
    if (!storage && (((f->variant == 8 || f->variant == 25) && outer) || (f->variant == 11 && !outer))) {
        if (outer) s->outers.size = 3; else s->defaults.size = 3;
    }
    if (storage && ((f->variant == 8 && outer) || (f->variant == 11 && !outer))) fixture18_vm()->stack = fixture18_alternate_stack();
    if (storage && f->variant == 25 && outer) {
        SqPrefixObject012 *alternate = (SqPrefixObject012 *)(script_fixture017.memory + 0x2200);
        for (SqPrototypeU32 i = 0; i < 3; ++i) alternate[i] = fixture_script(0)->outers.values[i];
        SqPrefixObject012 replacement = {0x08000200u, {.reference = fixture_native(0)}};
        sq_prefix_assign(alternate, &replacement);
        fixture_script(0)->outers.values = alternate;
    }
    if (!storage && f->variant == 26 && outer) fixture_prototype(0)->outer_count = 0;
    if (!storage && f->variant == 27 && !outer) fixture_prototype(0)->default_count = 0;
    if (f->variant == 14 && !s->reference.prefix.weak) {
        fixture_weak(5)->object = (SqPrefixObject012){0x08000100u, {.reference = s}};
        fixture_set(&f->weak_owner, 0x08010000u, fixture_weak(5));
        s->reference.prefix.weak = fixture_weak(5);
    }
    return result;
}

_Bool sq_script_creation_lookup018(void *vm, const SqPrefixObject012 *receiver, const SqPrefixObject012 *key,
    SqPrefixObject012 *destination, SqPrototypeU32 raw, SqPrototypeU32 rooted)
{
    CreationFixture018 *f = &creation_fixture018;
    if (f->variant == 15) {
        SqTable019 *table = receiver->value.reference;
        for (SqPrototypeI32 i = 0; i < table->node_count; ++i) {
            if (table->nodes[i].key.type == key->type && table->nodes[i].key.value.reference == key->value.reference) {
                sq_prefix_assign(destination, &table->nodes[i].value);
                return 1;
            }
        }
        return 0;
    }
    fixture18_record(3, key->value.reference, raw, rooted);
    if (vm != fixture18_vm() || receiver != sq_script_creation_local018(vm, 0) || raw || rooted != 1) return 0;
    if (f->variant == 13) sq_prefix_assign(destination, fixture_values(3) + 5);
    if (f->variant == 4 || f->variant == 5 || f->variant == 13) return 0;
    sq_prefix_assign(destination, fixture_values(3) + 4);
    if (f->variant == 10) {
        SqPrototypeOuter011 *alternate = (SqPrototypeOuter011 *)(script_fixture017.memory + 0x2600);
        for (SqPrototypeU32 i = 0; i < 3; ++i) alternate[i] = fixture_prototype(0)->outers[i];
        alternate[2].source.value.integer = 0;
        fixture_prototype(0)->outers = alternate;
    }
    return 1;
}

void sq_script_creation_index_error018(void *vm, const SqPrefixObject012 *key)
{
    fixture18_record(4, key->value.reference, vm == fixture18_vm(), key->type);
}

static void old_destroy(void *opaque) { fn_0068f564((SqString015 *)opaque); }
static void old_release(void *opaque)
{
    fixture18_record(5, opaque, 0, 0);
    if (creation_fixture018.variant == 12) sq_prefix_clear(fixture18_destination());
    fn_0024d9cc((SqString015 *)opaque);
    fixture18_record(6, opaque, 0, 0);
}
const SqPrototypeVTable011 fixture18_old_string_vtable = {old_destroy, 0, old_release};
void sq_deallocate(void *storage, SqU32 bytes) { sq_script_closure_deallocate017(storage, bytes); }
