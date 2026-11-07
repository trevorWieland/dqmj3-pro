import argparse
import json
import re
from pathlib import Path
import squirrel_type_error025_build as builder
import squirrel_type_error025_model as model
import squirrel_type_error025_oracle as oracle
import squirrel_type_error025_android as android
from squirrel_type_error025_controls import SPECS
from squirrel_type_error025_measure import measure,MODULE_SHA
from squirrel_source_wave002 import sha
ROOT=builder.ROOT
READY022='64a08d949e507e59737db08356f5f45221ae18581bba315a2e58ce3036742202'


def record(path):
    data=path.read_bytes();return {'path':path.relative_to(ROOT).as_posix(),'bytes':len(data),'sha256':sha(data)}


def frozen_inputs():
    path=ROOT/'evidence/lanes/squirrel-vm-call022/ready.json'
    if sha(path.read_bytes())!=READY022:raise ValueError('025 frozen022 receipt changed')
    ready=json.loads(path.read_text(encoding='utf-8'));items=ready['files']+[record(path)]
    items+=json.loads((ROOT/'evidence/lanes/squirrel-vm-call022/execution.json').read_text(encoding='utf-8'))['primaryInputs']
    for item in items:
        if record(ROOT/item['path'])!=item:raise ValueError('025 frozen provider input changed: '+item['path'])
    return items


def execute(output,controls=True):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-type-error025'):raise ValueError('025 raw report stays private')
    output.mkdir(parents=True,exist_ok=True);pins=frozen_inputs();paths=list(builder.SOURCE.glob('*'))+list((ROOT/'toolscripts').glob('squirrel_type_error025*.py'))
    paths +=[ROOT/'tests/test_squirrel_type_error025.py',ROOT/'evidence/lanes/squirrel-type-error025/reference-sdk-additions.json']+builder.sources(output,'normal')
    pending=list(paths);seen=set()
    while pending:
        path=pending.pop()
        if path in seen or not path.is_file():continue
        seen.add(path)
        if path.suffix in('.c','.h'):
            for name in re.findall(r'^#include "([^"]+)"',path.read_text(encoding='utf-8'),re.M):
                header=(path.parent/name).resolve()
                if not any(header.is_relative_to(ROOT/name)for name in('source','src'))or not header.is_file():raise ValueError('025 header escaped public source')
                pending.append(header)
    paths+=list(seen);pins=sorted({item['path']:item for item in pins+[record(path)for path in paths if path.is_file()]}.values(),key=lambda item:item['path'])
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('025 original module changed')
    measured=measure();component=builder.arm(output/'arm');native=builder.native(output/'windows');portable=builder.android_model(output/'android')
    if [{key:row[key]for key in('index','mask','type','flags','cleanup')}for row in native['observations']]!=model.cases():raise ValueError('025 actual native corpus differs')
    rows=[];coverage=set()
    for index,(case,window)in enumerate(zip(model.cases(),native['observations'])):
        original,ot,oh=oracle.execute(image,component,case,False);source,st,sh=oracle.execute(image,component,case,True);a64,at,unused=android.execute(portable,case)
        for result in(original,source,window,a64):model.validate(result['words'],case)
        if original!=source or oh!=sh:raise ValueError('025 original/source full initialized arena differs')
        if ot['newSDKInstructionWitnesses']or st['newSDKInstructionWitnesses']:raise ValueError('025 primary run must not discover new SDK code')
        coverage.update(ot['visited']);rows.append({'case':case,'original':original,'source':source,'windows':window,'android':a64,'originalTrace':ot,'sourceTrace':st,'androidTrace':at})
        if(index+1)%8==0:print('025 positive',index+1,flush=True)
    boundaries=[]
    for entry in(0x1a1010,0x1a15ec):
        root=next(item for item in measured['roots']if item['entry']==entry);body=set(range(entry,entry+root['instructionBytes'],4))
        boundaries.append({key:root[key]for key in('entry','instructionRanges','instructionBytes','sha256','claim')}|{'visitedInstructions':len(body&coverage),'totalInstructions':len(body),'domainUnvisitedInstructionAddresses':sorted(body-coverage)})
    negative=[]
    if controls:
        for variant,(_,unused,unused2,case)in SPECS.items():
            original,unused,oh=oracle.execute(image,component,case,False);model.validate(original['words'],case)
            wrong=builder.arm(output/'controls'/variant/'arm',variant);wn=builder.native(output/'controls'/variant/'windows',variant);wa=builder.android_model(output/'controls'/variant/'android',variant)
            result,unused,rh=oracle.execute(image,wrong,case,True);other,unused,unused_heap=android.execute(wa,case)
            for value in(result,wn['observations'][0],other):
                if value['words'][0]:raise ValueError('025 control left declared fixture domain: '+variant)
                try:model.validate(value['words'],case)
                except ValueError:pass
                else:raise ValueError('025 wrong implementation escaped semantic models: '+variant)
            negative.append({'variant':variant,'case':case,'armActuallyReturned':True,'windowsActuallyReturned':True,'a64ModelActuallyReturned':True,
              'rejectedByIndependentModels':True,'sameFinalArmArena':oh==rh,'source':result,'windows':wn['observations'][0],'android':other})
            print('025 control',variant,flush=True)
    if any(record(ROOT/item['path'])!=item for item in pins):raise ValueError('025 input drift during qualification')
    result={'schemaVersion':1,'status':'bounded-actual-native-type-error025-qualified'if controls else'diagnostic-type-error025-positive-only',
      'moduleSha256':MODULE_SHA,'inputs':pins,'measurement':measured,'boundaries':boundaries,'cases':rows,'negativeControls':negative,
      'originalReturns':len(rows),'sourceReturns':len(rows),'windowsReturns':len(rows),'a64ModelReturns':len(rows),
      'armElfSha256':component['elfSha256'],'windowsExeSha256':native['exeSha256'],'a64ElfSha256':portable['elfSha256'],
      'wholeInitializedArenaCompared':True,'originalEndpointsAndVtablesPreserved':True,'sourceOriginalModuleMapped':False,
      'actualFrozen022MismatchTypeErrorBoundaryClosed':True,'recoveredFullBroadToString508Body':False,
      'concatDomain':'actual String015 inputs only; no general coercion/metamethod claim',
      'formatDomain':'literal bytes, signed32%d, nonNULL%s, %% only; no general printf/float/pointer claim',
      'generalTypeErrorInvalidTypeNamesOrAllocationFailureQualified':False,'wholeVmOrGameQualified':False,'physicalAndroidQualified':False,
      'requestedExactBytes':0,'acceptedSourceCreditGranted':0,'duplicateTypeNameCreditRequested':0}
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,default=ROOT/'work/squirrel-type-error025/qualified');parser.add_argument('--skip-controls',action='store_true')
    arguments=parser.parse_args();result=execute(arguments.output,not arguments.skip_controls);print(json.dumps({key:result[key]for key in('status','originalReturns','sourceReturns','windowsReturns','a64ModelReturns')}))
