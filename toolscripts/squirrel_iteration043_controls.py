from pathlib import Path
SPECS={
 'skip_real_script_mutation':('if(!iteration_fixture043.mutations) {','if(iteration_fixture043.mutations) {',dict(mode=73,value=3,flags=0,cleanup=0)),
 'table_cached_before_key_callback':('sq_prefix_assign(key,&node->key);\n        SqPrefixObject012 incoming=node->value;','SqPrefixObject012 incoming=node->value;\n        sq_prefix_assign(key,&node->key);',dict(mode=129,value=0,flags=2,cleanup=0)),
 'class_cached_before_key_callback':('SqPrototypeI32 next=sq_table_next043(klass->common.members,0,cursor,key,&descriptor);','SqPrefixObject012 early=klass->common.members32.values[0].primary;\n    SqPrototypeI32 next=sq_table_next043(klass->common.members,0,cursor,key,&descriptor);',dict(mode=131,value=0,flags=2,cleanup=0)),
 'string_publish_before_release':('sq_prefix_scalar(key,0x05000002u,(SqPrototypeU32)position);','SqPrefixObject012 previous=*key;key->type=0x05000002u;key->value.bits=(SqPrototypeU32)position;sq_prefix_release(previous.type,previous.value);',dict(mode=128,value=0,flags=0,cleanup=0)),
 'table_release_before_publish':('sq_prefix_assign(key,&node->key);','SqPrefixObject012 previous=*key,incoming_key=node->key;sq_prefix_release(previous.type,previous.value);sq_prefix_retain(incoming_key.type,incoming_key.value);*key=incoming_key;',dict(mode=129,value=0,flags=0,cleanup=0)),
 'ignore_noncanonical_raw_flag':('if(!raw&&incoming.type==0x08010000u)','if(raw!=0xffffffffu&&incoming.type==0x08010000u)',dict(mode=130,value=0,flags=4,cleanup=0)),
 'unwrap_static_weak_member':('if(bits&0x01000000u)sq_prefix_assign(value,&klass->common.members44.values[index].primary);','if(bits&0x01000000u){SqPrefixObject012 member=klass->common.members44.values[index].primary;if(member.type==0x08010000u)member=((SqWeakReference014*)member.value.reference)->object;sq_prefix_assign(value,&member);}',dict(mode=132,value=1,flags=16,cleanup=0)),
 'unsigned_raw_string_byte':('SqPrototypeI32 character=string->value[position];','SqPrototypeI32 character=(unsigned char)string->value[position];',dict(mode=128,value=1,flags=0,cleanup=0))
}


def filename(variant):return 'fixture_script.c'if variant=='skip_real_script_mutation'else'next.c'

def mutate(text,variant):
    old,new,unused=SPECS[variant]
    if text.count(old)!=1:raise ValueError('043 semantic control must match exactly once')
    text=text.replace(old,new)
    if variant=='class_cached_before_key_callback':
        old='SqPrefixObject012 incoming=klass->common.members32.values[index].primary;'
        if text.count(old)!=1:raise ValueError('043 class control source drift')
        text=text.replace(old,'SqPrefixObject012 incoming=early;')
    return text


def program(output,variant):
    root=Path(__file__).resolve().parents[1];source=root/'source/squirrel-wave043/native_fixture.c';case=SPECS[variant][2]
    from squirrel_iteration043_model import header
    header(output/'control_cases.h',[case]);target=output/'native_fixture_control.c'
    target.write_text(source.read_text(encoding='utf-8').replace('"fixture_cases.h"','"control_cases.h"'),encoding='utf-8');return target
