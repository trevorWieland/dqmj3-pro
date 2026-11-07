import argparse
import importlib.metadata
import json
import re
import sys
from pathlib import Path
import capstone
import unicorn
import squirrel_iteration043_build as builder
import squirrel_iteration043_model as model
import squirrel_iteration043_oracle as oracle
import squirrel_iteration043_android as android
from squirrel_iteration043_controls import SPECS
from squirrel_iteration043_measure import measure,MODULE_SHA
from squirrel_iteration039 import inputs as previous_inputs,compare_arenas as previous_compare
from squirrel_source_wave002 import sha
ROOT=builder.ROOT


def record(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=sha(data))


def inputs():
    paths={ROOT/row['path']for row in previous_inputs()}
    paths.update(builder.SOURCE.glob('*'));paths.update((ROOT/'toolscripts').glob('squirrel_iteration043*.py'))
    paths.update([ROOT/'tests/test_squirrel_iteration043.py',ROOT/'docs/squirrel-iteration043.md',ROOT/'evidence/lanes/squirrel-iteration043/measurement.json',ROOT/'evidence/lanes/squirrel-iteration043/claim.json'])
    ready=ROOT/'evidence/lanes/squirrel-iteration039/ready.json'
    if sha(ready.read_bytes())!='4735af31da7e6fad536ac55eb8732991e9491ebfce77b99ad69a89bf0a0a1488':raise ValueError('043 frozen039 receipt changed')
    paths.add(ready)
    for item in json.loads(ready.read_text(encoding='utf-8'))['files']:
        if record(ROOT/item['path'])!=item:raise ValueError('043 frozen039 input changed')
        paths.add(ROOT/item['path'])
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
    if case['mode']in(73,74):
        alternate=dict(case,mode=65);return previous_compare(original,source,alternate)
    if case['mode']<128:return previous_compare(original,source,case)
    differences=[index for index,(a,b)in enumerate(zip(original,source))if a!=b]
    if differences:raise ValueError('043 helper initialized arena differs at '+hex(differences[0]))
    return dict(wholeInitializedArenaEqual=True,indeterminateNativeFrameDifferences=[])


def execute(output,controls=True):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-iteration043'):raise ValueError('043 raw reports remain private')
    output.mkdir(parents=True,exist_ok=True);pins=inputs();image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('043 original module changed')
    measured=measure();component=builder.arm(output/'arm');native=builder.native(output/'windows');portable=builder.android_model(output/'android')
    cases=model.cases()
    if [{key:r[key]for key in('mode','value','flags','cleanup')}for r in native['observations']]!=cases:raise ValueError('043 native corpus differs')
    import squirrel_iteration039_build as old_builder
    import squirrel_iteration039_oracle as old_oracle
    old_component=old_builder.arm(output/'frozen039-arm');rows=[];baseline=[];coverage=set()
    for index,(case,window)in enumerate(zip(cases,native['observations'])):
        original,ot,oh=oracle.execute(image,component,case,False);source,st,sh=oracle.execute(b'',component,case,True);a64,at,unused=android.execute(portable,case)
        for result in(original,source,window,a64):model.validate(result['words'],case)
        normalized=model.normalized(original['words'])
        if any(model.normalized(result['words'])!=normalized for result in(source,window,a64)):raise ValueError('043 cross-platform observations differ')
        if original['words']!=source['words']:raise ValueError('043 ARM ordered observations differ')
        comparison=compare_arenas(oh,sh,case)
        if ot['nativeInactiveFieldReadPcs']:raise ValueError('043 read an indeterminate native frame field')
        if ot['newSDKInstructionWitnesses']or st['newSDKInstructionWitnesses']:raise ValueError('043 cannot discover SDK witnesses in qualification')
        if case['mode']<73:
            previous,unused,previous_heap=old_oracle.execute(b'',old_component,case,True)
            if previous['words']!=source['words'][:-1]or previous_heap!=sh:raise ValueError('043 frozen039 baseline changed')
            baseline.append(dict(case=case,sourcePrefixIdentical=True,wholeSourceArenaIdentical=True))
        coverage.update(ot['visited']);rows.append(dict(case=case,original=original,source=source,windows=window,android=a64,comparison=comparison,originalTrace=ot,sourceTrace=st,androidTrace=at))
        if(index+1)%16==0:print('043 positive',index+1,flush=True)
    terminals=[]
    for mode in(135,136,137):
        case=dict(mode=mode,value=0,flags=0,cleanup=0)
        original,ot,oh=oracle.execute(image,component,case,False,terminal=True);source,st,sh=oracle.execute(b'',component,case,True,terminal=True)
        if original['returned']or source['returned']or not ot['terminalBoundaryReached']or not st['terminalBoundaryReached']:raise ValueError('043 invalid cursor falsely returned')
        if original['words']!=source['words']or oh!=sh:raise ValueError('043 pre-fatal state differs')
        coverage.update(ot['visited']);terminals.append(dict(case=case,original=original,source=source,originalTrace=ot,sourceTrace=st,normalReturn=False,terminalServiceImplementationQualified=False,wholePreBoundaryArenaEqual=True))
    negative=[]
    if controls:
        for variant,(_,unused,case)in SPECS.items():
            normal,unused,normal_heap=oracle.execute(b'',component,case,True);model.validate(normal['words'],case)
            wrong=builder.arm(output/'controls'/variant/'arm',variant);wn=builder.native(output/'controls'/variant/'windows',variant);wa=builder.android_model(output/'controls'/variant/'android',variant)
            result,trace,rh=oracle.execute(b'',wrong,case,True);other,unused,unused_heap=android.execute(wa,case)
            for value in(result,wn['observations'][0],other):
                if not value.get('returned',True):raise ValueError('043 control failed to return')
                if value['words'][2 if case['mode']>=128 else 0]:raise ValueError('043 control faulted outside contract')
                try:model.validate(value['words'],case)
                except ValueError:pass
                else:raise ValueError('043 wrong returning source escaped model '+variant)
            negative.append(dict(variant=variant,case=case,armActuallyReturned=True,windowsActuallyReturned=True,a64ActuallyReturned=True,rejectedByIndependentModels=True,sameFinalSourceArmArena=normal_heap==rh,armElfSha256=wrong['elfSha256'],windowsExeSha256=wn['exeSha256'],a64ElfSha256=wa['elfSha256'],source=result,windows=wn['observations'][0],android=other))
            print('043 control',variant,flush=True)
    helper_coverage=[]
    for function in measured['functions']:
        extent=function['instructions'][0];addresses=set(range(extent['address'],extent['endExclusive'],4));visited=sorted(addresses&coverage);missing=sorted(addresses-coverage)
        expected_missing=measured['classDescriptorInvariant']['invariantDeadInstructionAddresses']if function['entry']==0x1a178c else[]
        if missing!=expected_missing:raise ValueError('043 helper coverage or conditional dead proof incomplete')
        helper_coverage.append(dict(entry=function['entry'],totalInstructions=len(addresses),visitedInstructions=visited,unvisitedInstructions=missing,invariantDeadInstructions=missing if function['entry']==0x1a178c else[],normalReturnScope='Null or nonnegative integer cursor; valid live storage and stated callback/descriptor provenance.'))
    if any(record(ROOT/item['path'])!=item for item in pins):raise ValueError('043 source drift during qualification')
    result=dict(schemaVersion=1,status='bounded-iteration043-qualified'if controls else'diagnostic-positive-only',inputs=pins,measurement=measured,cases=rows,terminalProbes=terminals,negativeControls=negative,baseline039Preserved=baseline,
      originalReturns=len(rows),sourceReturns=len(rows),windowsReturns=len(rows),a64ModelReturns=len(rows),armElfSha256=component['elfSha256'],windowsExeSha256=native['exeSha256'],a64ElfSha256=portable['elfSha256'],frozen039ArmElfSha256=old_component['elfSha256'],
      helperCoverage=helper_coverage,originalVisitedInstructions=sorted(coverage),
      effectiveTools=dict(python=sys.version,unicorn=dict(packageMetadata=importlib.metadata.version('unicorn'),moduleVersion=unicorn.__version__,nativeVersion=unicorn.uc_version(),nativeSha256=sha(Path(unicorn.unicorn_py3.unicorn.uclib._name).read_bytes())),capstone=dict(packageMetadata=importlib.metadata.version('capstone'),moduleVersion=capstone.__version__,nativeVersion=capstone.cs_version(),nativeSha256=sha(Path(capstone._cs._name).read_bytes()))),
      floatingEnvironment='FP enabled, traps disabled; mandatory controls and callee-saved FP registers checked. Sticky flags remain separate observations; no universal status equality.',
      nativeInactiveFrameDomain='Original NativeCall instruction/literals/target/root can retain dead-stack values; typed callbacks cannot observe them before overwrite. Raw differences retained; whole-memory equality is not claimed for those script programs.',
      limitations=['No negative integer cursor: original may index before storage; no portable C equivalence claim.','No arbitrary descriptor-map mutation or cached-node invalidation during callbacks.','No fatal-service implementation, generator, POSTFOREACH, structured Execute unwinding, debug hook, GC or allocator recovery.'],
      sourceOriginalModuleMapped=False,originalEndpointsAndTablesPreserved=True,wholeExecuteComplete=False,wholeVmOrGameQualified=False,physicalAndroidQualified=False,acceptedSourceCreditGranted=0,requestedExactBytes=0)
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,default=ROOT/'work/squirrel-iteration043/qualified');parser.add_argument('--skip-controls',action='store_true')
    args=parser.parse_args();result=execute(args.output,not args.skip_controls);print(json.dumps({key:result[key]for key in('status','originalReturns','sourceReturns','windowsReturns','a64ModelReturns')}))
