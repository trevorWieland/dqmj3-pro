import argparse
import json
from pathlib import Path

import ci_native_build as ci
import squirrel_table_lookup019_build as builder
import squirrel_table_lookup019_model as model
import squirrel_table_lookup019_oracle as oracle
import squirrel_table_lookup019_android as android
from squirrel_source_wave002 import sha

ROOT, SOURCE = builder.ROOT, builder.SOURCE
RECEIPTS = {
 'squirrel-reference-prefix012/core-ready.json':'04d700df6bb0c3f42c7018302c43a79ba4fa78b11b1d3635d477df6ef57409cd',
 'squirrel-prototype-release011/ready.json':'75b42c5dcaed077735ece2421f12cc26b71127ad297e7ea9a56dd56e2b6ec092',
 'squirrel-native-closure-release013/ready.json':'4ea663042fca72d9b6fa158e478247cd7de9786341cf92e65024b1860f89aae1',
 'squirrel-weak-reference014/ready.json':'cf161d3eb1630b1272143669774db030327a69616b21b58f6b20c908858c7929',
 'squirrel-string-lifetime015/ready.json':'82e86302072925742becef9de94ccbc62cfd5fd76cfe51a6daa5fe62706f4ee4',
 'squirrel-script-closure017/ready.json':'ab060f71e2783a6c879ea5d82d06644f20674df9a0e875d9e62117805ec9ee15'}
CONTROLS = ('numeric_float_equality_get','leave_weak_wrapped','late_publication','late_retain','return_existing_true','native_fixed_string_offset')
FLOATS = (0,0x80000000,0x3fc00000,0xbfc00000,0x7fc00001,0x7f800001,0x7f800000,0xff800000,
          0x4f000000,0x4effffff,0xcf000000,0xcf000001,1,0x80000001)
ENTRIES = {0x1a1dc8:288,0x19b998:104,0x19b390:128,0x19b414:176,0x19b728:612,0x19b4ec:352,
           0x19e2e8:144,0x666540:232,0x666518:40}


def record(path):
    payload=path.read_bytes()
    return {'path':path.relative_to(ROOT).as_posix(),'bytes':len(payload),'sha256':sha(payload)}


def frozen_inputs():
    pins=[]
    for name,digest in RECEIPTS.items():
        path=ROOT/'evidence/lanes'/name
        if record(path)['sha256']!=digest: raise ValueError('Table frozen dependency receipt changed: '+name)
        ready=ci.read(path)
        records=ready.get('files',[])+ready.get('ownedFiles',[])+ready.get('pins',[])
        if 'ownedFiles' in ready: records+=ci.read(ROOT/ready['pins'][0]['path'])['inputs']
        for item in records:
            if record(ROOT/item['path'])!=item: raise ValueError('Table frozen dependency changed: '+item['path'])
        pins += records+[record(path)]
    return pins


def execute(output):
    output=output.resolve()
    if not output.is_relative_to(ROOT/'work/squirrel-table-lookup019'): raise ValueError('Table qualification must remain private to019')
    output.mkdir(parents=True,exist_ok=True)
    pins=frozen_inputs()
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    if sha(image)!='d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126': raise ValueError('Canonical table module changed')
    census_path=ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json'
    census=ci.read(census_path)
    boundaries=[]
    for entry,size in ENTRIES.items():
        row=next(item for item in census['functions']if item['address']==entry)
        if row['mode']!='ARM' or row['ranges']!=[{'start':entry,'endExclusive':entry+size,'bytes':size}]: raise ValueError('Table canonical extent changed')
        boundaries.append({'entry':entry,'instructionRanges':row['ranges'],'instructionBytes':size,
                           'bodySha256':sha(image[entry-0x100000:entry+size-0x100000])})
    paths=builder.sources(output,'normal')+list(SOURCE.glob('*'))+list((ROOT/'toolscripts').glob('squirrel_table_lookup019*.py'))
    paths += [ROOT/'tests/test_squirrel_table_lookup019.py',census_path,
              ROOT/'source/squirrel-wave001/upstream/squirrel/sqtable.cpp']
    pins=sorted({item['path']:item for item in pins+[record(path)for path in paths if path.is_file()]}.values(),key=lambda row:row['path'])
    component=builder.arm(output/'arm')
    native=builder.native(output/'native')
    a64=builder.android_model(output/'android-model')
    if [{key:row[key]for key in ('value_kind','old_kind','query_kind')}for row in native['observations']]!=model.cases(): raise ValueError('Windows table corpus differs')
    native_models=[model.validate(row['words'],case)for row,case in zip(native['observations'],model.cases())]
    rows,coverage=[],set()
    for index,case in enumerate(model.cases()):
        original,ot,oh=oracle.execute(image,component,case,False)
        source,st,sh=oracle.execute(image,component,case,True)
        portable,at,unused=android.execute(a64,case)
        if original!=source or oh!=sh: raise ValueError('Actual table provider ARM whole-heap comparison failed')
        logical=model.validate(source['words'],case)
        if model.validate(portable['words'],case)['logicalMap']!=logical['logicalMap'] or native_models[index]['logicalMap']!=logical['logicalMap']:
            raise ValueError('Independent native table topology/logical map differs')
        coverage.update(ot['visited'])
        rows.append({'case':case,'original':original,'source':source,'android':portable,'originalTrace':ot,'sourceTrace':st,'androidTrace':at})
    floating=[]
    seed={'value_kind':0,'old_kind':0,'query_kind':0}
    for bits in FLOATS:
        original,ot,unused=oracle.execute(image,component,seed,False,float_bits=bits)
        source,st,unused=oracle.execute(image,component,seed,True,float_bits=bits)
        expected=model.hash_key([model.FLOAT,bits,0,0],4,{})
        if original!=source or original['words']!=[1,model.INTEGER,41,expected] or ot['originalHashObservations']!=[expected]:
            raise ValueError('Actual Get VFP conversion/raw-key boundary differs')
        floating.append({'bits':bits,'hash':expected,'originalExceptionStatus':ot['finalFPSCRExceptionStatus'],
                         'sourceExceptionStatus':st['finalFPSCRExceptionStatus'],'mandatoryControlsPreserved':True})
    contexts=[]
    for controls in (0,0x400000,0x800000,0xc00000,0x1000000,0x2000000,0x3000000,0x3c00000):
        original,ot,oh=oracle.execute(image,component,seed,False,fp_controls=controls)
        source,st,sh=oracle.execute(image,component,seed,True,fp_controls=controls)
        if original!=source or oh!=sh: raise ValueError('Typed table state differs under declared floating controls')
        contexts.append({'controls':controls,'originalStatus':ot['finalFPSCRExceptionStatus'],'sourceStatus':st['finalFPSCRExceptionStatus'],
                         'calleeSavedD8ToD15Preserved':True})
    controls=[]
    for variant in CONTROLS:
        wrong=builder.arm(output/variant/'arm',variant)
        wn=builder.native(output/variant/'native',variant)
        wa=builder.android_model(output/variant/'android',variant)
        rejected=[]
        for index,(row,case) in enumerate(zip(wn['observations'],model.cases())):
            try:model.validate(row['words'],case)
            except ValueError:rejected.append(index)
        if len(wn['observations'])!=len(rows) or not rejected: raise ValueError('Windows table control did not return and differ')
        case={'value_kind':3 if variant=='leave_weak_wrapped' else 1,'old_kind':3,
              'query_kind':0 if variant=='numeric_float_equality_get' else 1}
        index=model.cases().index(case)
        actual,unused,heap=oracle.execute(image,wrong,case,True)
        portable,unused,unused_heap=android.execute(wa,case)
        try:model.validate(portable['words'],case)
        except ValueError: pass
        else: raise ValueError('A64 table control was accepted')
        same=actual['arenaSha256']==rows[index]['source']['arenaSha256']
        if not actual['returned'] or not portable['returned'] or not same: raise ValueError('Table control lost normal-return/same-final-heap property')
        if variant=='native_fixed_string_offset':
            if actual!=rows[index]['source']: raise ValueError('Fixed target offset should remain valid only on ARM layout')
        elif actual==rows[index]['source']: raise ValueError('ARM table control did not differ')
        controls.append({'variant':variant,'case':case,'armActuallyReturned':True,'androidModelActuallyReturned':True,
                         'allWindowsCasesReturned':True,'windowsRejectedCases':len(rejected),'sameFinalArmHeap':same,
                         'armSemanticDifference':variant!='native_fixed_string_offset','a64SemanticDifference':True})
    body=set(range(0x1a1dc8,0x1a1ee8,4))
    if body-coverage: raise ValueError('Complete table Get instruction coverage missing')
    for boundary in boundaries:
        pcs=set(range(boundary['entry'],boundary['entry']+boundary['instructionBytes'],4))
        boundary['visitedInstructions']=len(pcs&coverage)
        boundary['totalInstructions']=len(pcs)
    if any(record(ROOT/item['path'])!=item for item in pins): raise ValueError('Table input changed during qualification')
    result={'schemaVersion':1,'status':'bounded-real-table-string-get-provider-verified','moduleSha256':sha(image),
        'inputs':pins,'boundaries':boundaries,'cases':rows,'negativeControls':controls,'floatingBoundaryCases':floating,'floatingControlCases':contexts,
        'originalReturns':len(rows),'sourceReturns':len(rows),'nativeReturns':len(rows),'androidModelReturns':len(rows),
        'originalGetInstructionsVisited':len(body&coverage),'originalGetInstructions':72,
        'armElfSha256':component['elfSha256'],'native':native,'android':{'elfSha256':a64['elfSha256'],'objects':a64['objects']},
        'completeOwnedArmHeapCompared':True,'independentNativeTopologyValidated':True,'nativeOriginalBucketsCopied':False,
        'vtableNormalization':False,'sourceOriginalModuleMapped':False,'originalVtablesPreserved':True,
        'fpscrExceptionStatusUniversallyEqual':False,'mandatoryFloatingControlAndCalleeSavedVfpAbiPreserved':True,
        'initializerPrefixQualifiedAsPreconditionOnly':True,'fullVtableBeyondLifetimeSlotsQualified':False,
        'fullBroadLookup198578Qualified':False,'wholeVmCreditGranted':0,'acceptedSourceCreditGranted':0,'requestedExactBytes':0,
        'newGetInstructionBytesProposedForIndependentReview':288,'physicalAndroidOrGameExecution':False,
        'limits':['successful aligned nonoverflow allocations; finite valid power-of-two table chains; external nonalias destination',
          'actual string015 raw-byte interned keys and exact opaque011 reference/vtable contracts only',
          'growth4/8/16/32 and NULL delegate lifetime composition; shrink/delegate-cycle/callback table mutation remain unqualified',
          'manual named closure/prototype lifetime inputs do not claim their constructors',
          'quiet NaN and out-of-range VFP conversions have explicitly differing IOC flags; no universal machine-state equivalence',
          'full shared state, general metamethods, broad lookup/error, GC and allocator recovery remain open',
          'A64 model is not physical Android execution; original initializer prefix is a precondition, not full function credit']}
    (output/'report.json').write_text(json.dumps(result,indent=2)+'\n',encoding='utf-8')
    return result


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--output',type=Path,default=ROOT/'work/squirrel-table-lookup019/qualified')
    result=execute(parser.parse_args().output)
    print(json.dumps({key:result[key]for key in ('status','originalReturns','sourceReturns','nativeReturns','androidModelReturns')}))
