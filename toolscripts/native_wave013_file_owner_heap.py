import argparse
import ctypes
import hashlib
import json
import time
from pathlib import Path

import native_wave013_file_owner_heap_build as build_tools
import native_wave013_nfa_original as originals
import native_wave013_file_owner_heap_runtime as runtime
from native_wave013_file_owner_heap_cases import cases
from native_wave013_file_owner_heap_mutations import mutations
from native_wave013_file_owner_heap_platforms import layouts,android
from native_wave013_dfa_boundaries import incoming_witnesses
from native_wave013_common import ROOT,WORK,OUT,FLAGS,MODULE_SHA,record,save,sha


NEW=[0x14e0a8,0x15e1b0]
OUTPUT=OUT/'file/owner/heap'
PRODUCERS=[
    'native_wave013_file_owner_heap.py',
    'native_wave013_file_owner_heap_build.py',
    'native_wave013_file_owner_heap_runtime.py',
    'native_wave013_file_owner_heap_model.py',
    'native_wave013_file_owner_heap_cases.py',
    'native_wave013_file_owner_heap_mutations.py',
    'native_wave013_file_owner_heap_platforms.py',
    'native_wave013_file_owner_heap_abi.c',
    'native_wave013_file_owner_heap_fixture.c',
    'native_wave013_file_owner_heap_fixture.h',
    'native_wave013_file_owner_heap_verify.py',
    'native_wave013_nfa_original.py',
    'native_wave013_dfa_boundaries.py',
    'native_wave013_common.py',
    'native_wave012_arena_oracle.py',
    'native_wave012_ctor_runtime.py',
]


def headers():
    import re
    found=set()
    pending=[*build_tools.SOURCES,ROOT/'toolscripts/native_wave013_file_owner_heap_abi.c']
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


def negative_controls(folder,original,receipts):
    rows=[]
    for name,before,after,specification in mutations():
        destination=folder/name
        destination.mkdir(parents=True,exist_ok=True)
        path=ROOT/'src/native/wave013/pattern_file_owner_heap.c'
        text=path.read_text()
        if before not in text:
            raise ValueError('Heap mutation no longer targets actual source')
        changed=destination/path.name
        changed.write_text(text.replace(before,after))
        overrides={path.name:changed}
        graph=build_tools.arm(destination/'arm',receipts,overrides)
        library=ctypes.CDLL(str(build_tools.windows(destination/'windows',receipts,overrides)))
        target=runtime.execute(original,specification,seed=49,thumb=True,flags=15)
        actual=runtime.execute(graph,specification,source=True,seed=49,thumb=True,flags=15)
        row={'name':name,'source':record(changed),'specification':specification}
        for platform in ['arm','windows']:
            try:
                if platform=='arm':runtime.compare(actual,target)
                else:runtime.native(library,specification,target,seed=49)
            except runtime.SemanticMismatch as failure:
                row[platform]=failure.details
            else:
                raise ValueError('Normally returning heap mutation escaped semantic comparison')
        rows.append(row)
    return rows


def run(folder,output):
    folder.mkdir(parents=True,exist_ok=True)
    output.parent.mkdir(parents=True,exist_ok=True)
    evidence=[OUT/'file/owner/initial-claim.json',OUT/'file/owner/heap/attempts.json']
    header_paths=headers()
    producers=[ROOT/'toolscripts'/name for name in PRODUCERS]
    pins=[record(path) for path in [*evidence,*header_paths,*producers,*build_tools.SOURCES]]
    receipts=[]
    source=build_tools.arm(folder/'source',receipts)
    original=originals.load([*NEW,0x170704,0x1707b4])
    overlay=json.loads((OUT/'method-dispatch-overlay.json').read_text())
    witnesses=incoming_witnesses(original,overlay,NEW)
    library_path=build_tools.windows(folder/'windows',receipts)
    library=ctypes.CDLL(str(library_path))
    specifications=cases()
    results=[]
    reached=set()
    fixture_digest=hashlib.sha256()
    last_update=time.monotonic()
    for index,specification in enumerate(specifications):
        target=runtime.execute(original,specification,seed=index,thumb=bool(index&1),flags=index%16)
        actual=runtime.execute(source,specification,source=True,seed=index,thumb=bool(index&1),flags=index%16)
        row={'id':specification['id'],'arm':runtime.compare(actual,target),
            'windows':runtime.native(library,specification,target,seed=index),
            'originalResults':target['results'],'originalThreadQueries':target['threadQueries']}
        results.append(row)
        reached.update(target['codePath'])
        fixture_digest.update(json.dumps(row,sort_keys=True).encode())
        if time.monotonic()-last_update>15:
            print(json.dumps({'completedHeapCases':len(results),'totalHeapCases':len(specifications)}),flush=True)
            last_update=time.monotonic()
    save(folder/'results.private.json',results)
    cross=0
    for specification in [specifications[0],{'operations':[{'kind':'allocate','slot':0,'bytes':64},{'kind':'free','slot':0}]}]:
        for flags in range(16):
            for thumb in [False,True]:
                target=runtime.execute(original,specification,seed=flags,thumb=thumb,flags=flags)
                actual=runtime.execute(source,specification,source=True,seed=flags,thumb=thumb,flags=flags)
                runtime.compare(actual,target)
                reached.update(target['codePath'])
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
            'originalInstructionsReached':len(owned&reached),'unhitInstructionAddresses':sorted(owned-reached),
            'provenExcludedInstructionAddresses':[],'candidateInstructionAndPoolBytes':candidate['bytes'],
            'candidatePoolBytes':candidate['poolBytes'],'candidateMappingSpans':candidate['mappingSpans'],
            'candidateObject':candidate['objectOrigin'],'candidateLinkedSpanSha256':candidate['linkedSpanSha256'],
            'exactLinkedSpanCandidate':exact,'sourceCreditRequested':0,'functionalConfidence':'medium'})
    owned={pc for address in NEW for pc in original['functions'][address]['instructionAddresses']}
    packet={'schemaVersion':1,'lane':'wave013-native-owner-heap-prerequisite','status':'bounded-source-allocator-with-explicit-synchronization-services',
      'moduleSha256':MODULE_SHA,'functions':functions,'sources':[record(path) for path in build_tools.SOURCES],
      'headers':[record(path) for path in header_paths],'producers':[record(path) for path in producers],
      'evidenceInputs':[record(path) for path in evidence],'compiler':record(ROOT/'tools/clang-21/clang.exe'),
      'linker':record(ROOT/'tools/clang-21/ld.lld.exe'),'compilerFlags':FLAGS,'objects':source['objects'],
      'linkedElf':source['linkedElf'],'linkerScript':source['linkerScript'],'commands':receipts,
      'sourceHelpers':[{'symbol':name,'bytes':row['bytes'],'linkedSpanSha256':row['linkedSpanSha256'],
        'object':row['objectOrigin'],'originalFunctionCredit':0} for name,row in source['functions'].items()
        if row['canonicalOriginalAddress'] is None],
      'mutableSourceObjects':source['mutableSourceObjects'],'readonlySourceObjects':source['readonlyObjects'],
      'dependencies':{'role':'source','retainedOriginalExecutableHelpers':[],
        'originalCodeMappedDuringSourceExecution':False,'originalDataMappedDuringSourceExecution':False,
        'sourceSynchronizationWrapperOriginalCredit':0,'fixtureServiceOriginalCredit':0,
        'originalReferenceSynchronizationFunctions':[0x170704,0x1707b4],
        'referenceUsesUnmodifiedOriginalLockFastPaths':True,'referenceThreadIdentityComesFromCP15TLS':True,
        'sourceServices':'Typed current-thread/acquire/release callbacks; platform kernel behavior is not claimed'},
      'behavior':{'allQualifiedCasesPassed':True,'constructionAndRangeCases':len(results),
        'attemptedFixtureCases':len(specifications),'caseResultDigest':fixture_digest.hexdigest(),
        'privateRawFixtureResults':record(folder/'results.private.json'),'flagAndReturnCrossProductCases':cross,
        'newOriginalInstructions':len(owned),'originalInstructionsReached':len(owned&reached),
        'provenExcludedInstructions':0,'unhitNotProvenExcludedInstructions':sorted(owned-reached),
        'allReachableInstructionsClaimedCovered':not(owned-reached),'everyLiveAndNonPrivateByteCompared':True,
        'fullFixtureBytes':runtime.model.SIZE,'ARMReadWriteBoundsAndOwnedCodeChecked':True,'privateStackFrameBytes':1024,
        'privatePointerMasksRequired':False,'sourceOutputPatched':False,'wholeMemoryEquivalenceClaimed':False,
        'lifetimeContract':'Caller-owned heap/block/storage remain live; every metadata, unknown flag, payload and guard byte is compared',
        'boundedNotUniversalEquivalence':True,'sourceApiRoots':['fn_0014e0a8','fn_0015e1b0'],
        'synchronizationDomain':'Recursive mutex preheld by the independently supplied current thread; depth1..8; no original kernel slow-path claim'},
      'negativeControls':negatives,'fixtureSpecifications':specifications,'ABI':abi,
      'platform':{'windowsNativeExecuted':True,
        'windowsConstructionAndRangeCases':len(results),'windowsDll':record(library_path),'truePointersAbove32Bits':True,
        'android':android_component,'wholeGameBuildOrExecution':False},
      'newFunctionalFunctions':2,'functionalOriginalInstructionBytes':536,
      'exactMatchingFunctionCandidates':sum(row['exactLinkedSpanCandidate'] for row in functions),'acceptedSourceCreditGranted':0,
      'runtimeInputs':[record(ROOT/path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
        'tools/python/Lib/site-packages/capstone/__init__.py','tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
        'tools/python/Lib/site-packages/unicorn/__init__.py']],
      'limits':['Finite well-formed circular rings sorted by allocation address, bounded payload regions and32 registered block slots',
        'Heap, block nodes, service context and registered initialized8192-byte backing object remain live; no corrupted links or aliased metadata',
        'Logical heap begins256 bytes inside the backing object; conservative cumulative request/margin bounds keep all C pointer arithmetic within that object',
        'Pointer differences convert explicitly to U32 byte counts; native pointer representations are never narrowed',
        'Original request/gap arithmetic is qualified only within the initialized backing allocation and bounded nonoverflowing byte counts',
        'Original empty-heap margin omission, unsigned32 gap underflow, anchor choice, unknown-flag preservation and complete block clearing are preserved',
        'Nonzero-margin underflow cases compare metadata/returns only; overlapping or logically out-of-range results are never consumed and imply no allocation-safety claim',
        'Current thread is independently supplied as CP15TLS identity in the reference and a real full-width pointer in the source fixture',
        'Reference executes original mutex code; this packet qualifies preheld recursive fast paths, not kernel synchronization, scheduling or contention',
        'Service query counters are fixture telemetry expected from observed original MRC instructions, not source output patches',
        'Source synchronization wrappers and C provider fixtures receive no new original-function credit',
        'Unhit instructions remain explicit, without claiming they are proven excluded',
        'The seven-body owning file family remains a separate measured work item; this packet owns only its allocator prerequisite',
        'No shared registry changes, acceptance, independent clean replay, native game or Android device execution claimed']}
    if any(record(ROOT/pin['path'])!=pin for pin in pins):
        raise ValueError('Character transform inputs changed during validation')
    save(output,packet)
    print(json.dumps({'functions':2,'bytes':536,'fixtures':len(results),
        'unhit':len(owned-reached),'exactCandidates':packet['exactMatchingFunctionCandidates']}),flush=True)
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--work',type=Path,default=WORK/'file-owner-heap-sealed')
    parser.add_argument('--output',type=Path,default=OUTPUT/'packet.json')
    arguments=parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Character outputs escape owned lane')
    run(arguments.work.resolve(),arguments.output.resolve())
