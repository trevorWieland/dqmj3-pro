import argparse
import ctypes
import gzip
import importlib.metadata
import json
import re
import struct
import subprocess
import sys
import time
from pathlib import Path

import capstone
import unicorn
from native_wave013_common import ROOT,MODULE_SHA,record,save,sha
import native_archive032_build as build
from native_archive032_reference import ReferenceImage
from native_archive032_oracle import execute,windows
from native_archive032_a64 import execute as a64_execute
from native_archive032_compare import compare
from native_archive032_cases import qualified,LOOKUP,INDEXED
from native_archive032_fixtures import cases
from native_archive032_evidence import inputs,function_rows
from native_archive032_mapping import verify as mapping_verify
from native_archive032_negative import run as negative
from native_archive032_assets import extract
from native_archive032_platforms import android
from native_archive032_verify import verify
from native_archive032_model import abi,native_abi


OUTPUT=ROOT/'evidence/lanes/native-archive032/xbb'


def graph_record(graph):
    return {'linkedElf':graph['linkedElf'],'linkerScript':graph['linkerScript'],'objects':graph['objects'],
        'functions':[{'symbol':name,**{key:value for key,value in row.items() if key!='raw'}} for name,row in sorted(graph['functions'].items())],
        'executableRanges':graph['executableRanges'],'readonlyRanges':graph['readonlyRanges'],
        'writableRanges':graph['writableRanges'],'mutableSourceObjects':graph['mutableSourceObjects']}


def private_cases(folder):
    records=extract(folder);rows=[]
    sources=[]
    for index in [1,2]:
        raw=(ROOT/records[index]['path']).read_bytes()
        if index==2:raw=gzip.decompress(raw)
        count=struct.unpack_from('<I',raw,4)[0]
        sources.append({'resource':index,'rawSha256':records[index]['sha256'],'decodedSha256':sha(raw),
            'decodedBytes':len(raw),'memberCount':count,'usedPublicGzipOnlyToPrepareXbbFixture':index==2})
        for member in range(count):
            offset=struct.unpack_from('<I',raw,32+member*16+8)[0]
            if offset==0:continue
            end=raw.index(0,offset);query=raw[offset:end]
            for name in LOOKUP+INDEXED+['fn_006edeb4','fn_00118624','fn_005f5d3c','fn_005f5d14']:
                rows.append({'name':'owner-resource-'+str(index)+'-member-'+str(member)+'-'+name,'function':name,
                    'specification':{'image':raw,'query':query,'index':member,'fresh':name=='fn_00118624'},
                    'ownerData':True,'querySha256':sha(query),'resourceSha256':sha(raw)})
    return rows,sources


def synthetic_fixture_record():
    images={};rows=[]
    for item in cases():
        spec=item['specification'];identity=sha(spec['image']);images[identity]={'bytes':len(spec['image']),'hex':spec['image'].hex()}
        rows.append({'name':item['name'],'imageSha256':identity,
            'fields':{key:value.hex() if isinstance(value,bytes) else value for key,value in spec.items() if key!='image'}})
    return {'generator':record(ROOT/'toolscripts/native_archive032_fixtures.py'),'images':images,'cases':rows,'originalAssetBytesIncluded':False}


def run(folder,output):
    started=time.monotonic();folder.mkdir(parents=True,exist_ok=True);output.mkdir(parents=True,exist_ok=True)
    reference=ReferenceImage();paths=inputs(reference);pins=[record(path) for path in paths];receipts=[]
    source=build.arm(folder/'arm',receipts);dll=build.windows(folder/'windows',receipts);library=ctypes.CDLL(str(dll))
    source64=build.a64(folder/'a64',receipts);profiles={'arm':abi(source),'windows':native_abi(library),'a64':abi(source64)}
    if profiles['windows']!=profiles['a64']:raise ValueError('Independently compiled Windows/A64 archive ABI differs')
    mapping=mapping_verify(reference);save(output/'mapping-equivalence.json',mapping)
    owner,owner_inputs=private_cases(folder/'private-assets');specifications=qualified()+owner
    rows=[];reached=set();instruction_witnesses={}
    for index,item in enumerate(specifications):
        name=item['function'];spec=item['specification'];flags=index%16;thumb=bool(index&1)
        target=execute(source,name,spec,reference,seed=index,flags=flags,thumb=thumb)
        actual=execute(source,name,spec,seed=index,flags=flags,thumb=thumb)
        native=windows(library,name,spec,seed=index);model=a64_execute(source64,name,spec,seed=index,flags=flags)
        verdicts={platform:compare(value,target) for platform,value in [('arm',actual),('windows',native),('a64',model)]}
        row={'name':item['name'],'function':name,'ownerData':item.get('ownerData',False),'allProfilesAgree':True,
            'result':target['result'],'profiles':verdicts,'imageSha256':target['layout']['imageSha256'],
            'querySha256':sha(spec.get('query',b'')),'originalMemorySha256':target['memorySha256'],'sourceMemorySha256':actual['memorySha256']}
        rows.append(row);reached.update(target['codePath'])
        for witness in target['referenceInstructions']:instruction_witnesses[witness['address']]=witness
        if index%50==0:save(folder/'partial-results.private.json',rows);print('archive032 cases '+str(index+1)+'/'+str(len(specifications)),flush=True)
    cross=[];baseline=qualified()[0]
    for flags in range(16):
        for thumb in [False,True]:
            target=execute(source,baseline['function'],baseline['specification'],reference,flags=flags,thumb=thumb)
            actual=execute(source,baseline['function'],baseline['specification'],flags=flags,thumb=thumb)
            compare(actual,target);reached.update(target['codePath']);cross.append({'flags':flags,'thumbReturn':thumb,'originalAndSourceCompared':True})
    controls,control_receipts=negative(folder/'controls',source,reference);receipts.extend(control_receipts)
    platform=android(folder/'android',receipts)
    test_argv=[str(ROOT/'tools/python/Scripts/python.exe'),'-m','unittest','discover','-s','tests','-p','test_native_archive032.py']
    test=subprocess.run(test_argv,cwd=ROOT,capture_output=True,timeout=120);test_log=folder/'public-native-tests.log';test_log.write_bytes(test.stdout+test.stderr)
    if test.returncode or not re.search(rb'Ran 15 tests',test.stdout+test.stderr):raise ValueError('Archive public native tests incomplete')
    functions=function_rows(source,reached)
    save(output/'case-results.json',rows);save(output/'synthetic-fixtures.json',synthetic_fixture_record())
    save(output/'reference-exchange.json',{'moduleSha256':MODULE_SHA,'referenceOnly':True,
        'instructions':[instruction_witnesses[key] for key in sorted(instruction_witnesses)],
        'sdkSourceCreditGranted':False,'candidateInventoryAdmissionGranted':False})
    if pins!=[record(path) for path in paths]:
        save(folder/'stale-input-failure.private.json',{'pins':pins,'current':[record(path) for path in paths],'completedCases':len(rows)})
        raise ValueError('Archive validation inputs changed; completed case results retained')
    packet={'schemaVersion':1,'kind':'bounded-source-XBB-resource-family','moduleSha256':MODULE_SHA,'producer':record(Path(__file__)),
        'inputs':pins,'functions':functions,'headers':[record(path) for path in paths if path.suffix=='.h'],
        'sourceGraph':graph_record(source),'a64Graph':graph_record(source64),'windowsDll':record(dll),'android':platform,
        'rows':record(output/'case-results.json'),'syntheticFixtures':record(output/'synthetic-fixtures.json'),
        'referenceExchange':record(output/'reference-exchange.json'),'mappingEquivalence':record(output/'mapping-equivalence.json'),
        'controls':controls,'flagReturnCross':cross,'compilerReceipts':receipts,'abi':profiles,'ownerAssets':owner_inputs,
        'behavior':{'cases':len(rows),'allQualifiedCasesPassed':True,'boundedNotUniversalEquivalence':True,
            'wholeMemoryEquivalenceClaimed':False,'sourceOutputPatched':False,'sourceRetainsOriginalExecutableHelpers':False},
        'publicNativeTests':15,'publicTestReceipt':{'argv':test_argv,'exitCode':test.returncode,'log':record(test_log)},
        'platform':{'nativeWindowsExecuted':True,'highAddressA64CpuExecuted':True,'androidOsOrDeviceExecuted':False},
        'runtime':{'python':sys.version,'unicornVersion':unicorn.__version__,
            'capstoneDistribution':importlib.metadata.version('capstone'),'capstoneModule':capstone.__version__,'capstoneNative':capstone.cs_version()},
        'compiler':record(ROOT/'tools/clang-21/clang.exe'),'linker':record(ROOT/'tools/clang-21/ld.lld.exe'),
        'limits':['Finite initialized backing/count/name domain; arbitrary invalid payload offsets are unsupported.',
            'Original SDK heap ready/current heap are explicit platform preconditions; no SDK startup/allocator recovery credit.',
            'Borrowed archive immutability applies to these functions only; later BCH relocation is outside this proof.',
            'Supplemental36-byte deleting destructor is not admitted to the canonical census.',
            'Gzip preparation of one owner XBB fixture is not wrapper/inflate source validation.',
            'No universal equivalence, independent clean replay or whole-game/device execution is claimed.'],
        'acceptedSourceCreditGranted':False,'underlyingSdkCreditGranted':False,'wholeGameExecutionClaimed':False,
        'elapsedSeconds':time.monotonic()-started}
    save(output/'packet.json',packet);save(output/'verification.json',verify(ROOT,output/'packet.json'))
    return packet


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/native-archive032/xbb-seal')
    parser.add_argument('--output',type=Path,default=OUTPUT);args=parser.parse_args();packet=run(args.work,args.output)
    print(json.dumps({'packet':record(args.output/'packet.json'),'cases':packet['behavior']['cases'],'elapsedSeconds':packet['elapsedSeconds']}))
