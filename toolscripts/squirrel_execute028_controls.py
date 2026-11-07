from pathlib import Path
import squirrel_execute028_model as model

SPECS={
 'wrong-add':('arithmetic.c',"bits=left->value.bits+right->value.bits","bits=left->value.bits-right->value.bits",dict(mode=1,value=10,flags=0,cleanup=0)),
 'null-return':('return.c','argument0!=255','argument0==255',dict(mode=0,value=42,flags=0,cleanup=0)),
 'forced-zero-branch':('execute.c','if(sq_execute_false028(slot(vm,instruction->argument0))==','if(instruction->opcode==SQ28_JZ||sq_execute_false028(slot(vm,instruction->argument0))==',dict(mode=1,value=10,flags=0,cleanup=0)),
 'wrong-not':('execute.c','.bits=sq_execute_false028(slot(vm,argument))','.bits=!sq_execute_false028(slot(vm,argument))',dict(mode=3,value=0,flags=0,cleanup=0)),
 'release-before-publication':('storage.c','sq_prefix_retain(incoming.type,incoming.value);__builtin_memcpy(destination,&incoming,sizeof(incoming));sq_prefix_release(old.type,old.value);','sq_prefix_retain(incoming.type,incoming.value);sq_prefix_release(old.type,old.value);__builtin_memcpy(destination,&incoming,sizeof(incoming));',dict(mode=0,value=42,flags=0,cleanup=0)),
 'scalar-publish-before-release':('storage.c','sq_prefix_release(old.type,old.value);__builtin_memcpy(object,&value,sizeof(value));','__builtin_memcpy(object,&value,sizeof(value));sq_prefix_release(old.type,old.value);',dict(mode=0,value=42,flags=0,cleanup=0)),
 'wrong-previous-top':('start_call.c','sq_lookup_top020(vm)-sq_lookup_base020(vm);','sq_lookup_top020(vm)-sq_lookup_base020(vm)+1;',dict(mode=0,value=42,flags=0,cleanup=0)),
 'wrong-restored-base':('return.c','base=old_base-frame->previous_base;','base=old_base-frame->previous_base+1;',dict(mode=0,value=42,flags=0,cleanup=0)),
 'wrong-native-argument-count':('dispatch_call.c','instruction->argument3,base,&callable','instruction->argument3+1,base,&callable',dict(mode=8,value=3,flags=0,cleanup=0)),
 'wrong-depth-limit':('execute.c','if(depth>99)','if(depth>100)',dict(mode=9,value=42,flags=0,cleanup=0)),
 'uncleared-return-tail':('return.c','sq_execute_clear_stack028(vm,old_top);','(void)old_top;',dict(mode=3,value=0,flags=0,cleanup=0)),
}


def mutate(path,output,variant):
    name,old,new,case=SPECS[variant]
    if path.parent.name!='squirrel-wave028'or path.name!=name:return path
    text=path.read_text(encoding='utf-8')
    if text.count(old)!=1:raise ValueError('028 control edit must match once')
    target=output/'mutated'/path.name;target.parent.mkdir(parents=True,exist_ok=True);target.write_text(text.replace(old,new),encoding='utf-8');return target


def program(output,variant):
    source=Path(__file__).resolve().parents[1]/'source/squirrel-wave028/native_fixture.c'
    model.header(output/'control_cases.h',[SPECS[variant][3]])
    target=output/'native_fixture_control.c';target.write_text(source.read_text().replace('"fixture_cases.h"','"control_cases.h"'));return target
