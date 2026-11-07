import argparse
import ctypes
import hashlib
import json
import time
from pathlib import Path

import native_wave013_file_owner_full_build as build_tools
import native_wave013_file_owner_provider_build as provider_build
import native_wave013_file_owner_provider_layout as abi_tools
import native_wave013_file_owner_mount_runtime as runtime
import native_wave013_file_owner_mount_native as native
import native_wave013_file_owner_mount_provider as service
import native_wave013_nfa_data as unicode_services
from native_wave013_file_owner_mount_reference import ReferenceImage
from native_wave013_file_owner_mount_cases import cases
from native_wave013_file_owner_mount_compare import compare
from native_wave013_file_owner_mount_negative import controls
from native_wave013_file_owner_mount_romfs import build as romfs
from native_wave013_file_owner_mount_evidence import NEW,OUTPUT,measured,prerequisites,headers
from native_wave013_file_owner_orchestration import PRODUCERS as CORE_PRODUCERS
from native_wave013_file_owner_platforms import android
from native_wave013_common import ROOT,WORK,MODULE_SHA,FLAGS,record,save


def normalized(row):
    return {key:value for key,value in row.items() if key not in ['actualMemorySha256','projectedMemorySha256']}


def run(folder,output):
    started=time.monotonic();folder.mkdir(parents=True,exist_ok=True)
    owned=sorted((ROOT/'toolscripts').glob('native_wave013_file_owner_mount*'))
    producers=sorted({*(ROOT/'toolscripts'/name for name in CORE_PRODUCERS),*owned})
    evidence=prerequisites();header_paths=headers([*build_tools.SOURCES,ROOT/'toolscripts/native_wave013_file_owner_provider_abi.c'])
    inputs=sorted({*producers,*header_paths,*evidence,*build_tools.SOURCES,
        ROOT/'tests/test_native_wave013_file_owner_mount_service.py'})
    pins=[record(path) for path in inputs];receipts=[]
    abi=abi_tools.layouts(folder/'abi',receipts)
    source=build_tools.arm(folder/'source',receipts);provider=provider_build.arm(folder/'provider',receipts)
    kernel_build=service.build(folder/'archive-provider',receipts)
    kernel_dll=ROOT/kernel_build['dll']['path'];reference=ReferenceImage();unicode=unicode_services.load()
    dll=build_tools.windows(folder/'windows',receipts);library=ctypes.CDLL(str(dll))
    archive=romfs({});rows=[];reached=set();dependencies={};instructions={};reads={};calls=set();digest=hashlib.sha256()
    specifications=cases()
    for index,item in enumerate(specifications):
        spec=item['specification'];kernel=service.Provider(kernel_dll,archive['image'],open_result=ctypes.c_int(spec.get('mount_result',0)).value)
        target=runtime.execute(provider,spec,abi['profiles']['arm'],unicode,reference,seed=index,
            thumb=bool(index&1),flags=index%16,kernel_provider=kernel)
        actual=runtime.execute(source,spec,abi['profiles']['arm'],unicode,seed=index,thumb=bool(index&1),flags=index%16)
        arm=compare(actual,target);windows=native.execute(library,spec,target,abi['profiles']['windows'],seed=index)
        row={'name':item['name'],'result':target['result'],'arm':normalized(arm),'windows':normalized(windows),
            'originalMemorySha256':target['memorySha256'],'sourceMemorySha256':actual['memorySha256'],
            'kernelServiceTrace':target['kernelServiceTrace'],'mountRequests':target['mountRequests'],
            'mountWorkRequired':target['mountWorkRequired']}
        rows.append(row);digest.update(json.dumps(row,sort_keys=True).encode());reached.update(target['codePath'])
        for part in target['dependencies']:dependencies[part['address']]=part
        for part in target['referenceInstructionWitnesses']:instructions[part['address']]=part
        for part in target['referenceDataReadWitnesses']:
            key=(part['pc'],part['address'],part['bytes']);reads.setdefault(key,set()).update(part['observedValueSha256'])
        calls.update(json.dumps(part,sort_keys=True) for part in target['calls'])
        save(folder/'partial-results.private.json',rows)
        print(json.dumps({'completedMountCases':len(rows),'totalMountCases':len(specifications)}),flush=True)
    save(folder/'results.private.json',rows)
    cross=0
    for flags in range(16):
        for thumb in [False,True]:
            spec={'operation':'initialize','unallocated':True,'initialized':0,'registered':0,'mounted':0,
                'sdk_constructor':True,'instruction_limit':100000}
            kernel=service.Provider(kernel_dll,archive['image'])
            target=runtime.execute(provider,spec,abi['profiles']['arm'],unicode,reference,seed=flags,thumb=thumb,flags=flags,kernel_provider=kernel)
            actual=runtime.execute(source,spec,abi['profiles']['arm'],unicode,seed=flags,thumb=thumb,flags=flags)
            compare(actual,target);reached.update(target['codePath']);cross+=1
        print('mount flag/return cross '+str(cross),flush=True)
    negatives=controls(folder/'negative',reference,provider,abi['profiles'],unicode,kernel_dll,receipts)
    android_component=android(folder/'android',receipts)
    functions=measured(source,reached)
    trace={'schemaVersion':1,'status':'reference-only-runtime-witnesses','moduleSha256':MODULE_SHA,
        'inputPins':reference.pins,'instructions':[instructions[key] for key in sorted(instructions)],
        'dataReads':[{'pc':pc,'address':address,'bytes':size,'observedValueSha256':sorted(values)}
            for (pc,address,size),values in sorted(reads.items())],
        'calls':[json.loads(value) for value in sorted(calls)],'dependencies':[dependencies[key] for key in sorted(dependencies)],
        'sdkSourceCreditGranted':0,'sharedCensusChanged':False}
    trace_path=output.parent/'reference-trace.json';save(trace_path,trace)
    packet={'schemaVersion':1,'lane':'wave013-native-owner-mount','status':'bounded-source-mount-init-with-genuine-SDK-reference',
        'moduleSha256':MODULE_SHA,'functions':functions,'sources':[record(path) for path in build_tools.SOURCES],
        'headers':[record(path) for path in header_paths],'producers':[record(path) for path in producers],
        'evidenceInputs':[record(path) for path in evidence],'allValidationInputs':pins,
        'compiler':record(ROOT/'tools/clang-21/clang.exe'),'linker':record(ROOT/'tools/clang-21/ld.lld.exe'),
        'compilerFlags':FLAGS,'objects':source['objects'],'linkedElf':source['linkedElf'],'linkerScript':source['linkerScript'],
        'commands':receipts,'mutableSourceObjects':source['mutableSourceObjects'],'readonlySourceObjects':source['readonlyObjects'],
        'referenceTrace':record(trace_path),'referenceInputPins':reference.pins,'referenceKernelProvider':kernel_build,
        'generatedArchiveFixture':{'bytes':len(archive['image']),'sha256':hashlib.sha256(archive['image']).hexdigest(),
            'rootFileEntries':0,'headerWords':archive['headerWords'],'originalArchiveDataIncluded':False},
        'referencePreconditions':{'actualSdkInitializer':0x7087fc,'initializerExecutedBeforeBody':True,
            'declaredFsSessions':{'directOpen':0xf531,'priority':0xf532},'syscallContracts':['FS OpenFileDirectly','FS ReadFile','FS priority'],
            'archiveId':0x2345678a,'titleId':'000400db00010302','mediaType':0,'contentSection':1,
            'archivePathPaddingNotSemanticallyInterpreted':True,'binaryRootFilePathBytes':20,
            'initialHeapMutex':'preheld by current TLS thread','fullOriginalProcessStartupClaimed':False},
        'behavior':{'allQualifiedCasesPassed':True,'cases':len(rows),'flagAndReturnCrossProductCases':cross,
            'caseResultDigest':digest.hexdigest(),'privateRawFixtureResults':record(folder/'results.private.json'),
            'originalInstructions':sum(row['originalInstructions'] for row in functions),
            'originalInstructionsReached':sum(row['originalInstructionsReached'] for row in functions),
            'unhitNotProvenExcludedInstructions':sorted(pc for row in functions for pc in row['unhitInstructionAddresses']),
            'provenExcludedInstructions':0,'branchOutcomeCoverageClaimed':False,'ARMReadWriteBoundsAndOwnedCodeChecked':True,
            'sourceAndProviderArmModeChecked':True,'privateStackFrameBytes':8192,'allNativeFixtureBytesCompared':runtime.model.SIZE,
            'gameOwnedTypedFieldsAndRawBuffersCompared':True,'sourceOutputPatched':False,
            'originalSdkWorkingCacheWordEffects':{'bytesPerWrite':4,'relativeWorkOffsets':[0,32],'storePc':0x15e660,
                'onlyAcceptedValue':0,'nativePlatformWorkBytesAllPreserved':True,'originalCachePointersCopiedToNative':False},
            'allocationBudgets':{'targetOwnerStorage':65536,'nativeOwnerStorage':107520,'targetPageRounded':65536,'nativePageRounded':110592,
                'directWrapperRequestsRemainU32RawByteCounts':True,'rawFileBuffer':16384,'rawResourceWork':2048,'rawCandidates':2048},
            'wholeMemoryEquivalenceClaimed':False,'boundedNotUniversalEquivalence':True},
        'negativeControls':negatives,'fixtureSpecifications':specifications,'ABI':abi,
        'platform':{'windowsNativeExecuted':True,'windowsCases':len(rows),'windowsDll':record(dll),'truePointersAbove32Bits':True,
            'android':android_component,'wholeGameBuildOrExecution':False},
        'dependencies':{'role':'source','retainedOriginalExecutableHelpers':[],'originalImageMappedDuringSourceExecution':False,
            'otherSourceCanonicalFunctions':[row['canonicalOriginalAddress'] for row in source['functions'].values()
                if row['canonicalOriginalAddress'] is not None and row['canonicalOriginalAddress'] not in NEW],
            'unicodeDataSourceCredit':0,'sdkExecutionInReferenceGrantsSourceCredit':False},
        'newFunctionalFunctions':3,'functionalOriginalInstructionBytes':336,'acceptedSourceCreditGranted':0,
        'runtimeInputs':[record(ROOT/path) for path in ['tools/python/Lib/site-packages/capstone/lib/capstone.dll',
            'tools/python/Lib/site-packages/capstone/__init__.py','tools/python/Lib/site-packages/unicorn/lib/unicorn.dll',
            'tools/python/Lib/site-packages/unicorn/__init__.py']],
        'elapsedSeconds':time.monotonic()-started,
        'limits':['Successful archive header read and priority responses only; three negative Open statuses exercised',
            'Generated empty valid RomFS is used for mount metadata, without original system archive payloads',
            'Memory-ready false and already allocated wrapper states are tested directly; owner init requires valid allocated storage',
            'Allocation failure diagnostics, contended kernel synchronization and complete process startup remain unqualified',
            'Original SDK private working-cache words are represented by a platform contract, not copied into native storage',
            'Mount lifetime persists after successful return; real OS resource lifetime and SDK backend source reconstruction are not claimed',
            'SDK reference discoveries remain reference-only and confer no source or census admission',
            'Observed PCs do not establish all branch outcomes or universal equivalence',
            'Android component is linked only; no device execution, independent replay or acceptance claimed']}
    if any(record(ROOT/pin['path'])!=pin for pin in pins):raise RuntimeError('Mount inputs changed during validation')
    save(output,packet)
    print(json.dumps({'functions':3,'bytes':336,'cases':len(rows),'cross':cross,'controls':len(negatives),
        'unhit':len(packet['behavior']['unhitNotProvenExcludedInstructions']),'elapsedSeconds':packet['elapsedSeconds']}),flush=True)
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=WORK/'file-owner-mount-sealed')
    parser.add_argument('--output',type=Path,default=OUTPUT/'packet.json');arguments=parser.parse_args()
    if not arguments.work.resolve().is_relative_to(WORK.resolve()) or not arguments.output.resolve().is_relative_to(OUTPUT.resolve()):
        raise ValueError('Mount outputs escape owned paths')
    run(arguments.work.resolve(),arguments.output.resolve())
