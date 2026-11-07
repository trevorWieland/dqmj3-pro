import argparse
import json
import re
from pathlib import Path

import squirrel_vm_call022_build as builder
import squirrel_vm_call022_oracle as oracle
import squirrel_vm_call022_android as android
import squirrel_vm_call022_model as model
from squirrel_vm_call022_controls import SPECS
from squirrel_vm_call022_measure import measure,MODULE_SHA
from squirrel_source_wave002 import sha

ROOT=builder.ROOT
FROZEN={
 'squirrel-lookup020':'a48bda1f2ed39c1f7b49ead8b6d250a3d841a5e21a57c1c40940bac7b15d1884',
 'squirrel-prototype-release011':'75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092',
 'squirrel-native-closure-release013':'4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1',
 'squirrel-weak-reference014':'cf161d3eb1630b1272143669774db030327a69616b21b58f6b20c908858c7929',
 'squirrel-string-lifetime015':'82e86302072925742becef9de94ccbc62cfd5fd76cfe51a6daa5fe62706f4ee4',
 'squirrel-script-closure017':'ab060f71e2783a6c879ea5d82d06644f20674df9a0e875d9e62117805ec9ee15',
}


def record(path):
    data=path.read_bytes();return {'path':path.relative_to(ROOT).as_posix(),'bytes':len(data),'sha256':sha(data)}


def frozen_inputs():
    items=[]
    for lane,digest in FROZEN.items():
        path=ROOT/'evidence/lanes'/lane/'ready.json'
        if sha(path.read_bytes())!=digest:raise ValueError('022 frozen provider changed: '+lane)
        ready=json.loads(path.read_text(encoding='utf-8'));items +=ready.get('files',ready.get('ownedFiles',[])+ready.get('pins',[]))+[record(path)]
    for item in items:
        if record(ROOT/item['path'])!=item:raise ValueError('022 frozen provider input changed: '+item['path'])
    return items


def configuration(row):
    case={'length':5,'captures':1,'flags':0};kwargs={'cleanup':bool(row['cleanup'])};kind=row.get('kind','native')
    if kind=='native':case={key:row[key]for key in('length','captures','flags')}
    elif kind=='contract':kwargs.update(contract_mode=row['mode'],raise_error=row['raise_error'])
    elif kind=='error':kwargs['error_case']=row['mode']
    elif kind=='native_profile':kwargs['native_profile']=row['mode']
    else:raise ValueError('022 unknown corpus kind')
    return case,kwargs


def validate(words,case,kwargs):
    if kwargs.get('contract_mode'):return model.validate_contract(words,kwargs['contract_mode'],kwargs.get('raise_error',0),kwargs['cleanup'])
    if kwargs.get('error_case')is not None:return model.validate_error(words,kwargs['error_case'],kwargs['cleanup'])
    if kwargs.get('native_profile')is not None:return model.validate_native_profile(words,kwargs['native_profile'],kwargs['cleanup'])
    return model.validate(words,case,kwargs['cleanup'])


def expected_corpus():
    rows=[{'kind':'native','case':case,'kwargs':{'cleanup':cleanup}}for case in model.cases()for cleanup in(False,True)]
    rows +=[{'kind':'contract','case':{'length':5,'captures':1,'flags':0},'kwargs':{'cleanup':cleanup,'contract_mode':mode,'raise_error':raw}}
      for mode in(1,2,3,4,5,6,7,10,11,12,13,14,15)for raw in(0,0x80000000,0x7fc12345,0xffffffff)for cleanup in(False,True)]
    rows +=[{'kind':'error','case':{'length':5,'captures':1,'flags':0},'kwargs':{'cleanup':cleanup,'error_case':kind}}for kind in range(3)for cleanup in(False,True)]
    rows +=[{'kind':'native_profile','case':{'length':5,'captures':1,'flags':0},'kwargs':{'cleanup':cleanup,'native_profile':profile}}for profile in tuple(range(11))+(12,13,14)for cleanup in(False,True)]
    return rows


def execute(output,controls=True):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-vm-call022'):raise ValueError('022 raw qualification must remain private')
    output.mkdir(parents=True,exist_ok=True);pins=frozen_inputs()
    paths=list(builder.SOURCE.glob('*'))+list((ROOT/'toolscripts').glob('squirrel_vm_call022*.py'))+[ROOT/'tests/test_squirrel_vm_call022.py']
    paths+=builder.sources(output,'normal')
    pending=list(paths);seen=set()
    while pending:
        path=pending.pop()
        if path in seen or not path.is_file():continue
        seen.add(path)
        if path.suffix in('.c','.h'):
            for name in re.findall(r'^#include "([^"]+)"',path.read_text(encoding='utf-8'),re.M):
                header=(path.parent/name).resolve()
                if not any(header.is_relative_to(ROOT/name)for name in('source','src'))or not header.is_file():raise ValueError('022 header escaped public source')
                pending.append(header)
    paths+=list(seen)
    paths +=[ROOT/'toolscripts/squirrel_reference_prefix012_build.py',ROOT/'toolscripts/squirrel_source_wave002.py',ROOT/'tools/clang-21/clang.exe',ROOT/'tools/clang-21/ld.lld.exe']
    pins=sorted({item['path']:item for item in pins+[record(path)for path in paths if path.is_file()]}.values(),key=lambda item:item['path'])
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!=MODULE_SHA:raise ValueError('022 canonical module changed')
    measured=measure();component=builder.arm(output/'arm');windows=builder.native(output/'windows');portable=builder.android_model(output/'android')
    corpus=expected_corpus()
    actual=[{'kind':row.get('kind','native'),'case':configuration(row)[0],'kwargs':configuration(row)[1]}for row in windows['observations']]
    if actual!=corpus:raise ValueError('022 actual Windows corpus differs')
    rows=[];coverage=set();statuses=[]
    for index,(item,native)in enumerate(zip(corpus,windows['observations'])):
        case,kwargs=item['case'],item['kwargs']
        original,ot,oh=oracle.execute(image,component,case,False,**kwargs)
        source,st,sh=oracle.execute(image,component,case,True,**kwargs)
        a64,at,unused=android.execute(portable,case,**kwargs)
        for result in(original,source,native,a64):validate(result['words'],case,kwargs)
        if original!=source or oh!=sh:raise ValueError('022 original/source full initialized heap differs')
        if ot['handlerInactiveFrameReads']or st['handlerInactiveFrameReads']:raise ValueError('022 handler observed inactive frame bytes')
        coverage.update(ot['visited']);statuses.append({'caseIndex':index,'original':[row['fpscr']for row in ot['fpscrObservations']],
          'source':[row['fpscr']for row in st['fpscrObservations']]})
        rows.append({'input':item,'original':original,'source':source,'windows':native,'android':a64,'originalTrace':ot,'sourceTrace':st,'androidTrace':at})
        if(index+1)%16==0:print('022 positive',index+1,flush=True)
    boundaries=[]
    for root in measured['roots']:
        body={pc for span in root['instructionRanges']for pc in range(span['start'],span['endExclusive'],4)}
        boundaries.append({key:root[key]for key in('entry','instructionRanges','instructionBytes','rangeHashes')}|{
          'visitedInstructions':len(body&coverage),'totalInstructions':len(body),'domainUnvisitedInstructionAddresses':sorted(body-coverage)})
    negative=[]
    if controls:
        for variant,(_,unused,unused2,spec)in SPECS.items():
            case=spec.get('case',{'length':5,'captures':1,'flags':0});kwargs={key:value for key,value in spec.items()if key!='case'}
            original,unused,oh=oracle.execute(image,component,case,False,**kwargs);validate(original['words'],case,kwargs)
            wrong=builder.arm(output/'controls'/variant/'arm',variant);wn=builder.native(output/'controls'/variant/'windows',variant)
            wa=builder.android_model(output/'controls'/variant/'android',variant)
            result,unused,rh=oracle.execute(image,wrong,case,True,**kwargs);other,unused,unused_heap=android.execute(wa,case,**kwargs)
            for observation in(result,wn['observations'][0],other):
                if observation['words'][0]:raise ValueError('022 control left fixture domain: '+variant)
                try:validate(observation['words'],case,kwargs)
                except ValueError:pass
                else:raise ValueError('022 returning control escaped semantic model: '+variant)
            negative.append({'variant':variant,'input':{'case':case,'kwargs':kwargs},'armNormallyReturned':True,'windowsNormallyReturned':True,
              'a64ModelNormallyReturned':True,'rejectedByIndependentModelOnAllThree':True,'sameFinalArmArena':oh==rh,
              'sourceResult':result,'nativeResult':wn['observations'][0],'androidResult':other})
            print('022 control',variant,flush=True)
    seed_rows=[];case={'length':5,'captures':1,'flags':0}
    expected,unused,eh=oracle.execute(image,component,case,True)
    for seed in(17,113,991,31337):
        result,trace,heap=oracle.execute(image,component,case,False,stack_seed=seed)
        if result['words']!=expected['words']or trace['handlerInactiveFrameReads']:raise ValueError('022 inactive seed changed semantic state')
        changed=[index for index,(a,b)in enumerate(zip(heap,eh))if a!=b]
        admitted={0xc000+field+byte for field in(0,4,32,40)for byte in range(4)}
        if not changed or not set(changed)<=admitted:raise ValueError('022 indeterminate frame qualification changed')
        seed_rows.append({'seed':seed,'semanticStateEqual':True,'wholeArenaEqual':False,'changedByteOffsets':changed,'inactiveObserverReads':[]})
    if any(record(ROOT/item['path'])!=item for item in pins):raise ValueError('022 input drift during qualification')
    result={'schemaVersion':1,'status':'bounded-native-call-graph022-qualified'if controls else'diagnostic-native-call022-positive-only','inputs':pins,'moduleSha256':MODULE_SHA,'measurement':measured,
      'boundaries':boundaries,'cases':rows,'negativeControls':negative,'inactiveFrameSeedQualification':seed_rows,'fpscrPerInput':statuses,
      'originalReturns':len(rows),'sourceReturns':len(rows),'windowsReturns':len(rows),'a64ModelReturns':len(rows),
      'armElfSha256':component['elfSha256'],'windowsExeSha256':windows['exeSha256'],'a64ElfSha256':portable['elfSha256'],
      'wholeInitializedArenaEqual':True,'deadCpuStackExplicitlyInitializedForByteEquality':True,'semanticEqualityForOtherStackSeedsIsSeparate':True,
      'originalEndpointsAndVtablesPreserved':True,'sourceOriginalModuleMapped':False,'genuineNativePointersAndCallbacks':True,
      'scriptExecuteProviderRecovered':False,'classCreationProviderRecovered':False,'typeError1a1010ProviderRecovered':False,
      'literalOnlyFormattingDomain':True,'generalFormattingQualified':False,'parentFrame018AdapterQualified':False,
      'fullTransitiveGraphClosed':False,'wholeVmCreditGranted':0,'acceptedSourceCreditGranted':0,'duplicateCanonicalCreditRequested':0,
      'physicalAndroidOrGameExecution':False,'inactiveFrameRawObserversExcluded':True,'fpscrUniversalMachineStateEqualityClaimed':False}
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8');return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,default=ROOT/'work/squirrel-vm-call022/qualified');parser.add_argument('--skip-controls',action='store_true')
    arguments=parser.parse_args();result=execute(arguments.output,not arguments.skip_controls)
    print(json.dumps({key:result[key]for key in('status','originalReturns','sourceReturns','windowsReturns','a64ModelReturns')}))
