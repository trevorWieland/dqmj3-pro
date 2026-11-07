import argparse
import json
import re
import importlib.metadata
import sys
import unicorn
import capstone
from pathlib import Path
import squirrel_execute031_build as builder
import squirrel_execute031_model as model
import squirrel_execute031_oracle as oracle
import squirrel_execute031_android as android
from squirrel_execute028_measure import measure,MODULE_SHA
from squirrel_execute031_controls import SPECS
from squirrel_source_wave002 import sha
ROOT=builder.ROOT


def record(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=sha(data))


def inputs():
    paths=list(builder.SOURCE.glob('*'))+list((ROOT/'toolscripts').glob('squirrel_execute031*.py'))+[ROOT/'tests/test_squirrel_execute031.py']
    paths+=builder.sources(ROOT/'work/squirrel-execute031','normal')
    frozen_ready=json.loads((ROOT/'evidence/lanes/squirrel-execute028/ready.json').read_text())
    paths +=[ROOT/row['path']for row in frozen_ready['files']]
    paths +=[ROOT/name for name in('toolscripts/squirrel_source_wave002.py','toolscripts/squirrel_reference_prefix012_build.py','toolscripts/squirrel_wave005_execute_inventory.py',
      'evidence/lanes/squirrel-source-wave005/execute-milestone.json','evidence/lanes/squirrel-source-wave006/checkpoint-legacy-rename-1001.json',
      'evidence/lanes/squirrel-lookup020/reference-sdk-exchange.json','evidence/lanes/squirrel-type-error025/reference-sdk-additions.json',
      'toolscripts/squirrel_execute028_build.py','toolscripts/squirrel_execute028_model.py','toolscripts/squirrel_execute028_oracle.py','toolscripts/squirrel_execute028_controls.py','toolscripts/squirrel_execute028_measure.py','evidence/lanes/squirrel-execute028/ready.json','evidence/lanes/squirrel-execute031/claim.json','tools/clang-21/clang.exe','tools/clang-21/ld.lld.exe','tools/clang-21/libxml2.dll','tools/clang-21/libwinpthread-1.dll')]
    pending=list(paths);seen=set()
    while pending:
        path=pending.pop()
        if path in seen or not path.is_file():continue
        seen.add(path)
        if path.suffix in('.c','.h'):
            for name in re.findall(r'^#include "([^"]+)"',path.read_text(encoding='utf-8'),re.M):
                header=(path.parent/name).resolve()
                if not any(header.is_relative_to(ROOT/base)for base in('source','src'))or not header.is_file():raise ValueError('031 include escaped public source')
                pending.append(header)
    return sorted((record(path)for path in seen),key=lambda row:row['path'])


def compare_arenas(original,source,case):
    differences=[index for index,(left,right)in enumerate(zip(original,source))if left!=right]
    if case['mode']not in(8,36,37):
        if differences:raise ValueError('031 script/error initialized arena differs at '+hex(differences[0]))
        return dict(wholeInitializedArenaEqual=True,indeterminateNativeFrameDifferences=[])
    frame=0xc000+48
    allowed={frame+offset+byte for offset in(0,4,32,40)for byte in range(4)}
    if set(differences)-allowed:raise ValueError('031 native semantic arena differs outside declared inactive fields')
    return dict(wholeInitializedArenaEqual=not differences,indeterminateNativeFrameDifferences=[dict(offset=index,original=original[index],source=source[index])for index in differences],
      inactiveNativeFrameOffsets=[frame+offset for offset in(0,4,32,40)],rawFrameObserversExcluded=True)


def execute(output,controls=True):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-execute031'):raise ValueError('031 raw report must stay private')
    output.mkdir(parents=True,exist_ok=True);pins=inputs();image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('031 original module changed')
    ready=ROOT/'evidence/lanes/squirrel-execute028/ready.json'
    if sha(ready.read_bytes())!='d31dc398c29e6783fac6522c70ac4186c1e52b5c7d08840aa5004ba4d2af90ac':raise ValueError('031 frozen028 ready changed')
    for row in json.loads(ready.read_text())['files']:
        if record(ROOT/row['path'])!=row:raise ValueError('031 frozen028 input changed '+row['path'])
    measured=measure();measured['successor031Claim']=json.loads((ROOT/'evidence/lanes/squirrel-execute031/claim.json').read_text());component=builder.arm(output/'arm');native=builder.native(output/'windows');portable=builder.android_model(output/'android')
    cases=model.cases()
    if [{key:row[key]for key in('mode','value','flags','cleanup')}for row in native['observations']]!=cases:raise ValueError('031 actual native corpus differs')
    import squirrel_execute028_build as old_builder
    import squirrel_execute028_oracle as old_oracle
    old_component=old_builder.arm(output/'frozen028-arm');old_rows=[]
    rows=[];coverage=set()
    for index,(case,window)in enumerate(zip(cases,native['observations'])):
        original,ot,oh=oracle.execute(image,component,case,False);source,st,sh=oracle.execute(image,component,case,True);a64,at,unused=android.execute(portable,case)
        for result in(original,source,window,a64):model.validate(result['words'],case)
        normalized=model.normalized(original['words'])
        if any(model.normalized(result['words'])!=normalized for result in(source,window,a64)):raise ValueError('031 cross-platform semantic/ordered callback observations differ')
        comparison=compare_arenas(oh,sh,case)
        if original['words']!=source['words']:raise ValueError('031 ARM ordered/ownership observations differ')
        if ot['nativeInactiveFieldReadPcs']:raise ValueError('031 native domain read indeterminate frame fields')
        if ot['newSDKInstructionWitnesses']or st['newSDKInstructionWitnesses']:raise ValueError('031 primary run cannot discover SDK witnesses')
        if case['mode']<32:
            previous,previous_trace,previous_heap=old_oracle.execute(image,old_component,case,True)
            if previous['words']!=model.split(source['words'])[0]or previous_heap!=sh:raise ValueError('031 frozen028 baseline source observation/arena changed')
            old_rows.append(dict(case=case,oldObservation=previous,newSourcePrefixIdentical=True,wholeSourceArenaIdentical=True))
        coverage.update(ot['visited']);rows.append(dict(case=case,original=original,source=source,windows=window,android=a64,comparison=comparison,originalTrace=ot,sourceTrace=st,androidTrace=at))
        if(index+1)%8==0:print('031 positive',index+1,flush=True)
    negative=[]
    if controls:
        for variant,(_,unused,unused2,case)in SPECS.items():
            original,unused,oh=oracle.execute(image,component,case,False);model.validate(original['words'],case)
            wrong=builder.arm(output/'controls'/variant/'arm',variant);wn=builder.native(output/'controls'/variant/'windows',variant);wa=builder.android_model(output/'controls'/variant/'android',variant)
            result,unused,rh=oracle.execute(image,wrong,case,True);other,unused,unused_heap=android.execute(wa,case)
            for value in(result,wn['observations'][0],other):
                if value['words'][0]:raise ValueError('031 control left declared fixture domain '+variant)
                try:model.validate(value['words'],case)
                except ValueError:pass
                else:raise ValueError('031 returning wrong source escaped independent models '+variant)
            negative.append(dict(variant=variant,case=case,armActuallyReturned=True,windowsActuallyReturned=True,a64ActuallyReturned=True,
              rejectedByIndependentModels=True,sameFinalArmArena=oh==rh,source=result,windows=wn['observations'][0],android=other))
            print('031 control',variant,flush=True)
    if any(record(ROOT/row['path'])!=row for row in pins):raise ValueError('031 source drift during execution')
    result=dict(schemaVersion=1,status='bounded-execute031-qualified'if controls else'diagnostic-positive-only',inputs=pins,measurement=measured,cases=rows,negativeControls=negative,
      originalReturns=len(rows),sourceReturns=len(rows),windowsReturns=len(rows),a64ModelReturns=len(rows),armElfSha256=component['elfSha256'],windowsExeSha256=native['exeSha256'],a64ElfSha256=portable['elfSha256'],
      effectiveTools=dict(python=sys.version,unicorn=dict(packageMetadata=importlib.metadata.version('unicorn'),moduleVersion=unicorn.__version__,nativeVersion=unicorn.uc_version(),nativeSha256=sha(Path(unicorn.unicorn_py3.unicorn.uclib._name).read_bytes())),capstone=dict(packageMetadata=importlib.metadata.version('capstone'),moduleVersion=capstone.__version__,nativeVersion=capstone.cs_version(),nativeSha256=sha(Path(capstone._cs._name).read_bytes()))),
      baseline028Preserved=old_rows,frozen028ArmElfSha256=old_component['elfSha256'],originalVisitedInstructions=sorted(coverage),wholeExecuteComplete=False,wholeVmOrGameQualified=False,acceptedSourceCreditGranted=0,requestedExactBytes=0,
      sourceOriginalModuleMapped=False,physicalAndroidQualified=False,originalEndpointsAndTablesPreserved=True,
      scriptAndEntryErrorArenasComparedWithoutMasks=True,nativeInactiveFields='Original NativeCall frame instruction/literals/target/root can retain dead-stack bytes; source zeros. Raw differences preserved, semantic domain excludes observers of those fields. No universal machine-state equivalence.',
      floatingEnvironment='VFP/FP enabled, traps disabled; mandatory controls and callee-saved FP registers checked. Sticky exception-status observations recorded separately; cross-platform whole-status equivalence is not claimed.',
      errorDomain='Preserved028 literal depth/arity errors through frozen020/025/015; no new general exception/debug/unwind qualification.',
      opcodeDomain='Versioned031 extends028 with ordinary nested script calls, table/array/string-key access/mutation, native method calls, typed ownership transfer, comparisons/bitwise/unary and finite float multiply/add; actual fixture cohort only; whole Execute and excluded providers unqualified.')
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,default=ROOT/'work/squirrel-execute031/qualified');parser.add_argument('--skip-controls',action='store_true')
    args=parser.parse_args();result=execute(args.output,not args.skip_controls);print(json.dumps({key:result[key]for key in('status','originalReturns','sourceReturns','windowsReturns','a64ModelReturns')}))
