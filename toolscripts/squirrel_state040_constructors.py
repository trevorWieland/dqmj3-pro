import argparse
import ctypes
import json
import time
from pathlib import Path

from native_wave013_common import ROOT,record,save
from native_archive032_gzip_reference import ReferenceImage
import squirrel_state040_build as build
from squirrel_state040_oracle import execute
from squirrel_state040_native import execute as native
from squirrel_state040_a64 import execute as a64
from squirrel_state040_inputs import input_records


def run(folder):
    started=time.monotonic();folder.mkdir(parents=True,exist_ok=True);receipts=[]
    inputs=input_records(build.SOURCES,[Path(__file__)])
    source=build.arm(folder/'arm',receipts);dll=build.windows(folder/'windows',receipts);library=ctypes.CDLL(str(dll))
    source64=build.a64(folder/'a64',receipts);reference=ReferenceImage();rows=[]
    for name in ['fn_0014c4c8','fn_0015467c']:
        for seed in range(16):
            head=bool(seed&1);flags=seed%16;thumb=bool(seed&2)
            original=execute(source,name,reference,seed,head,flags,thumb)
            actual=execute(source,name,seed=seed,has_head=head,flags=flags,thumb=thumb)
            windows=native(library,name,seed,head);android=a64(source64,name,seed,head,flags)
            profiles={}
            for profile,value in [('arm',actual),('windows',windows),('a64',android)]:
                same=value['returnedSelf']==original['returnedSelf'] and value['state']==original['state']
                if not same:raise ValueError('040 constructor state differs: '+name+' '+profile+' seed'+str(seed))
                profiles[profile]={'returnedNormally':value['returnedNormally'],'returnedSelf':value['returnedSelf'],
                    'immutableMemoryPreserved':value['immutableMemoryPreserved'],'state':value['state'],
                    'physicalAllocations':value['allocations'],'sourceOnlyExecution':value.get('sourceOnlyExecution',True)}
            rows.append({'function':name,'seed':seed,'hasGcHead':head,'flags':flags,'returnsThumb':thumb,
                'profiles':profiles,'originalState':original['state'],'originalCodePath':original['codePath'],
                'originalReferenceInstructions':original['referenceInstructions'],'actualTemplateInitializerPath':original['actualTemplateInitializerPath'],
                'originalPhysicalAllocations':original['allocations'],'allQualifiedProfilesAgree':True})
            if seed%4==0:print(json.dumps({'function':name,'seed':seed,'elapsedSeconds':time.monotonic()-started}),flush=True)
    if any(record(ROOT/row['path'])!=row for row in inputs):raise ValueError('040 constructor inputs changed during execution')
    save(folder/'constructor-rows.json',rows)
    save(folder/'receipt.json',{'status':'exploratory-complete-constructors-passed-not-independent-admission',
        'producer':record(Path(__file__)),'inputs':inputs,'compilerReceipts':receipts,'cases':len(rows),
        'rows':record(folder/'constructor-rows.json'),'elapsedSeconds':time.monotonic()-started,
        'originalTemplateReceipt':record(ROOT/'evidence/lanes/squirrel-state040/startup-template-execution.json'),
        'acceptedSourceCreditGranted':0,'sdkCreditGranted':0,'nativeWindowsExecuted':True,'androidOsOrDeviceExecuted':False})
    print(json.dumps({'cases':len(rows),'elapsedSeconds':time.monotonic()-started,'sourceCredit':0}),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--work',type=Path,default=ROOT/'work/squirrel-state040/constructors-first')
    run(parser.parse_args().work.resolve())
