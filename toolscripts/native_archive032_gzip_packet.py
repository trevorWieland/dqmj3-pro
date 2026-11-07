import argparse
import ctypes
import gzip
import importlib.metadata
import json
import platform
import re
import subprocess
import sys
import time
from pathlib import Path

import capstone
import unicorn
from native_wave013_common import ROOT,MODULE_SHA,record,save,sha
import native_archive032_gzip_build as build
from native_archive032_gzip_reference import ReferenceImage
from native_archive032_gzip_original import load
from native_archive032_gzip_evidence import inputs,graph_record,function_rows,getter
from native_archive032_gzip_oracle import execute,windows
from native_archive032_gzip_a64 import execute as a64_execute
from native_archive032_gzip_compare import compare,logical
from native_archive032_gzip_cases import cases
from native_archive032_gzip_model import abi,native_abi
from native_archive032_gzip_negative import run as negative
from native_archive032_gzip_platforms import android
from native_archive032_gzip_verify import verify
from native_archive032_assets import extract


OUTPUT=ROOT/'evidence/lanes/native-archive032/gzip'


def synthetic():
    images={};rows=[];types=set()
    for item in cases():
        spec=item['specification'];image=spec['input'];identity=sha(image)
        images[identity]={'bytes':len(image),'hex':image.hex()}
        block=None
        if image[:3]==b'\x1f\x8b\x08' and len(image)>=18:
            at=10;flags=image[3]
            try:
                if flags&4:at+=2+int.from_bytes(image[at:at+2],'little')
                for mask in [8,16]:
                    if flags&mask:at=image.index(0,at)+1
                if flags&2:at+=2
                if at<len(image)-8:block=(image[at]>>1)&3;types.add(block)
            except ValueError:pass
        rows.append({'label':item['label'],'function':item['name'],'inputSha256':identity,
            'fields':{key:value for key,value in spec.items() if key!='input'},'firstDeflateBlockType':block,
            'outputBudgetFromTrailer': 'budget' not in spec})
    if not {0,1,2}<=types:raise ValueError('Generated gzip corpus does not actually contain stored/fixed/dynamic first blocks')
    return {'generator':record(ROOT/'toolscripts/native_archive032_gzip_cases.py'),'images':images,'cases':rows,
        'observedFirstDeflateBlockTypes':sorted(types),'originalAssetsIncluded':False}


def private_cases(folder):
    assets=extract(folder);row=assets[2];image=(ROOT/row['path']).read_bytes();expected=gzip.decompress(image)
    return [{'label':'owner-compressed-xbb-owned'+str(int(owned))+'-session'+str(int(session)),
        'name':'gzip-lifecycle' if session else 'fn_005f5eac',
        'specification':{'input':image,'owned':owned,'session':session,'fresh':session},
        'privateOwnerData':True,'expectedOutputSha256':sha(expected)} for owned in [False,True] for session in [False,True]],{'resource':row,'decodedBytes':len(expected),'decodedSha256':sha(expected),
        'stdlibUsedOnlyForIndependentExpectedHash':True,'originalAssetBytesPublished':False}


def native_libraries():
    rows=[]
    for module in [unicorn,capstone]:
        for path in Path(module.__file__).parent.rglob('*.dll'):rows.append(record(path))
    return rows


def exchange(reference,instructions,reads):
    merged=[]
    for address,size in sorted(reads):
        if merged and address<=merged[-1][1]:merged[-1][1]=max(merged[-1][1],address+size)
        else:merged.append([address,address+size])
    extents=[{'start':low,'endExclusive':high,'bytes':high-low,'sha256':sha(reference.image[low-0x100000:high-0x100000]),
        'readInstructions':sorted({pc for (at,count),pcs in reads.items() if max(low,at)<min(high,at+count) for pc in pcs})}
        for low,high in merged]
    return {'schemaVersion':1,'moduleSha256':MODULE_SHA,'instructions':[instructions[a] for a in sorted(instructions)],
        'immutableDataReadExtents':extents,'sdkOutsideCensusDynamicInstructions':list(reference.sdk_discovery.values()),
        'sdkDiscoveryWindow':{'start':0x730000,'endExclusive':0x735000},'sourceSdkOrInventoryCreditGranted':0,
        'functionBoundaryCompletenessClaimed':False,'originalExecutableBytesIncluded':False}


def run(folder,output):
    started=time.monotonic();folder.mkdir(parents=True,exist_ok=True);output.mkdir(parents=True,exist_ok=True)
    reference=ReferenceImage();original=load(reference)
    claim_path=ROOT/'evidence/lanes/native-archive032/gzip-boundary-claim.json';save(claim_path,original)
    paths=inputs(reference);pins=[record(path) for path in paths];save(folder/'input-pins.json',pins);receipts=[];graphs={};profiles={}
    for profile in ['modern14','historical127']:
        build.configure(profile);base=folder/profile
        source=build.arm(base/'arm',receipts);dll=build.windows(base/'windows',receipts);library=ctypes.CDLL(str(dll))
        source64=build.a64(base/'a64',receipts);library.zlibVersion.restype=ctypes.c_char_p
        version=library.zlibVersion().decode('ascii')
        layouts={'arm':abi(source),'windows':native_abi(library),'a64':abi(source64)}
        if [(layouts[key]['pointerBytes'],layouts[key]['streamBytes']) for key in ['arm','windows','a64']]!=[(4,56),(8,88),(8,112)]:
            raise ValueError('Actual public codec ABI layouts differ')
        graphs[profile]=(source,library,source64)
        profiles[profile]={'sourceGraph':graph_record(source),'a64Graph':graph_record(source64),'windowsDll':record(dll),
            'actualAbi':layouts,'runtimeZlibVersion':version,'dependency':build.DEPENDENCY,'shippingProfile':profile=='modern14',
            'android':android(base/'android',receipts),'nativeWindowsExecuted':True}
    fixture_path=output/'synthetic-fixtures.json';save(fixture_path,synthetic())
    private,owner=private_cases(folder/'private-assets');specifications=cases()+private
    rows=[];reached=set();instructions={};reads={};api_differences=[]
    for index,item in enumerate(specifications):
        name=item['name'];spec=item['specification'];flags=index%16;thumb=bool(index&1)
        target=execute(graphs['modern14'][0],name,spec,reference,index,flags,thumb)
        if not logical(target)['allUnpublishedAllocationsReleased']:raise ValueError('Reference left an unpublished codec allocation live')
        verdicts={};observations={}
        for profile,(source,library,source64) in graphs.items():
            values={'arm':execute(source,name,spec,seed=index,flags=flags,thumb=thumb),
                'windows':windows(library,name,spec,index),'a64':a64_execute(source64,name,spec,index,flags)}
            for architecture,value in values.items():
                key=profile+'-'+architecture;verdict=compare(target,value);verdicts[key]=verdict
                if not verdict['equivalent']:raise ValueError('Gzip caller-visible mismatch: '+item['label']+' '+key+' '+str(verdict['differentFields']))
                if verdict['codecApiEquivalent'] is False:api_differences.append({'case':item['label'],'profile':key,'comparison':verdict})
                observations[key]={'allocator':value['state'],'codecApiEvents':value.get('codecApiEvents',[]),
                    'codecApiEventsInstrumented':not value.get('codecApiEventsNotInstrumented',False),
                    'sourceOnlyExecution':value['sourceOnlyExecution'],'returnedNormally':value['returnedNormally'],
                    'immutableMemoryPreserved':value['immutableMemoryPreserved']}
        if item.get('privateOwnerData'):
            actual=target['ownedOutput'] if spec.get('owned') else target['callerOutput']
            observed_hash=target['liveInflateOutputSha256'][-1] if spec.get('session') else sha(actual)
            if observed_hash!=item['expectedOutputSha256']:raise ValueError('Actual SDK owner output disagrees with independent decoded hash')
        rows.append({'label':item['label'],'function':name,'privateOwnerData':item.get('privateOwnerData',False),
            'inputSha256':sha(spec['input']),'allCallerObservablesAgree':True,'profiles':verdicts,'observations':observations,
            'referenceAllocator':target['state'],'referenceCodecApiEvents':target['codecApiEvents'],
            'originalMemorySha256':target['memorySha256']})
        reached.update(target['codePath'])
        for witness in target['referenceInstructions']:instructions[witness['address']]=witness
        for read in target['referenceDataReads']:reads.setdefault((read['address'],read['bytes']),set()).update(read['readInstructions'])
        if index%10==0:print(json.dumps({'case':index,'label':item['label'],'elapsedSeconds':round(time.monotonic()-started,3)}),flush=True)
    row_path=output/'case-rows.json';save(row_path,rows)
    exchange_path=output/'reference-sdk-exchange.json';save(exchange_path,exchange(reference,instructions,reads))
    controls,control_receipts=negative(folder/'controls',reference,graphs['modern14'][0]);receipts+=control_receipts
    command=[sys.executable,'-m','unittest','discover','-s','tests','-p','test_native_archive032_gzip.py','-v']
    tests=subprocess.run(command,cwd=ROOT,capture_output=True,text=True,timeout=240)
    test_log=folder/'public-tests.log';test_log.write_text(tests.stdout+tests.stderr)
    if tests.returncode or not re.search(r'Ran 21 tests in',tests.stderr) or 'skipped' in tests.stderr or not tests.stderr.rstrip().endswith('OK'):
        raise ValueError('Gzip actual Windows public tests did not all run successfully')
    functions=function_rows(original,{key:value[0] for key,value in graphs.items()},reached)
    known_getter=getter(original,{key:value[0] for key,value in graphs.items()},reference.image)
    if [record(path) for path in paths]!=pins:raise ValueError('Gzip proof inputs changed during producer execution')
    packet={'schemaVersion':1,'kind':'bounded-gzip-wrapper-native-codec-family','moduleSha256':MODULE_SHA,
        'status':'prepared-for-independent-coordinator-replay','producer':record(Path(__file__)),'inputs':pins,
        'functions':functions,'existingGetterDependency':known_getter,'headers':[record(path) for path in paths if path.suffix=='.h'],
        'profiles':profiles,'controls':controls,'rows':record(row_path),'syntheticFixtures':record(fixture_path),
        'referenceExchange':record(exchange_path),'originalBoundaryClaim':record(claim_path),'ownerInput':owner,
        'behavior':{'cases':len(rows),'allCallerObservablesAgree':True,'codecApiDifferences':api_differences,
            'boundedNotUniversalEquivalence':True,'wholeMemoryEquivalenceClaimed':False,
            'completeNewInstructionBytes':496,'completeSixMethodBytesIncludingExistingGetter':508},
        'platform':{'nativeWindowsExecuted':True,'armSourceInstructionExecuted':True,'highAddressA64SourceExecuted':True,
            'androidOsOrDeviceExecuted':False,'wholeGameBuildOrExecution':False},
        'acceptedSourceCreditGranted':0,'underlyingSdkCreditGranted':0,'wholeGameExecutionClaimed':False,
        'publicNativeTests':21,'publicTestReceipt':{'argv':command,'returnCode':tests.returncode,'log':record(test_log)},
        'compilerReceipts':receipts,'compiler':record(ROOT/'tools/clang-21/clang.exe'),'linker':record(ROOT/'tools/clang-21/ld.lld.exe'),
        'runtime':{'python':sys.version,'hostPlatform':platform.platform(),'pythonExecutable':record(Path(sys.executable)),
            'unicornPackage':importlib.metadata.version('unicorn'),'unicornInterface':unicorn.__version__,'unicornNative':unicorn.uc_version(),
            'capstonePackage':importlib.metadata.version('capstone'),'capstoneInterface':capstone.__version__,'capstoneNative':capstone.cs_version(),
            'nativeLibraries':native_libraries()},'elapsedSeconds':time.monotonic()-started,
        'limits':['Five whole canonical wrapper bodies only; existing getter and underlying SDK receive no new credit.',
            'Initialized input length >=4, bounded accessible output and explicitly registered ownership; arbitrary corrupt game-input safety is not proved.',
            'Independent output budgets in method fixtures are not all setter/game-caller pipelines.',
            'Original SDK heap-ready/current-heap state is a supplied platform precondition, not recovered SDK startup.',
            'Codec payloads and physical private allocation sizes may differ; final owner fields, output, nonprivate bytes and ordered cleanup phases are checked.',
            'Allocator backing starts zeroed; fixture policy does not prove arbitrary native allocator contents or multithreaded binding safety.',
            'Reference-only dynamic SDK instruction/data witnesses do not close historical SDK function boundaries or change the inventory.',
            'Retired-storage execution guards apply to instruction oracles; Windows has real calls, final guards and typed-provider event observations.',
            'Historical1.2.7 is a comparison profile with explicit legacy compiler/header limitations; modern1.4 is the independently locked port dependency.',
            'No Android OS/device run, complete game caller, resource renderer, native game build, historical compiler identity or universal equivalence is claimed.',
            'No independent clean replay or coordinator admission is claimed by this producer.']}
    path=output/'packet.json';save(path,packet);save(output/'verification.json',verify(ROOT,path))
    print(json.dumps({'packet':record(path),'cases':len(rows),'canonicalNewBytes':496,'elapsedSeconds':packet['elapsedSeconds']}),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/native-archive032/gzip-seal')
    parser.add_argument('--output',type=Path,default=OUTPUT);args=parser.parse_args()
    try:run(args.work.resolve(),args.output.resolve())
    except Exception as error:
        args.work.mkdir(parents=True,exist_ok=True)
        save(args.work/'failure-receipt.json',{'status':'producer-failed-no-admission','producer':record(Path(__file__)),
            'exception':type(error).__name__,'detail':str(error),'moduleSha256':MODULE_SHA,'acceptedSourceCreditGranted':0})
        raise
