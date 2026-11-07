import argparse
import hashlib
import json
from pathlib import Path


def check(root,row):
    relative=Path(row['path'])
    if relative.is_absolute() or '..' in relative.parts:raise ValueError('Archive proof path escapes snapshot')
    path=root/relative;raw=path.read_bytes();actual={'path':relative.as_posix(),'sha256':hashlib.sha256(raw).hexdigest(),'bytes':len(raw)}
    if any(row.get(key)!=value for key,value in actual.items()):raise ValueError('Archive proof identity differs: '+str(relative))
    return actual


def verify(root,path):
    packet=json.loads(path.read_text());identities={}
    def walk(value):
        if isinstance(value,dict):
            if {'path','sha256','bytes'}<=value.keys():identities[value['path']]=value
            for child in value.values():walk(child)
        elif isinstance(value,list):
            for child in value:walk(child)
    for key in ['producer','inputs','sourceGraph','a64Graph','windowsDll','android','functions','rows','syntheticFixtures',
        'referenceExchange','controls','mappingEquivalence','compilerReceipts','compiler','linker','publicTestReceipt']:
        walk(packet[key])
    for item in identities.values():check(root,item)
    functions=packet['functions'];canonical=[row for row in functions if row['inventoryOwnership']=='frozen-composed-census']
    candidates=[row for row in functions if row['inventoryOwnership']=='supplemental-candidate-only']
    if len(canonical)!=13 or sum(row['instructionBytes'] for row in canonical)!=992 or len(candidates)!=1 or candidates[0]['instructionBytes']!=36:
        raise ValueError('Archive complete function set differs')
    if packet['acceptedSourceCreditGranted'] or packet['underlyingSdkCreditGranted'] or packet['wholeGameExecutionClaimed']:
        raise ValueError('Archive packet grants credit or broadens execution')
    if len(packet['controls'])!=5:raise ValueError('Archive returning controls incomplete')
    for row in packet['controls']:
        for platform in ['arm','windows','a64']:
            value=row['profiles'][platform]
            if not value['rejectedSemantically'] or not value['returnedNormally'] or not value['immutableMemoryPreserved']:
                raise ValueError('Archive semantic control did not return with preserved guards')
    rows=json.loads((root/packet['rows']['path']).read_text())
    if len(rows)!=packet['behavior']['cases'] or any(not row['allProfilesAgree'] for row in rows):
        raise ValueError('Archive returning corpus incomplete')
    if packet['platform']['androidOsOrDeviceExecuted'] or not packet['platform']['nativeWindowsExecuted']:
        raise ValueError('Archive platform scope differs')
    if packet['publicNativeTests']!=15:raise ValueError('Archive native unit-test count differs')
    return {'schemaVersion':1,'status':'packet-and-current-inputs-verified','packet':check(root,{
        'path':path.resolve().relative_to(root.resolve()).as_posix(),'bytes':path.stat().st_size,'sha256':hashlib.sha256(path.read_bytes()).hexdigest()}),
        'fileIdentitiesChecked':len(identities),'functionCount':len(functions),'canonicalBytes':992,
        'supplementalCandidateBytes':36,'testCount':15,'qualifiedCases':len(rows),'sourceCreditGranted':False}


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument('--packet',type=Path,default=Path('evidence/lanes/native-archive032/xbb/packet.json'))
    args=parser.parse_args();print(json.dumps(verify(args.root,args.packet if args.packet.is_absolute() else args.root/args.packet)))
