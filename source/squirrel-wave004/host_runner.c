#include "call_fixture.h"

__declspec(dllimport) void *malloc(unsigned long long bytes);
__declspec(dllimport) void *realloc(void *pointer, unsigned long long bytes);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) void ExitProcess(unsigned int result) __attribute__((noreturn));

int _fltused;
static SqU32 errors;
const SqVTable sq_array_vtable = {0, 0, sq_wave004_release};

void *sq_allocate(SqU32 bytes)
{
    return malloc(bytes);
}

void *sq_reallocate(void *pointer, SqU32 old_bytes, SqU32 new_bytes)
{
    (void)old_bytes;
    return realloc(pointer, new_bytes);
}

void sq_call_error(SqCallVM *vm, const char *message)
{
    (void)vm;
    errors += message[0] ? 1 : 100;
}

void sq_call_type_error(SqCallVM *vm, SqI32 index, SqI32 mask, SqU32 type)
{
    (void)vm;
    (void)index;
    (void)mask;
    (void)type;
    errors++;
}

void sq_assert_array(SqU32 condition, const SqObject *object)
{
    (void)condition;
    (void)object;
    ExitProcess(41);
}

static int exercise(SqI32 return_code, _Bool array, _Bool grow)
{
    SqCallVM vm = {0};
    SqState shared = {0};
    SqObject slots[64] = {0};
    SqCallInfo frames[4] = {0};
    SqNativeClosure closure = {0};
    SqCallFixture fixture = {0};
    struct {
        SqWeakPrefix prefix;
        SqObject object;
    } weak = {0};
    SqRef receiver = {&sq_array_vtable, 1, &fixture, 0, 0};
    SqObject outers[2] = {{0x05000002u, {.integer = 0x5566}}, {0x05000002u, {.integer = 0x7788}}};
    SqObject result = {0x05000002u, {.integer = 99}};
    SqI32 checks[2] = {-1, 6};
    _Bool suspend = 1;
    for (SqU32 index = 0; index < 64; index++) {
        slots[index].type = 0x01000001u;
    }
    for (SqU32 index = 0; index < 4; index++) {
        frames[index].closure.type = 0x01000001u;
    }
    sq_call_publish_stack(&vm, (SqVector){slots, 64, 64});
    vm.frame.top = 10;
    vm.frame.base = 3;
    vm.call_stack = frames;
    vm.call_count = grow ? 4 : 0;
    vm.allocated_calls = 4;
    vm.call_data = (SqCallVector){frames, 4, 4};
    if (grow) {
        SqCallInfo *allocated = malloc(sizeof(frames));
        __builtin_memcpy(allocated, frames, sizeof(frames));
        vm.call_stack = allocated;
        vm.call_data.values = allocated;
        vm.current = allocated + 3;
    }
    vm.native_calls = 1;
    vm.foreign = &fixture;
    vm.shared = &shared;
    closure.reference.references = 7;
    closure.parameter_check = -2;
    closure.type_checks = (SqOpaqueVector){checks, 2, 2};
    weak.object = (SqObject){0x05000002u, {.integer = 0x9911}};
    closure.environment = (SqObject){0x08010000u, {.reference = (SqRef *)&weak}};
    closure.outers = (SqVector){outers, array ? 0 : 2, 2};
    closure.function = array ? fn_001b33dc : sq_wave004_native;
    fixture.vm = &vm;
    fixture.result = &result;
    fixture.return_code = return_code;
    fixture.returned = (SqObject){0x05000002u, {.integer = 0x2244}};
    slots[5] = (SqObject){0x08000040u, {.reference = &receiver}};
    slots[6] = (SqObject){0x05000002u, {.integer = 5}};
    SqCallInfo *previous = vm.current;
    SqI32 previous_count = vm.call_count;
    _Bool passed = fn_00196f6c(&vm, &closure, 2, 5, &result, &suspend);
    if (passed != (array || return_code >= 0 || return_code == -666) || vm.frame.top != 10 || vm.frame.base != 3 ||
        vm.native_calls != 1 || vm.call_count != previous_count || closure.reference.references != 7) {
        return 2;
    }
    if (grow ? vm.current != vm.call_stack + 3 : vm.current != previous) {
        return 3;
    }
    if (suspend != (return_code == -666 && !array)) {
        return 4;
    }
    if (receiver.references || slots[5].type != 0x05000002u || slots[5].value.integer != 0x9911 ||
        fixture.release_count != 1 || fixture.releases[0].native != 2 || fixture.releases[0].calls != previous_count + 1) {
        return 9;
    }
    if (!array && (fixture.outer.type != 0x05000002u || fixture.outer.value.integer != 0x7788)) {
        return 10;
    }
    if (array) {
        SqArray *value = (SqArray *)result.value.reference;
        if (result.type != 0x08000040u || value->vector.size != 5 || value->reference.references != 1 || shared.chain != &value->reference) {
            return 5;
        }
    } else if (return_code > 0 || return_code == -666) {
        if (result.type != 0x05000002u || result.value.integer != 0x2244 || fixture.previous_base != 2 || fixture.closure_references != 9) {
            return 6;
        }
    } else if (return_code == 0 && result.type != 0x01000001u) {
        return 7;
    }
    vm.native_calls = 100;
    SqU32 old_errors = errors;
    if (fn_00196f6c(&vm, &closure, 2, 5, &result, &suspend) || errors != old_errors + 1 || vm.native_calls != 100) {
        return 8;
    }
    return 0;
}

void mainCRTStartup(void)
{
    int result = 0;
    for (SqU32 index = 0; index < 5 && !result; index++) {
        SqI32 returned[] = {1, 0, -1, -666, 1};
        result = exercise(returned[index], index == 4, index == 4);
    }
    printf("{\"result\":%d,\"pointerBytes\":%u,\"objectBytes\":%u,\"frameBytes\":%u,\"vmBytes\":%u,\"cases\":5}\n",
           result, (SqU32)sizeof(void *), (SqU32)sizeof(SqObject), (SqU32)sizeof(SqCallInfo), (SqU32)sizeof(SqCallVM));
    ExitProcess((SqU32)result);
}
