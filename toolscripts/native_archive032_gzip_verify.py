import argparse
import hashlib
import json
from pathlib import Path


def check(root,row):
    relative=Path(row['path'])
    if relative.is_absolute() or '..' in relative.parts:raise ValueError('Gzip proof path escapes snapshot')
    path=root/relative;raw=path.read_bytes()
    actual={'path':relative.as_posix(),'sha256':hashlib.sha256(raw).hexdigest(),'bytes':len(raw)}
    if any(row.get(key)!=value for key,value in actual.items()):raise ValueError('Gzip proof identity differs: '+str(relative))
    return actual


def verify(root,path):
    packet=json.loads(path.read_text());identities={}
    def walk(value):
        if isinstance(value,dict):
            if {'path','sha256','bytes'}<=value.keys():identities[value['path']]=value
            for child in value.values():walk(child)
        elif isinstance(value,list):
            for child in value:walk(child)
    walk(packet)
    for row in identities.values():check(root,row)
    functions=packet['functions']
    if len(functions)!=5 or sum(row['instructionBytes'] for row in functions)!=496:
        raise ValueError('Gzip canonical complete family differs')
    if packet['existingGetterDependency']['address']!=0x6edec8 or packet['existingGetterDependency']['newSourceCreditGranted']:
        raise ValueError('Gzip duplicate getter credit/identity differs')
    if any(packet[key] for key in ['acceptedSourceCreditGranted','underlyingSdkCreditGranted','wholeGameExecutionClaimed']):
        raise ValueError('Gzip packet grants credit or broadens execution')
    if set(packet['profiles'])!={'modern14','historical127'}:raise ValueError('Gzip historical/modern profiles incomplete')
    for profile,row in packet['profiles'].items():
        if row['runtimeZlibVersion']!=('1.4' if profile=='modern14' else '1.2.7'):raise ValueError('Gzip actual runtime version differs')
        if not row['android']['positionIndependentCode'] or row['android']['osOrDeviceExecuted'] or row['android']['undefinedSymbols']:
            raise ValueError('Gzip Android scope differs')
    if len(packet['controls'])!=14:raise ValueError('Gzip seven returning controls in two profiles incomplete')
    for row in packet['controls']:
        if set(row['profiles'])!={'arm','windows','a64'}:raise ValueError('Gzip returning platform coverage incomplete')
        for value in row['profiles'].values():
            if not all(value[key] for key in ['returnedNormally','immutableMemoryPreserved','rejectedSemantically']):
                raise ValueError('Gzip control failed to return before semantic rejection')
    rows=json.loads((root/packet['rows']['path']).read_text())
    if len(rows)!=packet['behavior']['cases'] or any(not row['allCallerObservablesAgree'] for row in rows):
        raise ValueError('Gzip caller-visible case corpus incomplete')
    if any(len(row['profiles'])!=6 for row in rows):raise ValueError('Gzip positive source profiles incomplete')
    if packet['publicNativeTests']!=21 or not packet['platform']['nativeWindowsExecuted'] or packet['platform']['androidOsOrDeviceExecuted']:
        raise ValueError('Gzip native platform/test scope differs')
    return {'schemaVersion':1,'status':'packet-and-current-inputs-verified','packet':check(root,{
        'path':path.resolve().relative_to(root.resolve()).as_posix(),'bytes':path.stat().st_size,'sha256':hashlib.sha256(path.read_bytes()).hexdigest()}),
        'fileIdentitiesChecked':len(identities),'functionCount':5,'canonicalBytes':496,'testCount':21,
        'qualifiedCases':len(rows),'existingGetterNewCredit':0,'sourceCreditGranted':False}


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument('--packet',type=Path,default=Path('evidence/lanes/native-archive032/gzip/packet.json'))
    args=parser.parse_args();print(json.dumps(verify(args.root,args.packet if args.packet.is_absolute() else args.root/args.packet)))
