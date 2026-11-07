import argparse
import ctypes
import hashlib
import json
import time
from pathlib import Path

import native_wave013_file_owner_full_build as build_tools
import native_wave013_file_owner_provider_build as provider_build
import native_wave013_file_owner_provider_layout as abi_tools
import native_wave013_file_owner_runtime as runtime
import native_wave013_file_owner_native as native
import native_wave013_nfa_data as services
from native_wave013_file_owner_reference_image import ReferenceImage
from native_wave013_file_owner_cases import cases
from native_wave013_file_owner_compare import compare
from native_wave013_file_owner_negative import controls
from native_wave013_file_owner_platforms import android
from native_wave013_file_owner_evidence import NEW,headers,measured,function_rows,evidence_inputs
from native_wave013_common import ROOT,WORK,OUT,FLAGS,MODULE_SHA,record,save


OUTPUT=OUT/'file/owner/orchestration'
PRODUCERS=[
 'native_wave013_file_owner_orchestration.py','native_wave013_file_owner_full_build.py',
 'native_wave013_file_owner_provider_build.py','native_wave013_file_owner_provider_layout.py',
 'native_wave013_file_owner_runtime.py','native_wave013_file_owner_native.py','native_wave013_file_owner_reference_image.py',
 'native_wave013_file_owner_cases.py','native_wave013_file_owner_compare.py','native_wave013_file_owner_state.py',
 'native_wave013_file_owner_provider_model.py','native_wave013_file_owner_negative.py','native_wave013_file_owner_mutations.py',
 'native_wave013_file_owner_platforms.py','native_wave013_file_owner_orchestration_verify.py','native_wave013_file_owner_evidence.py','native_wave013_file_owner_provider_abi.c',
 'native_wave013_file_owner_provider_fixture.c','native_wave013_file_owner_provider_fixture.h',
 'native_wave013_file_owner_backend_fixture.c','native_wave013_file_owner_backend_fixture.h',
 'native_wave013_file_owner_original.py','native_wave013_file_original.py','native_wave013_outer_original.py',
 'native_wave013_file_io_build.py','native_wave013_file_io_layout.py','native_wave013_outer_layout.py',
 'native_wave013_outer_lifetime.py','native_wave013_nfa_data.py','native_wave013_lexer_memory.py',
 'native_wave013_dfa_boundaries.py','native_wave012_arena_oracle.py','native_wave012_ctor_runtime.py','native_wave013_common.py',
 'native_census_overlay.py','inventory.py']


def normalized_native(row):
    return {key:value for key,value in row.items() if key not in ['actualMemorySha256','projectedMemorySha256']}


def run(folder,output):
    started=time.monotonic();folder.mkdir(parents=True,exist_ok=True)
    evidence=evidence_inputs();producers=[ROOT/'toolscripts'/name for name in PRODUCERS]
    header_paths=headers([*build_tools.SOURCES,ROOT/'toolscripts/native_wave013_file_owner_provider_abi.c'])
    pins=[record(path) for path in [*producers,*header_paths,*evidence,*build_tools.SOURCES]]
    receipts=[];abi=abi_tools.layouts(folder/'abi',receipts)
    source=build_tools.arm(folder/'source',receipts);provider=provider_build.arm(folder/'provider',receipts)
    reference_image=ReferenceImage();original,witnesses,table=measured();data=services.load()
    dll=build_tools.windows(folder/'windows',receipts);library=ctypes.CDLL(str(dll));binding=services.bind_windows(library,data)
    reached=set();dependencies={};instructions={};reads={};calls=set();rows=[];digest=hashlib.sha256();last=time.monotonic()
    specifications=cases()
    for index,item in enumerate(specifications):
        specification=item['specification']
        target=runtime.execute(provider,specification,abi['profiles']['arm'],data,reference_image,
            seed=index,thumb=bool(index&1),flags=index%16)
        actual=runtime.execute(source,specification,abi['profiles']['arm'],data,seed=index,thumb=bool(index&1),flags=index%16)
        arm=compare(actual,target)
        portable=runtime.execute(source,{**specification,'portable_arm':True},abi['profiles']['arm'],data,
            seed=index,thumb=bool(index&1),flags=index%16) if specification.get('operation','apply')=='apply' else None
        portable_result=compare(portable,target) if portable else None
        windows=native.execute(library,binding,specification,target,abi['profiles']['windows'],seed=index)
        canonical=native.execute(library,binding,specification,target,abi['profiles']['windows'],seed=index,canonical=True)
        row={'name':item['name'],'armCanonical':arm,'armKnownCallerOwnedArena':portable_result,
            'windowsKnownCallerOwnedArena':normalized_native(windows),'windowsCanonicalPersistentState':normalized_native(canonical),
            'result':target['result'],'originalMemorySha256':target['memorySha256'],'sourceMemorySha256':actual['memorySha256'],
            'arenaEpochs':len(target['arenaIdentities']),'lastLiveArenaSnapshot':target['arenaSnapshot'],
            'originalLifetime':target['lifetime'],'sourceLifetime':actual['lifetime'],
            'logicalOwnerRetired':target['ownerRetired'],'logicalStorageRetired':target['storageRetired']}
        rows.append(row);digest.update(json.dumps(row,sort_keys=True).encode());reached.update(target['codePath'])
        for part in target['dependencies']:dependencies[part['address']]=part
        for part in target['referenceInstructionWitnesses']:instructions[part['address']]=part
        for part in target['referenceDataReadWitnesses']:
            key=(part['pc'],part['address'],part['bytes']);reads.setdefault(key,set()).update(part['observedValueSha256'])
        calls.update(json.dumps(part,sort_keys=True) for part in target['calls'])
        if time.monotonic()-last>20:
            save(folder/'partial-results.private.json',rows)
            print(json.dumps({'completedOwnerCases':len(rows),'totalOwnerCases':len(specifications)}),flush=True);last=time.monotonic()
    save(folder/'results.private.json',rows)
    cross=0
    for flags in range(16):
        for thumb in [False,True]:
            specification={'regions':[1,1],'language':2}
            target=runtime.execute(provider,specification,abi['profiles']['arm'],data,reference_image,seed=flags,thumb=thumb,flags=flags)
            actual=runtime.execute(source,specification,abi['profiles']['arm'],data,seed=flags,thumb=thumb,flags=flags)
            compare(actual,target);reached.update(target['codePath']);cross+=1
    negative=controls(folder/'negative',reference_image,provider,abi['profiles'],data,receipts)
    android_component=android(folder/'android',receipts)
    functions=function_rows(source,reached,original,witnesses)
    owned={pc for address in NEW for pc in original['functions'][address]['instructionAddresses']}
    canonical=sorted(row['canonicalOriginalAddress'] for row in source['functions'].values() if row['canonicalOriginalAddress'] is not None)
    reference_trace={'schemaVersion':1,'status':'reference-only-runtime-witnesses','moduleSha256':MODULE_SHA,
        'inputPins':reference_image.pins,'instructions':[instructions[key] for key in sorted(instructions)],
        'dataReads':[{'pc':pc,'address':address,'bytes':size,'observedValueSha256':sorted(values)}
            for (pc,address,size),values in sorted(reads.items())],
        'calls':[json.loads(value) for value in sorted(calls)],'dependencies':[dependencies[key] for key in sorted(dependencies)],
        'dataReadHashesCapturedAtActualReads':True,'sdkSourceCreditGranted':0,'sharedCensusChanged':False}
    trace_path=output.parent/'reference-trace.json';save(trace_path,reference_trace)
    packet={'schemaVersion':1,'lane':'wave013-native-owner-orchestration','status':'bounded-source-owner-component-with-real-SDK-reference',
      'moduleSha256':MODULE_SHA,'functions':functions,'sources':[record(path) for path in build_tools.SOURCES],
      'headers':[record(path) for path in header_paths],'producers':[record(path) for path in producers],
      'evidenceInputs':[record(path) for path in evidence],'compiler':record(ROOT/'tools/clang-21/clang.exe'),
      'linker':record(ROOT/'tools/clang-21/ld.lld.exe'),'compilerFlags':FLAGS,'objects':source['objects'],
      'linkedElf':source['linkedElf'],'linkerScript':source['linkerScript'],'commands':receipts,
      'mutableSourceObjects':source['mutableSourceObjects'],'readonlySourceObjects':source['readonlyObjects'],
      'sourceHelpers':[{'symbol':name,'bytes':row['bytes'],'linkedSpanSha256':row['linkedSpanSha256'],
        'object':row['objectOrigin'],'originalFunctionCredit':0} for name,row in source['functions'].items() if row['canonicalOriginalAddress'] is None],
      'methodTable':table,'referenceProvider':{'linkedElf':provider['linkedElf'],'objects':provider['objects'],
        'role':'Genuine typed C registered filesystem provider, using original namespace/SDK wrappers and unadjusted this',
        'sourceCreditRequested':0},'referenceTrace':record(trace_path),'referenceInputPins':reference_image.pins,
      'dependencies':{'role':'source','retainedOriginalExecutableHelpers':[],
        'otherSourceCanonicalFunctions':[address for address in canonical if address not in NEW],
        'unqualifiedDraftFunctionsIncludedButNotAdmitted':[0x44f54c,0x4c3e08,0x4c4068],
        'newCreditForDependencies':0,'originalImageMappedDuringSourceExecution':False,
        'initializedOwnerDerivedUnicodeDataService':data['metadata'],'unicodeOriginalSegments':data['segments'],'unicodeDataSourceCredit':0,
        'platformContracts':['registered read-only filesystem provider','successful CFG region/language responses',
            'current-thread preheld recursive allocation mutex','explicit owner release callback'],
        'sdkExecutionInReferenceGrantsSourceCredit':False},
      'behavior':{'allQualifiedCasesPassed':True,'constructionAndRangeCases':len(rows),'attemptedFixtureCases':len(specifications),
        'caseResultDigest':digest.hexdigest(),'privateRawFixtureResults':record(folder/'results.private.json'),
        'flagAndReturnCrossProductCases':cross,'newOriginalInstructions':len(owned),'originalInstructionsReached':len(owned&reached),
        'unhitNotProvenExcludedInstructions':sorted(owned-reached),'provenExcludedInstructions':0,
        'allReachableInstructionsClaimedCovered':not(owned-reached),'branchOutcomeCoverageClaimed':False,
        'everyLiveAndNonPrivateByteCompared':True,'fullFixtureBytes':runtime.model.SIZE,
        'ARMReadWriteBoundsAndOwnedCodeChecked':True,'sourceAndProviderArmModeChecked':True,
        'privateStackFrameBytes':8192,'arenaSnapshotsTakenOnlyFromLiveWrites':True,
        'lifetimeContract':'ARM identities come from actual constructors and live field writes; full Windows graph uses an independently known live caller arena. Canonical Windows compares persistent state only. Owner release snapshots fields before logical retirement; raw backing remains live.',
        'expiredArenaDereferencedByObserver':False,'selfDerivedNativeArenaIdentityUsed':False,
        'nativeOwnerAndStorageRemainTyped':True,'borrowedFrozenFileRuleViewAdapter':True,
        'rawPayloadBudgetsUnchanged':True,'logicalArenaSlotsAndCallerBudgetsUnchanged':True,
        'configurationAndOpenFlagSnapshotsUseIndependentCallerArray':True,
        'sdkStreamStateCapturedBeforeReleaseAndComparedToNativeTypedStream':True,
        'ownerSnapshotCopiedBeforeLogicalRelease':True,'sourceOutputPatched':False,'wholeMemoryEquivalenceClaimed':False,
        'boundedNotUniversalEquivalence':True,'sourceApiRoots':['fn_004c4358','fn_004c3e74','fn_004c42fc','fn_004c43a8',
            'fn_006d40e4','fn_0044f5b4','pattern_owner_apply'],
        'canonicalWindowsPointerIdentityProofClaimed':False,'canonicalWindowsScratchGraphCompared':False},
      'negativeControls':negative,'fixtureSpecifications':specifications,'ABI':abi,
      'platform':{'windowsNativeExecuted':True,'windowsConstructionAndRangeCases':len(rows),'windowsDll':record(dll),
        'truePointersAbove32Bits':True,'fullGraphWindowsApi':'pattern_owner_apply with independently known live caller arena',
        'canonicalWindowsPersistentStateInvocations':len(rows),'android':android_component,'wholeGameBuildOrExecution':False},
      'newFunctionalFunctions':len(NEW),'functionalOriginalInstructionBytes':816,
      'exactMatchingFunctionCandidates':sum(row['exactLinkedSpanCandidate'] for row in functions),'acceptedSourceCreditGranted':0,
      'runtimeInputs':[record(ROOT/path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
        'tools/python/Lib/site-packages/capstone/__init__.py','tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
        'tools/python/Lib/site-packages/unicorn/__init__.py']],
      'elapsedSeconds':time.monotonic()-started,
      'limits':['Finite UTF16 candidate count0..16, at most120 units per candidate and at most16384 provider file bytes',
        'Successful lower read/size/CFG results only; negative open results and absent namespace are separately exercised',
        'Aligned untagged provider handles only; tagged handles, lower SDK diagnostics and actual OS file mounts remain unqualified',
        'Current-thread recursive heap mutex is preheld; kernel contention and complete process startup are unqualified',
        'Owner initialization, resource mount and allocation wrapper bodies remain separate unqualified drafts',
        'Canonical ARM arena representations are traced while live; Windows full graph uses known live caller arena',
        'Canonical Windows compares persistent owner/buffers/provider state and does not claim its expired scratch graph',
        'Strict inherited complete-field retired-link/padding contract applies; partial historical pointer fragments remain unsupported',
        'Owner release callback snapshots typed fields before logical retirement; this fixture does not release actual OS backing pages',
        'All reference SDK/function discoveries remain reference-only and confer no new SDK or inventory admission',
        'Observed instruction PCs do not establish all branch outcomes or universal equivalence',
        'Android source component is linked only; no device execution, standalone game, independent replay or acceptance claimed']}
    if any(record(ROOT/pin['path'])!=pin for pin in pins):raise RuntimeError('Owner inputs changed during validation')
    save(output,packet)
    print(json.dumps({'functions':6,'bytes':816,'cases':len(rows),'cross':cross,'controls':len(negative),
        'unhit':len(owned-reached),'elapsedSeconds':packet['elapsedSeconds']}),flush=True)
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=WORK/'file-owner-orchestration-sealed')
    parser.add_argument('--output',type=Path,default=OUTPUT/'packet.json');arguments=parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Owner outputs escape owned paths')
    run(arguments.work.resolve(),arguments.output.resolve())
