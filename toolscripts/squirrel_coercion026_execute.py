import hashlib
import json

from squirrel_coercion026_build import ROOT,WORK,SOURCES,arm,windows,android,entrypoints,pin,save
from squirrel_coercion026_oracle import Arm,Windows
from squirrel_lookup020_android import Android
from squirrel_coercion026_model import VARIANTS,compare_heap,compare_native,validate
from squirrel_coercion026_float import compare as compare_float
from squirrel_coercion026_sdk import write as write_sdk


def digest(value):return hashlib.sha256(json.dumps(value,separators=(',',':')).encode()).hexdigest()


def produce(folder=WORK/'primary',discovery=True):
    sections,symbols,functions,arm_build=arm(folder/'arm')
    binary=folder/'arm/lookup.elf'
    library=windows(folder/'windows')
    a_sections,a_symbols,a_functions,android_build=android(folder/'android')
    dso=folder/'android/libcoercion026.so'
    reference=Arm(sections,symbols,functions,True,discovery)
    source=Arm(sections,symbols,functions)
    native=Windows(library)
    a64=Android(a_sections,entrypoints(a_symbols))
    observations=[];ordered=hashlib.sha256()
    for variant in VARIANTS:
        for cleanup in (0,1):
            expected,original_heap=reference.execute(variant,cleanup)
            authored,source_heap=source.execute(variant,cleanup)
            if expected!=authored:raise ValueError('026 ARM observations disagree: '+str(variant))
            validate(variant,expected,4)
            heap=compare_heap(original_heap,source_heap)
            original_raw=reference.precomparison_arena
            source_raw=source.precomparison_arena
            raw_differences=[index for index,(a,b) in enumerate(zip(original_raw,source_raw)) if a!=b]
            if reference.dead_frame_reads or source.dead_frame_reads:
                raise ValueError('026 forbidden dead-frame field observed')
            win=native.execute(variant,cleanup);android_words=a64.execute(variant,cleanup)
            win_model=compare_native(variant,expected,win)
            android_model=compare_native(variant,expected,android_words)
            row={'variant':variant,'cleanup':cleanup,'armOriginal':expected,'armSource':authored,
                'windows':win,'androidObjectModel':android_words,
                'armMemory':dict(heap,originalArenaSha256=hashlib.sha256(original_heap).hexdigest(),
                    sourceArenaSha256=hashlib.sha256(source_heap).hexdigest(),
                    preAliasOriginalArenaSha256=hashlib.sha256(original_raw).hexdigest(),
                    preAliasSourceArenaSha256=hashlib.sha256(source_raw).hexdigest(),
                    preAliasDifferentByteOffsets=raw_differences,
                    originalCallbackDataAliases=reference.callback_data_aliases,
                    sourceCallbackDataAliases=source.callback_data_aliases),
                'windowsModel':win_model,'androidModel':android_model,
                'originalDeadFrameReadSites':reference.dead_frame_reads,'sourceDeadFrameReadSites':source.dead_frame_reads}
            observations.append(row);ordered.update((digest(row)+'\n').encode())
            if len(observations)%32==0:save(folder/'observations.partial.json',observations)
        if variant%16==0:print('026 validated',variant,flush=True)
    sdk=write_sdk(reference) if discovery else None
    float_report=compare_float(library,folder/'float-host-reference.json')
    coverage=[]
    claim=json.loads((ROOT/'evidence/lanes/squirrel-coercion026/claim.json').read_text())
    for function in claim['functions']:
        region=function['instructions'];pcs=range(region['address'],region['endExclusive'],4)
        missing=[pc for pc in pcs if pc not in reference.coverage]
        coverage.append({'address':region['address'],'instructionBytes':region['bytes'],
            'totalArmInstructions':region['bytes']//4,'coveredArmInstructions':region['bytes']//4-len(missing),
            'missingInstructionAddresses':missing})
    report={'schemaVersion':1,'status':'bounded-four-target-coercion-and-stack-publication',
        'sets':len(observations),'targetObservations':len(observations)*4,'orderedDigest':ordered.hexdigest(),
        'observations':observations,'coverage':coverage,'androidReturnedApiCalls':a64.calls,
        'rawWholeArenaEqualSets':sum(row['armMemory']['rawWholeArenaEqual'] for row in observations),
        'definedMemoryEqualSets':len(observations),'uninitializedFrameExclusionOffsets':[0,4,32,40],
        'preAliasCompleteArenaEqualSets':sum(not row['armMemory']['preAliasDifferentByteOffsets'] for row in observations),
        'arenaAliasProcedure':'verified typed callback data fields in a post-execution Python comparison copy only',
        'executedHeapObjectsRegistersCodeLiteralsAndTextAlteredByAliasing':False,
        'runtimeProducer':pin(ROOT/'toolscripts/squirrel_coercion026_runtime.py'),
        'uninitializedFrameContract':pin(ROOT/'evidence/lanes/squirrel-vm-call022/ready.json'),
        'nativePointerTextNeverTruncatedOrNormalized':True,'emptyOriginalExecutableSourceImage':True,
        'allocatorAssertFailureGeneralPrintfExecuteClassFactoryGcWholeVmGameDeviceOrSourceCreditClaimed':False,
        'sourceFiles':[pin(path) for path in SOURCES],'producer':pin(ROOT/'toolscripts/squirrel_coercion026_execute.py'),
        'artifacts':[pin(binary),pin(library),pin(dso)],'floatHostReference':pin(folder/'float-host-reference.json')}
    save(folder/'execution.json',report)
    return report


if __name__=='__main__':
    result=produce();print(result['sets'],result['coverage'],flush=True)
