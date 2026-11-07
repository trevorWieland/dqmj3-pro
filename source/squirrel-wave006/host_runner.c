#include "execute_fixture.h"

__declspec(dllimport) void *malloc(unsigned long long bytes);
__declspec(dllimport) void *realloc(void *pointer, unsigned long long bytes);
__declspec(dllimport) void free(void *pointer);
__declspec(dllimport) int printf(const char *format, ...);
__declspec(dllimport) void ExitProcess(unsigned int result) __attribute__((noreturn));

int _fltused;
const SqVTable sq_array_vtable = {0, 0, sq_wave006_release};

const SqVTable sq_script_closure_vtable = {0, 0, fn_006a7610};
const SqVTable sq_weak_prefix_vtable = {0};
const SqVTable sq_table_vtable = {0, 0, fn_00666518};

void *sq_allocate(SqU32 bytes) { return malloc(bytes); }
void *sq_reallocate(void *pointer, SqU32 old_bytes, SqU32 new_bytes)
{
    (void)old_bytes;
    return realloc(pointer, new_bytes);
}
void sq_deallocate(void *pointer, SqU32 bytes) { (void)bytes; free(pointer); }
void sq_call_error(SqCallVM *vm, const char *message) { (void)vm; (void)message; }
void sq_execute_error(SqCallVM *vm, const char *message, ...) { (void)vm; (void)message; }
void sq_call_type_error(SqCallVM *vm, SqI32 index, SqI32 mask, SqU32 type)
{
    (void)vm; (void)index; (void)mask; (void)type;
}
void sq_assert_array(SqU32 condition, const SqObject *object)
{
    (void)condition; (void)object; ExitProcess(41);
}
void sq_execute_stop(SqI32 reason) { (void)reason; ExitProcess(42); }
void sq_execute_table_stop(SqI32 reason) { (void)reason; ExitProcess(45); }

static int exercise(SqU32 kind)
{
    SqExecuteVM vm = {0};
    SqSharedRuntime shared = {0};
    SqExecuteFixture fixture = {0};
    SqObject slots[64] = {0};
    SqCallInfo frames[4] = {0};
    SqTrap traps[8] = {0};
    SqScriptClosure script = {0};
    SqScriptClosure child_script = {0};
    SqNativeClosure native = {0};
    SqObject literals[4] = {0};
    SqObject prototypes[1] = {0};
    SqOuterDescriptor descriptors[1] = {0};
    SqRef old = {&sq_array_vtable, 1, &fixture.native, 0, 0};
    SqObject defaults[2] = {{0x05000002u, {.integer = 17}}, {0x05000002u, {.integer = 19}}};
    SqI32 masks[2] = {-1, 6};
    SqObject output = {0x05000002u, {.integer = 99}};
    SqFunction *function = malloc(sizeof(SqFunction) + 64 * sizeof(SqInstruction));
    __builtin_memset(function, 0, sizeof(SqFunction) + 64 * sizeof(SqInstruction));
    for (SqU32 index = 0; index < 64; index++) slots[index].type = 0x01000001u;
    for (SqU32 index = 0; index < 4; index++) {
        frames[index].closure.type = 0x01000001u;
        literals[index].type = 0x01000001u;
    }
    sq_call_publish_stack(&vm.base, (SqVector){slots, 64, 64});
    vm.base.frame.top = kind == 2 || kind == 15 ? 7 : 5;
    vm.base.frame.base = 1;
    vm.base.call_stack = frames;
    vm.base.allocated_calls = 4;
    vm.base.call_data = (SqCallVector){frames, 4, 4};
    vm.base.traps = (SqOpaqueVector){traps, 0, 8};
    vm.base.native_calls = 1;
    vm.base.foreign = &fixture;
    vm.base.shared = &shared.base;
    vm.base.debug_hook.type = 0x01000001u;
    vm.base.temporary.type = 0x01000001u;
    vm.base.last_error.type = 0x01000001u;
    fixture.native.vm = &vm.base;
    fixture.native.result = slots + 5;
    fixture.native.return_code = 1;
    fixture.native.returned = (SqObject){0x05000002u, {.integer = 0x2244}};
    script.reference.references = 7;
    script.environment.type = 0x01000001u;
    script.function = (SqObject){0x08002000u, {.reference = (SqRef *)function}};
    script.defaults = (SqVector){defaults, 2, 2};
    native.reference.references = 7;
    native.parameter_check = -2;
    native.type_checks = (SqOpaqueVector){masks, 2, 2};
    native.function = fn_001b33dc;
    native.environment.type = 0x01000001u;
    literals[0] = (SqObject){0x08000200u, {.reference = &native.reference}};
    function->parameter_count = 1;
    function->stack_size = 8;
    function->literals = literals;
    function->literal_count = 4;
    function->instructions[0] = (SqInstruction){42, SQ_LOADINT, 1, 0, 0};
    function->instructions[1] = (SqInstruction){1, SQ_MOVE, 2, 0, 0};
    function->instructions[2] = (SqInstruction){2, SQ_RETURN, 1, 0, 0};
    function->instruction_count = 3;
    slots[4] = (SqObject){0x05000002u, {.integer = 0x3355}};
    slots[5] = (SqObject){0x08000040u, {.reference = &old}};
    if (kind == 1) {
        slots[5].type = 0x01000001u;
        function->instructions[0] = (SqInstruction){0, SQ_LOAD, 1, 0, 0};
        function->instructions[1] = (SqInstruction){5, SQ_LOADINT, 3, 0, 0};
        function->instructions[2] = (SqInstruction){1, SQ_CALL, 4, 2, 2};
        function->instructions[3] = (SqInstruction){4, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 4;
    } else if (kind == 2) {
        function->variable_parameters = 1;
        function->instructions[0] = (SqInstruction){0, SQ_VARGC, 3, 0, 0};
        function->instructions[1] = (SqInstruction){3, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 2;
    } else if (kind == 3) {
        function->parameter_count = 3;
        function->default_count = 2;
        function->instructions[0] = (SqInstruction){2, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 1;
    } else if (kind == 4) {
        function->instructions[0] = (SqInstruction){0x7fc12345, SQ_LOADFLOAT, 1, 0, 0};
    } else if (kind == 5) {
        function->instructions[0] = (SqInstruction){0, SQ_RETURN, 255, 0, 0};
        function->instruction_count = 1;
    } else if (kind == 6 || kind == 7) {
        function->instructions[0] = (SqInstruction){kind == 6 ? 7 : 1, SQ_LOADINT, 1, 0, 0};
        function->instructions[1] = (SqInstruction){kind == 6 ? -3 : 32, SQ_LOADINT, 2, 0, 0};
        function->instructions[2] = (SqInstruction){2, kind == 6 ? SQ_ARITH : SQ_BITW, 3, 1, kind == 6 ? '+' : 4};
        function->instructions[3] = (SqInstruction){3, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 4;
    } else if (kind == 8) {
        function->instructions[0] = (SqInstruction){17, SQ_LOADINT, 1, 0, 0};
        function->instructions[1] = (SqInstruction){1, SQ_PUSHTRAP, 3, 0, 0};
        function->instructions[2] = (SqInstruction){0, SQ_THROW, 1, 0, 0};
        function->instructions[3] = (SqInstruction){3, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 4;
    } else if (kind == 9 || kind == 10) {
        SqFunction *child = malloc(sizeof(SqFunction) + 2 * sizeof(SqInstruction));
        __builtin_memset(child, 0, sizeof(SqFunction) + 2 * sizeof(SqInstruction));
        child_script.reference.references = 7;
        child_script.environment.type = 0x01000001u;
        child_script.function = (SqObject){0x08002000u, {.reference = (SqRef *)child}};
        child->parameter_count = 1;
        child->stack_size = 8;
        child->instructions[0] = (SqInstruction){33, SQ_LOADINT, 1, 0, 0};
        child->instructions[1] = (SqInstruction){1, SQ_RETURN, 1, 0, 0};
        child->instruction_count = 2;
        literals[0] = (SqObject){0x08000100u, {.reference = &child_script.reference}};
        function->instructions[0] = (SqInstruction){0, SQ_LOAD, 1, 0, 0};
        function->instructions[1] = (SqInstruction){1, kind == 9 ? SQ_CALL : SQ_TAILCALL, 4, 2, 1};
        function->instructions[2] = (SqInstruction){4, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 3;
    } else if (kind == 11 || kind == 12) {
        function->instructions[0] = (SqInstruction){kind == 11 ? -2147483647 - 1 : 0, kind == 11 ? SQ_LOADINT : SQ_LOADFLOAT, 1, 0, 0};
        function->instructions[1] = (SqInstruction){kind == 11 ? 2147483647 : -2147483647 - 1, kind == 11 ? SQ_LOADINT : SQ_LOADFLOAT, 2, 0, 0};
        function->instructions[2] = (SqInstruction){2, kind == 11 ? SQ_CMP : SQ_EQ, 3, 1, 0};
        function->instructions[3] = (SqInstruction){3, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 4;
    } else if (kind == 13) {
        function->instructions[0] = (SqInstruction){0, SQ_LOAD, 1, 0, 0};
        function->instructions[1] = (SqInstruction){0, SQ_LOADINT, 3, 0, 0};
        function->instructions[2] = (SqInstruction){1, SQ_LOADINT, 4, 0, 0};
        function->instructions[3] = (SqInstruction){5, SQ_LOADINT, 5, 0, 0};
        function->instructions[4] = (SqInstruction){4, SQ_ARITH, 3, 3, '+'};
        function->instructions[5] = (SqInstruction){5, SQ_CMP, 6, 3, 3};
        function->instructions[6] = (SqInstruction){-3, SQ_JNZ, 6, 0, 0};
        function->instructions[7] = (SqInstruction){1, SQ_CALL, 7, 2, 2};
        function->instructions[8] = (SqInstruction){7, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 9;
    } else if (kind == 14 || kind == 16) {
        function->instructions[0] = (SqInstruction){kind == 14 ? 1 : 0, SQ_NEWARRAY, 1, 0, 0};
        function->instructions[1] = (SqInstruction){1, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 2;
        if (kind == 14) {
            function->instructions[1] = (SqInstruction){7, SQ_LOADINT, 2, 0, 0};
            function->instructions[2] = (SqInstruction){2, SQ_APPENDARRAY, 1, 0, 0};
            function->instructions[3] = (SqInstruction){1, SQ_APPENDARRAY, 1, 0, 0};
            function->instructions[4] = (SqInstruction){1, SQ_RETURN, 1, 0, 0};
            function->instruction_count = 5;
        }
    } else if (kind == 15) {
        function->variable_parameters = 1;
        function->instructions[0] = (SqInstruction){0, SQ_LOADINT, 1, 0, 0};
        function->instructions[1] = (SqInstruction){1, SQ_GETVARGV, 3, 0, 0};
        function->instructions[2] = (SqInstruction){3, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 3;
    } else if ((kind >= 17 && kind <= 19) || kind == 23 || kind == 26) {
        SqFunction *child = malloc(sizeof(SqFunction) + 2 * sizeof(SqInstruction));
        __builtin_memset(child, 0, sizeof(SqFunction) + 2 * sizeof(SqInstruction));
        child->reference.references = 1;
        child->parameter_count = 1;
        child->stack_size = 8;
        child->outer_count = 1;
        child->outers = descriptors;
        descriptors[0].source = (SqObject){0x05000002u, {.integer = 1}};
        descriptors[0].name.type = 0x01000001u;
        child->instructions[0] = (SqInstruction){0, SQ_LOADFREE, 1, 0, 0};
        child->instructions[1] = (SqInstruction){1, SQ_RETURN, 1, 0, 0};
        child->instruction_count = 2;
        prototypes[0] = (SqObject){0x08002000u, {.reference = (SqRef *)child}};
        function->functions = prototypes;
        function->function_count = 1;
        literals[1] = (SqObject){0x08000040u, {.reference = &old}};
        old.references++;
        function->instructions[0] = (SqInstruction){1, SQ_LOAD, 1, 0, 0};
        function->instructions[1] = (SqInstruction){0, SQ_CLOSURE, 2, 0, 0};
        function->instructions[2] = (SqInstruction){2, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 3;
        if (kind == 18) {
            function->instructions[2] = (SqInstruction){2, SQ_NEWARRAY, 5, 0, 0};
            function->instructions[3] = (SqInstruction){2, SQ_APPENDARRAY, 5, 0, 0};
            function->instructions[4] = (SqInstruction){2, SQ_CALL, 4, 2, 1};
            function->instructions[5] = (SqInstruction){4, SQ_APPENDARRAY, 5, 0, 0};
            function->instructions[6] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
            function->instruction_count = 7;
        } else if (kind == 19) {
            function->instructions[2] = (SqInstruction){2, SQ_CALL, 4, 2, 1};
            function->instructions[3] = (SqInstruction){4, SQ_RETURN, 1, 0, 0};
            function->instruction_count = 4;
        } else if (kind == 26) {
            child->outer_count = 0;
            function->instructions[0] = (SqInstruction){0, SQ_NEWTABLE, 5, 0, 0};
            function->instructions[1] = (SqInstruction){0, SQ_CLOSURE, 1, 0, 0};
            function->instructions[2] = (SqInstruction){0, SQ_CLOSURE, 2, 0, 0};
            function->instructions[3] = (SqInstruction){5, SQ_NEWSLOT, 2, 1, 2};
            function->instructions[4] = (SqInstruction){2, SQ_LOADNULLS, 1, 0, 0};
            function->instructions[5] = (SqInstruction){0, SQ_RETURN, 255, 0, 0};
            function->instruction_count = 6;
        } else if (kind == 23) {
            descriptors[0].kind = 1;
            descriptors[0].source.value.integer = 7;
            function->instructions[0] = (SqInstruction){0, SQ_NEWTABLE, 0, 0, 0};
            function->instructions[1] = (SqInstruction){7, SQ_LOADINT, 1, 0, 0};
            function->instructions[2] = (SqInstruction){33, SQ_LOADINT, 2, 0, 0};
            function->instructions[3] = (SqInstruction){0, SQ_NEWSLOT, 2, 1, 2};
            function->instructions[4] = (SqInstruction){0, SQ_CLOSURE, 3, 0, 0};
            function->instructions[5] = (SqInstruction){3, SQ_NEWARRAY, 5, 0, 0};
            function->instructions[6] = (SqInstruction){0, SQ_APPENDARRAY, 5, 0, 0};
            function->instructions[7] = (SqInstruction){3, SQ_APPENDARRAY, 5, 0, 0};
            function->instructions[8] = (SqInstruction){3, SQ_CALL, 4, 2, 1};
            function->instructions[9] = (SqInstruction){4, SQ_APPENDARRAY, 5, 0, 0};
            function->instructions[10] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
            function->instruction_count = 11;
        }
    } else if (kind == 20 || kind == 21) {
        function->instructions[0] = (SqInstruction){3, SQ_NEWARRAY, 5, 0, 0};
        function->instructions[1] = (SqInstruction){7, SQ_LOADINT, 1, 0, 0};
        function->instructions[2] = (SqInstruction){1, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[3] = (SqInstruction){9, SQ_LOADINT, 1, 0, 0};
        function->instructions[4] = (SqInstruction){1, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[5] = (SqInstruction){0, SQ_LOADINT, 4, 0, 0};
        function->instructions[6] = (SqInstruction){5, SQ_GET, 3, 4, 0};
        function->instructions[7] = (SqInstruction){3, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[8] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 9;
        if (kind == 21) {
            function->instructions[1] = (SqInstruction){0, SQ_APPENDARRAY, 5, 0, 1};
            function->instructions[2] = (SqInstruction){0, SQ_LOADINT, 4, 0, 0};
            function->instructions[3] = (SqInstruction){4, SQ_PREPCALL, 1, 5, 2};
            function->instructions[4] = (SqInstruction){5, SQ_LOADINT, 3, 0, 0};
            function->instructions[5] = (SqInstruction){1, SQ_CALL, 7, 2, 2};
            function->instructions[6] = (SqInstruction){7, SQ_APPENDARRAY, 5, 0, 0};
            function->instructions[7] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
            function->instruction_count = 8;
        }
    }
    if (kind == 22) {
        SqU32 cursor = 0;
        function->instructions[cursor++] = (SqInstruction){0, SQ_NEWTABLE, 5, 0, 0};
        for (SqI32 index = 0; index < 5; index++) {
            function->instructions[cursor++] = (SqInstruction){index * 4, SQ_LOADINT, 1, 0, 0};
            function->instructions[cursor++] = (SqInstruction){index + 7, SQ_LOADINT, 2, 0, 0};
            function->instructions[cursor++] = (SqInstruction){5, SQ_NEWSLOT, 2, 1, 2};
        }
        function->instructions[cursor++] = (SqInstruction){0, SQ_LOADINT, 4, 0, 0};
        function->instructions[cursor++] = (SqInstruction){5, SQ_GET, 3, 4, 0};
        function->instructions[cursor++] = (SqInstruction){99, SQ_LOADINT, 4, 0, 0};
        function->instructions[cursor++] = (SqInstruction){5, SQ_NEWSLOT, 3, 4, 3};
        function->instructions[cursor++] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
        function->instruction_count = cursor;
    }
    if (kind == 24) {
        function->instructions[0] = (SqInstruction){7, SQ_LOADINT, 1, 0, 0};
        function->instructions[1] = (SqInstruction){1, SQ_INCL, 3, 0, 255};
        function->instructions[2] = (SqInstruction){1, SQ_PINCL, 4, 0, 1};
        function->instructions[3] = (SqInstruction){1, SQ_COMPARITHL, 3, 4, '*'};
        function->instructions[4] = (SqInstruction){3, SQ_NEWARRAY, 5, 0, 0};
        function->instructions[5] = (SqInstruction){1, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[6] = (SqInstruction){4, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[7] = (SqInstruction){0, SQ_LOADINT, 2, 0, 0};
        function->instructions[8] = (SqInstruction){5, SQ_EXISTS, 3, 2, 0};
        function->instructions[9] = (SqInstruction){3, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[10] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 11;
    }
    if (kind == 25) {
        function->instructions[0] = (SqInstruction){2, SQ_NEWARRAY, 5, 0, 0};
        function->instructions[1] = (SqInstruction){7, SQ_LOADINT, 1, 0, 0};
        function->instructions[2] = (SqInstruction){1, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[3] = (SqInstruction){0, SQ_LOADINT, 4, 0, 0};
        function->instructions[4] = (SqInstruction){17, SQ_LOADINT, 3, 0, 0};
        function->instructions[5] = (SqInstruction){5, SQ_SET, 2, 4, 3};
        function->instructions[6] = (SqInstruction){5, SQ_GET, 1, 4, 0};
        function->instructions[7] = (SqInstruction){1, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[8] = (SqInstruction){2, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[9] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 10;
    }
    if (kind == 27) {
        function->instructions[0] = (SqInstruction){0, SQ_NEWTABLE, 5, 0, 0};
        function->instructions[1] = (SqInstruction){0, SQ_NEWTABLE, 4, 0, 0};
        function->instructions[2] = (SqInstruction){7, SQ_LOADINT, 1, 0, 0};
        function->instructions[3] = (SqInstruction){33, SQ_LOADINT, 2, 0, 0};
        function->instructions[4] = (SqInstruction){4, SQ_NEWSLOT, 2, 1, 2};
        function->instructions[5] = (SqInstruction){5, SQ_DELEGATE, 3, 4, 0};
        function->instructions[6] = (SqInstruction){5, SQ_GET, 2, 1, 0};
        function->instructions[7] = (SqInstruction){17, SQ_LOADINT, 2, 0, 0};
        function->instructions[8] = (SqInstruction){5, SQ_SET, 2, 1, 2};
        function->instructions[9] = (SqInstruction){4, SQ_GET, 2, 1, 0};
        function->instructions[10] = (SqInstruction){2, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 11;
    } else if (kind == 28) {
        function->instructions[0] = (SqInstruction){0, SQ_NEWTABLE, 5, 0, 0};
        function->instructions[1] = (SqInstruction){5, SQ_DELEGATE, 3, 5, 0};
        function->instructions[2] = (SqInstruction){0, SQ_RETURN, 255, 0, 0};
        function->instruction_count = 3;
    }
    if (kind == 29) {
        function->instructions[0] = (SqInstruction){4, SQ_NEWARRAY, 5, 0, 0};
        for (SqU32 index = 0; index < 3; index++) {
            function->instructions[1 + index * 2] = (SqInstruction){(SqI32)index + 7, SQ_LOADINT, 1, 0, 0};
            function->instructions[2 + index * 2] = (SqInstruction){1, SQ_APPENDARRAY, 5, 0, 0};
        }
        function->instructions[7] = (SqInstruction){3, SQ_LOADNULLS, 0, 0, 0};
        function->instructions[8] = (SqInstruction){0, SQ_LOADINT, 3, 0, 0};
        function->instructions[9] = (SqInstruction){3, SQ_FOREACH, 5, 0, 0};
        function->instructions[10] = (SqInstruction){123, SQ_LOADINT, 3, 0, 0};
        function->instructions[11] = (SqInstruction){1, SQ_ARITH, 3, 3, '+'};
        function->instructions[12] = (SqInstruction){-4, SQ_JUMP, 0, 0, 0};
        function->instructions[13] = (SqInstruction){3, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[14] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 15;
    }
    SqObject callable = {0x08000100u, {.reference = &script.reference}};
    _Bool returned = fn_0018d65c(&vm, &callable, 0, kind == 2 || kind == 15 ? 3 : 1, 4, &output, 0x7fc12345u, 0);
    if ((kind == 28 ? returned : !returned) || vm.base.frame.base != 1 || vm.base.frame.top != (kind == 2 || kind == 15 ? 7 : 5) ||
        vm.base.call_count || vm.base.current || vm.base.native_calls != 1 ||
        script.reference.references != (kind == 28 ? 8u : 7u)) return 2;
    if (kind == 29) {
        SqArray *array = (SqArray *)output.value.reference;
        if (output.type != 0x08000040u || array->vector.size != 4 || array->vector.values[3].type != 0x05000002u ||
            array->vector.values[3].value.integer != 24) return 27;
    } else if (kind == 27 || kind == 28) {
        if (output.type != 0x05000002u || output.value.integer != (kind == 27 ? 17 : 99) || shared.base.chain) return 26;
    } else if (kind == 26) {
        if (output.type != 0x01000001u || shared.base.chain ||
            ((SqFunction *)prototypes[0].value.reference)->reference.references != 1) return 25;
    } else if (kind == 25) {
        SqArray *array = (SqArray *)output.value.reference;
        if (output.type != 0x08000040u || array->vector.size != 3 || array->vector.values[0].value.integer != 17 ||
            array->vector.values[1].value.integer != 17 || array->vector.values[2].value.integer != 17) return 24;
    } else if (kind == 24) {
        SqArray *array = (SqArray *)output.value.reference;
        if (output.type != 0x08000040u || array->vector.size != 3 || array->vector.values[0].value.integer != 42 ||
            array->vector.values[1].value.integer != 6 || array->vector.values[2].type != 0x01000008u ||
            array->vector.values[2].value.bits != 1) return 23;
    } else if (kind == 22) {
        SqTable *table = (SqTable *)output.value.reference;
        SqObject key = {0x05000002u, {.integer = 99}}, found = {0x01000001u, {.bits = 0}};
        if (output.type != 0x0a000020u || table->used != 6 || table->node_count != 8 ||
            !fn_001a1dc8(table, &key, &found) || found.type != 0x05000002u || found.value.integer != 7) return 21;
    } else if (kind == 23) {
        SqArray *array = (SqArray *)output.value.reference;
        if (output.type != 0x08000040u || array->vector.size != 3 || array->vector.values[0].type != 0x0a000020u ||
            array->vector.values[1].type != 0x08000100u || array->vector.values[2].value.integer != 33) return 22;
    } else if (kind == 1 || kind == 13) {
        SqArray *array = (SqArray *)output.value.reference;
        if (output.type != 0x08000040u || array->vector.size != 5 || array->reference.references != 2 || native.reference.references != 7) return 4;
    } else if (kind == 4) {
        if (output.type != 0x05000004u || output.value.bits != 0x7fc12345u) return 5;
    } else if (kind == 5) {
        if (output.type != 0x01000001u) return 6;
    } else if (kind == 11 || kind == 12) {
        if (output.type != 0x01000008u || output.value.bits != (kind == 11)) return 10;
    } else if (kind == 14 || kind == 16) {
        SqArray *array = (SqArray *)output.value.reference;
        if (output.type != 0x08000040u || array->vector.size != (kind == 14 ? 2u : 0u) ||
            array->reference.references != (kind == 14 ? 3u : 2u)) return 11;
        if (kind == 14 && (array->vector.values[0].value.integer != 7 || array->vector.values[1].value.reference != &array->reference)) return 12;
    } else if (kind == 15) {
        if (output.type != 0x08000040u || output.value.reference != &old || old.references != 2) return 13;
    } else if (kind == 20 || kind == 21) {
        SqArray *array = (SqArray *)output.value.reference;
        if (output.type != 0x08000040u || array->vector.size != (kind == 20 ? 3u : 2u)) return 18;
        if (kind == 20 && array->vector.values[2].value.integer != 7) return 19;
        if (kind == 21 && (array->vector.values[1].type != 0x08000040u ||
            ((SqArray *)array->vector.values[1].value.reference)->vector.size != 5)) return 20;
    } else if (kind == 19) {
        if (output.type != 0x08000040u || output.value.reference != &old || old.references != 3 || shared.base.chain ||
            ((SqFunction *)prototypes[0].value.reference)->reference.references != 1) return 17;
    } else if (kind == 17 || kind == 18) {
        SqScriptClosure *created;
        if (kind == 18) {
            SqArray *array = (SqArray *)output.value.reference;
            if (output.type != 0x08000040u || array->vector.size != 2 || array->vector.values[0].type != 0x08000100u ||
                array->vector.values[1].value.reference != &old || old.references != 3) return 14;
            created = (SqScriptClosure *)array->vector.values[0].value.reference;
        } else {
            if (output.type != 0x08000100u || old.references != 2) return 15;
            created = (SqScriptClosure *)output.value.reference;
        }
        if (created->reference.references != (kind == 17 ? 2u : 1u) || created->outers.size != 1 ||
            created->outers.values[0].value.reference != &old || created->function.value.reference != prototypes[0].value.reference ||
            ((SqFunction *)created->function.value.reference)->reference.references != 2) return 16;
    } else if (output.type != 0x05000002u || output.value.integer != (kind == 2 ? 2 : kind == 3 ? 19 : kind == 6 ? 4 :
                kind == 7 ? 0 : kind == 8 ? 17 : kind >= 9 ? 33 : 42)) return 3;
    if ((kind == 9 || kind == 10) && child_script.reference.references != 7) return 8;
    if (vm.base.traps.size) return 9;
    if (kind == 0 && (!fixture.native.release_count || fixture.native.releases[0].result_type != 0x08000040u)) return 7;
    return 0;
}

void mainCRTStartup(void)
{
    int result = 0;
    SqU32 cases = 0;
    for (SqU32 kind = 0; kind < 30 && !result; kind++) { result = exercise(kind); cases++; }
    printf("{\"result\":%d,\"cases\":%u,\"pointerBytes\":%u,\"objectBytes\":%u,\"bytecodeExecution\":true}\n",
           result, cases, (SqU32)sizeof(void *), (SqU32)sizeof(SqObject));
    ExitProcess((SqU32)result);
}
