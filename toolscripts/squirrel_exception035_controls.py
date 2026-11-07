SPECS={
 'publish_parent_before_finalizer':('unwind.c','SqPrototypeI32 count=sq_vm_call_count022(vm)-1;sq_vm_set_call_count022(vm,count);sq_execute_clear028(&sq_vm_current022(vm)->closure);\n    sq_vm_set_current022(vm,count?sq_vm_call_stack022(vm)+count-1:0);','SqVmCallFrame022 *frame=sq_vm_current022(vm);SqPrototypeI32 count=sq_vm_call_count022(vm)-1;sq_vm_set_call_count022(vm,count);sq_vm_set_current022(vm,count?sq_vm_call_stack022(vm)+count-1:0);sq_execute_clear028(&frame->closure);',dict(mode=72,value=17,flags=0,cleanup=0)),
 'wrong_catch_register':('traps.c','record->target=instruction->argument0;','record->target=instruction->argument0+1;',dict(mode=64,value=17,flags=0,cleanup=0)),
 'wrong_catch_instruction':('traps.c','instruction+instruction->argument1;','instruction+instruction->argument1+1;',dict(mode=64,value=17,flags=0,cleanup=0)),
 'dispose_before_argument_pops':('handler.c','    for(SqPrototypeI32 index=0;index<2;index++) {','    sq_prefix_release(discarded.type,discarded.value);discarded.type=0x01000001u;discarded.value.reference=0;\n    for(SqPrototypeI32 index=0;index<2;index++) {',dict(mode=74,value=3,flags=0,cleanup=0)),
 'lose_original_error':('unwind.c','sq_execute_assign028(sq_exception_error_slot035(vm),&error);','',dict(mode=75,value=17,flags=0,cleanup=0)),
 'miss_top_boundary_owner':('unwind.c','sq_execute_clear_stack028(vm,old_top);','sq_execute_clear_stack028(vm,old_top-1);',dict(mode=69,value=0,flags=0,cleanup=0)),
 'canonicalize_raise_error':('unwind.c','state->raise_error&&!sq_exception_notify035(vm)','state->raise_error==1&&!sq_exception_notify035(vm)',dict(mode=73,value=17,flags=4,cleanup=0))
}


OBSERVER_SPECS={
 'observe_inactive_frame':('fixture.c','    fixture_event035(2);','    fixture_event035(2);volatile SqPrototypeI32 observed=sq_vm_current022(vm)->target;(void)observed;',dict(mode=73,value=17,flags=0,cleanup=0))
}


def program(output,variant):
    from pathlib import Path
    source=Path(__file__).resolve().parents[1]/'source/squirrel-wave035/native_fixture.c'
    case=(SPECS|OBSERVER_SPECS)[variant][3]
    header='typedef struct {unsigned int mode;int value;unsigned int flags,cleanup;} SqExecuteCase028;\nstatic const SqExecuteCase028 execute_cases028[]={{%d,%d,%d,%d}};\n'%(case['mode'],case['value'],case['flags'],case['cleanup'])
    (output/'control_cases.h').write_text(header,encoding='utf-8')
    target=output/'native_fixture_control.c';target.write_text(source.read_text().replace('"fixture_cases.h"','"control_cases.h"'),encoding='utf-8');return target
