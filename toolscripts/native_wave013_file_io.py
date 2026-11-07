import argparse
import ctypes
import hashlib
import json
import time
from pathlib import Path

import native_wave013_file_io_build as build_tools
import native_wave013_file_io_original as originals
import native_wave013_file_io_runtime as runtime
import native_wave013_file_io_native as native
import native_wave013_nfa_data as services
import native_wave013_file_io_service_build as service_build
from native_wave013_file_io_cases import cases
from native_wave013_file_io_mutations import mutations
from native_wave013_outer_boundaries import incoming_witnesses,allocation_sites
from native_wave013_file_io_platforms import layouts,android
from native_wave013_common import ROOT,WORK,OUT,FLAGS,MODULE_SHA,record,save,sha


NEW=[0x4c4104]
OUTPUT=OUT/'file/io'
PRODUCERS=[
    'native_wave013_file_io.py',
    'native_wave013_file_io_build.py',
    'native_wave013_file_io_original.py',
    'native_wave013_file_io_service_build.py',
    'native_wave013_file_io_runtime.py',
    'native_wave013_file_io_native.py',
    'native_wave013_file_io_layout.py',
    'native_wave013_file_io_cases.py',
    'native_wave013_file_io_mutations.py',
    'native_wave013_file_io_platforms.py',
    'native_wave013_file_io_abi.c',
    'native_wave013_file_io_fixture.c',
    'native_wave013_file_io_fixture.h',
    'native_wave013_file_io_verify.py',
    'native_wave013_file_original.py',
    'native_wave013_file_claim.py',
    'native_wave013_common.py',
    'native_wave013_outer_build.py',
    'native_wave013_outer_original.py',
    'native_wave013_outer_layout.py',
    'native_wave013_outer_lifetime.py',
    'native_wave013_outer_boundaries.py',
    'native_wave013_dfa_build.py',
    'native_wave013_nfa_build.py',
    'native_wave013_nfa_original.py',
    'native_wave013_nfa_layout.py',
    'native_wave013_nfa_data.py',
    'native_wave013_lexer_build.py',
    'native_wave013_lexer_memory.py',
    'native_wave012_arena_oracle.py',
    'native_wave012_ctor_runtime.py',
    'native_wave012_ctor_model.py',
    'native_wave012_arena_model.py',
]


def headers():
    import re
    found=set()
    pending=[*build_tools.SOURCES,ROOT/'toolscripts/native_wave013_file_io_abi.c']
    while pending:
        source=pending.pop()
        for name in re.findall(r'^#include "([^"\n]+)"',source.read_text(),re.M):
            path=(source.parent/name).resolve()
            if not path.is_relative_to(ROOT) or not path.is_file():
                raise ValueError('Outer quoted header is missing or outside repository')
            if path not in found:
                found.add(path)
                pending.append(path)
    return sorted(found)


def negative_controls(build,original,data,receipts):
    rows=[]
    for name,before,after,specification in mutations():
        filename="pattern_file_rules.c"
        folder=build/name
        folder.mkdir(parents=True,exist_ok=True)
        path=ROOT/'src/native/wave013'/filename
        text=path.read_text()
        if before not in text:
            raise ValueError('Outer mutation target differs')
        changed=folder/filename
        changed.write_text(text.replace(before,after))
        graph=build_tools.arm(folder/'arm',receipts,{filename:changed})
        reference=runtime.execute(original,specification,data,seed=47,thumb=True,flags=15)
        actual=runtime.execute(graph,specification,data,source=True,seed=47,thumb=True,flags=15)
        try:
            runtime.compare(actual,reference)
        except runtime.SemanticMismatch as failure:
            arm=failure.details
        else:
            raise ValueError('Normally returning outer mutation escaped ARM comparison')
        library=ctypes.CDLL(str(build_tools.windows(folder/'windows',receipts,{filename:changed})))
        binding=services.bind_windows(library,data)
        try:
            native.execute(library,binding,specification,reference,seed=47)
        except RuntimeError as failure:
            if not getattr(failure,'details',None):
                raise
            windows=failure.details
        else:
            raise ValueError('Normally returning outer mutation escaped native comparison')
        row={'name':name,'source':record(changed),'specification':specification,'arm':arm,'windows':windows}
        rows.append(row)
    return rows


def run(build,output):
    build.mkdir(parents=True,exist_ok=True)
    output.parent.mkdir(parents=True,exist_ok=True)
    evidence=[OUT/'file/io/attempts.json',OUT/'file/claim.json',OUT/'file/text/packet.json',OUT/'file/text/verification.json',
        OUT/'file/unicode-derivation.json',OUT/'outer/packet.json',OUT/'outer/verification.json',
        OUT/'dfa/packet.json',OUT/'nfa/packet.json',OUT/'tokenizer/packet.json',
        OUT/'method-dispatch-overlay.json',OUT/'nfa-unicode-data-proposal.json']
    producers=[ROOT/'toolscripts'/name for name in PRODUCERS]
    header_paths=headers()
    pins=[record(path) for path in [*producers,*evidence,*header_paths,*build_tools.SOURCES]]
    receipts=[]
    source=build_tools.arm(build/'source',receipts)
    canonical=sorted(row['canonicalOriginalAddress'] for row in source['functions'].values() if row['canonicalOriginalAddress'] is not None)
    stream_services=service_build.arm(build/'stream-services',receipts)
    original=originals.load(canonical,stream_services)
    overlay=json.loads((OUT/'method-dispatch-overlay.json').read_text())
    witnesses=incoming_witnesses(original,overlay,NEW)
    data=services.load()
    library_path=build_tools.windows(build/'windows',receipts)
    library=ctypes.CDLL(str(library_path))
    binding=services.bind_windows(library,data)
    reached=set()
    results=[]
    digest=hashlib.sha256()
    last_update=time.monotonic()
    specifications=cases()
    roots=0
    for index,specification in enumerate(specifications):
        reference=runtime.execute(original,specification,data,seed=index,thumb=bool(index&1),flags=index%16)
        actual=runtime.execute(source,specification,data,source=True,seed=index,thumb=bool(index&1),flags=index%16)
        arm=runtime.compare(actual,reference)
        row={'id':specification['id'],'armCanonical':arm,'result':reference['result'],
            'originalMemorySha256':reference['memorySha256'],'sourceMemorySha256':actual['memorySha256'],
            'originalArenaSnapshot':reference['arenaSnapshot'],'originalArenaEpochs':len(reference['arenaIdentities']),
            'originalLifetime':reference['lifetime'],'sourceIdempotentIncomingArgumentWrites':actual['idempotentIncomingArgumentWrites'],
            'sourceLifetime':actual['lifetime']}
        if 'leaf' not in specification:
            portable=runtime.execute(source,{**specification,'portable_arm':True},data,source=True,
                seed=index,thumb=bool(index&1),flags=index%16)
            row['armCallerOwnedHelper']=runtime.compare(portable,reference)
            row['windowsCanonicalPersistentBuffersAndIoState']=native.canonical(library,binding,specification,reference,seed=index)
            roots+=1
        row['windowsKnownCallerOwnedArenaOrDirectLeaf']=native.execute(library,binding,specification,reference,seed=index)
        reached.update(reference['codePath'])
        results.append(row)
        digest.update(json.dumps(row,sort_keys=True).encode())
        if time.monotonic()-last_update>20:
            save(build/'partial-results.private.json',results)
            print(json.dumps({'completedFileCases':len(results),'totalFileCases':len(specifications)}),flush=True)
            last_update=time.monotonic()
    save(build/'results.private.json',results)
    cross=0
    for specification in [{'file_units':[0xfeff,0x61,10],'candidates':['a','b']},{'file_units':[0xfeff,0x61],'candidates':['a']}]:
        for flags in range(16):
            for thumb in [False,True]:
                reference=runtime.execute(original,specification,data,seed=flags,thumb=thumb,flags=flags)
                actual=runtime.execute(source,specification,data,source=True,seed=flags,thumb=thumb,flags=flags)
                runtime.compare(actual,reference)
                reached.update(reference['codePath'])
                cross+=1
    negatives=negative_controls(build/'negative',original,data,receipts)
    abi=layouts(build/'abi',receipts)
    android_component=android(build/'android',receipts)
    image=(ROOT/'generated/update-content0/code.bin').read_bytes()
    functions=[]
    for address in NEW:
        candidate=source['functions']['fn_'+format(address,'08x')]
        target=original['functions'][address]
        raw=b''.join(image[row['start']-0x100000:row['endExclusive']-0x100000] for row in target['instructionRanges'])
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
    packet={'schemaVersion':1,'lane':'wave013-native-file-rule-frontend','status':'bounded-source-file-component-with-explicit-stream-services',
      'moduleSha256':MODULE_SHA,'functions':functions,'sources':[record(path) for path in build_tools.SOURCES],
      'headers':[record(path) for path in header_paths],'producers':[record(path) for path in producers],
      'evidenceInputs':[record(path) for path in evidence],'compiler':record(ROOT/'tools/clang-21/clang.exe'),
      'linker':record(ROOT/'tools/clang-21/ld.lld.exe'),'compilerFlags':FLAGS,'objects':source['objects'],
      'linkedElf':source['linkedElf'],'linkerScript':source['linkerScript'],'commands':receipts,
      'sourceHelpers':[{'symbol':name,'bytes':row['bytes'],'linkedSpanSha256':row['linkedSpanSha256'],
        'object':row['objectOrigin'],'originalFunctionCredit':0} for name,row in source['functions'].items()
        if row['canonicalOriginalAddress'] is None],
      'mutableSourceObjects':source['mutableSourceObjects'],'readonlySourceObjects':source['readonlyObjects'],
      'fixtureStreamService':{'role':original['serviceRole'],'linkedElf':stream_services['linkedElf'],
        'objects':stream_services['objects'],'callbacks':original['serviceCallbacks'],
        'sourceCreditRequested':0},
      'allocationCallsiteRoles':allocation_sites(original),'dependencies':{'role':'source','retainedOriginalExecutableHelpers':[],
        'previousSourceFunctions':[address for address in canonical if address not in NEW],'newCreditForDependencies':0,
        'initializedUnicodeData':data['metadata'],'unicodeOriginalSegments':data['segments'],'unicodeVersionIdentified':False,
        'unicodeDataSourceCredit':0,'originalCodeMappedDuringSourceExecution':False},
      'behavior':{'allQualifiedCasesPassed':True,'constructionAndRangeCases':len(results),'attemptedFixtureCases':len(specifications),
        'completeOuterInvocations':roots,'directBoundaryLeafCases':len(results)-roots,'caseResultDigest':digest.hexdigest(),
        'privateRawFixtureResults':record(build/'results.private.json'),'flagAndReturnCrossProductCases':cross,
        'newOriginalInstructions':len(owned),'originalInstructionsReached':len(owned&reached),'provenExcludedInstructions':0,
        'unhitNotProvenExcludedInstructions':sorted(owned-reached),'allReachableInstructionsClaimedCovered':not(owned-reached),
        'sourceApiRoots':['fn_004c4104','pattern_process_file_rules'],'boundedNotUniversalEquivalence':True,
        'everyLiveAndNonPrivateByteCompared':True,'wholeMemoryEquivalenceClaimed':False,
        'ARMReadWriteBoundsAndOwnedCodeChecked':True,'privateStackFrameBytes':2048,
        'nativeExpectedState':'Original typed writes translated to independently supplied live caller arena; no source output patches',
        'lifetimeContract':'Canonical arena identity is traced at constructor entry on ARM; compare representations without expired dereferences. Windows full graph proof uses the separately known caller-owned arena. Temporary retired link fields keep the strict complete-field guard.',
        'canonicalWindowsPointerIdentityProofClaimed':False,'canonicalWindowsPersistentBuffersFlagsAndIoStateCompared':True,
        'canonicalWindowsScratchGraphCompared':False,'candidateSlotBytesAlways128':True,
        'streamCallbacksExecuteGenuineCWithUnadjustedThis':True,
        'sameValueIncomingArgumentWritesAllowedOnlyWithinDeclaredArgumentSlots':True,
        'portableCallerOwnedArenaRemainsLive':True,'selfDerivedLexerOwnerIdentityUsed':False,
        'candidateCountDomain':[0,16],'targetLogicalArenaBudgetPreserved':True},
      'negativeControls':negatives,'fixtureSpecifications':specifications,'ABI':abi,
      'platform':{'windowsNativeExecuted':True,'windowsConstructionAndRangeCases':len(results),
        'windowsFullProofApi':'pattern_process_file_rules with independently known caller-owned FixedArena',
        'windowsCanonicalPersistentStateInvocations':roots,'windowsDll':record(library_path),'truePointersAbove32Bits':True,
        'android':android_component,'wholeGameBuildOrExecution':False},
      'newFunctionalFunctions':len(NEW),'functionalOriginalInstructionBytes':sum(row['originalInstructionBytes'] for row in functions),
      'exactMatchingFunctionCandidates':sum(row['exactLinkedSpanCandidate'] for row in functions),'acceptedSourceCreditGranted':0,
      'runtimeInputs':[record(ROOT/path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
        'tools/python/Lib/site-packages/capstone/__init__.py','tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
        'tools/python/Lib/site-packages/unicorn/__init__.py']],
      'limits':['Finite candidate count0..16, UTF16 candidates at most120 units and bounded stream payloads; not universal equivalence',
        'The rule/stream views expose measured fields and slots9/11 only, not complete historical classes',
        'Each candidate output is a raw128-byte slot and the supplied file buffer is16384 bytes; those do not widen with pointers',
        'Normalization and at-sign flag writes intentionally precede IO validation and survive errors',
        'The original LF double advance and skipped one-unit final line are preserved rather than normalized into conventional line splitting',
        'High-bit advertised sizes are qualified only with returning short reads; no huge successful read or unbounded buffer claim',
        'Odd file lengths include initialized fixture tail bytes in comparisons, not a claim about arbitrary uninitialized allocations',
        'Canonical arenas expire after each rule; observers inspect raw ARM memory snapshots without native expired-object dereferences',
        'Windows full graph proof uses the separately known live caller-owned arena; canonical Windows compares persistent buffers/IO/flags and omits scratch',
        'Every arena epoch resets logical allocation bookkeeping; retired link masks retain complete-field quarantine/read-order requirements',
        'Frozen Unicode category/case services remain nonexecutable owner-derived data; normalizer maps come from public Unicode17 derivation',
        'Stream providers are explicit genuine compiled C fixture services with zero recovered-game source credit',
        'No shared registry changes, source acceptance, independent clean replay, native game or Android device execution claimed']}
    if any(record(ROOT/pin['path'])!=pin for pin in pins):
        raise ValueError('Outer input changed during validation')
    save(output,packet)
    print(json.dumps({'functions':len(NEW),'bytes':packet['functionalOriginalInstructionBytes'],'cases':len(results),
        'fullFileInvocations':roots,'unhit':len(owned-reached),'exactCandidates':packet['exactMatchingFunctionCandidates']}),flush=True)
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--work',type=Path,default=WORK/'file-io-sealed-final')
    parser.add_argument('--output',type=Path,default=OUTPUT/'packet.json')
    arguments=parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Outer output escapes owned lane')
    run(arguments.work.resolve(),arguments.output.resolve())
