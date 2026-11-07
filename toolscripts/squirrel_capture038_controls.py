from squirrel_capture038_build import ROOT,WORK,SOURCE,SOURCES,arm,pin,save
from squirrel_capture038_oracle import Arm
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
    controller=(SOURCE/'script_create.c').read_text();bindings=(SOURCE/'bindings.c').read_text()
    client=(SOURCE/'fixture_program.c').read_text();rows=[]
    def add(name,variant,filename,text):rows.append((name,variant,filename,text))
    add('local-capture-reads-neighbour',1,'script_create.c',replace_once(controller,
        'sq_capture_local038(vm, outer->source.value.integer)',
        'sq_capture_local038(vm, outer->source.value.integer+1)'))
    add('parent-outer-replaced-with-local-slot',24,'bindings.c',replace_once(bindings,
        '    return parent->outers.values+index;',
        '    (void)parent;return sq_capture_local038(vm,index);'))
    add('default-value-reads-capture-slot',1,'script_create.c',replace_once(controller,
        'sq_capture_local038(vm, function->defaults[index])','sq_capture_local038(vm, 2)'))
    a=controller.index('    SqPrototypeI32 outer_count');b=controller.index('    SqPrototypeI32 default_count')
    c=controller.index('    SqPrefixObject012 temporary')
    add('defaults-initialized-before-observable-outer-lookup',37,'script_create.c',
        controller[:a]+controller[b:c]+controller[a:b]+controller[c:])
    late=replace_once(controller,'        link_closure(state, closure);\n','')
    late=replace_once(late,'    SqPrefixObject012 temporary =',
        '    link_closure(state, closure);\n    SqPrefixObject012 temporary =')
    add('closure-linked-after-native-capture-callback',36,'script_create.c',late)
    add('temporary-owner-leaked',0,'script_create.c',replace_once(controller,
        '    sq_prefix_release(temporary.type, temporary.value);\n',''))
    add('inactive-native-frame-read-with-same-result',36,'fixture_program.c',replace_once(client,
        '    fixture->meta_calls++;',
        '    const volatile unsigned char *frame=(const volatile unsigned char*)sq_vm_current022(vm);\n'
        '    unsigned char observed=frame[0];(void)observed;\n    fixture->meta_calls++;'))
    return rows


def produce(folder,baseline):
    s,y,f=load(baseline/'arm/capture038.elf');original=Arm(s,y,f,True);good=Arm(s,y,f)
    rows=[]
    for name,variant,filename,text in definitions():
        target,sources=control_source(folder/name,filename,text)
        expected,expected_heap=original.execute(variant,1);pristine,pristine_heap=good.execute(variant,1)
        if expected!=pristine:raise ValueError('038 baseline observations differ')
        from concurrent.futures import ThreadPoolExecutor
        from squirrel_capture038_build import windows,android,entrypoints
        from squirrel_capture038_oracle import Windows
        from squirrel_lookup020_android import Android
        from squirrel_capture038_model import compare_native
        with ThreadPoolExecutor(3)as pool:
            tasks=[pool.submit(f,folder/name/n,sources)for f,n in ((arm,'arm'),(windows,'windows'),(android,'android'))]
            a,b,c,build=tasks[0].result();library=tasks[1].result()
            sa,sy,sf,abuild=tasks[2].result()
        bad=Arm(a,b,c)
        actual,actual_heap=bad.execute(variant,1)
        if expected==actual and actual_heap==pristine_heap and not bad.dead_frame_reads:
            raise ValueError('038 returning control accepted: '+name)
        native_rows=[]
        for backend,runner,base in [('actualWindows',Windows(library),0x120000000),('aarch64ObjectModel',Android(sa,entrypoints(sy)),0x110000000)]:
            value=runner.execute(variant,1);rejected=False
            try:compare_native(variant,expected,value,base)
            except ValueError:rejected=True
            if name!='inactive-native-frame-read-with-same-result' and not rejected:
                raise ValueError('038 native returning control accepted: '+name+' '+backend)
            native_rows.append({'backend':backend,'normallyReturned':True,'rejectedByIndependentValueModel':rejected})
        rows.append({'name':name,'variant':variant,'cleanup':1,'normallyReturnedWithSavedArmAndVfpAbi':True,
            'rejected':True,'sameFinalSourceArena':actual_heap==pristine_heap,'sameFinalObservations':actual==expected,
            'forbiddenNativeFrameReads':bad.dead_frame_reads,
            'nativeControls':native_rows,'source':pin(target),'artifact':pin(folder/name/'arm/capture038.elf')})
        print('038 returning control',name,flush=True);save(folder/'controls.partial.json',rows)
    result={'schemaVersion':1,'count':len(rows),'allNormallyReturned':True,'allRejected':True,'nativeTargetNormalReturns':len(rows)*2,'controls':rows,
        'sameFinalSourceArenaControls':sum(row['sameFinalSourceArena'] for row in rows),
        'producer':pin(ROOT/'toolscripts/squirrel_capture038_controls.py')}
    save(folder/'controls.json',result);return result


if __name__=='__main__':
    import argparse
    from pathlib import Path
    parser=argparse.ArgumentParser();parser.add_argument('--baseline',default=str(WORK/'primary-final'))
    parser.add_argument('--folder',default=str(WORK/'controls-sealed'))
    args=parser.parse_args();print(produce(Path(args.folder).resolve(),Path(args.baseline).resolve())['count'])
