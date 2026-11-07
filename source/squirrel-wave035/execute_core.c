#include "exception.h"

static SqPrefixObject012 *slot(void *vm,SqPrototypeI32 index)
{return sq_lookup_stack020(vm)+sq_lookup_base020(vm)+index;}

_Bool sq_execute035(void *vm,const SqPrefixObject012 *closure,SqPrototypeI32 target,SqPrototypeI32 arguments,SqPrototypeI32 base,SqPrefixObject012 *result,SqPrototypeU32 raise_error,SqPrototypeI32 execution_type)
{
    (void)target;SqExceptionState035 exception={0,raise_error};
    SqPrototypeI32 depth=sq_vm_native_depth022(vm);
    if(depth>99){sq_vm_call_error022(vm,"Native stack overflow");return 0;}
    sq_vm_set_native_depth022(vm,depth+1);
    if(execution_type!=0)sq_execute_unsupported028(vm,-100-execution_type);
    sq_execute_assign028(sq_execute_temporary028(vm),closure);
    SqPrefixObject012 temporary=sq_execute_temporary_value028(vm);SqScriptClosure017 *script=temporary.value.reference;
    if(!sq_execute_start_call028(vm,script,sq_lookup_top020(vm)-arguments,arguments,base,0)) {
        if(!sq_vm_current022(vm))sq_exception_handler035(vm,sq_exception_error_slot035(vm));
        sq_vm_set_native_depth022(vm,sq_vm_native_depth022(vm)-1);return 0;
    }
    if(((SqPrototype011*)script->function.value.reference)->generator)sq_execute_unsupported028(vm,-101);
    sq_vm_current022(vm)->root=1;
    for(;;) {
        SqVmCallFrame022 *frame=sq_vm_current022(vm);const SqInstruction028 *instruction=frame->instruction;
        frame->instruction=instruction+1;SqPrototypeI32 argument=instruction->argument1;
        if(instruction->opcode>=61)continue;
        switch(instruction->opcode) {
        case SQ28_LINE:{SqPrefixObject012 debug=sq_execute_debug_value028(vm);if(debug.type!=0x01000001u&&debug.value.reference!=frame->closure.value.reference)sq_execute_debug028(vm,'l',argument);break;}
        case SQ28_LOAD:sq_execute_assign028(slot(vm,instruction->argument0),frame->literals+argument);break;
        case SQ28_LOADINT:sq_execute_scalar028(slot(vm,instruction->argument0),0x05000002u,(SqPrototypeU32)argument);break;
        case SQ28_LOADFLOAT:sq_execute_scalar028(slot(vm,instruction->argument0),0x05000004u,(SqPrototypeU32)argument);break;
        case SQ28_DLOAD:sq_execute_assign028(slot(vm,instruction->argument0),frame->literals+argument);sq_execute_assign028(slot(vm,instruction->argument2),frame->literals+instruction->argument3);break;
        case SQ28_MOVE:sq_execute_assign028(slot(vm,instruction->argument0),slot(vm,argument));break;
        case SQ28_DMOVE:sq_execute_assign028(slot(vm,instruction->argument0),slot(vm,argument));sq_execute_assign028(slot(vm,instruction->argument2),slot(vm,instruction->argument3));break;
        case SQ28_LOADNULLS:{SqPrefixObject012 empty={0x01000001u,{.reference=0}};for(SqPrototypeI32 index=0;index<argument;index++)sq_execute_assign028(slot(vm,instruction->argument0)+index,&empty);break;}
        case SQ28_LOADROOT:{SqPrefixObject012 root=sq_execute_root_value028(vm);sq_execute_assign028(slot(vm,instruction->argument0),&root);break;}
        case SQ28_LOADBOOL:{SqPrefixObject012 value={0x01000008u,{.bits=argument!=0}};sq_execute_assign028(slot(vm,instruction->argument0),&value);break;}
        case SQ28_LOADFREE:{SqScriptClosure017 *owner=frame->closure.value.reference;sq_execute_assign028(slot(vm,instruction->argument0),owner->outers.values+argument);break;}
        case SQ28_VARGC:sq_execute_scalar028(slot(vm,instruction->argument0),0x05000002u,frame->varargs_size);break;
        case SQ28_JUMP:frame->instruction=(const SqInstruction028*)frame->instruction+argument;break;
        case SQ28_JNZ:case SQ28_JZ:if(sq_execute_false028(slot(vm,instruction->argument0))==(instruction->opcode==SQ28_JZ))frame->instruction=(const SqInstruction028*)frame->instruction+argument;break;
        case SQ28_AND:case SQ28_OR:if(sq_execute_false028(slot(vm,instruction->argument2))==(instruction->opcode==SQ28_AND)){sq_execute_assign028(slot(vm,instruction->argument0),slot(vm,instruction->argument2));frame->instruction=(const SqInstruction028*)frame->instruction+argument;}break;
        case SQ28_NOT:{SqPrefixObject012 value={0x01000008u,{.bits=sq_execute_false028(slot(vm,argument))}};sq_execute_assign028(slot(vm,instruction->argument0),&value);break;}
        case SQ28_ARITH:{sq_execute_arithmetic031(vm,instruction->argument3,sq_execute_temporary028(vm),slot(vm,instruction->argument2),slot(vm,argument));SqPrefixObject012 value=sq_execute_temporary_value028(vm);sq_execute_assign028(slot(vm,instruction->argument0),&value);break;}
        case SQ28_CALL:
            if(!sq_exception_call035(vm,instruction)) {
                SqPrefixObject012 error=sq_exception_error035(vm);sq_vm_raise_object022(vm,&error);
                if(sq_exception_unwind035(vm,&exception))break;
                sq_vm_set_native_depth022(vm,sq_vm_native_depth022(vm)-1);return 0;
            }
            break;
        case SQ35_PUSHTRAP:sq_exception_push035(vm,instruction,&exception);break;
        case SQ35_POPTRAP:sq_exception_pop035(vm,instruction->argument0,&exception);break;
        case SQ35_THROW:
            sq_vm_raise_object022(vm,slot(vm,instruction->argument0));
            if(sq_exception_unwind035(vm,&exception))break;
            sq_vm_set_native_depth022(vm,sq_vm_native_depth022(vm)-1);return 0;
        case SQ28_RETURN:
            if(frame->generator)sq_execute_unsupported028(vm,-119);
            if(sq_execute_return028(vm,instruction->argument0,argument,sq_execute_temporary028(vm))) {
                if(exception.active_traps)sq_execute_unsupported028(vm,-3556);
                SqPrefixObject012 value=sq_execute_temporary_value028(vm);sq_execute_assign028(result,&value);sq_vm_set_native_depth022(vm,sq_vm_native_depth022(vm)-1);return 1;
            }
            break;
        default:if(!sq_execute_extension031(vm,instruction))sq_execute_unsupported028(vm,instruction->opcode);break;
        }
    }
}
