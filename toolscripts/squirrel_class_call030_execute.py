import hashlib
import json

from squirrel_class_call030_build import ROOT,WORK,SOURCES,arm,windows,android,entrypoints,pin,save
from squirrel_class_call030_oracle import Arm,Windows
from squirrel_class_call030_model import compare_arm,compare_native,parse
from squirrel_class_call030_sdk import write as write_sdk
from squirrel_lookup020_android import Android


VARIANTS=range(27)


def digest(value):return hashlib.sha256(json.dumps(value,separators=(',',':')).encode()).hexdigest()


def produce(folder=WORK/'primary',discovery=False):
    folder=folder.resolve()
    sections,symbols,functions,arm_build=arm(folder/'arm')
    library=windows(folder/'windows')
    a_sections,a_symbols,a_functions,android_build=android(folder/'android')
    reference=Arm(sections,symbols,functions,True,discovery)
    source=Arm(sections,symbols,functions)
    native=Windows(library);a64=Android(a_sections,entrypoints(a_symbols))
    observations=[];ordered=hashlib.sha256()
    for variant in VARIANTS:
        for cleanup in (0,1):
            expected,original_heap=reference.execute(variant,cleanup)
            authored,source_heap=source.execute(variant,cleanup)
            if expected!=authored:raise ValueError('030 ARM observations disagree: '+str(variant))
            parse(expected)
            heap=compare_arm(original_heap,source_heap)
            original_raw=reference.precomparison_arena;source_raw=source.precomparison_arena
            raw_differences=[i for i,(a,b) in enumerate(zip(original_raw,source_raw)) if a!=b]
            if reference.dead_frame_reads or source.dead_frame_reads:
                raise ValueError('030 forbidden inactive native-frame observer')
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
            observations.append(row);ordered.update((digest(row)+'\n').encode())
        print('030 validated',variant,flush=True)
        save(folder/'observations.partial.json',observations)
    if discovery:write_sdk(reference)
    coverage=[]
    claim=json.loads((ROOT/'evidence/lanes/squirrel-class-call030/claim.json').read_text())
    for function in claim['functions']:
        pcs=[pc for region in function['instructions'] for pc in range(region['address'],region['endExclusive'],4)]
        missing=[pc for pc in pcs if pc not in reference.coverage]
        coverage.append({'address':function['entry'],'role':function['role'],'totalArmInstructions':len(pcs),
            'coveredArmInstructions':len(pcs)-len(missing),'missingInstructionAddresses':missing})
    report={'schemaVersion':1,'status':'bounded-native-constructor-class-instance-ownership-graph',
        'sets':len(observations),'targetObservations':len(observations)*4,'orderedDigest':ordered.hexdigest(),
        'observations':observations,'coverage':coverage,'androidReturnedApiCalls':a64.calls,
        'postAliasWholeArenaEqualSets':sum(row['armMemory']['wholeComparisonArenaEqual'] for row in observations),
        'definedMemoryEqualSets':len(observations),'uninitializedFrameExclusionOffsets':[0,4,32,40],
        'preAliasCompleteArenaEqualSets':sum(not row['armMemory']['preAliasDifferentByteOffsets'] for row in observations),
        'arenaAliasProcedure':'verified typed callback data fields in a post-execution Python comparison copy only',
        'executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing':False,
        'runtimeProducer':pin(ROOT/'toolscripts/squirrel_class_call030_runtime.py'),
        'referenceSdk':pin(ROOT/'evidence/lanes/squirrel-class-call030/reference-sdk-exchange.json'),
        'uninitializedFrameContract':pin(ROOT/'evidence/lanes/squirrel-vm-call022/ready.json'),
        'emptyOriginalExecutableSourceImage':True,'nativeAddressTopologyIndependentlyVerified':True,
        'allocatorAssertFailureGcClassOpcodeScriptConstructorsWholeVmGameDeviceOrSourceCreditClaimed':False,
        'sourceFiles':[pin(path) for path in SOURCES],
        'producer':pin(ROOT/'toolscripts/squirrel_class_call030_execute.py'),
        'artifacts':[pin(folder/'arm/class.elf'),pin(library),pin(folder/'android/libcoercion026.so')]}
    save(folder/'execution.json',report)
    return report


if __name__=='__main__':
    import argparse
    parser=argparse.ArgumentParser();parser.add_argument('--discovery',action='store_true')
    parser.add_argument('--folder',default=str(WORK/'primary'))
    args=parser.parse_args();print(produce(__import__('pathlib').Path(args.folder),args.discovery)['sets'])
