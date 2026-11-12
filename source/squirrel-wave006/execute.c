#include "execute_views.h"

static SqObject *slot(SqExecuteVM *vm, SqI32 index)
{
    return vm->base.frame.stack + vm->base.frame.base + index;
}

static SqI32 dispatch_call(SqExecuteVM *vm, const SqInstruction *instruction, SqObject *result, SqI32 traps)
{
    SqCallVM *base = &vm->base;
    vm_object_assign(&base->temporary, slot(vm, instruction->argument1));
    SqI32 target = instruction->argument0;
    SqI32 stack_base = base->frame.base + instruction->argument2;
    _Bool tail = instruction->opcode == SQ_TAILCALL && base->temporary.type == 0x08000100u
        && !((SqFunction *)((SqScriptClosure *)base->temporary.value.reference)->function.value.reference)->generator;
    if (tail) {
        if (base->current->varargs_size) fn_001a0cc0(vm, &base->current->varargs_size);
        for (SqI32 index = 0; index < instruction->argument3; index++)
            vm_object_assign(slot(vm, index), slot(vm, instruction->argument2 + index));
        stack_base = base->frame.base;
        target = base->current->target;
    }
    SqObject callable = base->temporary;
    if (callable.type & 0x08000000u) callable.value.reference->references++;
    if (callable.type == 0x08000100u) {
        SqScriptClosure *script = (SqScriptClosure *)callable.value.reference;
        SqI32 previous_top = base->frame.top;
        _Bool success = fn_00199cb8(vm, script, target, instruction->argument3, stack_base, tail);
        if (!success) fn_00198230(base, &base->last_error);
        else if (((SqFunction *)script->function.value.reference)->generator) {
            SqGenerator *generator = fn_00192b9c(base->shared, script);
            if (!generator || !fn_0019289c(generator, vm)) sq_execute_unsupported(vm, -6);
            fn_001994c0(vm, 1, target, &callable);
            SqObject object = {0x08000400u, {.reference = &generator->reference}};
            generator->reference.references++;
            vm_object_assign(slot(vm, target), &object);
            sq_execute_release(object.type, object.value);
            sq_execute_clear_stack(vm, previous_top);
        }
        sq_execute_release(callable.type, callable.value);
        return success ? 0 : -1;
    }
    if (callable.type != 0x08000200u) sq_execute_unsupported(vm, 6);
    _Bool suspend;
    if (!fn_00196f6c(base, (SqNativeClosure *)callable.value.reference, instruction->argument3,
                      stack_base, &callable, &suspend)) {
        fn_00198230(base, &base->last_error);
        sq_execute_release(callable.type, callable.value);
        return -1;
    }
    if (suspend) {
        vm->suspended = 1;
        vm->suspended_target = target;
        vm->suspended_root = base->current->root;
        vm->suspended_traps = traps;
        vm->suspended_varargs_size = base->current->varargs_size;
        vm->suspended_varargs_base = base->current->varargs_base;
        vm_object_assign(result, &callable);
    } else if (target != -1) {
        vm_object_assign(slot(vm, target), &callable);
    }
    sq_execute_release(callable.type, callable.value);
    return suspend;
}

_Bool fn_0018d65c(SqExecuteVM *vm, const SqObject *closure, SqI32 target, SqI32 arguments,
                  SqI32 stack_base, SqObject *result, SqU32 raise_error, SqI32 execution_type)
{
    (void)target;
    SqCallVM *base = &vm->base;
    if (base->native_calls > 99) {
        sq_call_error(base, "Native stack overflow");
        return 0;
    }
    base->native_calls++;
    SqI32 traps = 0;
    if (execution_type == 0) {
        SqI32 previous_top = base->frame.top;
        vm_object_assign(&base->temporary, closure);
        SqScriptClosure *script = (SqScriptClosure *)base->temporary.value.reference;
        if (!fn_00199cb8(vm, script, base->frame.top - arguments, arguments, stack_base, 0)) {
            if (!base->current) sq_execute_error_handler(vm, &base->last_error);
            base->native_calls--;
            return 0;
        }
        if (((SqFunction *)script->function.value.reference)->generator) {
            SqGenerator *generator = fn_00192b9c(base->shared, script);
            if (!generator || !fn_0019289c(generator, vm)) sq_execute_unsupported(vm, -11);
            fn_001994c0(vm, 1, base->current->target, &base->temporary);
            SqObject object = {0x08000400u, {.reference = &generator->reference}};
            generator->reference.references++;
            vm_object_assign(result, &object);
            sq_execute_release(object.type, object.value);
            sq_execute_clear_stack(vm, previous_top);
            base->native_calls--;
            return 1;
        }
        base->current->root = 1;
    } else if (execution_type == 2) {
        traps = vm->suspended_traps;
        base->current->root = (SqI32)vm->suspended_root;
        base->current->varargs_size = vm->suspended_varargs_size;
        base->current->varargs_base = vm->suspended_varargs_base;
        vm->suspended = 0;
    } else {
        sq_execute_unsupported(vm, -10 - execution_type);
    }
    for (;;) {
        const SqInstruction *instruction = base->current->instruction;
        base->current->instruction = (void *)(instruction + 1);
        SqI32 argument = instruction->argument1;
        if (instruction->opcode >= 61) continue;
        switch (instruction->opcode) {
        case SQ_LINE:
            if (base->debug_hook.type != 0x01000001u && base->debug_hook.value.reference != base->current->closure.value.reference)
                sq_execute_debug(vm, 'l', argument);
            break;
        case SQ_LOAD: vm_object_assign(slot(vm, instruction->argument0), base->current->literals + argument); break;
        case SQ_LOADINT: sq_execute_scalar(slot(vm, instruction->argument0), 0x05000002u, (SqU32)argument); break;
        case SQ_LOADFLOAT: sq_execute_scalar(slot(vm, instruction->argument0), 0x05000004u, (SqU32)argument); break;
        case SQ_DLOAD:
            vm_object_assign(slot(vm, instruction->argument0), base->current->literals + argument);
            vm_object_assign(slot(vm, instruction->argument2), base->current->literals + instruction->argument3);
            break;
        case SQ_MOVE: vm_object_assign(slot(vm, instruction->argument0), slot(vm, argument)); break;
        case SQ_GET: case SQ_GETK: case SQ_PREPCALL: case SQ_PREPCALLK: {
            _Bool preparing = instruction->opcode == SQ_PREPCALL || instruction->opcode == SQ_PREPCALLK;
            _Bool literal = instruction->opcode == SQ_GETK || instruction->opcode == SQ_PREPCALLK;
            const SqObject *key = literal ? base->current->literals + argument
                : slot(vm, preparing ? argument : instruction->argument2);
            const SqObject *self = slot(vm, preparing || literal ? instruction->argument2 : argument);
            if (!fn_00198578(vm, self, key, &base->temporary, 0, 1)) sq_execute_unsupported(vm, -141);
            if (preparing) vm_object_assign(slot(vm, instruction->argument3), self);
            vm_object_assign(slot(vm, instruction->argument0), &base->temporary);
            break;
        }
        case SQ_NEWSLOT: {
            SqObject *self = slot(vm, argument);
            SqObject *key = slot(vm, instruction->argument2);
            SqObject *value = slot(vm, instruction->argument3);
            if (self->type != 0x0a000020u || key->type == 0x01000001u) sq_execute_unsupported(vm, -110);
            SqTable *table = (SqTable *)self->value.reference;
            if (table->delegate) sq_execute_unsupported(vm, -111);
            fn_0019b728(table, key, value);
            if (instruction->argument0 != instruction->argument3) vm_object_assign(slot(vm, instruction->argument0), value);
            break;
        }
        case SQ_DMOVE:
            vm_object_assign(slot(vm, instruction->argument0), slot(vm, argument));
            vm_object_assign(slot(vm, instruction->argument2), slot(vm, instruction->argument3));
            break;
        case SQ_LOADNULLS: {
            SqObject null = {0x01000001u, {.reference = 0}};
            for (SqI32 index = 0; index < argument; index++) vm_object_assign(slot(vm, instruction->argument0) + index, &null);
            break;
        }
        case SQ_LOADROOT: vm_object_assign(slot(vm, instruction->argument0), &base->root_table); break;
        case SQ_LOADBOOL: {
            SqObject boolean = {0x01000008u, {.bits = argument != 0}};
            vm_object_assign(slot(vm, instruction->argument0), &boolean);
            break;
        }
        case SQ_LOADFREE: {
            SqScriptClosure *script = (SqScriptClosure *)base->current->closure.value.reference;
            vm_object_assign(slot(vm, instruction->argument0), script->outers.values + argument);
            break;
        }
        case SQ_VARGC: sq_execute_scalar(slot(vm, instruction->argument0), 0x05000002u, base->current->varargs_size); break;
        case SQ_GETVARGV:
            if (!sq_execute_vararg_get(vm, slot(vm, instruction->argument0), slot(vm, argument))) {
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            break;
        case SQ_NEWARRAY:
            sq_execute_array_new(vm, slot(vm, instruction->argument0), (SqU32)argument);
            break;
        case SQ_NEWTABLE: {
            SqTable *table = sq_allocate(sizeof(SqTable));
            if (!table) sq_execute_unsupported(vm, -300);
            fn_0019b998(table, base->shared, argument);
            SqObject object = {0x0a000020u, {.reference = &table->reference}};
            table->reference.references++;
            vm_object_assign(slot(vm, instruction->argument0), &object);
            sq_execute_release(object.type, object.value);
            break;
        }
        case SQ_APPENDARRAY:
            sq_execute_array_append((SqArray *)slot(vm, instruction->argument0)->value.reference,
                instruction->argument3 ? base->current->literals + argument : slot(vm, argument));
            break;
        case SQ_CLOSURE: {
            SqScriptClosure *parent = (SqScriptClosure *)base->current->closure.value.reference;
            SqFunction *function = (SqFunction *)parent->function.value.reference;
            SqFunction *child = (SqFunction *)function->functions[argument].value.reference;
            if (!fn_00196b08(vm, slot(vm, instruction->argument0), child)) {
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            break;
        }
        case SQ_JUMP:
            base->current->instruction = (SqInstruction *)base->current->instruction + argument;
            break;
        case SQ_JNZ: case SQ_JZ:
            if (sq_execute_false(slot(vm, instruction->argument0)) == (instruction->opcode == SQ_JZ))
                base->current->instruction = (SqInstruction *)base->current->instruction + argument;
            break;
        case SQ_AND: case SQ_OR:
            if (sq_execute_false(slot(vm, instruction->argument2)) == (instruction->opcode == SQ_AND)) {
                vm_object_assign(slot(vm, instruction->argument0), slot(vm, instruction->argument2));
                base->current->instruction = (SqInstruction *)base->current->instruction + argument;
            }
            break;
        case SQ_NOT: {
            SqObject boolean = {0x01000008u, {.bits = sq_execute_false(slot(vm, argument))}};
            vm_object_assign(slot(vm, instruction->argument0), &boolean);
            break;
        }
        case SQ_EQ: case SQ_NE: case SQ_CMP: {
            const SqObject *left = slot(vm, instruction->argument2);
            const SqObject *right = instruction->opcode != SQ_CMP && instruction->argument3
                ? base->current->literals + argument : slot(vm, argument);
            SqI32 comparison;
            _Bool value;
            if (instruction->opcode == SQ_CMP) {
                fn_00199144(vm, left, right, &comparison);
                switch (instruction->argument3) {
                case 0: value = comparison > 0; break;
                case 2: value = comparison >= 0; break;
                case 3: value = comparison < 0; break;
                case 4: value = comparison <= 0; break;
                default: sq_execute_unsupported(vm, -40);
                }
            } else {
                if (left->type == right->type) value = sq_execute_identical(left, right);
                else if ((left->type & 0x04000000u) && (right->type & 0x04000000u)) {
                    fn_00199144(vm, left, right, &comparison);
                    value = comparison == 0;
                } else value = 0;
                if (instruction->opcode == SQ_NE) value = !value;
            }
            SqObject boolean = {0x01000008u, {.bits = value}};
            vm_object_assign(slot(vm, instruction->argument0), &boolean);
            break;
        }
        case SQ_BITW: case SQ_NEG: case SQ_BWNOT: {
            _Bool success = instruction->opcode == SQ_BITW
                ? sq_execute_bitwise(vm, slot(vm, instruction->argument0), slot(vm, instruction->argument2), slot(vm, argument), instruction->argument3)
                : sq_execute_unary(vm, slot(vm, instruction->argument0), slot(vm, argument), instruction->opcode);
            if (!success) {
                fn_00198230(base, &base->last_error);
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            break;
        }
        case SQ_RESUME:
            if (slot(vm, argument)->type != 0x08000400u) {
                sq_execute_error(base, "trying to resume a '%s',only genenerator can be resumed", fn_00191f20(slot(vm, argument)));
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            if (!fn_0019e378((SqGenerator *)slot(vm, argument)->value.reference, vm, instruction->argument0)) {
                fn_00198230(base, &base->last_error);
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            traps += base->current->traps;
            break;
        case SQ_YIELD:
            if (!base->current->generator) sq_execute_unsupported(vm, -149);
            if (argument != 255) vm_object_assign(&base->temporary, slot(vm, argument));
            if (!fn_0019289c((SqGenerator *)base->current->generator, vm)) {
                fn_00198230(base, &base->last_error);
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            traps -= base->current->traps;
            if (argument != 255) vm_object_assign(slot(vm, argument), &base->temporary);
            if (fn_001994c0(vm, instruction->argument0, argument, &base->temporary)) {
                if (traps) sq_execute_unsupported(vm, -20);
                vm_object_assign(result, &base->temporary);
                base->native_calls--;
                return 1;
            }
            break;
        case SQ_DELETE:
            if (!sq_execute_delete(vm, slot(vm, instruction->argument0), slot(vm, argument), slot(vm, instruction->argument2))) {
                fn_00198230(base, &base->last_error);
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            break;
        case SQ_FOREACH: {
            SqObject *key = slot(vm, instruction->argument2);
            SqI32 jump = sq_execute_foreach(vm, slot(vm, instruction->argument0), key, key + 1, key + 2, argument);
            base->current->instruction = (SqInstruction *)base->current->instruction + jump;
            break;
        }
        case SQ_POSTFOREACH: {
            SqObject *object = slot(vm, instruction->argument0);
            if (object->type != 0x08000400u) sq_execute_unsupported(vm, -152);
            if (((SqGenerator *)object->value.reference)->state == 2)
                base->current->instruction = (SqInstruction *)base->current->instruction + argument - 1;
            break;
        }
        case SQ_DELEGATE:
            if (!sq_execute_delegate(vm, slot(vm, instruction->argument0), slot(vm, argument), slot(vm, instruction->argument2))) {
                fn_00198230(base, &base->last_error);
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            break;
        case SQ_SET:
            if (!fn_001987e4(vm, slot(vm, argument), slot(vm, instruction->argument2), slot(vm, instruction->argument3), 1)) {
                fn_00198230(base, &base->last_error);
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            if (instruction->argument0 != instruction->argument3)
                vm_object_assign(slot(vm, instruction->argument0), slot(vm, instruction->argument3));
            break;
        case SQ_EXISTS: {
            _Bool found = fn_00198578(vm, slot(vm, argument), slot(vm, instruction->argument2), &base->temporary, 1, 0);
            SqObject boolean = {0x01000008u, {.bits = found}};
            vm_object_assign(slot(vm, instruction->argument0), &boolean);
            break;
        }
        case SQ_COMPARITHL: case SQ_INCL: case SQ_PINCL:
            if (!sq_execute_local_arithmetic(vm, instruction)) {
                fn_00198230(base, &base->last_error);
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            break;
        case SQ_ARITH:
            if (!fn_001a1234(vm, instruction->argument3, &base->temporary, slot(vm, instruction->argument2), slot(vm, argument))) {
                fn_00198230(base, &base->last_error);
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            vm_object_assign(slot(vm, instruction->argument0), &base->temporary);
            break;
        case SQ_CALL: case SQ_TAILCALL: {
            SqI32 returned = dispatch_call(vm, instruction, result, traps);
            if (returned < 0) {
                if (sq_execute_unwind(vm, raise_error, &traps)) break;
                base->native_calls--;
                return 0;
            }
            if (returned) {
                base->native_calls--;
                return 1;
            }
            break;
        }
        case SQ_PUSHTRAP:
            sq_execute_push_trap(vm, instruction);
            traps++;
            base->current->traps++;
            break;
        case SQ_POPTRAP:
            for (SqI32 index = 0; index < instruction->argument0; index++) {
                base->traps.size--;
                traps--;
                base->current->traps--;
            }
            break;
        case SQ_THROW:
            fn_00198230(base, slot(vm, instruction->argument0));
            if (sq_execute_unwind(vm, raise_error, &traps)) break;
            base->native_calls--;
            return 0;
        case SQ_RETURN:
            if (base->current->generator) {
                SqGenerator *generator = (SqGenerator *)base->current->generator;
                SqObject empty = {0x01000001u, {.bits = 0}};
                generator->state = 2;
                fn_0019d320(&generator->stack, 0, &empty);
                vm_object_assign(&generator->closure, &empty);
            }
            if (fn_001994c0(vm, instruction->argument0, argument, &base->temporary)) {
                if (traps) sq_execute_unsupported(vm, -20);
                vm_object_assign(result, &base->temporary);
                base->native_calls--;
                return 1;
            }
            break;
        default: sq_execute_unsupported(vm, instruction->opcode);
        }
    }
}
