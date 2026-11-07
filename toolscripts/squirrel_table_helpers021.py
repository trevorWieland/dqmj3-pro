import argparse
import json
from pathlib import Path

import ci_native_build as ci
import squirrel_table_helpers021_build as builder
import squirrel_table_helpers021_model as model
import squirrel_table_helpers021_oracle as oracle
import squirrel_table_helpers021_android as android
import squirrel_table_lookup019_build as baseline_build
import squirrel_table_lookup019_model as baseline_model
import squirrel_table_lookup019_oracle as baseline_oracle
from squirrel_source_wave002 import sha

ROOT,SOURCE=builder.ROOT,builder.SOURCE
READY_SHA='fbb50eb434cdb2e81276ba160b6ae04f076d5fb4e992253d0eda735cb0b5ac56'
ENTRIES={0x19b998:104,0x19b390:128,0x19b414:176,0x19b728:612,0x19b4ec:352,0x19e2e8:144,0x666540:232,0x666518:40}
DOMAIN_UNVISITED={0x19b8bc,0x19b8c0,0x19b5e8,0x19b5ec,0x19b5f0,0x19b5f4}


def record(path):
    data=path.read_bytes()
    return {'path':path.relative_to(ROOT).as_posix(),'bytes':len(data),'sha256':sha(data)}


def frozen_inputs():
    path=ROOT/'evidence/lanes/squirrel-table-lookup019/ready.json'
    if record(path)['sha256']!=READY_SHA:raise ValueError('Immutable019 ready receipt changed')
    ready=ci.read(path);items=ready['ownedFiles']+ready['pins']+[record(path)]
    items+=ci.read(ROOT/ready['pins'][0]['path'])['inputs']
    for item in items:
        if record(ROOT/item['path'])!=item:raise ValueError('Immutable019 input changed: '+item['path'])
    return items


def execute(output):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-table-helpers021'):raise ValueError('021 reports must remain private')
    output.mkdir(parents=True,exist_ok=True)
    pins=frozen_inputs()
    paths=list(SOURCE.glob('*'))+list((ROOT/'toolscripts').glob('squirrel_table_helpers021*.py'))+[ROOT/'tests/test_squirrel_table_helpers021.py']
    paths+=builder.sources(output,'normal')
    pins=sorted({item['path']:item for item in pins+[record(path)for path in paths if path.is_file()]}.values(),key=lambda item:item['path'])
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126':raise ValueError('021 canonical module changed')
    component=builder.arm(output/'arm');native=builder.native(output/'native');a64=builder.android_model(output/'android-model')
    if [{key:row[key]for key in ('mode','requested','flags')}for row in native['observations']]!=model.cases():raise ValueError('021 Windows corpus differs')
    rows,coverage,key_witnesses=[],set(),[]
    for index,case in enumerate(model.cases()):
        original,ot,oh=oracle.execute(image,component,case,False)
        source,st,sh=oracle.execute(image,component,case,True)
        portable,at,unused=android.execute(a64,case)
        if original!=source or oh!=sh:raise ValueError('021 original/source whole-heap comparison differs')
        for result in (original,portable,native['observations'][index]):model.validate(result['words'],case)
        coverage.update(ot['visited']);key_witnesses+=ot['originalRehashRemainingKeyReferences']
        rows.append({'case':case,'original':original,'source':source,'android':portable,'originalTrace':ot,'sourceTrace':st,'androidTrace':at})
    baseline=baseline_build.arm(output/'frozen019-arm');baseline_rows=[]
    for case in baseline_model.cases():
        original,ot,oh=baseline_oracle.execute(image,baseline,case,False)
        source,st,sh=baseline_oracle.execute(image,baseline,case,True)
        if original!=source or oh!=sh:raise ValueError('Frozen019 baseline ARM replay differs')
        baseline_model.validate(source['words'],case)
        coverage.update(ot['visited'])
        baseline_rows.append({'case':case,'originalTrace':ot,'originalArenaSha256':original['arenaSha256']})
    if not key_witnesses or any(value<1 for value in key_witnesses):raise ValueError('Original rehash key ownership proof failed')
    boundaries=[];missing=set()
    for entry,size in ENTRIES.items():
        body=set(range(entry,entry+size,4));unvisited=body-coverage;missing|=unvisited
        boundaries.append({'entry':entry,'instructionBytes':size,'instructionRanges':[{'start':entry,'endExclusive':entry+size,'bytes':size}],
          'bodySha256':sha(image[entry-0x100000:entry+size-0x100000]),'visitedInstructions':len(body&coverage),
          'totalInstructions':len(body),'domainUnvisitedInstructionAddresses':sorted(unvisited)})
    if missing!=DOMAIN_UNVISITED:raise ValueError('021 helper instruction/domain closure differs')
    controls=[]
    for variant,fields in builder.CONTROL_CASES.items():
        case=dict(zip(('mode','requested','flags'),fields));index=model.cases().index(case)
        wrong=builder.arm(output/variant/'arm',variant);wn=builder.native(output/variant/'native',variant);wa=builder.android_model(output/variant/'android',variant)
        actual,unused,heap=oracle.execute(image,wrong,case,True);portable,unused,unused_heap=android.execute(wa,case)
        if not actual['returned']or not portable['returned']or len(wn['observations'])!=1:raise ValueError('021 control failed to normally return its selected input')
        for result in (actual,portable,wn['observations'][0]):
            try:model.validate(result['words'],case)
            except ValueError:pass
            else:raise ValueError('021 semantic control was accepted: '+variant)
        same=actual['arenaSha256']==rows[index]['source']['arenaSha256']
        if variant in ('set_miss_true','new_slot_late_publication','delegate_late_retain','delegate_early_publication','destructor_early_weak_reset','release_wrong_size')and not same:raise ValueError('021 same-final-heap control lost its property')
        controls.append({'variant':variant,'case':case,'armActuallyReturned':True,'windowsSelectedInputActuallyReturned':True,
          'a64ModelActuallyReturned':True,'sameFinalArmHeap':same,'semanticDifferenceDetected':True})
    if any(record(ROOT/item['path'])!=item for item in pins):raise ValueError('021 input drift during qualification')
    result={'schemaVersion':1,'status':'bounded-complete-table-helpers021-verified','inputs':pins,'moduleSha256':sha(image),'boundaries':boundaries,
      'cases':rows,'baseline019Replay':baseline_rows,'negativeControls':controls,'originalReturns':len(rows),'sourceReturns':len(rows),
      'nativeReturns':len(rows),'androidModelReturns':len(rows),'baselineOriginalReturns':len(baseline_rows),'baselineSourceReturns':len(baseline_rows),
      'baseline019ArmElfSha256':baseline['elfSha256'],'armElfSha256':component['elfSha256'],'native':native,'android':{'elfSha256':a64['elfSha256'],'objects':a64['objects']},
      'domainUnvisitedInstructionAddresses':sorted(missing),'originalRemainingRehashKeyReferences':key_witnesses,
      'completeOwnedArmHeapCompared':True,'independentOwnershipAndNativeTopologyCompared':True,'sourceOriginalModuleMapped':False,
      'originalVtablesPreserved':True,'vtableNormalization':False,'immutable019EngineChanged':False,'unrecoveredErrorHelper146590OutcomeClaimed':False,
      'fpscrExceptionStatusUniversallyEqual':False,'fullVtableBeyondLifetimeSlotsQualified':False,'fullTransitiveGraphClosed':False,
      'wholeVmCreditGranted':0,'acceptedSourceCreditGranted':0,'requestedExactBytes':0,'duplicateCanonicalCreditGranted':0,
      'completeHelperInstructionBytesProposedForIndependentReview':1788,'physicalAndroidOrGameExecution':False,
      'limits':['listed bounded scalar/raw-pointer/string/native key families and exact opaque lifetime providers only',
        'successful aligned nonoverflow allocations; capacities4–32; unique active keys and valid finite chains',
        'ordinary nonwrapping owned references; no reentrant mutations or asynchronous raw-memory observers',
        'NewSlot NULL/corrupt-chain error transfer excluded; Rehash old-key finalizer unreachable by retained-key ownership invariant',
        'inactive NULL-key values remain real owned data and their finalizers are executed',
        'frozen019 IOC limitation and three-slot lifetime-only vtable contract retained',
        'no GC, general metamethods, broad lookup/error, allocator recovery, complete VM/game or physical Android claim']}
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    return result


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--output',type=Path,default=ROOT/'work/squirrel-table-helpers021/qualified')
    result=execute(parser.parse_args().output)
    print(json.dumps({key:result[key]for key in ('status','originalReturns','sourceReturns','nativeReturns','androidModelReturns')}))
