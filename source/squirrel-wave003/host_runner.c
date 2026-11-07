#include "vm_controller.h"

__declspec(dllimport) void *malloc(__SIZE_TYPE__ size);
__declspec(dllimport) void *realloc(void *pointer, __SIZE_TYPE__ size);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) void ExitProcess(unsigned status);

int _fltused;

static SqU32 allocation_fails;
static SqU32 callbacks;
static SqU32 callback_top;
static SqU32 callback_type;
static SqU32 callback_references;
static VmStackView *observed_vm;
static SqObject *observed_destination;

static void release_reference(SqRef *reference)
{
    if (reference->references == 0) {
        callbacks++;
        callback_top = (SqU32)observed_vm->top;
        callback_type = observed_destination->type;
        callback_references = observed_destination->value.reference->references;
    }
}

const SqVTable sq_array_vtable = {0, 0, release_reference};

void *sq_allocate(SqU32 bytes)
{
    return allocation_fails ? 0 : malloc(bytes);
}

void *sq_reallocate(void *pointer, SqU32 old_bytes, SqU32 new_bytes)
{
    (void)old_bytes;
    return realloc(pointer, new_bytes);
}

void sq_assert_array(SqU32 condition, const SqObject *object)
{
    SqU32 valid = condition == 0 && object->type == 0x08000040u && object->value.reference == 0;
    printf("{\"terminal\":\"array-assertion\",\"valid\":%u}\n", valid);
    ExitProcess(valid ? 37 : 93);
    for (;;) {
    }
}

#if !ASSERT_CASE
static int exercise(SqU32 filled, SqU32 floating)
{
    SqControllerVM vm = {0};
    SqState state = {0};
    SqObject slots[40];
    SqRef fill_reference = {&sq_array_vtable, 7, 0, 0, 0};
    SqRef old_reference = {&sq_array_vtable, 1, 0, 0, 0};
    SqI32 count = filled ? 3 : 2;
    SqI32 base = filled ? -2 : 3;
    SqU32 length = filled ? 7 : 5;
    SqArray *array;
    for (SqU32 index = 0; index < 40; index++) {
        slots[index].type = 0x01000001u;
        slots[index].value.bits = 0;
    }
    vm.frame.stack = slots + 8;
    vm.frame.top = base + count;
    vm.frame.base = base;
    vm.shared = &state;
    vm.frame.stack[base + 1].type = floating ? 0x05000004u : 0x05000002u;
    if (floating) {
        vm.frame.stack[base + 1].value.floating = (float)length + 0.75f;
    } else {
        vm.frame.stack[base + 1].value.integer = (SqI32)length;
    }
    if (filled) {
        vm.frame.stack[base + 2].type = 0x08000040u;
        vm.frame.stack[base + 2].value.reference = &fill_reference;
    }
    observed_vm = &vm.frame;
    observed_destination = vm.frame.stack + vm.frame.top;
    observed_destination->type = 0x08000040u;
    observed_destination->value.reference = &old_reference;
    callbacks = 0;
    if (fn_001b33dc(&vm) != 1 || vm.frame.top != base + count + 1) {
        return 1;
    }
    if (observed_destination->type != 0x08000040u || old_reference.references != 0 || callbacks != 1) {
        return 2;
    }
    array = (SqArray *)observed_destination->value.reference;
    if (array->reference.references != 1 || array->shared != &state || state.chain != &array->reference) {
        return 3;
    }
    if (callback_top != (SqU32)(base + count + 1) || callback_type != 0x08000040u || callback_references != 2) {
        return 4;
    }
    if (array->vector.size != length || array->vector.capacity != length) {
        return 5;
    }
    for (SqU32 index = 0; index < length; index++) {
        SqObject *value = array->vector.values + index;
        if (filled ? value->type != 0x08000040u || value->value.reference != &fill_reference
                   : value->type != 0x01000001u || value->value.bits != 0) {
            return 6;
        }
    }
    if (fill_reference.references != 7 + (filled ? length : 0)) {
        return 7;
    }
    free(array->vector.values);
    free(array);
    return 0;
}
#endif

void mainCRTStartup(void)
{
#if ASSERT_CASE
    SqControllerVM vm = {0};
    SqState state = {0};
    SqObject slots[4] = {0};
    vm.frame.stack = slots;
    vm.frame.top = 2;
    vm.shared = &state;
    slots[1].type = 0x05000002u;
    slots[1].value.integer = 5;
    allocation_fails = 1;
    fn_001b33dc(&vm);
    ExitProcess(94);
#else
    int result = exercise(0, 0);
    if (!result) {
        result = exercise(0, 1);
    }
    if (!result) {
        result = exercise(1, 0);
    }
    if (!result) {
        result = exercise(1, 1);
    }
    printf("{\"component\":\"array-builtin-controller\",\"result\":%d,\"pointerBytes\":%u,\"objectBytes\":%u,\"publicationReferences\":%u}\n",
           result, (unsigned)sizeof(void *), (unsigned)sizeof(SqObject), callback_references);
    ExitProcess((unsigned)result);
#endif
}
