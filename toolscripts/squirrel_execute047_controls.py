SPECS={
 'wrong_native_depth_field':('call_storage.c','vm->native_depth=value;','vm->suspended_root=(SqPrototypeU32)value;',dict(mode=256,value=3,flags=0,cleanup=0)),
 'skip_script_throw':('execute_core.c','case SQ35_THROW:','case SQ35_THROW:break;case 254:',dict(mode=256,value=3,flags=0,cleanup=0)),
 'skip_catch_assignment':('execute_core.c','if(sq_exception_unwind035(vm,&exception))break;','if(sq_exception_unwind035(vm,&exception)){vm->current->instruction=(const SqInstruction028*)vm->current->instruction+1;break;}',dict(mode=256,value=3,flags=0,cleanup=0)),
 'unsigned_captured_string':('../squirrel-wave043/next.c','SqPrototypeI32 character=string->value[position];','SqPrototypeI32 character=(unsigned char)string->value[position];',dict(mode=257,value=3,flags=0,cleanup=0)),
}


def mutate(text,variant):
    unused,old,new,unused_case=SPECS[variant]
    count=text.count(old)
    if variant=='skip_catch_assignment':
        if count!=4:raise ValueError('047 error dispatch drift')
        return text.replace(old,new)
    if count!=1:raise ValueError('047 control must match once')
    return text.replace(old,new)


def program(output,variant):
    from pathlib import Path
    from squirrel_iteration043_model import header
    root=Path(__file__).resolve().parents[1];source=root/'source/squirrel-wave047/native_fixture.c';case=SPECS[variant][3]
    header(output/'control_cases.h',[case]);target=output/'native_fixture_control.c'
    target.write_text(source.read_text(encoding='utf-8').replace('"fixture_cases.h"','"control_cases.h"'),encoding='utf-8');return target
