from squirrel_capture041_build import ROOT,WORK,SOURCE,SOURCES,arm,pin,save
from squirrel_capture041_oracle import Arm
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
    controller=(SOURCE/'script_create.c').read_text();formatting=(SOURCE/'format.c').read_text();rows=[]
    def add(name,variant,file,text):rows.append((name,variant,file,text))
    add('index-error-clips-at51-not50',58,'format.c',replace_once(formatting,'limit=50;','limit=51;'))
    add('failed-get-reported-as-success',54,'script_create.c',replace_once(controller,'                    return 0;','                    return 1;'))
    add('failed-get-skips-real-index-error',54,'script_create.c',replace_once(controller,
        '                    sq_capture_index_error041(vm, &outer->source);\n',''))
    a=controller.index('    if(!function)sq_capture_storage_fault041');b=controller.index('    SqPrototypeI32 default_count')
    c=controller.index('    if(!closure)sq_capture_assert041(2);')
    outer=controller[a:b];defaults=controller[b:c]
    add('default-initialization-before-native-mutation',60,'script_create.c',controller[:a]+defaults+outer+controller[c:])
    start=controller.index('    if(!closure)sq_capture_assert041(2);')
    end=controller.index('    sq_prefix_release(temporary.type, temporary.value);',start)
    publication=controller[start:end]
    early=controller[:a]+publication+controller[a:start]+controller[end:]
    add('publication-before-native-capture',60,'script_create.c',early)
    add('temporary-protection-not-retained',63,'script_create.c',replace_once(controller,
        '    sq_prefix_retain(temporary.type, temporary.value);\n',''))
    add('prototype-temporary-release-skipped',65,'script_create.c',replace_once(controller,
        '        sq_prefix_release(prototype.type, prototype.value);\n',''))
    return rows


def produce(folder,baseline):
    s,y,f=load(baseline/'arm/capture041.elf');original=Arm(s,y,f,True);good=Arm(s,y,f)
    rows=[]
    for name,variant,filename,text in definitions():
        cleanup=0 if name=="index-error-clips-at51-not50" else 1
        target,sources=control_source(folder/name,filename,text)
        expected,expected_heap=original.execute(variant,cleanup);pristine,pristine_heap=good.execute(variant,cleanup)
        if expected!=pristine:raise ValueError('041 baseline observations differ')
        from concurrent.futures import ThreadPoolExecutor
        from squirrel_capture041_build import windows,android,entrypoints
        from squirrel_capture041_oracle import Windows
        from squirrel_capture041_android import Android
        from squirrel_capture041_model import compare_native
        with ThreadPoolExecutor(3)as pool:
            tasks=[pool.submit(f,folder/name/n,sources)for f,n in ((arm,'arm'),(windows,'windows'),(android,'android'))]
            a,b,c,build=tasks[0].result();library=tasks[1].result()
            sa,sy,sf,abuild=tasks[2].result()
        bad=Arm(a,b,c)
        actual,actual_heap=bad.execute(variant,cleanup)
        if expected==actual and actual_heap==pristine_heap and not bad.dead_frame_reads:
            raise ValueError('041 returning control accepted: '+name)
        native_rows=[]
        for backend,runner,base in [('actualWindows',Windows(library),0x120000000),('aarch64ObjectModel',Android(sa,entrypoints(sy)),0x110000000)]:
            value=runner.execute(variant,cleanup);rejected=False
            try:compare_native(variant,expected,value,base)
            except ValueError:rejected=True
            if not rejected:
                raise ValueError('041 native returning control accepted: '+name+' '+backend)
            native_rows.append({'backend':backend,'normallyReturned':True,'rejectedByIndependentValueModel':rejected})
        rows.append({'name':name,'variant':variant,'cleanup':cleanup,'normallyReturnedWithSavedArmAndVfpAbi':True,
            'rejected':True,'sameFinalSourceArena':actual_heap==pristine_heap,'sameFinalObservations':actual==expected,
            'forbiddenNativeFrameReads':bad.dead_frame_reads,
            'nativeControls':native_rows,'source':pin(target),'artifact':pin(folder/name/'arm/capture041.elf')})
        print('041 returning control',name,flush=True);save(folder/'controls.partial.json',rows)
    result={'schemaVersion':1,'count':len(rows),'allNormallyReturned':True,'allRejected':True,'nativeTargetNormalReturns':len(rows)*2,'controls':rows,
        'sameFinalSourceArenaControls':sum(row['sameFinalSourceArena'] for row in rows),
        'producer':pin(ROOT/'toolscripts/squirrel_capture041_controls.py')}
    save(folder/'controls.json',result);return result


if __name__=='__main__':
    import argparse
    from pathlib import Path
    parser=argparse.ArgumentParser();parser.add_argument('--baseline',default=str(WORK/'primary-final'))
    parser.add_argument('--folder',default=str(WORK/'controls-sealed'))
    args=parser.parse_args();print(produce(Path(args.folder).resolve(),Path(args.baseline).resolve())['count'])
