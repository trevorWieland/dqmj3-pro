import argparse
import hashlib
import json
from pathlib import Path


def verify_pin(root,record):
    relative=Path(record['path'])
    if relative.is_absolute():raise ValueError('Proof identity must be repository-relative')
    path=(root/relative).resolve()
    if not path.is_relative_to(root):raise ValueError('Proof identity escaped its repository')
    raw=path.read_bytes()
    if len(raw)!=record['bytes']or hashlib.sha256(raw).hexdigest()!=record['sha256']:
        raise ValueError('Proof identity changed: '+record['path'])


def verify_tree(root,value):
    count=0
    if isinstance(value,dict):
        if {'path','bytes','sha256'}<=set(value):
            verify_pin(root,value)
            count+=1
        for item in value.values():count+=verify_tree(root,item)
    elif isinstance(value,list):
        for item in value:count+=verify_tree(root,item)
    return count


def run(root):
    root=root.resolve()
    folder=root/'work/squirrel-compose057'
    packet=json.loads((root/'evidence/lanes/squirrel-compose057/stage-v1/packet.json').read_text())
    count=verify_tree(root,packet)
    if packet['caseSets']!=14 or len(packet['rows'])!=14 or \
       packet['fullPostGraphEqualityClaimed']or not packet['fullColdTypedGraphEquality']or \
       packet['sourceMapsOriginalImageOrSdk']or packet['sourceCreditGranted']or packet['sdkCreditGranted']:
        raise ValueError('Composition scope or case contract changed')
    for row in packet['rows']:
        original=row['original']
        for source in [*row['authored'].values(),row['windows']]:
            for field in ['startup','metamethod','program','afterCleanup','coldGraphSha256']:
                if source[field]!=original[field]:raise ValueError('Recorded caller/ownership comparison differs')
            if source['heapBefore']['active']!=original['heapBefore']['active']or \
               source['heapAfter']['active']!=original['heapAfter']['active']:
                raise ValueError('Recorded live allocation counts differ')
    controls=json.loads((folder/'controls/results.json').read_text())
    if len(controls['rows'])!=13 or any(not row['observerRejected']or not row['normallyReturnedApi']for row in controls['rows']):
        raise ValueError('Returning control observations changed')
    reuse=json.loads((folder/'frame-lifetime/reuse.json').read_text())
    if len(reuse['rows'])!=21 or any(reuse['retiredFieldsReadBeforeReinitialization'].values())or \
       reuse['fullPostGraphEqualityClaimed']or not reuse['windowsActualExecution']:
        raise ValueError('Bounded reuse observations changed')
    return {'status':'all-frozen-identities-and-bounded-observations-verified',
            'identityChecks':count,'coldCaseSets':14,'coldTargetExecutions':56,
            'sameVmTargetExecutions':28,'returningControls':13,'fullPostGraphEqualityClaimed':False}


if __name__=='__main__':
    parser=argparse.ArgumentParser()
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    print(json.dumps(run(parser.parse_args().root)))
