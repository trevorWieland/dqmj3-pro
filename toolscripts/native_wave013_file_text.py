import argparse
import ctypes
import hashlib
import json
import time
from pathlib import Path

import native_wave013_file_text_build as build_tools
import native_wave013_file_original as originals
import native_wave013_file_text_runtime as runtime
from native_wave013_file_text_cases import cases
from native_wave013_file_text_mutations import mutations
from native_wave013_file_text_platforms import layouts,android
from native_wave013_dfa_boundaries import incoming_witnesses
from native_wave013_common import ROOT,WORK,OUT,FLAGS,MODULE_SHA,record,save,sha


NEW=[0x4c4420,0x4c446c]
OUTPUT=OUT/'file/text'
PRODUCERS=['native_wave013_file_text.py','native_wave013_file_text_build.py','native_wave013_file_text_runtime.py',
 'native_wave013_file_text_cases.py','native_wave013_file_text_mutations.py','native_wave013_file_text_platforms.py',
 'native_wave013_file_text_abi.c','native_wave013_file_text_verify.py','native_wave013_file_original.py',
 'native_wave013_file_unicode.py','native_wave013_file_claim.py','native_wave013_common.py',
 'native_wave013_outer_original.py','native_wave013_nfa_original.py','native_wave013_dfa_boundaries.py',
 'native_wave013_dfa_layout.py','native_wave013_nfa_layout.py','native_wave012_arena_oracle.py',
 'native_wave012_ctor_runtime.py','native_wave012_ctor_model.py','native_wave012_arena_model.py']


def headers():
    import re
    found=set()
    pending=[*build_tools.SOURCES,ROOT/'toolscripts/native_wave013_file_text_abi.c']
    while pending:
        path=pending.pop()
        for name in re.findall(r'^#include "([^"\n]+)"',path.read_text(),re.M):
            include=(path.parent/name).resolve()
            if not include.is_relative_to(ROOT) or not include.is_file():
                raise ValueError('Character header is missing or outside repository')
            if include not in found:
                found.add(include)
                pending.append(include)
    return sorted(found)


def exercise(runners,specification,seed=0,thumb=False,flags=0):
    reference,source,native=runners
    units=specification.get('units',[])
    maximum=specification.get('maximum',64)
    operation=specification.get('operation','normalize')
    original=reference.run(units,maximum,seed,operation,thumb,flags)
    arm=source.run(units,maximum,seed,operation,thumb,flags)
    windows=native.run(units,maximum,seed,operation)
    return original,{'arm':runtime.compare(arm,original),'windows':runtime.compare(windows,original)}


def negative_controls(folder,original,receipts):
    rows=[]
    for name,filename,before,after,specification in mutations():
        destination=folder/name
        destination.mkdir(parents=True,exist_ok=True)
        path=ROOT/'src/native/wave013'/filename
        text=path.read_text()
        if before not in text:
            raise ValueError('Character mutation no longer targets actual source')
        changed=destination/filename
        changed.write_text(text.replace(before,after))
        source=build_tools.arm(destination/'arm',receipts,{filename:changed})
        reference=runtime.ArmRunner(original)
        arm=runtime.ArmRunner(source,True)
        native=runtime.NativeRunner(ctypes.CDLL(str(build_tools.windows(destination/'windows',receipts,{filename:changed}))))
        args=[specification.get('units',[]),specification.get('maximum',64),47,specification.get('operation','normalize')]
        target=reference.run(*args,True,15)
        actual=arm.run(*args,True,15)
        windows=native.run(*args)
        result={'name':name,'source':record(changed),'specification':specification}
        for platform,value in [('arm',actual),('windows',windows)]:
            try:
                runtime.compare(value,target)
            except runtime.SemanticMismatch as failure:
                result[platform]=failure.details
            else:
                raise ValueError('Normally returning character mutation escaped semantic comparison')
        rows.append(result)
    return rows


def run(folder,output):
    folder.mkdir(parents=True,exist_ok=True)
    output.parent.mkdir(parents=True,exist_ok=True)
    evidence=[OUT/'file/claim.json',OUT/'file/unicode-derivation.json',OUT/'outer/packet.json',OUT/'outer/verification.json']
    header_paths=headers()
    producers=[ROOT/'toolscripts'/name for name in PRODUCERS]
    pins=[record(path) for path in [*evidence,*header_paths,*producers,*build_tools.SOURCES]]
    receipts=[]
    source=build_tools.arm(folder/'source',receipts)
    original=originals.load(NEW)
    overlay=json.loads((OUT/'method-dispatch-overlay.json').read_text())
    witnesses=incoming_witnesses(original,overlay,NEW)
    library_path=build_tools.windows(folder/'windows',receipts)
    reference=runtime.ArmRunner(original)
    arm=runtime.ArmRunner(source,True)
    native=runtime.NativeRunner(ctypes.CDLL(str(library_path)))
    runners=(reference,arm,native)
    sweep_digest=hashlib.sha256()
    start=time.monotonic()
    for code in range(65536):
        normalized,_=exercise(runners,{'units':[code],'maximum':3},code)
        marked,_=exercise(runners,{'units':[code],'maximum':2,'operation':'mark'},code)
        sweep_digest.update(code.to_bytes(2,'little')+normalized['output']+bytes([marked['result']]))
        if (code+1)%8192==0:
            print(json.dumps({'completedCodeUnits':code+1,'totalCodeUnits':65536}),flush=True)
    sweep_seconds=round(time.monotonic()-start,3)
    specifications=cases()
    results=[]
    fixture_digest=hashlib.sha256()
    for index,specification in enumerate(specifications):
        target,row=exercise(runners,specification,index,thumb=bool(index&1),flags=index%16)
        result={'id':specification['id'],'result':target['result'],**row}
        results.append(result)
        fixture_digest.update(json.dumps(result,sort_keys=True).encode())
    save(folder/'results.private.json',results)
    cross=0
    for spec in [{'units':[0xff76,0xff9e,0x20,0x3041],'maximum':8},
                 {'units':[0x61,0xff20],'maximum':2,'operation':'mark'}]:
        for flags in range(16):
            for thumb in [False,True]:
                exercise(runners,spec,flags,thumb,flags)
                cross+=1
    negatives=negative_controls(folder/'negative',original,receipts)
    abi=layouts(folder/'abi',receipts)
    android_component=android(folder/'android',receipts)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    functions=[]
    for address in NEW:
        candidate=source['functions']['fn_'+format(address,'08x')]
        target=original['functions'][address]
        raw=b''.join(image[part['start']-0x100000:part['endExclusive']-0x100000] for part in target['instructionRanges'])
        owned=set(target['instructionAddresses'])
        exact=(len(target['instructionRanges'])==1 and not target['literalPoolRanges'] and
            not candidate['objectOrigin']['relocations'] and candidate['raw']==raw)
        functions.append({'canonicalIdentity':{'build':'owner-archive-update','programId':'0004000e001acb00',
            'module':'content0/.code-decompressed','moduleSha256':MODULE_SHA,'address':address,'mode':target['mode']},
            'symbol':'fn_'+format(address,'08x'),'source':candidate['objectOrigin']['source'],
            'inventoryOwnership':'frozen-seeded-census','originalInstructionRanges':target['instructionRanges'],
            'originalLiteralPoolRanges':target['literalPoolRanges'],'originalInstructionBytes':len(raw),
            'callerWitnesses':witnesses[address],'originalInstructions':len(owned),
            'originalInstructionsReached':len(owned&reference.coverage),'unhitInstructionAddresses':sorted(owned-reference.coverage),
            'provenExcludedInstructionAddresses':[],'candidateInstructionAndPoolBytes':candidate['bytes'],
            'candidatePoolBytes':candidate['poolBytes'],'candidateMappingSpans':candidate['mappingSpans'],
            'candidateObject':candidate['objectOrigin'],'candidateLinkedSpanSha256':candidate['linkedSpanSha256'],
            'exactLinkedSpanCandidate':exact,'sourceCreditRequested':0,'functionalConfidence':'medium'})
    owned={pc for address in NEW for pc in original['functions'][address]['instructionAddresses']}
    packet={'schemaVersion':1,'lane':'wave013-native-file-text-transform','status':'bounded-source-with-exhaustive-single-code-unit-domain',
      'moduleSha256':MODULE_SHA,'functions':functions,'sources':[record(path) for path in build_tools.SOURCES],
      'headers':[record(path) for path in header_paths],'producers':[record(path) for path in producers],
      'evidenceInputs':[record(path) for path in evidence],'compiler':record(ROOT/'tools/clang-21/clang.exe'),
      'linker':record(ROOT/'tools/clang-21/ld.lld.exe'),'compilerFlags':FLAGS,'objects':source['objects'],
      'linkedElf':source['linkedElf'],'linkerScript':source['linkerScript'],'commands':receipts,
      'sourceHelpers':[{'symbol':name,'bytes':row['bytes'],'linkedSpanSha256':row['linkedSpanSha256'],
        'object':row['objectOrigin'],'originalFunctionCredit':0} for name,row in source['functions'].items()
        if row['canonicalOriginalAddress'] is None],
      'mutableSourceObjects':source['mutableSourceObjects'],'readonlySourceObjects':source['readonlyObjects'],
      'dependencies':{'role':'source','retainedOriginalExecutableHelpers':[],'publicUnicodeData':record(OUT/'file/unicode-derivation.json'),
        'originalCodeMappedDuringSourceExecution':False,'originalDataMappedDuringSourceExecution':False,
        'originalMappingDataSourceCredit':0,'gameHistoricalUnicodeVersionClaimed':False},
      'behavior':{'singleU16NormalizationQueries':65536,'singleU16AtSignQueries':65536,
        'all131072SingleCodeUnitCasesPassed':True,'singleCodeUnitDigest':sweep_digest.hexdigest(),'sweepElapsedSeconds':sweep_seconds,
        'constructionAndRangeCases':len(results),'attemptedFixtureCases':len(specifications),'caseResultDigest':fixture_digest.hexdigest(),
        'privateRawFixtureResults':record(folder/'results.private.json'),'flagAndReturnCrossProductCases':cross,
        'newOriginalInstructions':len(owned),'originalInstructionsReached':len(owned&reference.coverage),
        'provenExcludedInstructions':0,'unhitNotProvenExcludedInstructions':sorted(owned-reference.coverage),
        'allReachableInstructionsClaimedCovered':not(owned-reference.coverage),'everyLiveAndNonPrivateByteCompared':True,
        'fullFixtureBytes':runtime.SIZE,'fullOutputAndUntouchedTailBytes':runtime.OUTPUT_BYTES,
        'ARMReadWriteBoundsAndOwnedCodeChecked':True,'privateStackFrameBytes':2048,
        'privatePointerMasksRequired':False,'sourceOutputPatched':False,'wholeMemoryEquivalenceClaimed':False,
        'lifetimeContract':'Separate bounded source/output arrays; preserve every untouched output byte, input byte and guard',
        'boundedNotUniversalEquivalence':True,'sourceApiRoots':['fn_004c446c','fn_004c4420']},
      'negativeControls':negatives,'fixtureSpecifications':specifications,'ABI':abi,
      'platform':{'windowsNativeExecuted':True,'windowsSingleCodeUnitQueries':131072,
        'windowsConstructionAndRangeCases':len(results),'windowsDll':record(library_path),'truePointersAbove32Bits':True,
        'android':android_component,'wholeGameBuildOrExecution':False},
      'newFunctionalFunctions':2,'functionalOriginalInstructionBytes':688,
      'exactMatchingFunctionCandidates':sum(row['exactLinkedSpanCandidate'] for row in functions),'acceptedSourceCreditGranted':0,
      'runtimeInputs':[record(ROOT/path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
        'tools/python/Lib/site-packages/capstone/__init__.py','tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
        'tools/python/Lib/site-packages/unicorn/__init__.py']],
      'limits':['Exhaustive finite single-u16 domains are not universal string equivalence',
        'Mixed strings/pairs and capacities are bounded; no arbitrary overlapping source/output arrays',
        'The measured fullwidth/kana rules are game-specific and are not replaced by generic NFC/NFKC',
        'Only public Unicode17 names/decompositions plus explicit measured selection rules supply source mapping data',
        'No historical Unicode version inference or recovered-source data-byte credit',
        'The492-byte file frontend is a separate unvalidated body in this packet',
        'The owning view is a measured prefix, not the full game class; stream callbacks are not yet behavior-qualified here',
        'No shared registry changes, acceptance, independent clean replay, native game or Android device execution claimed']}
    if any(record(ROOT/pin['path'])!=pin for pin in pins):
        raise ValueError('Character transform inputs changed during validation')
    save(output,packet)
    print(json.dumps({'functions':2,'bytes':688,'codeUnitQueries':131072,'fixtures':len(results),
        'unhit':len(owned-reference.coverage),'exactCandidates':packet['exactMatchingFunctionCandidates']}),flush=True)
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--work',type=Path,default=WORK/'file-text-sealed')
    parser.add_argument('--output',type=Path,default=OUTPUT/'packet.json')
    arguments=parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Character outputs escape owned lane')
    run(arguments.work.resolve(),arguments.output.resolve())
