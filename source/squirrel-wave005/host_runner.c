#include "dispatch_views.h"

__declspec(dllimport) void *malloc(unsigned long long bytes);
__declspec(dllimport) void *realloc(void *pointer, unsigned long long bytes);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) void ExitProcess(unsigned int result) __attribute__((noreturn));

int _fltused;
const SqVTable sq_array_vtable = {0, 0, sq_wave004_release};

void *sq_allocate(SqU32 bytes) { return malloc(bytes); }
void *sq_reallocate(void *pointer, SqU32 old_bytes, SqU32 new_bytes)
{
    (void)old_bytes;
    return realloc(pointer, new_bytes);
}
void sq_call_error(SqCallVM *vm, const char *message) { (void)vm; (void)message; }
void sq_call_type_error(SqCallVM *vm, SqI32 index, SqI32 mask, SqU32 type)
{
    (void)vm; (void)index; (void)mask; (void)type;
}
void sq_assert_array(SqU32 condition, const SqObject *object)
{
    (void)condition; (void)object;
    ExitProcess(41);
}

static int exercise(SqU32 kind, SqU32 flags)
{
    SqCallVM vm = {0};
    SqState shared = {0};
    SqDispatchFixture fixture = {0};
    SqObject slots[64] = {0};
    SqCallInfo frames[4] = {0};
    SqNativeClosure native = {0};
    SqRef script = {&sq_array_vtable, 5, &fixture.native, 0, 0};
    SqRef the_class = {&sq_array_vtable, 3, &fixture.native, 0, 0};
    SqRef instance = {&sq_array_vtable, 0, &fixture.native, 0, 0};
    SqRef temporary = {&sq_array_vtable, 0, &fixture.native, 0, 0};
    SqObject result = {0x05000002u, {.integer = 99}};
    SqObject callable = {0x08000200u, {.reference = &native.reference}};
    SqI32 masks[2] = {-1, 6};
    for (SqU32 index = 0; index < 64; index++) slots[index].type = 0x01000001u;
    for (SqU32 index = 0; index < 4; index++) frames[index].closure.type = 0x01000001u;
    sq_call_publish_stack(&vm, (SqVector){slots, 64, 64});
    vm.frame.top = 10;
    vm.frame.base = 3;
    vm.call_stack = frames;
    vm.allocated_calls = 4;
    vm.call_data = (SqCallVector){frames, 4, 4};
    vm.native_calls = 1;
    vm.shared = &shared;
    vm.foreign = &fixture;
    fixture.native.vm = &vm;
    fixture.native.result = &result;
    fixture.native.return_code = kind == 7 ? -1 : 1;
    fixture.native.returned = (SqObject){0x08000040u, {.reference = &temporary}};
    fixture.requested_result = fixture.native.returned;
    fixture.execute_success = 1;
    fixture.instance = (SqObject){0x0a008000u, {.reference = &instance}};
    fixture.constructor = (SqObject){0x01000001u, {.reference = 0}};
    native.reference.references = 7;
    native.parameter_check = -2;
    native.type_checks = (SqOpaqueVector){masks, 2, 2};
    native.environment.type = 0x01000001u;
    native.function = kind == 1 ? fn_001b33dc : sq_wave004_native;
    slots[5] = (SqObject){0x05000002u, {.integer = 1}};
    slots[6] = (SqObject){0x05000002u, {.integer = 5}};
    if (kind == 2) callable = (SqObject){0x08000100u, {.reference = &script}};
    if (kind >= 3 && kind <= 7) {
        callable = (SqObject){0x08004000u, {.reference = &the_class}};
        if (kind == 4 || kind == 7) fixture.constructor = (SqObject){0x08000200u, {.reference = &native.reference}};
        if (kind == 5) fixture.constructor = (SqObject){0x08000100u, {.reference = &script}};
        if (kind == 6) fixture.constructor = (SqObject){0x05000002u, {.integer = 51}};
    }
    if (kind == 8) callable.type = 0x05000002u;
    _Bool passed = fn_0017ffac(&vm, &callable, 2, 5, &result, flags);
    if (passed != (kind != 6 && kind != 7 && kind != 8) || vm.frame.top != 10 || vm.frame.base != 3 ||
        vm.call_count || vm.current || vm.native_calls != 1 || native.reference.references != 7) return 2;
    if (kind == 2 || kind == 5) {
        if (fixture.execute_visits != 1 || fixture.target != 8 || fixture.arguments != 2 || fixture.base != 5 ||
            fixture.raise_error != flags || fixture.execution_type || fixture.result_is_outer != (kind == 2)) return 5;
    }
    if (kind == 1) {
        SqArray *array = (SqArray *)result.value.reference;
        if (result.type != 0x08000040u || array->vector.size != 5 || array->reference.references != 1) return 3;
    }
    if (kind >= 3 && kind <= 7) {
        if (result.value.reference != &instance || instance.references != (kind == 3 ? 1u : 2u)) return 4;
        if ((kind == 4 || kind == 5) && (temporary.references || fixture.native.release_count != 1 ||
            fixture.native.releases[0].calls || fixture.native.releases[0].native != 1 || fixture.native.releases[0].result_references != 2)) return 7;
    }
    return 0;
}

void mainCRTStartup(void)
{
    int result = 0;
    SqU32 cases = 0;
    for (SqU32 kind = 0; kind < 9 && !result; kind++) {
        result = exercise(kind, 0x7fc12345u);
        cases++;
    }
    for (SqU32 index = 0; index < 3 && !result; index++) {
        SqU32 patterns[] = {0, 0x80000000u, 0xffffffffu};
        result = exercise(2, patterns[index]);
        cases++;
    }
    printf("{\"result\":%d,\"cases\":%u,\"pointerBytes\":%u,\"objectBytes\":%u,\"rawFlagBits\":32}\n",
           result, cases, (SqU32)sizeof(void *), (SqU32)sizeof(SqObject));
    ExitProcess((SqU32)result);
}
