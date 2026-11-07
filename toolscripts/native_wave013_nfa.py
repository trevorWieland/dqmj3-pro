import argparse
import ctypes
import hashlib
import json
import re
import time
from pathlib import Path

import capstone
import unicorn

import native_wave013_nfa_build as build_tools
import native_wave013_nfa_original as originals
import native_wave013_nfa_runtime as runtime
import native_wave013_nfa_native as native
import native_wave013_nfa_data as services
from native_wave013_nfa_boundaries import exclusions,allocation_sites,incoming_witnesses
from native_wave013_nfa_cases import cases
from native_wave013_nfa_mutations import mutations,read_order_mutation
from native_wave013_nfa_case_table import compare_all
from native_wave013_nfa_platforms import android,layouts,constructor_returns
from native_wave013_common import ROOT,WORK,OUT,FLAGS,MODULE_SHA,record,save,sha


OUTPUT=OUT/'nfa'
PRODUCERS=['native_wave013_common.py','native_wave013_nfa.py','native_wave013_nfa_build.py',
 'native_wave013_nfa_original.py','native_wave013_nfa_runtime.py','native_wave013_nfa_native.py',
 'native_wave013_nfa_data.py','native_wave013_nfa_layout.py','native_wave013_nfa_lifetime.py',
 'native_wave013_nfa_boundaries.py','native_wave013_nfa_cases.py','native_wave013_nfa_mutations.py',
 'native_wave013_nfa_case_table.py','native_wave013_nfa_platforms.py','native_wave013_nfa_abi.c',
 'native_wave013_nfa_verify.py','native_wave013_lexer_build.py','native_wave013_lexer_memory.py',
 'native_wave012_arena_oracle.py','native_wave012_ctor_runtime.py','native_wave012_ctor_model.py',
 'native_wave012_arena_model.py']


def headers():
    result=set()
    pending=list(build_tools.SOURCES)+[ROOT/'toolscripts/native_wave013_nfa_abi.c']
    while pending:
        source=pending.pop()
        for name in re.findall(r'^#include "([^"\n]+)"',source.read_text(),re.M):
            path=(source.parent/name).resolve()
            if not path.is_relative_to(ROOT) or not path.is_file():
                raise ValueError('NFA quoted header escapes repository or is missing')
            if path not in result:
                result.add(path)
                pending.append(path)
    return sorted(result)


def negative_controls(build,original,data,receipts):
    result=[]
    for name,filename,before,after,specification in [*mutations(),read_order_mutation()]:
        folder=build/name
        folder.mkdir(parents=True,exist_ok=True)
        source=ROOT/'src/native/wave013'/filename
        text=source.read_text()
        if before not in text:
            raise ValueError('NFA mutation no longer targets actual source')
        changed=folder/filename
        changed.write_text(text.replace(before,after))
        graph=build_tools.arm(folder/'arm',receipts,{filename:changed})
        reference=runtime.execute(original,specification,data,seed=1,thumb=True,flags=15)
        actual=runtime.execute(graph,specification,data,source=True,seed=1,thumb=True,flags=15)
        library=ctypes.CDLL(str(build_tools.windows(folder/'windows',receipts,{filename:changed})))
        binding=services.bind_windows(library,data)
        if name=='retired-map-read-order':
            final=runtime.compare_state_only(actual,reference)
            if not actual['lifetime']['readBeforeReinitialization']:
                raise ValueError('Read-order control did not read retired storage')
            try:
                runtime.compare(actual,reference)
            except RuntimeError as failure:
                reason=str(failure)
            else:
                raise ValueError('Returning stale-read control escaped observer')
            win=native.execute(library,binding,specification,reference,seed=1)
            result.append({'name':name,'source':record(changed),'returnedNormally':True,
                           'sameDefinedFinalState':final,'nativeSameDefinedFinalState':win,
                           'observerRejected':reason,'lifetime':actual['lifetime'],
                           'grantsFunctionalAcceptance':False})
        else:
            try:
                runtime.compare(actual,reference)
            except runtime.SemanticMismatch as failure:
                arm=failure.details
            else:
                raise ValueError('ARM wrong source failed to return a semantic mismatch')
            try:
                native.execute(library,binding,specification,reference,seed=1)
            except RuntimeError as failure:
                if not getattr(failure,'details',None):
                    raise
                win=failure.details
            else:
                raise ValueError('Native wrong source unexpectedly passed')
            result.append({'name':name,'source':record(changed),'arm':arm,'windows':win})
    return result


def run(build,output):
    build.mkdir(parents=True,exist_ok=True)
    OUTPUT.mkdir(parents=True,exist_ok=True)
    claim_path=OUT/'nfa-claim.json'
    claim=json.loads(claim_path.read_text())
    new=sorted(row['address'] for row in claim['functions'])
    evidence=[claim_path,OUT/'nfa-type-proposal.json',OUT/'nfa-unicode-data-proposal.json',
              OUT/'method-dispatch-overlay.json',OUT/'tokenizer/packet.json',
              ROOT/'evidence/lanes/wave012-native/arena/packet.json',
              ROOT/'evidence/lanes/wave012-native/constructors/packet.json',
              ROOT/'evidence/lanes/wave012-native/transition-graph/packet.json',
              ROOT/'evidence/lanes/executable-scope/scope.json']
    producer_paths=[ROOT/'toolscripts'/name for name in PRODUCERS]
    header_paths=headers()
    pins=[record(path) for path in [*producer_paths,*build_tools.SOURCES,*header_paths,*evidence]]
    receipts=[]
    source=build_tools.arm(build/'source',receipts)
    canonical=sorted(row['canonicalOriginalAddress'] for row in source['functions'].values() if row['canonicalOriginalAddress'] is not None)
    if len(new)!=40 or not set(new)<=set(canonical):
        raise ValueError('NFA complete claimed source frontier differs')
    original=originals.load(canonical)
    overlay=json.loads((OUT/'method-dispatch-overlay.json').read_text())
    data=services.load()
    dead_proof,excluded=exclusions(original,overlay,data)
    witnesses=incoming_witnesses(original,overlay,new)
    allocations=allocation_sites(original)
    library_path=build_tools.windows(build/'windows',receipts)
    library=ctypes.CDLL(str(library_path))
    binding=services.bind_windows(library,data)
    fixture_specs=cases(original['properties'])
    reached,digest=set(),hashlib.sha256()
    results=[]
    last_update=time.monotonic()
    for index,specification in enumerate(fixture_specs):
        reference=runtime.execute(original,specification,data,seed=index,thumb=bool(index&1),flags=index%16)
        actual=runtime.execute(source,specification,data,source=True,seed=index,thumb=bool(index&1),flags=index%16)
        arm=runtime.compare(actual,reference)
        win=native.execute(library,binding,specification,reference,seed=index)
        reached.update(reference['codePath'])
        row={'id':specification['id'],'originalResult':reference['result'],'lexicalResult':reference['lexical'],
             'originalMemorySha256':reference['memorySha256'],'sourceMemorySha256':actual['memorySha256'],
             'arm':arm,'windows':win,'originalLifetime':reference['lifetime'],'sourceLifetime':actual['lifetime']}
        results.append(row)
        digest.update(json.dumps(row,sort_keys=True).encode())
        if time.monotonic()-last_update>20:
            print(json.dumps({'completedNfaCases':index+1,'totalNfaCases':len(fixture_specs)}),flush=True)
            save(build/'partial-results.private.json',results)
            last_update=time.monotonic()
    save(build/'results.private.json',results)
    table=compare_all(original,source,library,binding,data)
    reached.update(table['originalInstructionsReached'])
    cross=0
    for specification in [{'pattern':'(a|b){2,3}'},{'pattern':'[^ab]'}]:
        for flags in range(16):
            for thumb in [False,True]:
                reference=runtime.execute(original,specification,data,seed=flags,thumb=thumb,flags=flags)
                actual=runtime.execute(source,specification,data,source=True,seed=flags,thumb=thumb,flags=flags)
                runtime.compare(actual,reference)
                reached.update(reference['codePath'])
                cross+=1
    negatives=negative_controls(build/'negative',original,data,receipts)
    abi=layouts(build/'abi',receipts)
    constructors=constructor_returns(library)
    android_component=android(build/'android',receipts)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    rows=[]
    for address in new:
        candidate=source['functions']['fn_'+format(address,'08x')]
        target=original['functions'][address]
        raw=b''.join(image[row['start']-0x100000:row['endExclusive']-0x100000] for row in target['instructionRanges'])
        exact=(len(target['instructionRanges'])==1 and not target['literalPoolRanges']
               and not candidate['objectOrigin']['relocations'] and candidate['raw']==raw)
        owned=set(target['instructionAddresses'])
        rows.append({'canonicalIdentity':{'build':'owner-archive-update','programId':'0004000e001acb00',
                     'module':'content0/.code-decompressed','moduleSha256':MODULE_SHA,'address':address,'mode':target['mode']},
                     'symbol':'fn_'+format(address,'08x'),'source':candidate['objectOrigin']['source'],
                     'inventoryOwnership':next(row['ownership'] for row in claim['functions'] if row['address']==address),
                     'originalInstructionRanges':target['instructionRanges'],'originalLiteralPoolRanges':target['literalPoolRanges'],
                     'originalInstructionBytes':len(raw),'callerWitnesses':witnesses[address],
                     'originalInstructions':len(owned),'originalInstructionsReached':len(owned&reached),
                     'unhitInstructionAddresses':sorted(owned-reached),'provenExcludedInstructionAddresses':sorted(owned&excluded),
                     'candidateInstructionAndPoolBytes':candidate['bytes'],'candidatePoolBytes':candidate['poolBytes'],
                     'candidateMappingSpans':candidate['mappingSpans'],'candidateObject':candidate['objectOrigin'],
                     'candidateLinkedSpanSha256':candidate['linkedSpanSha256'],'exactLinkedSpanCandidate':exact,
                     'sourceCreditRequested':0,'functionalConfidence':'medium'})
    owned={pc for address in new for pc in original['functions'][address]['instructionAddresses']}
    if reached&excluded:
        raise ValueError('Measured excluded NFA arm unexpectedly executed')
    packet={'schemaVersion':1,'lane':'wave013-native-nfa','status':'bounded-validated-source-component-with-explicit-lifetime-contract',
      'moduleSha256':MODULE_SHA,'functions':rows,'sources':[record(path) for path in build_tools.SOURCES],
      'headers':[record(path) for path in header_paths],'producers':[record(path) for path in producer_paths],
      'evidenceInputs':[record(path) for path in evidence],'compiler':record(ROOT/'tools/clang-21/clang.exe'),
      'linker':record(ROOT/'tools/clang-21/ld.lld.exe'),'compilerFlags':FLAGS,'objects':source['objects'],
      'linkedElf':source['linkedElf'],'linkerScript':source['linkerScript'],'commands':receipts,
      'sourceHelpers':[{'symbol':name,'bytes':row['bytes'],'linkedSpanSha256':row['linkedSpanSha256'],
                       'object':row['objectOrigin'],'originalFunctionCredit':0}
                       for name,row in source['functions'].items() if row['canonicalOriginalAddress'] is None],
      'mutableSourceObjects':source['mutableSourceObjects'],'allocationCallsiteRoles':allocations,
      'dependencies':{'role':'source','retainedOriginalExecutableHelpers':[],
                      'previousSourceFunctions':[address for address in canonical if address not in new],
                      'newCreditForDependencies':0,'initializedUnicodeData':data['metadata'],
                      'unicodeOriginalSegments':data['segments'],'unicodeVersionIdentified':False,
                      'unicodeDataSourceCredit':0,'originalCodeMappedDuringSourceExecution':False},
      'behavior':{'constructionAndRangeCases':len(fixture_specs),'caseResultDigest':digest.hexdigest(),
        'privateRawFixtureResults':record(build/'results.private.json'),'u16CaseLookup':table,
        'flagAndReturnCrossProductCases':cross,'newOriginalInstructions':len(owned),
        'originalInstructionsReached':len(owned&reached),'provenExcludedInstructions':len(excluded),
        'unhitNotProvenExcludedInstructions':sorted(owned-reached-excluded),'allReachableInstructionsClaimedCovered':not(owned-reached-excluded),
        'unreachableProofs':dead_proof,'sourceApiRoot':'pattern_compile_nfa','boundedNotUniversalEquivalence':True,
        'everyLiveAndNonPrivateByteCompared':True,'wholeMemoryEquivalenceClaimed':False,
        'nativeExpectedState':'Every original write replayed through reviewed allocation roles and measured native field layouts; source output is never patched',
        'privateStackFrameBytes':2048,'ARMReadWriteBoundsAndOwnedCodeChecked':True,
        'lifetimeContract':'Retired allocation bytes cannot be read while free or before initialization after reuse. Only final freed link fields containing private stack pointers can differ; every other byte, allocation bitmap/cursor and padding is compared.',
        'nativeExcludedPointersCheckedAgainstActualThreadStackLimits':True,
        'forcedReuseCase':next(row for row in results if row['id']=='full-arena-retired-slot-reuse')},
      'negativeControls':negatives,'fixtureSpecifications':fixture_specs,'ABI':abi,'constructorReturns':constructors,
      'platform':{'windowsNativeExecuted':True,'windowsConstructionAndRangeCases':len(fixture_specs),
                  'windowsCaseLookupQueries':table['queries'],'windowsDll':record(library_path),
                  'truePointersAbove32Bits':True,'android':android_component,'wholeGameBuildOrExecution':False},
      'newFunctionalFunctions':len(new),'functionalOriginalInstructionBytes':sum(row['originalInstructionBytes'] for row in rows),
      'exactMatchingFunctionCandidates':sum(row['exactLinkedSpanCandidate'] for row in rows),'acceptedSourceCreditGranted':0,
      'effectiveRuntime':{'unicornRuntime':unicorn.uc_version(),'capstoneRuntime':capstone.cs_version()},
      'runtimeInputs':[record(ROOT/path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
          'tools/python/Lib/site-packages/capstone/__init__.py','tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
          'tools/python/Lib/site-packages/unicorn/__init__.py']],
      'limits':['Finite initialized-data profile and typed fresh-builder/token fixtures; not universal equivalence',
        'Complete original bodies are reconstructed; untested instruction addresses remain explicit',
        'Character-class range loops ending at65535 are outside the terminating fixture domain',
        'No malformed pointers, corrupted tables, arbitrary aliased ownership, concurrency or MMIO',
        'Unicode service borrows hash-validated nonexecutable initialized arrays; owner keeps them alive and immutable while bound',
        'Original whole-program table mutation and public Unicode version provenance are not established',
        'Source API compiles UTF16 spans into NFA graphs. Outer caller, remaining DFA range phase/driver and fast path remain separate',
        'Component builds and bounded execution are not native game builds or Android device execution']}
    if any(record(ROOT/pin['path'])!=pin for pin in pins):
        raise ValueError('NFA source/proof input changed during validation')
    save(output,packet)
    save(output.parent/'functional.json',{'functions':[{'name':row['symbol'],'confidence':'medium'} for row in rows]})
    print(json.dumps({'newFunctions':len(new),'originalBytes':packet['functionalOriginalInstructionBytes'],
       'cases':len(fixture_specs),'caseQueries':table['queries'],'unhitNotExcluded':len(owned-reached-excluded),
       'exactCandidates':packet['exactMatchingFunctionCandidates']}),flush=True)
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--work',type=Path,default=WORK/'nfa-sealed')
    parser.add_argument('--output',type=Path,default=OUTPUT/'packet.json')
    arguments=parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('NFA output escapes owned lane')
    run(arguments.work.resolve(),arguments.output.resolve())
