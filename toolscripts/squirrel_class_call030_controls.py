import os
import re

from squirrel_class_call030_build import ROOT,WORK,SOURCE,SOURCES,arm,pin,save
from squirrel_class_call030_oracle import Arm
from squirrel_lookup020_build import load
from squirrel_coercion026_controls import replace_once


def control_source(folder,name,text):
    original=SOURCE/name;target=folder/name;folder.mkdir(parents=True,exist_ok=True)
    def include(match):
        header=(original.parent/match.group(1)).resolve()
        return '#include "'+os.path.relpath(header,target.parent).replace('\\','/')+'"'
    target.write_text(re.sub(r'#include "([^"]+)"',include,text),encoding='utf-8')
    return target,[target if path==original else path for path in SOURCES]


def definitions():
    create=(SOURCE/'class_instance_create.c').read_text()
    instance=(SOURCE/'class_instance_lifetime.c').read_text()
    lifetime=(SOURCE/'class_lifetime.c').read_text()
    initialize=(SOURCE/'class_initialize.c').read_text()
    bindings=(SOURCE/'class_bindings.c').read_text()
    clone=(SOURCE/'class_table_clone.c').read_text()
    rows=[]
    def add(name,variant,filename,text):rows.append((name,variant,filename,text))
    add('omitted-ancestor-lock',19,'class_instance_create.c',replace_once(create,
        '        if(klass->common.base)sq_class_lock030((void*)klass->common.base);',''))
    add('shared-read-after-allocation',18,'class_instance_create.c',replace_once(replace_once(create,
        '    SqPrefixState012 *shared=klass->common.shared;','    SqPrefixState012 *shared;'),
        '    SqClassInstance030 *instance=sq_class_allocate030(bytes);',
        '    SqClassInstance030 *instance=sq_class_allocate030(bytes);\n    shared=klass->common.shared;'))
    add('extra-size-not-reloaded',17,'class_instance_create.c',replace_once(create,
        '    extra=klass->common.instance_bytes;\n',''))
    add('missing-instance-hook-guard',3,'class_instance_lifetime.c',instance.replace(
        '    instance->reference.prefix.references++;\n','').replace('    instance->reference.prefix.references--;\n',''))
    guarded=replace_once(lifetime,'    if(klass->common.uninvoked_release_hook)',
        '    klass->common.reference.prefix.references++;\n    if(klass->common.uninvoked_release_hook)')
    guarded=replace_once(guarded,'    klass->common.reference.prefix.vtable->destroy(klass);',
        '    klass->common.reference.prefix.references--;\n    klass->common.reference.prefix.vtable->destroy(klass);')
    add('invented-class-hook-guard',11,'class_lifetime.c',guarded)
    before='''        sq_prefix_release(0x08004000u,value);
        instance->klass=0;
        for(SqPrototypeU32 index=0;index<fields;index++)sq_prefix_clear(instance->values+index);'''
    after='''        for(SqPrototypeU32 index=0;index<fields;index++)sq_prefix_clear(instance->values+index);
        sq_prefix_release(0x08004000u,value);
        instance->klass=0;'''
    add('class-released-after-values',3,'class_instance_lifetime.c',replace_once(instance,before,after))
    cached=replace_once(instance,'        SqPrototypeU32 fields=instance->klass->common.members32.size;\n','')
    cached=replace_once(cached,'        sq_prefix_release(0x08004000u,value);',
        '        sq_prefix_release(0x08004000u,value);\n        SqPrototypeU32 fields=instance->klass->common.members32.size;')
    add('field-count-read-after-class-release',3,'class_instance_lifetime.c',cached)
    order='''    sq_prefix_release(member->secondary.type,member->secondary.value);
    sq_prefix_release(member->primary.type,member->primary.value);'''
    add('primary-released-before-secondary',22,'class_bindings.c',replace_once(bindings,order,
        '''    sq_prefix_release(member->primary.type,member->primary.value);
    sq_prefix_release(member->secondary.type,member->secondary.value);'''))
    add('inherited-meta-owner-not-retained',4,'class_initialize.c',replace_once(initialize,
        '            sq_prefix_retain(destination->type,destination->value);\n',''))
    add('instance-default-owner-not-retained',3,'class_instance_create.c',replace_once(create,
        '        sq_prefix_retain(storage->values[index].type,storage->values[index].value);\n',''))
    add('clone-delegate-owner-omitted',23,'class_table_clone.c',replace_once(clone,
        '    sq_table_delegate019(copy,table->delegate);\n',''))
    add('weak-target-not-invalidated',13,'class_instance_lifetime.c',replace_once(instance,
        '    sq_class_reset_weak030(&instance->reference.prefix);\n',''))
    add('temporary-instance-owner-leaked',26,'class_instance_create.c',replace_once(create,
        '    sq_prefix_release(temporary.type,temporary.value);\n',''))
    return rows


def produce(folder,baseline):
    s,y,f=load(baseline/'arm/class.elf');original=Arm(s,y,f,True);good=Arm(s,y,f)
    rows=[]
    for name,variant,filename,text in definitions():
        target,sources=control_source(folder/name,filename,text)
        expected,expected_heap=original.execute(variant,1)
        pristine,pristine_heap=good.execute(variant,1)
        if expected!=pristine:raise ValueError('030 baseline control observations differ')
        a,b,c,build=arm(folder/name/'arm',sources);bad=Arm(a,b,c)
        actual,actual_heap=bad.execute(variant,1)
        if actual==expected and actual_heap==pristine_heap:
            raise ValueError('030 returning control accepted: '+name)
        rows.append({'name':name,'variant':variant,'cleanup':1,'backend':'ARM',
            'normallyReturnedWithSavedArmAndVfpAbi':True,'rejected':True,
            'sameFinalSourceArena':actual_heap==pristine_heap,'sameFinalObservations':actual==expected,
            'source':pin(target),'artifact':pin(folder/name/'arm/class.elf')})
        print('030 returning control',name,flush=True)
        save(folder/'controls.partial.json',rows)
    result={'schemaVersion':1,'status':'compiled-normally-returning-ownership-and-read-order-controls',
        'count':len(rows),'allRejected':True,'allNormallyReturned':True,'controls':rows,
        'sameFinalSourceArenaControls':sum(row['sameFinalSourceArena'] for row in rows),
        'producer':pin(ROOT/'toolscripts/squirrel_class_call030_controls.py')}
    save(folder/'controls.json',result);return result


if __name__=='__main__':
    import argparse
    from pathlib import Path
    parser=argparse.ArgumentParser();parser.add_argument('--baseline',default=str(WORK/'primary'))
    parser.add_argument('--folder',default=str(WORK/'primary/controls'))
    args=parser.parse_args();print(produce(Path(args.folder).resolve(),Path(args.baseline).resolve())['count'])
