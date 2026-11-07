import hashlib
import json
from pathlib import Path


def verify(root,packet):
    root=Path(root).resolve();path=Path(packet).resolve();value=json.loads(path.read_text());checks=0
    def identity(row):
        nonlocal checks
        target=(root/row['path']).resolve();target.relative_to(root);raw=target.read_bytes()
        if len(raw)!=row['bytes'] or hashlib.sha256(raw).hexdigest()!=row['sha256']:
            raise ValueError('040 stage file identity differs: '+row['path'])
        checks+=1
    for row in value['inputs']:identity(row)
    for key in ['caseRows','negativeControls','coreAbiHandoff','coreAbiManifest','startupTemplateExecution','originalInputIdentity']:
        identity(value[key])
    if value['candidateInstructionBytes']!=516 or value['acceptedSourceCreditGranted']!=0:
        raise ValueError('040 constructor stage changed its bounded credit contract')
    if value['candidateFunctions']!=2 or len(value['functions'])!=2:raise ValueError('040 constructor candidates incomplete')
    for function in value['functions']:
        if function['unobservedInstructionAddresses'] or function['observedInstructionBytes']!=function['instructionBytes']:
            raise ValueError('040 constructor body coverage is incomplete')
        body=function['source']['objectOrigin']
        if body['section']!='.text.'+function['symbol'] or not body['bytes']:
            raise ValueError('040 source body lacks a complete genuine compiler section')
        identity(body['object']);identity(body['source'])
    rows=json.loads((root/value['caseRows']['path']).read_text())
    if len(rows)!=32:raise ValueError('040 constructor case corpus incomplete')
    for row in rows:
        if set(row['profiles'])!={'arm','windows','a64'} or not row['allQualifiedProfilesAgree']:
            raise ValueError('040 constructor profiles incomplete')
        for profile in row['profiles'].values():
            if not all(profile[key] for key in ['returnedNormally','returnedSelf','immutableMemoryPreserved','sourceOnlyExecution']):
                raise ValueError('040 constructor did not satisfy its execution guards')
            if profile['state']!=row['originalState']:raise ValueError('040 constructor semantic state differs')
    negative=json.loads((root/value['negativeControls']['path']).read_text())
    if len(negative['rows'])!=6:raise ValueError('040 returning controls incomplete')
    for row in negative['rows']:
        identity(row['source']);identity(row['wrongSource'])
        if len(row['profiles'])!=3:raise ValueError('040 returning-control profiles incomplete')
        for profile in row['profiles']:
            if not all(profile[key] for key in ['returnedNormally','returnedSelf','immutableMemoryPreserved','semanticMismatchDetected']):
                raise ValueError('040 wrong source failed to return with preserved guards')
            if profile['wrongState']==profile['expectedState']:raise ValueError('040 wrong source was accepted semantically')
    return {'status':'verified-bounded-constructor-stage-not-admission','packet':{'path':path.relative_to(root).as_posix(),
        'bytes':path.stat().st_size,'sha256':hashlib.sha256(path.read_bytes()).hexdigest()},'fileIdentityChecks':checks,
        'cases':32,'returningControls':6,'returningControlPlatformExecutions':18,'acceptedSourceCreditGranted':0}
