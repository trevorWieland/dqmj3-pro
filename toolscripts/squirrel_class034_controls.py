from squirrel_class034_build import ROOT,WORK,SOURCE,SOURCES,arm,pin,save
from squirrel_class034_oracle import Arm
from squirrel_lookup020_build import load
from squirrel_coercion026_controls import replace_once


def control_source(folder,name,text):
    import os
    import re
    original=SOURCE/name;target=folder/name;folder.mkdir(parents=True,exist_ok=True)
    def include(match):
        path=(original.parent/match.group(1)).resolve()
        return '#include "'+os.path.relpath(path,target.parent).replace('\\','/')+'"'
    target.write_text(re.sub(r'#include "([^"]+)"',include,text),encoding='utf-8')
    return target,[target if path==original else path for path in SOURCES]


def definitions():
    members=(SOURCE/'member_definition.c').read_text();create=(SOURCE/'class_create.c').read_text()
    factory=(SOURCE/'instance_factory.c').read_text();wrapper=(SOURCE/'new_slot.c').read_text()
    names=(SOURCE/'meta_names.c').read_text();rows=[]
    def add(name,variant,filename,text):rows.append((name,variant,filename,text))
    add('locked-class-mutated',1,'member_definition.c',replace_once(members,'    if(klass->common.locked)return 0;',''))
    add('existing-field-secondary-updated-instead-of-primary',7,'member_definition.c',replace_once(members,
        'klass->common.members32.values[descriptor&0x00ffffffu].primary,value',
        'klass->common.members32.values[descriptor&0x00ffffffu].secondary,value'))
    add('static-scalar-reclassified-as-field',3,'member_definition.c',replace_once(members,
        '    if(closure||raw_static) {','    (void)raw_static;\n    if(closure) {'))
    add('wrong-meta-index',9,'member_definition.c',replace_once(members,
        'klass->common.values56.values+index,value','klass->common.values56.values+index+1,value'))
    add('vector-capacity-increments-instead-of-doubling',12,'member_definition.c',replace_once(members,
        'vector->size?vector->size*2:4','vector->size?vector->size+1:4'))
    late=replace_once(members,'    sq_table_new_slot019(klass->common.members,key,&descriptor);\n','')
    late=replace_once(late,'    append(vector,&temporary);',
        '    append(vector,&temporary);\n    sq_table_new_slot019(klass->common.members,key,&descriptor);')
    add('descriptor-published-after-vector-allocation',0,'member_definition.c',late)
    add('attributes-assigned-to-stale-result-owner',27,'class_create.c',replace_once(create,
        '    klass=result->value.reference;\n    sq_prefix_assign(&klass->common.attributes,&attributes);',
        '    sq_prefix_assign(&klass->common.attributes,&attributes);'))
    call='        sq_vm_call022(vm,klass->common.values56.values+17,2,sq_lookup_top020(vm)-2,&discarded,0);'
    add('inherited-call-failure-propagated',26,'class_create.c',replace_once(create,call,
        '        _Bool callback_ok=sq_vm_call022(vm,klass->common.values56.values+17,2,sq_lookup_top020(vm)-2,&discarded,0);\n'
        '        if(!callback_ok){sq_prefix_release(attributes.type,attributes.value);return 0;}'))
    before='''        sq_lookup_pop020(vm);
        sq_lookup_pop020(vm);
        sq_prefix_release(discarded.type,discarded.value);'''
    after='''        sq_prefix_release(discarded.type,discarded.value);
        sq_lookup_pop020(vm);
        sq_lookup_pop020(vm);'''
    add('discarded-result-destroyed-before-argument-pops',25,'class_create.c',replace_once(create,before,after))
    add('temporary-instance-owner-leaked',45,'instance_factory.c',replace_once(factory,
        '    sq_prefix_release(temporary.type,temporary.value);\n',''))
    add('constructor-weak-not-unwrapped',30,'instance_factory.c',replace_once(factory,
        '        if(value.type==0x08010000u)value=((const SqWeakReference014*)value.value.reference)->object;\n',''))
    add('successful-table-meta-also-inserts-slot',41,'new_slot.c',replace_once(wrapper,
        'fallback=!metamethod(vm,self,key,value,&previous);','fallback=metamethod(vm,self,key,value,&previous);'))
    add('instance-newslot-failure-reported-as-success',36,'new_slot.c',replace_once(wrapper,
        '        return success;','        return 1;'))
    add('meta-name-miss-returns-zero',19,'meta_names.c',replace_once(names,
        '    return found?result:-1;','    return found?result:0;'))
    callback=(SOURCE/'fixture_constructor.c').read_text()
    add('forbidden-inactive-native-frame-observer',33,'fixture_constructor.c',replace_once(callback,
        '    class_fixture034.native_calls++;',
        '    const volatile unsigned char *frame=(const volatile unsigned char*)sq_vm_current022(vm);\n'
        '    unsigned char observed=frame[0];(void)observed;\n    class_fixture034.native_calls++;'))
    return rows


def produce(folder,baseline):
    s,y,f=load(baseline/'arm/class034.elf');original=Arm(s,y,f,True);good=Arm(s,y,f)
    rows=[]
    for name,variant,filename,text in definitions():
        target,sources=control_source(folder/name,filename,text)
        expected,expected_heap=original.execute(variant,1);pristine,pristine_heap=good.execute(variant,1)
        if expected!=pristine:raise ValueError('034 baseline observations differ')
        a,b,c,build=arm(folder/name/'arm',sources);bad=Arm(a,b,c)
        actual,actual_heap=bad.execute(variant,1)
        if expected==actual and actual_heap==pristine_heap and not bad.dead_frame_reads:
            raise ValueError('034 returning control accepted: '+name)
        rows.append({'name':name,'variant':variant,'cleanup':1,'normallyReturnedWithSavedArmAndVfpAbi':True,
            'rejected':True,'sameFinalSourceArena':actual_heap==pristine_heap,'sameFinalObservations':actual==expected,
            'forbiddenNativeFrameReads':bad.dead_frame_reads,
            'source':pin(target),'artifact':pin(folder/name/'arm/class034.elf')})
        print('034 returning control',name,flush=True);save(folder/'controls.partial.json',rows)
    result={'schemaVersion':1,'count':len(rows),'allNormallyReturned':True,'allRejected':True,'controls':rows,
        'sameFinalSourceArenaControls':sum(row['sameFinalSourceArena'] for row in rows),
        'producer':pin(ROOT/'toolscripts/squirrel_class034_controls.py')}
    save(folder/'controls.json',result);return result


if __name__=='__main__':
    import argparse
    from pathlib import Path
    parser=argparse.ArgumentParser();parser.add_argument('--baseline',default=str(WORK/'primary-final'))
    parser.add_argument('--folder',default=str(WORK/'controls-sealed'))
    args=parser.parse_args();print(produce(Path(args.folder).resolve(),Path(args.baseline).resolve())['count'])
