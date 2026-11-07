import argparse
import hashlib
import json
from pathlib import Path


def identity(root,row):
    relative=Path(row['path'])
    if relative.is_absolute() or '..' in relative.parts:raise ValueError('Session record escapes snapshot root')
    path=root/relative;raw=path.read_bytes()
    expected={'path':relative.as_posix(),'bytes':len(raw),'sha256':hashlib.sha256(raw).hexdigest()}
    if any(row.get(key)!=value for key,value in expected.items()):raise ValueError('Session file identity differs: '+str(relative))
    return expected


def verify(root,path):
    packet=json.loads(path.read_text());checks=0
    if packet['status']!='qualified' or packet['kind']!='bounded-cold-mounted-archive-owner-session':
        raise ValueError('Session packet is not qualified')
    for key in ['sourceCreditRequested','sdkSourceCreditGranted','exactMatchingCreditGranted']:
        if packet[key]!=0:raise ValueError('Session integration grants source credit')
    for key in ['wholeGameBuildOrExecution','wholeMemoryEquivalenceClaimed','androidOsOrDeviceExecuted']:
        if packet[key] is not False:raise ValueError('Session packet broadens execution scope')
    for row in [packet['producer'],*packet['inputs'],packet['caseResults'],packet['sourceGraph'],
        packet['referenceSdkExchange'],packet['allocatorDomainObservations']]:identity(root,row);checks+=1
    rows=json.loads((root/packet['caseResults']['path']).read_text())
    if len(rows)!=packet['caseCount'] or len({row['name'] for row in rows})!=len(rows):raise ValueError('Session case count differs')
    for row in rows:
        for profile in ['sourceArm','portableArm','windows','a64']:
            verdict=row[profile]
            for key in ['gameAndCallerBytesAgree','orderedLogicalFileAndOwnershipTraceAgrees',
                'sourceWorkBufferPreservedBytes','sourceArchiveHandleReleased','callerAnchoredPointersChecked']:
                expected=2048 if key=='sourceWorkBufferPreservedBytes' else True
                if verdict[key]!=expected:raise ValueError('Session case verdict differs: '+key)
            if verdict['wholeMemoryEquivalenceClaimed'] is not False:raise ValueError('Session case overclaims memory')
            if [part['stage'] for part in verdict['intermediateStages']]!=['initialized','checked']:
                raise ValueError('Session intermediate observation stages differ')
    controls=packet['returningControls']
    if len(controls)!=5 or any(row['normallyReturningControl'] is not True for row in controls):raise ValueError('Session controls incomplete')
    for row in controls:
        identity(root,row['mutation']);identity(root,row['originalSource']);checks+=2
        for profile in ['arm','windows']:
            if row[profile]['returnedNormally'] is not True or row[profile]['immutableMemoryPreserved'] is not True:
                raise ValueError('Session semantic mutation did not return with preserved guards')
    graphs=json.loads((root/packet['sourceGraph']['path']).read_text())
    for name in ['arm','a64','originalReferenceProvider']:
        graph=graphs[name]
        for row in [graph['linkedElf'],graph['linkerScript'],*graph['objects']]:identity(root,row);checks+=1
        for function in graph['functions']:
            if 'objectOrigin' not in function:raise ValueError('Session graph function lacks genuine object provenance')
            identity(root,function['objectOrigin']['source']);checks+=1
    identity(root,graphs['windowsDll']);identity(root,graphs['android']['sharedLibrary']);checks+=2
    for row in graphs['android']['objects']:identity(root,row);checks+=1
    if graphs['sourceGraphMapsOriginalExecutableBytes'] is not False or graphs['newSdkSourceCredit']!=0:
        raise ValueError('Session source graph includes original code or grants SDK credit')
    return {'schemaVersion':1,'kind':'bounded-cold-mounted-archive-owner-session-verification',
        'packet':identity(root,{'path':path.resolve().relative_to(root.resolve()).as_posix(),
            'bytes':path.stat().st_size,'sha256':hashlib.sha256(path.read_bytes()).hexdigest()}),
        'fileIdentitiesChecked':checks,'caseCount':len(rows),'normallyReturningControls':len(controls),
        'componentComparisonsPassed':True,'inputIdentityPreserved':True,'sourceCreditGranted':False,
        'verifier':{'path':Path(__file__).resolve().relative_to(root.resolve()).as_posix(),
            'bytes':Path(__file__).stat().st_size,'sha256':hashlib.sha256(Path(__file__).read_bytes()).hexdigest()}}


if __name__=='__main__':
    parser=argparse.ArgumentParser();parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1])
    parser.add_argument('--packet',type=Path,default=Path('evidence/lanes/wave027-owner-session/packet.json'))
    parser.add_argument('--output',type=Path);arguments=parser.parse_args()
    result=verify(arguments.root,arguments.packet if arguments.packet.is_absolute() else arguments.root/arguments.packet)
    if arguments.output:arguments.output.write_text(json.dumps(result,indent=2)+'\n')
    print(json.dumps(result))
