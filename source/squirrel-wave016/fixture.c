#include "fixture.h"

static unsigned char *memory;
static SqNativeCreationStorage016 *vm;
static SqPrefixState012 *old_state, *new_state;
static SqNativeClosure013 *closure, *resident;
static SqPrototype011 *prototype;
static const SqPrototypeVTable011 *native_vtable, *prototype_vtable, *base_vtable;
static SqPrototypeU32 active_flags, initial_top, fault, callable_invocations, allocations, reallocations, disposals;
static SqPrototypeU32 events[32][8], event_count;

extern void fixture_original_create016(void *vm, SqNativeCallable013 function, SqPrototypeU32 captures);
extern void fixture_original_pop016(void *vm);

static SqPrototypeU32 identity(const void *pointer)
{
    if (!pointer) return 0;
    if (pointer == closure) return 1;
    if (pointer == resident) return 2;
    if (pointer == prototype) return 3;
    for (SqPrototypeU32 index = 0; index < 3; index++)
        if (pointer == memory + 0x8000 + index * 0x1000) return index + 4;
    fault = 1;
    return 0xffffffffu;
}

static SqPrototypeU32 payload(SqPrefixObject012 object)
{
    return object.type & 0x08000000u ? identity(object.value.reference) : object.value.bits;
}

static void observe(SqPrototypeU32 kind, SqPrototypeU32 identifier)
{
    if (event_count == 32) { fault = 2; return; }
    SqPrototypeU32 *event = events[event_count++];
    event[0] = kind;
    event[1] = identifier;
    event[2] = (SqPrototypeU32)vm->top;
    event[3] = identity(old_state->chain);
    event[4] = allocations ? closure->reference.prefix.references : 0xffffffffu;
    event[5] = prototype->reference.references;
    event[6] = vm->stack[vm->top - 1].type;
    event[7] = payload(vm->stack[vm->top - 1]);
}

SqPrototypeU32 fixture_native_bind016(void *arena, SqPrototypeU32 bytes, const SqPrototypeVTable011 *native_table,
    const SqPrototypeVTable011 *prototype_table, const SqPrototypeVTable011 *base_table)
{
    if (!arena || bytes < 0x10000) return 0;
    memory = arena;
    vm = (void *)(memory + 0x1000);
    old_state = (void *)(memory + 0x2000);
    new_state = (void *)(memory + 0x2400);
    resident = (void *)(memory + 0x3000);
    closure = (void *)(memory + 0x4000);
    prototype = (void *)(memory + 0x5000);
    native_vtable = native_table;
    prototype_vtable = prototype_table;
    base_vtable = base_table;
    return 1;
}

void fixture_native_prepare016(SqPrototypeU32 captures, SqPrototypeU32 flags)
{
    for (SqPrototypeU32 index = 0; index < 0x10000; index++) memory[index] = 0xa5;
    *vm = (SqNativeCreationStorage016){0};
    *old_state = (SqPrefixState012){0};
    *new_state = (SqPrefixState012){0};
    *resident = (SqNativeClosure013){0};
    *prototype = (SqPrototype011){0};
    resident->reference.prefix.vtable = native_vtable;
    resident->reference.prefix.references = 1;
    resident->shared = old_state;
    resident->name.type = resident->environment.type = 0x01000001u;
    prototype->reference.vtable = prototype_vtable;
    prototype->source_name.type = prototype->name.type = 0x01000001u;
    old_state->chain = flags & 2 ? &resident->reference : 0;
    vm->stack = (void *)(memory + 0x6000);
    vm->shared = old_state;
    vm->top = (SqPrototypeI32)(captures + 2);
    for (SqPrototypeU32 index = 0; index <= captures + 2; index++) {
        vm->stack[index].type = 0x01000001u;
        vm->stack[index].value.reference = 0;
    }
    vm->stack[0].type = vm->stack[1].type = 0x05000002u;
    vm->stack[0].value.integer = 7;
    vm->stack[1].value.integer = 11;
    for (SqPrototypeU32 index = 0; index < captures; index++) {
        SqPrefixObject012 *value = vm->stack + index + 2;
        if (!(index & 1)) {
            value->type = 0x08002000u;
            value->value.reference = prototype;
            prototype->reference.references++;
        } else {
            value->type = 0x05000004u;
            value->value.bits = 0x7fc00001u + index;
        }
    }
    if (!captures) prototype->reference.references = 1;
    initial_top = captures + 2;
    active_flags = flags;
    fault = callable_invocations = allocations = reallocations = disposals = event_count = 0;
}

SqPrototypeI32 fixture_native_callable016(void *context)
{
    (void)context;
    callable_invocations++;
    return -999;
}

void *sq_native_create_allocate016(SqPrototypeU32 bytes)
{
    if (bytes != sizeof(*closure) || allocations) { fault = 3; return 0; }
    observe(1, 1);
    allocations++;
    if (active_flags & 1) vm->shared = new_state;
    return closure;
}

void *sq_native_create_reallocate016(void *storage, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes)
{
    SqPrototypeU32 capacity = new_bytes / sizeof(SqPrefixObject012);
    SqPrototypeU32 index = capacity == 4 ? 0 : capacity == 8 ? 1 : capacity == 16 ? 2 : 3;
    if (index > 2 || new_bytes != capacity * sizeof(SqPrefixObject012) ||
        old_bytes != (index ? (capacity / 2) * sizeof(SqPrefixObject012) : 0) ||
        storage != (index ? memory + 0x8000 + (index - 1) * 0x1000 : 0)) { fault = 4; return 0; }
    unsigned char *replacement = memory + 0x8000 + index * 0x1000;
    for (SqPrototypeU32 offset = 0; offset < old_bytes; offset++) replacement[offset] = ((unsigned char *)storage)[offset];
    if ((active_flags & 4) && !(vm->stack[vm->top - 1].type & 0x08000000u))
        vm->stack[vm->top - 1].value.bits ^= 0x01020304u;
    observe(2, capacity);
    reallocations++;
    return replacement;
}

static void disposed(void *pointer, SqPrototypeU32 bytes)
{
    SqPrototypeU32 identifier = identity(pointer);
    SqPrototypeU32 expected = identifier == 1 ? sizeof(*closure) : identifier == 3 ? sizeof(*prototype) :
        identifier >= 4 && identifier <= 6 ? (4u << (identifier - 4)) * sizeof(SqPrefixObject012) : 0;
    if (!expected || bytes != expected) fault = 5;
    observe(3, identifier);
    disposals++;
}

void sq_native_closure_deallocate013(void *pointer, SqPrototypeU32 bytes) { disposed(pointer, bytes); }
void sq_prototype_deallocate011(void *pointer, SqPrototypeU32 bytes) { disposed(pointer, bytes); }
void sq_deallocate(void *pointer, SqU32 bytes) { disposed(pointer, bytes); }
void fixture_prefix_unsupported012(SqU32 type, void *pointer) { (void)type; (void)pointer; fault = 6; }

void fixture_native_run016(SqPrototypeU32 source, SqPrototypeU32 captures, SqPrototypeU32 cleanup)
{
    if (source) fn_00176fc8(vm, fixture_native_callable016, captures);
    else fixture_original_create016(vm, fixture_native_callable016, captures);
    if (cleanup) {
        if (source) sq_native_creation_pop016(vm);
        else fixture_original_pop016(vm);
    }
}

SqPrototypeU32 fixture_native_snapshot016(SqPrototypeU32 *output, SqPrototypeU32 capacity)
{
    SqPrototypeU32 count = 21 + 2 * closure->outers.size + 2 * (initial_top + 1) + event_count * 8;
    if (capacity < count || closure->outers.size > 32) return 0;
    SqPrototypeU32 values[] = {fault, callable_invocations, (SqPrototypeU32)vm->top, vm->shared == old_state ? 1u : 2u,
        identity(old_state->chain), identity(new_state->chain), closure->reference.prefix.references,
        closure->reference.prefix.vtable == native_vtable ? 1u : closure->reference.prefix.vtable == base_vtable ? 0u : 2u,
        (SqPrototypeU32)closure->parameter_check, closure->shared == old_state ? 1u : 2u,
        closure->function == fixture_native_callable016, closure->outers.size, closure->outers.capacity,
        prototype->reference.references, prototype->reference.vtable == prototype_vtable ? 1u : prototype->reference.vtable == base_vtable ? 0u : 2u,
        identity(resident->reference.previous), allocations, reallocations, disposals, event_count, initial_top};
    for (SqPrototypeU32 index = 0; index < 21; index++) output[index] = values[index];
    SqPrototypeU32 cursor = 21;
    for (SqPrototypeU32 index = 0; index < closure->outers.size; index++) {
        output[cursor++] = closure->outers.values[index].type;
        output[cursor++] = payload(closure->outers.values[index]);
    }
    for (SqPrototypeU32 index = 0; index <= initial_top; index++) {
        output[cursor++] = vm->stack[index].type;
        output[cursor++] = payload(vm->stack[index]);
    }
    for (SqPrototypeU32 index = 0; index < event_count; index++)
        for (SqPrototypeU32 field = 0; field < 8; field++) output[cursor++] = events[index][field];
    return cursor;
}

void *fixture_native_failed_allocate016(SqPrototypeU32 bytes)
{
    (void)bytes;
    return 0;
}

void *fixture_native_failed_reallocate016(void *pointer, SqPrototypeU32 old_bytes, SqPrototypeU32 new_bytes)
{
    (void)pointer; (void)old_bytes; (void)new_bytes;
    return 0;
}
