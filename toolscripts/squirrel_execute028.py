import argparse
import json
import re
import importlib.metadata
import sys
import unicorn
import capstone
from pathlib import Path
import squirrel_execute028_build as builder
import squirrel_execute028_model as model
import squirrel_execute028_oracle as oracle
import squirrel_execute028_android as android
from squirrel_execute028_measure import measure,MODULE_SHA
from squirrel_execute028_controls import SPECS
from squirrel_source_wave002 import sha
ROOT=builder.ROOT


def record(path):
    data=path.read_bytes();return dict(path=path.relative_to(ROOT).as_posix(),bytes=len(data),sha256=sha(data))


def inputs():
    paths=list(builder.SOURCE.glob('*'))+list((ROOT/'toolscripts').glob('squirrel_execute028*.py'))+[ROOT/'tests/test_squirrel_execute028.py']
    paths+=builder.sources(ROOT/'work/squirrel-execute028','normal')
    paths +=[ROOT/name for name in('toolscripts/squirrel_source_wave002.py','toolscripts/squirrel_reference_prefix012_build.py','toolscripts/squirrel_wave005_execute_inventory.py',
      'evidence/lanes/squirrel-source-wave005/execute-milestone.json','evidence/lanes/squirrel-source-wave006/checkpoint-legacy-rename-1001.json',
      'evidence/lanes/squirrel-lookup020/reference-sdk-exchange.json','evidence/lanes/squirrel-type-error025/reference-sdk-additions.json',
      'tools/clang-21/clang.exe','tools/clang-21/ld.lld.exe','tools/clang-21/libxml2.dll','tools/clang-21/libwinpthread-1.dll')]
    pending=list(paths);seen=set()
    while pending:
        path=pending.pop()
        if path in seen or not path.is_file():continue
        seen.add(path)
        if path.suffix in('.c','.h'):
            for name in re.findall(r'^#include "([^"]+)"',path.read_text(encoding='utf-8'),re.M):
                header=(path.parent/name).resolve()
                if not any(header.is_relative_to(ROOT/base)for base in('source','src'))or not header.is_file():raise ValueError('028 include escaped public source')
                pending.append(header)
    return sorted((record(path)for path in seen),key=lambda row:row['path'])


def compare_arenas(original,source,case):
    differences=[index for index,(left,right)in enumerate(zip(original,source))if left!=right]
    if case['mode']!=8:
        if differences:raise ValueError('028 script/error initialized arena differs at '+hex(differences[0]))
        return dict(wholeInitializedArenaEqual=True,indeterminateNativeFrameDifferences=[])
    frame=0xc000+48
    allowed={frame+offset+byte for offset in(0,4,32,40)for byte in range(4)}
    if set(differences)-allowed:raise ValueError('028 native semantic arena differs outside declared inactive fields')
    return dict(wholeInitializedArenaEqual=not differences,indeterminateNativeFrameDifferences=[dict(offset=index,original=original[index],source=source[index])for index in differences],
      inactiveNativeFrameOffsets=[frame+offset for offset in(0,4,32,40)],rawFrameObserversExcluded=True)


def execute(output,controls=True):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-execute028'):raise ValueError('028 raw report must stay private')
    output.mkdir(parents=True,exist_ok=True);pins=inputs();image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('028 original module changed')
    measured=measure();component=builder.arm(output/'arm');native=builder.native(output/'windows');portable=builder.android_model(output/'android')
    cases=model.cases()
    if [{key:row[key]for key in('mode','value','flags','cleanup')}for row in native['observations']]!=cases:raise ValueError('028 actual native corpus differs')
    rows=[];coverage=set()
    for index,(case,window)in enumerate(zip(cases,native['observations'])):
        original,ot,oh=oracle.execute(image,component,case,False);source,st,sh=oracle.execute(image,component,case,True);a64,at,unused=android.execute(portable,case)
        for result in(original,source,window,a64):model.validate(result['words'],case)
        normalized=model.normalize(original['words'])
        if any(model.normalize(result['words'])!=normalized for result in(source,window,a64)):raise ValueError('028 cross-platform semantic/ordered callback observations differ')
        comparison=compare_arenas(oh,sh,case)
        if original['words']!=source['words']:raise ValueError('028 ARM ordered/ownership observations differ')
        if ot['nativeInactiveFieldReadPcs']:raise ValueError('028 native domain read indeterminate frame fields')
        if ot['newSDKInstructionWitnesses']or st['newSDKInstructionWitnesses']:raise ValueError('028 primary run cannot discover SDK witnesses')
        coverage.update(ot['visited']);rows.append(dict(case=case,original=original,source=source,windows=window,android=a64,comparison=comparison,originalTrace=ot,sourceTrace=st,androidTrace=at))
        if(index+1)%8==0:print('028 positive',index+1,flush=True)
    negative=[]
    if controls:
        for variant,(_,unused,unused2,case)in SPECS.items():
            original,unused,oh=oracle.execute(image,component,case,False);model.validate(original['words'],case)
            wrong=builder.arm(output/'controls'/variant/'arm',variant);wn=builder.native(output/'controls'/variant/'windows',variant);wa=builder.android_model(output/'controls'/variant/'android',variant)
            result,unused,rh=oracle.execute(image,wrong,case,True);other,unused,unused_heap=android.execute(wa,case)
            for value in(result,wn['observations'][0],other):
                if value['words'][0]:raise ValueError('028 control left declared fixture domain '+variant)
                try:model.validate(value['words'],case)
                except ValueError:pass
                else:raise ValueError('028 returning wrong source escaped independent models '+variant)
            negative.append(dict(variant=variant,case=case,armActuallyReturned=True,windowsActuallyReturned=True,a64ActuallyReturned=True,
              rejectedByIndependentModels=True,sameFinalArmArena=oh==rh,source=result,windows=wn['observations'][0],android=other))
            print('028 control',variant,flush=True)
    if any(record(ROOT/row['path'])!=row for row in pins):raise ValueError('028 source drift during execution')
    result=dict(schemaVersion=1,status='bounded-execute028-qualified'if controls else'diagnostic-positive-only',inputs=pins,measurement=measured,cases=rows,negativeControls=negative,
      originalReturns=len(rows),sourceReturns=len(rows),windowsReturns=len(rows),a64ModelReturns=len(rows),armElfSha256=component['elfSha256'],windowsExeSha256=native['exeSha256'],a64ElfSha256=portable['elfSha256'],
      effectiveTools=dict(python=sys.version,unicorn=dict(packageMetadata=importlib.metadata.version('unicorn'),moduleVersion=unicorn.__version__,nativeVersion=unicorn.uc_version(),nativeSha256=sha(Path(unicorn.unicorn_py3.unicorn.uclib._name).read_bytes())),capstone=dict(packageMetadata=importlib.metadata.version('capstone'),moduleVersion=capstone.__version__,nativeVersion=capstone.cs_version(),nativeSha256=sha(Path(capstone._cs._name).read_bytes()))),
      originalVisitedInstructions=sorted(coverage),wholeExecuteComplete=False,wholeVmOrGameQualified=False,acceptedSourceCreditGranted=0,requestedExactBytes=0,
      sourceOriginalModuleMapped=False,physicalAndroidQualified=False,originalEndpointsAndTablesPreserved=True,
      scriptAndEntryErrorArenasComparedWithoutMasks=True,nativeInactiveFields='Original NativeCall frame instruction/literals/target/root can retain dead-stack bytes; source zeros. Raw differences preserved, semantic domain excludes observers of those fields. No universal machine-state equivalence.',
      floatingEnvironment='VFP/FP enabled, traps disabled; mandatory controls and callee-saved FP registers checked. Sticky exception-status observations recorded separately; cross-platform whole-status equivalence is not claimed.',
      errorDomain='Actual literal depth/arity errors through frozen020/025/015; error-handler NULL guard only. General exception/debug callbacks and opcode unwind unsupported.',
      opcodeDomain='Mode0 non-generator scripts with named supported loads/moves/logic/branches/wrapping-int arithmetic/RETURN/CALL to ordinary script or native; actual fixture cohort only; remaining handlers and provider domains unqualified.')
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,default=ROOT/'work/squirrel-execute028/qualified');parser.add_argument('--skip-controls',action='store_true')
    args=parser.parse_args();result=execute(args.output,not args.skip_controls);print(json.dumps({key:result[key]for key in('status','originalReturns','sourceReturns','windowsReturns','a64ModelReturns')}))
