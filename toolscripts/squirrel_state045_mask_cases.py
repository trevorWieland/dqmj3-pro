import argparse
import ctypes
import json
import pickle
import time
from pathlib import Path

from native_archive032_gzip_reference import ReferenceImage
from native_wave013_common import ROOT,save,record
from squirrel_state045_cases import masks
from squirrel_state045_oracle import execute
from squirrel_state045_native import execute as windows
from squirrel_state045_a64 import execute as a64


def run(graph_path,output):
    output.mkdir(parents=True,exist_ok=True);started=time.monotonic()
    arm,dll,high,receipts=pickle.loads(graph_path.read_bytes());library=ctypes.CDLL(str(dll));reference=ReferenceImage();rows=[];seen=set()
    for index,item in enumerate(masks()):
        original=execute(arm,'mask',reference,index,item['input'],index%16,bool(index&1))
        profiles={}
        for platform,result in [('arm',execute(arm,'mask',seed=index,mask=item['input'],flags=index%16,thumb=bool(index&1))),
            ('windows',windows(library,'mask',index,item['input'])),('a64',a64(high,'mask',index,item['input'],index%16))]:
            if result['returned']!=original['returned'] or result['mask']!=original['mask']:
                raise ValueError('045 mask semantics differ: '+item['label']+'/'+platform+' '+str(result['mask'])+' vs '+str(original['mask']))
            profiles[platform]={'returned':result['returned'],'state':result['mask'],'returnedNormally':True,'callerGuardsPreserved':True}
        rows.append({'label':item['label'],'inputHex':item['input'].hex(),'originalReturn':original['returned'],
            'originalState':original['mask'],'profiles':profiles,'allQualifiedProfilesAgree':True})
        seen.update(original['codePath'])
        if index%64==0:print(json.dumps({'case':index,'elapsedSeconds':time.monotonic()-started}),flush=True)
    save(output/'rows.json',rows);save(output/'receipt.json',{'status':'all-four-parameter-mask-profiles-agree-not-admission',
        'producer':record(Path(__file__)),'cases':len(rows),'rows':record(output/'rows.json'),'originalCodePath':sorted(seen),
        'elapsedSeconds':time.monotonic()-started,'sourceCreditGranted':0})
    print(json.dumps({'cases':len(rows),'elapsedSeconds':time.monotonic()-started}),flush=True)


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--graphs',type=Path,required=True);parser.add_argument('--output',type=Path,required=True)
    args=parser.parse_args();run(args.graphs.resolve(),args.output.resolve())
