import argparse
import ctypes
import hashlib
import json
import time
from pathlib import Path

import native_wave013_file_owner_locale_build as build_tools
import native_wave013_file_owner_locale_original as originals
import native_wave013_file_owner_locale_runtime as runtime
from native_wave013_file_owner_locale_cases import cases
from native_wave013_file_owner_locale_mutations import mutations
from native_wave013_file_owner_locale_platforms import layouts,android
from native_wave013_dfa_boundaries import incoming_witnesses
from native_wave013_common import ROOT,WORK,OUT,FLAGS,MODULE_SHA,record,save,sha


NEW=[0x453b34,0x4c46e8]
OUTPUT=OUT/'file/owner/locale'
PRODUCERS=[
    'native_wave013_file_owner_locale.py',
    'native_wave013_file_owner_locale_build.py',
    'native_wave013_file_owner_locale_runtime.py',
    'native_wave013_file_owner_locale_model.py',
    'native_wave013_file_owner_locale_cases.py',
    'native_wave013_file_owner_locale_mutations.py',
    'native_wave013_file_owner_locale_platforms.py',
    'native_wave013_file_owner_locale_abi.c',
    'native_wave013_file_owner_locale_fixture.c',
    'native_wave013_file_owner_locale_fixture.h',
    'native_wave013_file_owner_locale_verify.py',
    'native_wave013_nfa_original.py',
    'native_wave013_file_owner_original.py',
    'native_wave013_file_original.py',
    'native_wave013_outer_original.py',
    'native_wave013_file_owner_locale_original.py',
    'native_wave013_file_owner_locale_qualification.py',
    'native_wave013_dfa_boundaries.py',
    'native_wave013_common.py',
    'native_wave012_arena_oracle.py',
    'native_wave012_ctor_runtime.py',
]


def headers():
    import re
    found=set()
    pending=[*build_tools.SOURCES,ROOT/'toolscripts/native_wave013_file_owner_locale_abi.c']
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
        path=ROOT/'src/native/wave013/pattern_file_owner_locale.c'
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
    evidence=[OUT/'file/owner/initial-claim.json',OUT/'file/owner/locale/qualification.json',OUT/'file/owner/locale/attempts.json',
        ROOT/'evidence/lanes/native-inventory-completion/seeded/update-census.json',OUT/'method-dispatch-overlay.json',
        OUT/'nfa-unicode-data-proposal.json',OUT/'file/claim.json']
    header_paths=headers()
    producers=[ROOT/'toolscripts'/name for name in PRODUCERS]
    pins=[record(path) for path in [*evidence,*header_paths,*producers,*build_tools.SOURCES]]
    receipts=[]
    source=build_tools.arm(folder/'source',receipts)
    original=originals.load()
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
            'originalResult':target['result'],'originalServiceTrace':target['serviceTrace']}
        results.append(row)
        reached.update(target['codePath'])
        fixture_digest.update(json.dumps(row,sort_keys=True).encode())
        if time.monotonic()-last_update>15:
            print(json.dumps({'completedLocaleCases':len(results),'totalLocaleCases':len(specifications)}),flush=True)
            last_update=time.monotonic()
    save(folder/'results.private.json',results)
    cross=0
    for specification in [{'regions':[1,1],'language':2},{'regions':[2,2],'language':34,'operation':'policy'}]:
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
    packet={'schemaVersion':1,'lane':'wave013-native-owner-locale-selection','status':'bounded-source-policy-with-original-CFG-SVC-observation',
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
        'sourceConfigurationWrapperOriginalCredit':0,'fixtureServiceOriginalCredit':0,
        'originalReferenceConfigurationFunctions':[0x454388,0x45438c,0x45434c,0x14e494],
        'referenceExecutesOriginalCfgRequestAndResultInstructions':True,
        'sourceServices':'Typed region/language/failure callbacks; no kernel IPC or original executable in source'},
      'behavior':{'allQualifiedCasesPassed':True,'constructionAndRangeCases':len(results),
        'attemptedFixtureCases':len(specifications),'caseResultDigest':fixture_digest.hexdigest(),
        'privateRawFixtureResults':record(folder/'results.private.json'),'flagAndReturnCrossProductCases':cross,
        'newOriginalInstructions':len(owned),'originalInstructionsReached':len(owned&reached),
        'provenExcludedInstructions':0,'unhitNotProvenExcludedInstructions':sorted(owned-reached),
        'allReachableInstructionsClaimedCovered':not(owned-reached),'branchOutcomeCoverageClaimed':False,
        'everyLiveAndNonPrivateByteCompared':True,'fullFixtureBytes':runtime.model.SIZE,
        'ARMReadWriteBoundsAndOwnedCodeChecked':True,'privateStackFrameBytes':512,
        'privatePointerMasksRequired':False,'sourceOutputPatched':False,'wholeMemoryEquivalenceClaimed':False,
        'lifetimeContract':'Caller-owned output arrays, count and service contexts remain live; all untouched outputs and guards are compared',
        'boundedNotUniversalEquivalence':True,'sourceApiRoots':['fn_00453b34','fn_004c46e8'],
        'serviceRepliesQualified':'Successful kernel/CFG results only; stable and synthetic independent byte responses are separately labeled',
        'countWriteOrderingCheckedAtEveryActualOriginalSvc':True},
      'negativeControls':negatives,'fixtureSpecifications':specifications,'ABI':abi,
      'platform':{'windowsNativeExecuted':True,
        'windowsConstructionAndRangeCases':len(results),'windowsDll':record(library_path),'truePointersAbove32Bits':True,
        'android':android_component,'wholeGameBuildOrExecution':False},
      'newFunctionalFunctions':2,'functionalOriginalInstructionBytes':768,
      'exactMatchingFunctionCandidates':sum(row['exactLinkedSpanCandidate'] for row in functions),'acceptedSourceCreditGranted':0,
      'runtimeInputs':[record(ROOT/path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
        'tools/python/Lib/site-packages/capstone/__init__.py','tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
        'tools/python/Lib/site-packages/unicorn/__init__.py']],
      'limits':['Bounded successful CFG replies; no kernel/session initialization, diagnostic/failure behavior or whole device claim',
        'Stable replies are distinguished from synthetic changing region responses used to exercise logical cases',
        'Actual hardware reachability of arbitrary byte responses or changing secure region is not asserted',
        'Source expresses ARM register-shift behavior with an explicit guarded U32 shift, not undefined C shifts',
        'All dispatch target tables remain nonexecutable data and receive zero instruction/source-byte credit',
        'Frozen census boundaries and shared getter NOP/fallthrough ownership remain unchanged',
        'Service observations come from actual original SVC requests and initialized fixture replies, never source output patches',
        'Instruction-address coverage does not establish every conditional outcome or universal equivalence',
        'Configuration service providers and SDK boundary entries receive zero new original-function credit',
        'The remaining owning allocation/mount/apply/delete family is separate work',
        'No shared registry changes, acceptance, independent clean replay, native game or Android device execution claimed']}
    if any(record(ROOT/pin['path'])!=pin for pin in pins):
        raise ValueError('Character transform inputs changed during validation')
    save(output,packet)
    print(json.dumps({'functions':2,'bytes':768,'fixtures':len(results),
        'unhit':len(owned-reached),'exactCandidates':packet['exactMatchingFunctionCandidates']}),flush=True)
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--work',type=Path,default=WORK/'file-owner-locale-sealed')
    parser.add_argument('--output',type=Path,default=OUTPUT/'packet.json')
    arguments=parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Character outputs escape owned lane')
    run(arguments.work.resolve(),arguments.output.resolve())
