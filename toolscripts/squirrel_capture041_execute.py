import hashlib
import json
import struct

from squirrel_capture041_build import ROOT,WORK,SOURCES,arm,windows,android,entrypoints,pin,save
from squirrel_capture041_oracle import Arm,Windows
from squirrel_class034_model import compare_arm
from squirrel_capture041_model import compare_native,parse
from squirrel_capture041_sdk import write as write_sdk
from squirrel_capture041_android import Android


VARIANTS=range(66)


def digest(value):return hashlib.sha256(json.dumps(value,separators=(',',':')).encode()).hexdigest()


def produce(folder=WORK/'primary',discovery=False):
    folder=folder.resolve()
    from concurrent.futures import ThreadPoolExecutor
    with ThreadPoolExecutor(3) as pool:
        tasks=[pool.submit(f,folder/name)for f,name in ((arm,'arm'),(windows,'windows'),(android,'android'))]
        sections,symbols,functions,arm_build=tasks[0].result();library=tasks[1].result()
        a_sections,a_symbols,a_functions,android_build=tasks[2].result()
    reference=Arm(sections,symbols,functions,True,discovery)
    source=Arm(sections,symbols,functions)
    native=Windows(library);a64=Android(a_sections,entrypoints(a_symbols))
    observations=[];ordered=hashlib.sha256();frozen_count=0
    frozen=json.loads((ROOT/'evidence/lanes/squirrel-capture038/execution.json').read_text())
    old={(row['variant'],row['cleanup']):row for row in frozen['observations']}
    source_preserved=0
    from squirrel_capture038_build import arm as frozen_arm
    _,frozen_symbols,_,frozen_build=frozen_arm(folder/'frozen038-arm')
    expected_frozen=next(row for row in frozen['artifacts']if row['path'].endswith('capture038.elf'))
    if frozen_build['linkedElf']['sha256']!=expected_frozen['sha256']:raise ValueError('041 old038 compiler/fixture identity changed')
    for variant in VARIANTS:
        for cleanup in (0,1):
            expected,original_heap=reference.execute(variant,cleanup)
            authored,source_heap=source.execute(variant,cleanup)
            if expected!=authored:raise ValueError('038 ARM observations disagree: '+str(variant))
            parse(expected,0x2000000)
            heap=compare_arm(original_heap,source_heap,reference.native_frame_offsets,source.native_frame_offsets)
            original_raw=reference.precomparison_arena;source_raw=source.precomparison_arena
            raw_differences=[i for i,(a,b) in enumerate(zip(original_raw,source_raw)) if a!=b]
            if reference.dead_frame_reads or source.dead_frame_reads:
                raise ValueError('038 forbidden inactive native-frame observer')
            win=native.execute(variant,cleanup);android_words=a64.execute(variant,cleanup)
            row={'variant':variant,'cleanup':cleanup,'armOriginal':expected,'armSource':authored,
                'windows':win,'androidObjectModel':android_words,
                'armMemory':dict(heap,originalArenaSha256=hashlib.sha256(original_heap).hexdigest(),
                    sourceArenaSha256=hashlib.sha256(source_heap).hexdigest(),
                    preAliasOriginalArenaSha256=hashlib.sha256(original_raw).hexdigest(),
                    preAliasSourceArenaSha256=hashlib.sha256(source_raw).hexdigest(),
                    preAliasDifferentByteOffsets=raw_differences,
                    originalCallbackDataAliases=reference.callback_data_aliases,
                    sourceCallbackDataAliases=source.callback_data_aliases),
                'windowsModel':compare_native(variant,expected,win,0x120000000),
                'androidModel':compare_native(variant,expected,android_words,0x110000000),
                'originalDeadFrameReadSites':reference.dead_frame_reads,'sourceDeadFrameReadSites':source.dead_frame_reads}
            if variant<54:
                previous=old[variant,cleanup]
                if authored!=previous['armSource']:raise ValueError('041 changed frozen038 semantic observations')
                view=bytearray(source_heap);aliases=[]
                for offset in(0xe000,0xe400,0xe600):
                    value=struct.unpack_from('<I',view,offset)[0]
                    if value!=symbols['unqualified_receiver_lifetime020']:raise ValueError('041 legacy fixture pointer has unexpected identity')
                    aliases.append({'arenaOffset':offset,'field':'unused legacy020 fixture prefix.vtable',
                        'actualValue':value,'oldFrozenValue':frozen_symbols['unqualified_receiver_lifetime020']})
                    struct.pack_into('<I',view,offset,frozen_symbols['unqualified_receiver_lifetime020'])
                view_hash=hashlib.sha256(view).hexdigest()
                if view_hash!=previous['armMemory']['sourceArenaSha256']:raise ValueError('041 changed038 state outside three declared inactive fixture addresses')
                row['frozen038Compatibility']={'comparisonCopyOnly':True,'executedStateAltered':False,
                    'typedFixtureAddressAliases':aliases,'comparisonViewSha256':view_hash,
                    'actualSourceArenaSha256':row['armMemory']['sourceArenaSha256']}
                frozen_count+=1;source_preserved+=1
            row['actualStartupGlobals']=reference.startup_globals
            row['liveNullTemplateReads']=reference.live_null_reads
            observations.append(row);ordered.update((digest(row)+'\n').encode())
        print('041 validated',variant,flush=True)
        save(folder/'observations.partial.json',observations)
    terminals=[]
    from squirrel_capture041_windows_terminal import execute as windows_terminal
    for variant in range(66,70):
        expected,original_heap=reference.execute(variant,0);authored,source_heap=source.execute(variant,0)
        android_result=a64.execute(variant,0);window_result=windows_terminal(library,variant)
        if expected!=authored or android_result!=expected:raise ValueError('041 terminal policy/outcome mismatch')
        memory=compare_arm(original_heap,source_heap,reference.native_frame_offsets,source.native_frame_offsets)
        if reference.terminal is None or source.terminal is None:raise ValueError('041 unobserved fatal boundary')
        terminals.append({'variant':variant,'armOriginal':expected,'armSource':authored,'androidObjectModel':android_result,
            'windows':window_result,'originalOutcome':reference.terminal,'sourceOutcome':source.terminal,
            'armMemory':dict(memory,originalArenaSha256=hashlib.sha256(original_heap).hexdigest(),
                sourceArenaSha256=hashlib.sha256(source_heap).hexdigest(),
                preAliasOriginalArenaSha256=hashlib.sha256(reference.precomparison_arena).hexdigest(),
                preAliasSourceArenaSha256=hashlib.sha256(source.precomparison_arena).hexdigest()),
            'actualStartupGlobals':reference.startup_globals,'normalReturn':False,'physicalKernelOutcomeClaimed':False})
        print('041 terminal validated',variant,flush=True)
    if discovery:write_sdk(reference)
    claim=json.loads((ROOT/'evidence/lanes/squirrel-capture041/claim.json').read_text())
    pcs=list(range(0x196b08,0x196f58,4))
    missing=[pc for pc in pcs if pc not in reference.coverage]
    coverage=[{'address':0x196b08,'role':'complete-script-closure-controller-normal-hazard-and-terminal-contracts',
        'totalArmInstructions':len(pcs),'coveredArmInstructions':len(pcs)-len(missing),
        'missingInstructionAddresses':missing}]
    report={'schemaVersion':1,'status':'versioned-script-creation-errors-reentrancy-default-mutation-and-terminal-contracts',
        'sets':len(observations)+len(terminals),'targetObservations':(len(observations)+len(terminals))*4,'normalReturnSets':len(observations),'terminalBoundarySets':len(terminals),'orderedDigest':ordered.hexdigest(),
        'observations':observations,'terminalObservations':terminals,'preservedFrozen038Sets':frozen_count,'frozen038SourceComparisonViewsEqual':source_preserved,'frozen038CompilerArtifact':frozen_build['linkedElf'],'coverage':coverage,'androidReturnedApiCalls':a64.calls,
        'postAliasWholeArenaEqualSets':sum(row['armMemory']['wholeComparisonArenaEqual'] for row in observations),
        'refcountWrapContextIsAnExplicitLifetimeHazard':True,'unobservedPcsHaveMeasuredLiveGlobalTemplateConditions':True,
        'opcode48FragmentOriginalPcCoverage':[pc for pc in range(0x18fe08,0x18fe54,4)if pc in reference.coverage],
        'terminalComparisonArenaEqualSets':sum(row['armMemory']['wholeComparisonArenaEqual']for row in terminals),
        'definedMemoryEqualSets':len(observations),'uninitializedNativeFrameExclusionOffsets':[0,4,32,40],
        'preAliasCompleteArenaEqualSets':sum(not row['armMemory']['preAliasDifferentByteOffsets'] for row in observations),
        'arenaAliasProcedure':'verified typed callback data fields in a post-execution Python comparison copy only',
        'executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing':False,
        'runtimeProducer':pin(ROOT/'toolscripts/squirrel_capture041_runtime.py'),
        'referenceSdk':pin(ROOT/'evidence/lanes/squirrel-capture041/reference-sdk-exchange.json'),
        'uninitializedFrameContract':pin(ROOT/'evidence/lanes/squirrel-vm-call022/ready.json'),
        'emptyOriginalExecutableSourceImage':True,'nativeAddressTopologyIndependentlyVerified':True,
        'allocatorAssertFailureGcFullExecuteWholeVmGameDeviceOrSourceCreditClaimed':False,
        'sourceFiles':[pin(path) for path in SOURCES],
        'producer':pin(ROOT/'toolscripts/squirrel_capture041_execute.py'),
        'artifacts':[pin(folder/'arm/capture041.elf'),pin(library),pin(folder/'android/libcoercion026.so')],
        'androidModelArtifact':pin(folder/'android/model.elf'),
        'frozenPredecessorClosureBuilder':pin(ROOT/'toolscripts/squirrel_class034_build.py')} 
    save(folder/'execution.json',report)
    return report


if __name__=='__main__':
    import argparse
    parser=argparse.ArgumentParser();parser.add_argument('--discovery',action='store_true')
    parser.add_argument('--folder',default=str(WORK/'primary'))
    args=parser.parse_args();print(produce(__import__('pathlib').Path(args.folder),args.discovery)['sets'])
