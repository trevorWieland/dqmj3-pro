import argparse
import ctypes
import json
import pickle
import time
from pathlib import Path

from native_archive032_gzip_reference import ReferenceImage
from native_wave013_common import ROOT,save,record,sha
from squirrel_state045_oracle import execute
from squirrel_state045_native import execute as windows,maps as windows_maps
from squirrel_state045_a64 import execute as a64
from squirrel_state045_observe import Observer,source_maps,original_maps


def identity(state):return sha(json.dumps(state,sort_keys=True,separators=(',',':')).encode())


def run(graph_path,output):
    output.mkdir(parents=True,exist_ok=True);started=time.monotonic()
    arm,dll,high,receipts=pickle.loads(graph_path.read_bytes());library=ctypes.CDLL(str(dll));reference=ReferenceImage();rows=[];paths=set();baseline=None
    original_vtables,original_callbacks=original_maps(reference.image);arm_maps=source_maps(arm);high_maps=source_maps(high);native_maps=windows_maps(library)
    for seed in range(16):
        target=execute(arm,'shared',reference,seed,flags=seed,thumb=bool(seed&1));observer=Observer(target,original_vtables,original_callbacks)
        expected=observer.observe();expected_identity=identity(expected)
        original_accounting=sorted(observer.roles.values(),key=lambda row:row['role'])
        if baseline is None:baseline=expected;save(output/'complete-observed-state.json',baseline)
        elif expected!=baseline:raise ValueError('045 cold initialization depends on declared untouched caller bytes')
        profiles={}
        for platform,result,mapping in [('arm',execute(arm,'shared',seed=seed,flags=seed,thumb=bool(seed&1)),arm_maps),
            ('windows',windows(library,'shared',seed),native_maps),('a64',a64(high,'shared',seed,flags=seed),high_maps)]:
            actual_observer=Observer(result,*mapping);actual=actual_observer.observe()
            if actual!=expected:raise ValueError('045 cold shared graph differs: seed'+str(seed)+'/'+platform)
            profiles[platform]={'returnedNormally':True,'sourceOnlyExecution':True,'callerGuardsPreserved':True,
                'stateSha256':identity(actual),'liveAllocationRoles':len(actual_observer.roles),
                'physicalAllocationCount':len(result['allocations']),'portableAllocationAccounting':sorted(actual_observer.roles.values(),key=lambda row:row['role'])}
        rows.append({'seed':seed,'initialFlags':seed,'returnsThumb':bool(seed&1),'originalStateSha256':expected_identity,
            'originalLiveSdkBlockCount':len(target['sdkLiveAllocations']),'originalAllocationAccounting':original_accounting,
            'profiles':profiles,'allQualifiedProfilesAgree':True})
        paths.update(target['codePath'])
        print(json.dumps({'seed':seed,'elapsedSeconds':time.monotonic()-started}),flush=True)
    save(output/'rows.json',rows);save(output/'receipt.json',{'status':'complete-cold-shared-graph-four-profiles-agree-not-admission',
        'producer':record(Path(__file__)),'cases':len(rows),'rows':record(output/'rows.json'),
        'completeObservedState':record(output/'complete-observed-state.json'),'originalCodePath':sorted(paths),
        'elapsedSeconds':time.monotonic()-started,'sourceCreditGranted':0,'sdkPrivateRepresentationComparedAsEqual':False})
    print(json.dumps({'cases':len(rows),'elapsedSeconds':time.monotonic()-started}),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--graphs',type=Path,required=True);parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();run(args.graphs.resolve(),args.output.resolve())
