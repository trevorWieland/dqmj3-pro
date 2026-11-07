from pathlib import Path
from squirrel_execute028_controls import SPECS as FROZEN
import squirrel_execute031_model as model

SPECS={name:(('execute_core.c'if file=='execute.c'else file),old,new,case)for name,(file,old,new,case)in FROZEN.items()}
SPECS.update({
 'lookup-double-retain':('collections.c','__builtin_memcpy(sq_execute_temporary028(vm),&owned,sizeof(owned));','sq_prefix_retain(owned.type,owned.value);__builtin_memcpy(sq_execute_temporary028(vm),&owned,sizeof(owned));',dict(mode=50,value=0,flags=0,cleanup=0)),
 'lookup-release-before-publication':('collections.c','__builtin_memcpy(sq_execute_temporary028(vm),&owned,sizeof(owned));sq_prefix_release(previous.type,previous.value);','sq_prefix_release(previous.type,previous.value);__builtin_memcpy(sq_execute_temporary028(vm),&owned,sizeof(owned));',dict(mode=51,value=42,flags=0,cleanup=0)),
 'array-preallocate-before-publication':('collections.c','sq_execute_assign028(destination,&object);sq_prefix_release(object.type,object.value);\n    if(!capacity)capacity=4;\n    array->vector.values=sq_reallocate(array->vector.values,array->vector.capacity*sizeof(SqPrefixObject012),capacity*sizeof(SqPrefixObject012));array->vector.capacity=capacity;',
 'if(!capacity)capacity=4;\n    array->vector.values=sq_reallocate(array->vector.values,array->vector.capacity*sizeof(SqPrefixObject012),capacity*sizeof(SqPrefixObject012));array->vector.capacity=capacity;\n    sq_execute_assign028(destination,&object);sq_prefix_release(object.type,object.value);',dict(mode=33,value=10,flags=0,cleanup=0)),
 'array-append-missing-retain':('collections.c','sq_prefix_retain(destination->type,destination->value);sq_prefix_release(value.type,value.value);','sq_prefix_release(value.type,value.value);',dict(mode=50,value=0,flags=0,cleanup=0)),
 'array-wrong-slot':('collections.c','array->vector.values+index,value','array->vector.values+index+1,value',dict(mode=33,value=10,flags=0,cleanup=0)),
 'table-set-ignored':('collections.c','if(sq_table_set019(table,key,value))return 1;','(void)table;return 1;',dict(mode=34,value=10,flags=0,cleanup=0)),
 'integer-conventional-comparison':('numbers.c','__builtin_memcpy(&difference,&bits,4);','difference=left->value.integer<right->value.integer?-1:left->value.integer>right->value.integer?1:0;(void)bits;',dict(mode=39,value=2147483647,flags=0,cleanup=0)),
 'logical-arithmetic-shift':('numbers.c','if(operation==5&&(value&0x80000000u))result|=','if(operation==6&&(value&0x80000000u))result|=',dict(mode=38,value=1,flags=0,cleanup=0)),
 'native-method-no-receiver':('collections.c','if(preparing)sq_execute_assign028(slot(vm,instruction->argument3),self);','(void)preparing;',dict(mode=37,value=3,flags=0,cleanup=0)),
 'callee-wrong-target':('dispatch_call.c','target=instruction->argument0;','target=instruction->argument0+1;',dict(mode=32,value=10,flags=0,cleanup=0)),
 'float-multiply-add':('numbers.c',"case '*':result=a*b;","case '*':result=a+b;",dict(mode=40,value=1067450368,flags=0,cleanup=0)),
})


def mutate(path,output,variant):
    name,old,new,case=SPECS[variant]
    if path.name!=name or path.parent.name not in('squirrel-wave028','squirrel-wave031'):return path
    text=path.read_text(encoding='utf-8')
    if text.count(old)!=1:raise ValueError('031 control must match once '+variant)
    target=output/'mutated'/path.name;target.parent.mkdir(parents=True,exist_ok=True);target.write_text(text.replace(old,new),encoding='utf-8');return target


def program(output,variant):
    source=Path(__file__).resolve().parents[1]/'source/squirrel-wave031/native_fixture.c';model.header(output/'control_cases.h',[SPECS[variant][3]])
    target=output/'native_fixture_control.c';target.write_text(source.read_text().replace('"fixture_cases.h"','"control_cases.h"'));return target
