#include "host_generators.h"

__declspec(dllimport) void *malloc(unsigned long long bytes);

void sq_host_generator_program(SqU32 kind, SqFunction *function, SqScriptClosure *child_script, SqObject *literals)
{
    if (kind == 33 || kind == 35 || kind == 36 || kind == 37 || kind == 38 || kind == 39 || kind == 40) {
        SqFunction *child = malloc(sizeof(SqFunction) + 5 * sizeof(SqInstruction));
        __builtin_memset(child, 0, sizeof(SqFunction) + 5 * sizeof(SqInstruction));
        child_script->reference.references = 7;
        child_script->environment.type = 0x01000001u;
        child_script->function = (SqObject){0x08002000u, {.reference = (SqRef *)child}};
        child->parameter_count = 1;
        child->stack_size = 8;
        child->generator = 1;
        child->instructions[0] = (SqInstruction){42, SQ_LOADINT, 1, 0, 0};
        child->instructions[1] = (SqInstruction){1, SQ_YIELD, 1, 0, 0};
        child->instructions[2] = (SqInstruction){0, SQ_RETURN, 255, 0, 0};
        child->instruction_count = 3;
        if (kind == 39) {
            child->instructions[0] = (SqInstruction){3, SQ_PUSHTRAP, 4, 0, 0};
            child->instructions[1] = (SqInstruction){17, SQ_LOADINT, 1, 0, 0};
            child->instructions[2] = (SqInstruction){1, SQ_YIELD, 1, 0, 0};
            child->instructions[3] = (SqInstruction){0, SQ_THROW, 1, 0, 0};
            child->instructions[4] = (SqInstruction){4, SQ_RETURN, 1, 0, 0};
            child->instruction_count = 5;
        }
        literals[0] = (SqObject){0x08000100u, {.reference = &child_script->reference}};
        function->instructions[0] = (SqInstruction){0, SQ_LOAD, 1, 0, 0};
        function->instructions[1] = (SqInstruction){1, SQ_CALL, 2, 3, 1};
        function->instructions[2] = (SqInstruction){2, SQ_RESUME, 4, 0, 0};
        function->instructions[3] = (SqInstruction){2, SQ_NEWARRAY, 5, 0, 0};
        function->instructions[4] = (SqInstruction){2, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[5] = (SqInstruction){4, SQ_APPENDARRAY, 5, 0, 0};
        function->instructions[6] = (SqInstruction){5, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 7;
        if (kind == 35 || kind == 38) {
            function->instructions[6] = (SqInstruction){33, SQ_LOADINT, 3, 0, 0};
            function->instructions[7] = (SqInstruction){3, SQ_RETURN, 1, 0, 0};
            function->instruction_count = 8;
        }
        if (kind == 36 || kind == 37 || kind == 38 || kind == 39) {
            if (kind == 37) {
                child->instructions[2] = (SqInstruction){17, SQ_LOADINT, 1, 0, 0};
                child->instructions[3] = (SqInstruction){1, SQ_RETURN, 1, 0, 0};
                child->instruction_count = 4;
            }
            for (SqI32 index = (SqI32)function->instruction_count - 1; index >= 3; index--)
                function->instructions[index + 1] = function->instructions[index];
            function->instructions[3] = (SqInstruction){2, SQ_RESUME, 4, 0, 0};
            function->instruction_count++;
        }
    }
    if (kind == 40) {
        SqFunction *child = (SqFunction *)child_script->function.value.reference;
        child->instructions[0] = (SqInstruction){17, SQ_LOADINT, 1, 0, 0};
        child->instructions[1] = (SqInstruction){1, SQ_YIELD, 1, 0, 0};
        child->instructions[2] = (SqInstruction){42, SQ_LOADINT, 1, 0, 0};
        child->instructions[3] = (SqInstruction){1, SQ_YIELD, 1, 0, 0};
        child->instructions[4] = (SqInstruction){0, SQ_RETURN, 255, 0, 0};
        child->instruction_count = 5;
        function->instructions[0] = (SqInstruction){0, SQ_LOAD, 1, 0, 0};
        function->instructions[1] = (SqInstruction){1, SQ_CALL, 2, 3, 1};
        function->instructions[2] = (SqInstruction){8, SQ_NEWARRAY, 3, 0, 0};
        function->instructions[3] = (SqInstruction){1, SQ_LOADNULLS, 7, 0, 0};
        function->instructions[4] = (SqInstruction){4, SQ_FOREACH, 2, 5, 0};
        function->instructions[5] = (SqInstruction){4, SQ_POSTFOREACH, 2, 0, 0};
        function->instructions[6] = (SqInstruction){5, SQ_APPENDARRAY, 3, 0, 0};
        function->instructions[7] = (SqInstruction){6, SQ_APPENDARRAY, 3, 0, 0};
        function->instructions[8] = (SqInstruction){-5, SQ_JUMP, 0, 0, 0};
        function->instructions[9] = (SqInstruction){3, SQ_RETURN, 1, 0, 0};
        function->instruction_count = 10;
    }
    if (kind == 32) function->generator = 1;
}

int sq_host_generator_check(SqU32 kind, const SqObject *output, const SqScriptClosure *script, const SqScriptClosure *child_script, const SqSharedRuntime *shared)
{
    if (kind == 40) {
        SqArray *array = (SqArray *)output->value.reference;
        if (output->type != 0x08000040u || array->vector.size != 4 || child_script->reference.references != 7 ||
            array->vector.values[0].value.integer != 0 || array->vector.values[1].value.integer != 17 ||
            array->vector.values[2].value.integer != 1 || array->vector.values[3].value.integer != 42) return 35;
        return 0;
    }
    if (kind == 35 || kind == 38) {
        if (output->type != 0x05000002u || output->value.integer != 33 || shared->base.chain || child_script->reference.references != 7) return 32;
    } else if (kind == 36 || kind == 37 || kind == 39) {
        SqArray *array = (SqArray *)output->value.reference;
        if (output->type != 0x08000040u || array->vector.size != 2 || array->vector.values[0].type != 0x08000400u ||
            array->vector.values[1].type != (kind == 36 ? 0x01000001u : 0x05000002u)) return 33;
        SqGenerator *generator = (SqGenerator *)array->vector.values[0].value.reference;
        if (generator->state != 2 || generator->stack.size || generator->closure.type != 0x01000001u ||
            child_script->reference.references != 8 || ((kind == 37 || kind == 39) && array->vector.values[1].value.integer != 17)) return 34;
    } else if (kind == 33) {
        SqArray *array = (SqArray *)output->value.reference;
        if (output->type != 0x08000040u || array->vector.size != 2 || array->vector.values[0].type != 0x08000400u ||
            array->vector.values[1].value.integer != 42 || ((SqGenerator *)array->vector.values[0].value.reference)->state != 1 ||
            child_script->reference.references != 9) return 30;
    } else if (kind == 32) {
        SqGenerator *generator = (SqGenerator *)output->value.reference;
        if (output->type != 0x08000400u || generator->reference.references != 1 || generator->state != 1 ||
            generator->stack.size != 8 || generator->stack.values[0].type != 0x05000002u ||
            generator->stack.values[0].value.integer != 0x3355 || generator->saved.generator || generator->saved.root ||
            generator->saved.closure.value.reference != &script->reference) return 29;
    }
    return 0;
}
