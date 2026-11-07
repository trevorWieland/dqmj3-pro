import argparse
import ctypes
import hashlib
import json
import time
from pathlib import Path

from native_wave013_common import ROOT,MODULE_SHA,record,save
import native_wave013_file_owner_provider_layout as abi_tools
import native_wave013_file_owner_game_provider_build as provider_build
from native_wave013_file_owner_game_layout import arm as game_arm,windows as game_windows
from native_wave013_file_owner_game_evidence import prerequisites,headers
from native_wave013_file_owner_orchestration import PRODUCERS as CORE_PRODUCERS
import native_wave013_nfa_data as unicode_services
import native_wave027_owner_session_build as build_tools
import native_wave027_owner_session_runtime as runtime
from native_wave027_owner_session_reference import ReferenceImage
from native_wave027_owner_session_layout import arm as session_arm,windows as session_windows
from native_wave027_owner_session_a64_layout import measure
from native_wave027_owner_session_a64_runtime import execute as a64_execute
from native_wave027_owner_session_native import execute as native_execute
from native_wave027_owner_session_compare import compare
from native_wave027_owner_session_cases import cases
from native_wave027_owner_session_kernel import Kernel
from native_wave027_owner_session_state import archive_image
from native_wave027_owner_session_negative import controls
from native_wave027_owner_session_platforms import android
from native_wave027_owner_session_verify import verify


OUTPUT=ROOT/'evidence/lanes/wave027-owner-session'


def graph_records(graph):
    return {'linkedElf':graph['linkedElf'],'linkerScript':graph['linkerScript'],'objects':graph['objects'],
        'functions':[{'symbol':name,**{key:value for key,value in row.items() if key!='raw'}}
            for name,row in sorted(graph['functions'].items())],
        'executableRanges':graph['executableRanges'],'readonlyRanges':graph['readonlyRanges'],
        'writableRanges':graph['writableRanges'],'mutableSourceObjects':graph['mutableSourceObjects']}


def input_paths():
    producers={*(ROOT/'toolscripts'/name for name in CORE_PRODUCERS),
        *(ROOT/'toolscripts').glob('native_wave013_file_owner_game*'),
        *(ROOT/'toolscripts').glob('native_wave013_file_owner_mount*'),
        *(ROOT/'toolscripts').glob('native_wave027_owner_session*')}
    sources=[*build_tools.SOURCES,*provider_build.SOURCES,ROOT/'toolscripts/native_wave013_file_owner_provider_abi.c']
    return sorted({*producers,*sources,*headers(sources),*prerequisites(),
        OUTPUT/'reference-sdk-boundaries.json',ROOT/'docs/native-owner-session027.md',
        ROOT/'tests/test_native_wave027_owner_session.py'})


def run(folder,output):
    started=time.monotonic();folder.mkdir(parents=True,exist_ok=True);output.mkdir(parents=True,exist_ok=True)
    pins=[record(path) for path in input_paths()];receipts=[]
    abi=abi_tools.layouts(folder/'abi',receipts)
    source=build_tools.arm(folder/'source',receipts);provider=provider_build.arm(folder/'provider',receipts)
    dll=build_tools.windows(folder/'windows',receipts);library=ctypes.CDLL(str(dll))
    graph64=build_tools.a64(folder/'a64',receipts);a64_abi,a64_probe=measure(folder/'a64-layout',graph64,receipts)
    arm=abi['profiles']['arm'];native=abi['profiles']['windows']
    arm['game']=game_arm(source);arm['session']=session_arm(source)
    native['game']=game_windows(library);native['session']=session_windows(library)
    if game_arm(provider)!=arm['game'] or a64_abi!=native:raise RuntimeError('Session independently measured ABI profiles differ')
    unicode=unicode_services.load();binding=unicode_services.bind_windows(library,unicode);reference=ReferenceImage()
    rows=[];instructions={};reads={};dependencies={};calls=set();baseline=None;baseline_spec=None;reached=set()
    for index,item in enumerate(cases()):
        spec=item['specification'];image=archive_image(spec)['image'];case_started=time.monotonic()
        kernel=Kernel(dll,image,spec.get('mount_result',0),spec.get('archive_read_result',0),spec.get('archive_chunk',0),spec.get('archive_priority',0))
        target=runtime.execute(provider,spec,arm,unicode,reference,seed=index,thumb=bool(index&1),flags=index%16,kernel_provider=kernel)
        actual=runtime.execute(source,spec,arm,unicode,seed=index,thumb=bool(index&1),flags=index%16)
        portable=runtime.execute(source,{**spec,'portable_arm':True},arm,unicode,seed=index,thumb=bool(index&1),flags=index%16)
        win,win_result=native_execute(library,binding,spec,target,native,seed=index)
        model64=a64_execute(graph64,{**spec,'portable_arm':True},a64_abi,unicode,seed=index,flags=index%16)
        row={'name':item['name'],'result':target['result'],'sourceArm':compare(actual,target),
            'portableArm':compare(portable,target),'windows':win_result,'a64':compare(model64,target),
            'kernelServiceTrace':target['kernelServiceTrace'],'logicalIo':target['logicalIo'],
            'originalOpenedFileContracts':target['openedFileContracts'],'originalSdkWorkRequired':target['mountWorkRequired'],
            'sourceSdkCacheRequired':0,'originalSourceCodeMapped':False,
            'originalMemorySha256':target['memorySha256'],'sourceMemorySha256':actual['memorySha256'],
            'elapsedSeconds':time.monotonic()-case_started}
        rows.append(row);reached.update(target['codePath']);save(folder/'partial-results.private.json',rows)
        for witness in target['referenceInstructionWitnesses']:instructions[witness['address']]=witness
        for witness in target['referenceDataReadWitnesses']:
            key=(witness['pc'],witness['address'],witness['bytes']);reads.setdefault(key,set()).update(witness['observedValueSha256'])
        for dependency in target['dependencies']:dependencies[dependency['address']]=dependency
        calls.update(json.dumps(value,sort_keys=True) for value in target['calls'])
        if baseline is None:baseline=target;baseline_spec=spec
        print(json.dumps({'completedSessionCases':len(rows),'totalSessionCases':len(cases())}),flush=True)
    save(output/'case-results.json',rows)
    negative,negative_receipts=controls(folder/'negative',baseline,baseline_spec,arm,native,unicode)
    receipts.extend(negative_receipts)
    cross=[]
    for flags in range(16):
        for thumb in [False,True]:
            actual=runtime.execute(source,baseline_spec,arm,unicode,seed=0,thumb=thumb,flags=flags)
            compare(actual,baseline);cross.append({'flags':flags,'thumbReturn':thumb,'sourceArmComparedToOriginalBaseline':True})
    platform=android(folder/'android',receipts)
    domains=[]
    for name in ['owner_allocator_null','storage_allocator_exhausted']:
        spec={**baseline_spec,name:True,'capture_allocator_failure':True};image=archive_image(spec)['image'];status={}
        for label,graph,ref in [('original',provider,reference),('sourceArm',source,None)]:
            kernel=Kernel(dll,image)
            try:runtime.execute(graph,spec,arm,unicode,ref,kernel_provider=kernel if ref else None)
            except runtime.SessionExecutionStopped as error:status[label]={**error.details,'reason':str(error),'stoppedByExecutionOrMemoryGuard':True}
            else:raise RuntimeError('Unsupported allocator domain unexpectedly returned')
        if name=='owner_allocator_null' and any(status[label]['r0']!=0 for label in status):
            raise RuntimeError('Null owner did not reach initialization with a real null argument')
        if name=='storage_allocator_exhausted' and (status['original']['r0']!=0xd8601837 or
                status['sourceArm']['sourceFailureCalls']!=1 or status['sourceArm']['sourceFailureReason']!=0xd8601837):
            raise RuntimeError('Storage failure did not reach measured original/source failure contracts')
        domains.append({'name':name,**status,'windowsUndefinedBehaviorNotExecuted':True,'normalEquivalenceClaimed':False})
    save(output/'allocator-domain-observations.json',domains)
    save(output/'reference-sdk-exchange.json',{'schemaVersion':1,'moduleSha256':MODULE_SHA,
        'referenceOnly':True,'sourceCreditGranted':False,'inventoryAdmissionGranted':False,
        'instructions':[instructions[key] for key in sorted(instructions)],
        'dataReads':[{'pc':key[0],'address':key[1],'bytes':key[2],'observedValueSha256':sorted(values)} for key,values in sorted(reads.items())],
        'calls':[json.loads(value) for value in sorted(calls)],'dependencies':[dependencies[key] for key in sorted(dependencies)]})
    save(output/'linked-source-graphs.json',{'arm':graph_records(source),'a64':graph_records(graph64),
        'originalReferenceProvider':graph_records(provider),'windowsDll':record(dll),'android':platform,
        'sourceGraphMapsOriginalExecutableBytes':False,'newSdkSourceCredit':0})
    after=[record(ROOT/row['path']) for row in pins]
    if pins!=after:
        save(folder/'stale-input-failure.private.json',{'before':pins,'after':after,'componentCasesCompleted':len(rows)})
        raise RuntimeError('Session inputs changed during run; completed component results preserved')
    packet={'schemaVersion':1,'kind':'bounded-cold-mounted-archive-owner-session','status':'qualified',
        'moduleSha256':MODULE_SHA,'producer':record(Path(__file__)),'inputs':pins,'referencePins':reference.pins,
        'abi':abi,'a64Abi':a64_abi,'a64AbiProbe':a64_probe,'caseCount':len(rows),
        'caseResults':record(output/'case-results.json'),'returningControls':negative,
        'sourceArmFlagsReturnCross':cross,'originalProfileCartesianCrossClaimed':False,
        'sourceGraph':record(output/'linked-source-graphs.json'),'referenceSdkExchange':record(output/'reference-sdk-exchange.json'),
        'allocatorDomainObservations':record(output/'allocator-domain-observations.json'),
        'originalInstructionAddressesObserved':len(reached),'compilerReceipts':receipts,
        'sourceCreditRequested':0,'sdkSourceCreditGranted':0,'exactMatchingCreditGranted':0,
        'nativeWindowsExecuted':True,'a64HighAddressCpuExecuted':True,'androidOsOrDeviceExecuted':False,
        'wholeGameBuildOrExecution':False,'wholeMemoryEquivalenceClaimed':False,
        'elapsedSeconds':time.monotonic()-started}
    save(output/'packet.json',packet)
    save(output/'verification.json',verify(ROOT,output/'packet.json'))
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/wave027-owner-session/seal')
    parser.add_argument('--output',type=Path,default=OUTPUT);options=parser.parse_args()
    result=run(options.work,options.output)
    print(json.dumps({'packet':record(options.output/'packet.json'),'cases':result['caseCount'],'elapsedSeconds':result['elapsedSeconds']}))
