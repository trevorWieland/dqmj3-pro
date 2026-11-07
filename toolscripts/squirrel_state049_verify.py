import hashlib
import json
from pathlib import Path


def verify(root, path):
    root, path = Path(root).resolve(), Path(path).resolve()
    packet = json.loads(path.read_text())
    checks = 0

    def pin(row):
        nonlocal checks
        file = (root / row['path']).resolve()
        file.relative_to(root)
        raw = file.read_bytes()
        if len(raw) != row['bytes'] or hashlib.sha256(raw).hexdigest() != row['sha256']:
            raise ValueError('049 input identity changed: ' + row['path'])
        checks += 1

    for row in packet['inputs']:
        pin(row)
    for key in ['caseRows', 'negativeControls', 'coreAbiManifest', 'sharedInitializationManifest',
        'originalInputIdentity', 'completeExtents']:
        pin(packet[key])
    if packet['candidateFunctions'] != 13 or packet['candidateInstructionBytes'] != 2508:
        raise ValueError('049 canonical selection differs')
    if any(packet[key] != 0 for key in ['sourceCreditGranted', 'matchingCreditGranted', 'sdkCreditGranted']):
        raise ValueError('049 worker granted credit')
    rows = json.loads((root / packet['caseRows']['path']).read_text())
    if len(rows) != 27 or len({row['case']['name'] for row in rows}) != 27:
        raise ValueError('049 caller corpus is incomplete')
    for row in rows:
        if not row['allQualifiedProfilesAgree'] or set(row['profiles']) != {'arm', 'windows', 'a64'}:
            raise ValueError('049 source profile set is incomplete')
        for profile in row['profiles'].values():
            if not all(profile[key] for key in ['returnedNormally', 'sourceOnlyExecution', 'callerGuardsPreserved']):
                raise ValueError('049 source execution did not preserve its declared contract')
            if profile['stateSha256'] != row['originalStateSha256'] or profile['apiResults'] != row['originalApiResults']:
                raise ValueError('049 typed state or caller API result differs')
            if profile['liveAllocationRoles'] != row['originalSdkLiveBlocks']:
                raise ValueError('049 live allocation role count differs')
            if any(item['logicalBytes'] != item['physicalBytes'] for item in profile['portableAllocationAccounting']):
                raise ValueError('049 portable source allocation exceeds its exact typed budget')
    controls = json.loads((root / packet['negativeControls']['path']).read_text())
    if controls['controls'] != 7 or controls['platformExecutions'] != 21:
        raise ValueError('049 returning controls are incomplete')
    for row in controls['rows']:
        pin(row['source'])
        pin(row['wrongSource'])
        for profile in row['profiles']:
            if not all(profile[key] for key in ['returnedNormally', 'callerGuardsPreserved',
                'sourceOnlyExecution', 'semanticMismatchDetected']):
                raise ValueError('049 wrong source did not return and fail semantically')
    for row in packet['functions']:
        addresses = {at for span in row['instructionRanges'] for at in range(span['start'], span['endExclusive'], 4)}
        observed, unobserved = set(row['observedInstructionAddresses']), set(row['unobservedInstructionAddresses'])
        if observed & unobserved or observed | unobserved != addresses:
            raise ValueError('049 canonical instruction coverage is not an exact partition')
        if row['source']['objectOrigin']['bytes'] != row['source']['bytes']:
            raise ValueError('049 source object function section is incomplete')
    return {'status': 'verified-bounded-root-factory-and-caller-stage-not-admission',
        'packet': {'path': path.relative_to(root).as_posix(), 'bytes': path.stat().st_size,
            'sha256': hashlib.sha256(path.read_bytes()).hexdigest()},
        'fileIdentityChecks': checks, 'cases': 27, 'returningControls': 7,
        'returningControlPlatformExecutions': 21, 'sourceCreditGranted': 0}
