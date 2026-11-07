import hashlib
import json
from pathlib import Path


def verify(root,path):
    root=Path(root).resolve();path=Path(path).resolve();packet=json.loads(path.read_text());checks=0
    def pin(row):
        nonlocal checks
        file=(root/row['path']).resolve();file.relative_to(root);raw=file.read_bytes()
        if len(raw)!=row['bytes'] or hashlib.sha256(raw).hexdigest()!=row['sha256']:raise ValueError('045 input identity changed: '+row['path'])
        checks+=1
    for row in packet['inputs']:pin(row)
    for key in ['sharedRows','sharedState','maskRows','negativeControls','coreAbiManifest','originalInputIdentity']:
        pin(packet[key])
    if packet['candidateFunctions']!=4 or packet['candidateInstructionBytes']!=8556 or packet['sourceCreditGranted']!=0:
        raise ValueError('045 bounded candidate/credit scope changed')
    shared=json.loads((root/packet['sharedRows']['path']).read_text())
    if len(shared)!=16:raise ValueError('045 cold shared graph cases incomplete')
    for row in shared:
        if not row['allQualifiedProfilesAgree'] or set(row['profiles'])!={'arm','windows','a64'}:
            raise ValueError('045 shared profile set incomplete')
        for profile in row['profiles'].values():
            if profile['stateSha256']!=row['originalStateSha256'] or profile['liveAllocationRoles']!=227:
                raise ValueError('045 shared state or live allocation accounting differs')
    masks=json.loads((root/packet['maskRows']['path']).read_text())
    if len(masks)!=560:raise ValueError('045 mask corpus incomplete')
    for row in masks:
        if not row['allQualifiedProfilesAgree'] or len(row['profiles'])!=3:raise ValueError('045 mask source profiles incomplete')
        if any(value['returned']!=row['originalReturn'] or value['state']!=row['originalState'] for value in row['profiles'].values()):
            raise ValueError('045 mask output differs')
    controls=json.loads((root/packet['negativeControls']['path']).read_text())
    if controls['controls']!=7 or controls['platformExecutions']!=21:raise ValueError('045 returning controls incomplete')
    for row in controls['rows']:
        pin(row['source']);pin(row['wrongSource'])
        for profile in row['profiles']:
            if not all(profile[key] for key in ['returnedNormally','callerGuardsPreserved','sourceOnlyExecution','semanticMismatchDetected']):
                raise ValueError('045 control did not return with preserved guards and a semantic mismatch')
    return {'status':'verified-bounded-shared-initialization-stage-not-admission','packet':{'path':path.relative_to(root).as_posix(),
        'bytes':path.stat().st_size,'sha256':hashlib.sha256(path.read_bytes()).hexdigest()},'fileIdentityChecks':checks,
        'sharedCases':16,'maskCases':560,'returningControls':7,'returningControlPlatformExecutions':21,'sourceCreditGranted':0}
