import argparse
import importlib.metadata
import json
import re
import sys
from pathlib import Path
import capstone
import unicorn
import squirrel_execute047_build as builder
import squirrel_execute047_model as model
import squirrel_execute047_oracle as oracle
import squirrel_execute047_android as android
from squirrel_execute047_controls import SPECS
from squirrel_iteration043_measure import measure as helper_measure,MODULE_SHA
from squirrel_iteration043 import inputs as previous_inputs,compare_arenas as previous_compare
from squirrel_source_wave002 import sha
ROOT=builder.ROOT


def record(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=sha(data))


def inputs():
    paths={ROOT/row['path']for row in previous_inputs()}
    paths.update(builder.SOURCE.glob('*'));paths.update(builder.sources(ROOT/'work/squirrel-execute047/input-roster','normal'));paths.add(builder.SOURCE/'component_reference_stubs.c');paths.update((ROOT/'toolscripts').glob('squirrel_execute047*.py'))
    paths.update([ROOT/'tests/test_squirrel_execute047.py',ROOT/'docs/squirrel-execute047.md',ROOT/'evidence/lanes/squirrel-execute047/claim.json'])
    ready=ROOT/'evidence/lanes/squirrel-iteration043/ready.json'
    if sha(ready.read_bytes())!='524af070d6429776a95a3d62e49fd2173127c16d13d0f816a91ea5102ea6d46a':raise ValueError('043 frozen039 receipt changed')
    paths.add(ready)
    for item in json.loads(ready.read_text(encoding='utf-8'))['files']:
        if record(ROOT/item['path'])!=item:raise ValueError('043 frozen039 input changed')
        paths.add(ROOT/item['path'])
    for relative,expected in [('evidence/lanes/squirrel-exception035/ready.json','9e9ed012b159f8e5a5431102c9666cc3fbe2e45f909ca7014d7071635c5fcf4e'),('evidence/lanes/squirrel-capture041/ready.json','92dc592254a782076d8572fa86fb970812c9ffee849eabcd537a6ec5bff276b1')]:
        path=ROOT/relative
        if sha(path.read_bytes())!=expected:raise ValueError('047 frozen dependency receipt changed')
        paths.add(path)
        for item in json.loads(path.read_text(encoding='utf-8'))['files']:
            if record(ROOT/item['path'])!=item:raise ValueError('047 frozen dependency changed')
            paths.add(ROOT/item['path'])
    supplement=ROOT/'evidence/verification/capture041-source-closure-supplement.json'
    if sha(supplement.read_bytes())!='644dabcc1a6498690c1e5e0532161416c6aeb09ae491644cd00b3c8c1b543b15':raise ValueError('047 authoritative041 supplement changed')
    paths.add(supplement)
    for item in json.loads(supplement.read_text(encoding='utf-8'))['sourceFiles']:
        if record(ROOT/item['path'])!=item:raise ValueError('047 actual041 source changed')
        paths.add(ROOT/item['path'])
    core=ROOT/'evidence/lanes/squirrel-state040/core-abi-v1/frozen-manifest.json'
    if sha(core.read_bytes())!='23a38012b40a93aa1426a9fa08f424949d418a95c9cac939f7abdc2b237f2e28':raise ValueError('047 sealed040 ABI changed')
    paths.add(core)
    for item in json.loads(core.read_text(encoding='utf-8'))['files']:
        if record(ROOT/item['path'])!=item:raise ValueError('047 sealed040 source drift')
        paths.add(ROOT/item['path'])
    paths.add(ROOT/'evidence/lanes/squirrel-state040/initialization045-shared-field-correction.json')
    pending=list(paths);seen=set()
    while pending:
        path=pending.pop()
        if path in seen:continue
        if not path.is_file():raise ValueError('043 required input missing '+str(path))
        seen.add(path)
        if path.suffix in('.c','.h'):
            for name in re.findall(r'^#include "([^"]+)"',path.read_text(encoding='utf-8'),re.M):
                header=(path.parent/name).resolve()
                if not any(header.is_relative_to(ROOT/base)for base in('source','src'))or not header.is_file():raise ValueError('043 include escaped source')
                pending.append(header)
    return sorted((record(path)for path in seen),key=lambda row:row['path'])


def compare_arenas(original,source,case):
    if case['mode']<256:return previous_compare(original,source,case)
    differences=[i for i,(a,b)in enumerate(zip(original,source))if a!=b]
    if differences:raise ValueError('047 mixed initialized arena differs at '+hex(differences[0]))
    return dict(wholeInitializedArenaEqual=True,indeterminateNativeFrameDifferences=[])


def measure():
    return dict(stage='A-typed040-iteration-and-mixed-capture-exceptions',claim=json.loads((ROOT/'evidence/lanes/squirrel-execute047/claim.json').read_text()),helperRanges=helper_measure(),wholeExecuteComplete=False)


def execute(output,controls=True):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-execute047'):raise ValueError('043 raw reports remain private')
    output.mkdir(parents=True,exist_ok=True);pins=inputs();image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('043 original module changed')
    measured=measure();component=builder.arm(output/'arm');native=builder.native(output/'windows');portable=builder.android_model(output/'android');library_build=builder.component_library(output/'component-library')
    (output/'component-library/build-receipt.private.json').write_text(json.dumps(library_build,indent=2)+'\n',encoding='utf-8')
    library={key:library_build[key]for key in('sha256','bytes','objects','originalModuleLinked','fixtureProvisioningOnly')}
    library['artifact']='component-library/libdqmj_execute047.so'
    cases=model.cases()
    if [{key:r[key]for key in('mode','value','flags','cleanup')}for r in native['observations']]!=cases:raise ValueError('043 native corpus differs')
    import squirrel_iteration043_build as old_builder
    import squirrel_iteration043_oracle as old_oracle
    old_component=old_builder.arm(output/'frozen043-arm');rows=[];baseline=[];coverage=set()
    for index,(case,window)in enumerate(zip(cases,native['observations'])):
        original,ot,oh=oracle.execute(image,component,case,False);source,st,sh=oracle.execute(b'',component,case,True);a64,at,unused=android.execute(portable,case)
        for result in(original,source,window,a64):model.validate(result['words'],case)
        normalized=model.normalized(original['words'],case)
        if any(model.normalized(result['words'],case)!=normalized for result in(source,window,a64)):raise ValueError('043 cross-platform observations differ')
        if original['words']!=source['words']:raise ValueError('043 ARM ordered observations differ')
        comparison=compare_arenas(oh,sh,case)
        if ot['nativeInactiveFieldReadPcs']:raise ValueError('043 read an indeterminate native frame field')
        if ot['newSDKInstructionWitnesses']or st['newSDKInstructionWitnesses']:raise ValueError('043 cannot discover SDK witnesses in qualification')
        if case['mode']<256:
            previous,unused,previous_heap=old_oracle.execute(b'',old_component,case,True)
            if previous['words']!=source['words']or previous_heap!=sh:raise ValueError('043 frozen039 baseline changed')
            baseline.append(dict(case=case,sourceObservationIdentical=True,wholeSourceArenaIdentical=True))
        coverage.update(ot['visited']);rows.append(dict(case=case,original=original,source=source,windows=window,android=a64,comparison=comparison,originalTrace=ot,sourceTrace=st,androidTrace=at))
        if(index+1)%16==0:print('047 positive',index+1,flush=True)
    component_rows=[]
    for profile in(8,256,257):
        for cleanup in(0,1):
            case=dict(mode=profile,value=3,flags=1,cleanup=cleanup);entry,trace,raw=android.execute(portable,case,component_entry=True);model.validate(entry['words'],case)
            previous=next(row for row in rows if row['case']==case)
            if entry['words']!=previous['android']['words']:raise ValueError('047 freestanding entry differs')
            component_rows.append(dict(case=case,observation=entry,trace=trace,notProductionStartup=True))
    negative=[]
    if controls:
        for variant,(_,__,___,case)in SPECS.items():
            normal,unused,normal_heap=oracle.execute(b'',component,case,True);model.validate(normal['words'],case)
            wrong=builder.arm(output/'controls'/variant/'arm',variant);wn=builder.native(output/'controls'/variant/'windows',variant);wa=builder.android_model(output/'controls'/variant/'android',variant)
            result,trace,rh=oracle.execute(b'',wrong,case,True);other,unused,unused_heap=android.execute(wa,case)
            for value in(result,wn['observations'][0],other):
                if not value.get('returned',True):raise ValueError('047 control failed to return')
                if value['words'][4 if case['mode']>=256 else 2 if case['mode']>=128 else 0]:raise ValueError('047 control faulted outside contract')
                try:model.validate(value['words'],case)
                except ValueError:pass
                else:raise ValueError('043 wrong returning source escaped model '+variant)
            negative.append(dict(variant=variant,case=case,armActuallyReturned=True,windowsActuallyReturned=True,a64ActuallyReturned=True,rejectedByIndependentModels=True,sameFinalSourceArmArena=normal_heap==rh,armElfSha256=wrong['elfSha256'],windowsExeSha256=wn['exeSha256'],a64ElfSha256=wa['elfSha256'],source=result,windows=wn['observations'][0],android=other))
            print('047 control',variant,flush=True)
    if any(record(ROOT/item['path'])!=item for item in pins):raise ValueError('043 source drift during qualification')
    result=dict(schemaVersion=1,componentLibrary=library,componentEntryObservations=component_rows,status='bounded-execute047-stageA-qualified'if controls else'diagnostic-positive-only',inputs=pins,measurement=measured,cases=rows,negativeControls=negative,baseline043Preserved=baseline,
      originalReturns=len(rows),sourceReturns=len(rows),windowsReturns=len(rows),a64ModelReturns=len(rows),armElfSha256=component['elfSha256'],windowsExeSha256=native['exeSha256'],a64ElfSha256=portable['elfSha256'],frozen043ArmElfSha256=old_component['elfSha256'],
      originalVisitedInstructions=sorted(coverage),
      effectiveTools=dict(python=sys.version,unicorn=dict(packageMetadata=importlib.metadata.version('unicorn'),moduleVersion=unicorn.__version__,nativeVersion=unicorn.uc_version(),nativeSha256=sha(Path(unicorn.unicorn_py3.unicorn.uclib._name).read_bytes())),capstone=dict(packageMetadata=importlib.metadata.version('capstone'),moduleVersion=capstone.__version__,nativeVersion=capstone.cs_version(),nativeSha256=sha(Path(capstone._cs._name).read_bytes()))),
      floatingEnvironment='FP enabled, traps disabled; mandatory controls and callee-saved FP registers checked. Sticky flags remain separate observations; no universal status equality.',
      nativeInactiveFrameDomain='Original NativeCall instruction/literals/target/root can retain dead-stack values; typed callbacks cannot observe them before overwrite. Raw differences retained; whole-memory equality is not claimed for those script programs.',
      limitations=['StageA does not requalify all818 exception or all136 capture predecessor scenarios yet; those remain a successor requirement.','Fixture provisioning is not production startup045.','No negative integer cursor: original may index before storage; no portable C equivalence claim.','No arbitrary descriptor-map mutation or cached-node invalidation during callbacks.','No fatal-service implementation, generator, POSTFOREACH, full exception/debug domains beyond the mixed cohort, debug hook, GC or allocator recovery.'],
      sourceOriginalModuleMapped=False,originalEndpointsAndTablesPreserved=True,wholeExecuteComplete=False,wholeVmOrGameQualified=False,physicalAndroidQualified=False,acceptedSourceCreditGranted=0,requestedExactBytes=0)
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,default=ROOT/'work/squirrel-execute047/stageA');parser.add_argument('--skip-controls',action='store_true')
    args=parser.parse_args();result=execute(args.output,not args.skip_controls);print(json.dumps({key:result[key]for key in('status','originalReturns','sourceReturns','windowsReturns','a64ModelReturns')}))
