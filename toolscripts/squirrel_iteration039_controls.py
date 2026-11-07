from pathlib import Path
SPECS={
 'unsigned_string_byte':('next.c','SqPrototypeI32 character=string->value[position];','SqPrototypeI32 character=(unsigned char)string->value[position];',dict(mode=66,value=0,flags=0,cleanup=0)),
 'skip_iteration_observer':('step.c','sq_prefix_scalar(cursor,0x05000002u,(SqPrototypeU32)next);*jump=1;','sq_prefix_scalar(cursor,0x05000002u,(SqPrototypeU32)next);*jump=2;',dict(mode=64,value=3,flags=0,cleanup=0)),
 'retain_weak_wrapper':('step.c','if(incoming.type==0x08010000u)incoming=((SqWeakReference014*)incoming.value.reference)->object;','if(incoming.type==0xffffffffu)incoming=((SqWeakReference014*)incoming.value.reference)->object;',dict(mode=68,value=0,flags=0,cleanup=0)),
 'static_member_wrong_vector':('next.c','&klass->common.members44.values[index].primary','&klass->common.members32.values[index].primary',dict(mode=69,value=3,flags=0,cleanup=0)),
 'instance_uses_default_template':('lookup.c','instance->values[index]','instance->klass->common.members32.values[index].primary',dict(mode=70,value=3,flags=0,cleanup=0)),
 'array_key_publish_before_release':('step.c','sq_prefix_scalar(key,0x05000002u,position);','SqPrefixObject012 old=*key;key->type=0x05000002u;key->value.bits=position;sq_prefix_release(old.type,old.value);',dict(mode=71,value=3,flags=0,cleanup=0)),
 'table_key_release_before_publish':('next.c','sq_prefix_assign(key,&node->key);','SqPrefixObject012 old=*key,incoming_key=node->key;sq_prefix_release(old.type,old.value);sq_prefix_retain(incoming_key.type,incoming_key.value);*key=incoming_key;',dict(mode=72,value=3,flags=0,cleanup=0))
}

def program(output,variant):
    source=Path(__file__).resolve().parents[1]/'source/squirrel-wave039/native_fixture.c';case=SPECS[variant][3]
    header='typedef struct {unsigned int mode;int value;unsigned int flags,cleanup;} SqExecuteCase028;\nstatic const SqExecuteCase028 execute_cases028[]={{%d,%d,%d,%d}};\n'%(case['mode'],case['value'],case['flags'],case['cleanup'])
    (output/'control_cases.h').write_text(header,encoding='utf-8');target=output/'native_fixture_control.c';target.write_text(source.read_text(encoding='utf-8').replace('"fixture_cases.h"','"control_cases.h"'),encoding='utf-8');return target
