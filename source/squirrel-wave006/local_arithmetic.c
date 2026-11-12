#include "execute_views.h"

_Bool sq_execute_local_arithmetic(SqExecuteVM *vm, const SqInstruction *instruction)
{
    SqObject *slots = vm->base.frame.stack + vm->base.frame.base;
    SqObject *destination = slots + instruction->argument0;
    SqObject *local = slots + instruction->argument1;
    SqObject increment = {0x05000002u, {.integer = (SqI32)(signed char)instruction->argument3}};
    if (instruction->opcode == SQ_PINCL) {
        SqObject temporary = {0x01000001u, {.reference = 0}};
        if (!fn_001a1234(vm, '+', &temporary, local, &increment)) return 0;
        vm_object_assign(destination, local);
        vm_object_assign(local, &temporary);
        sq_execute_release(temporary.type, temporary.value);
        return 1;
    }
    unsigned char operation = instruction->opcode == SQ_COMPARITHL ? instruction->argument3 : '+';
    const SqObject *right = instruction->opcode == SQ_COMPARITHL ? slots + instruction->argument2 : &increment;
    if (!fn_001a1234(vm, operation, destination, local, right)) return 0;
    vm_object_assign(local, destination);
    return 1;
}
