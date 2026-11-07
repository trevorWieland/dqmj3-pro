import hashlib
import json
from pathlib import Path


def verify(root, path):
    root, path = Path(root).resolve(), Path(path).resolve()
    packet = json.loads(path.read_text())
    checks = 0

    def inspect(value):
        nonlocal checks
        if isinstance(value, dict):
            if {'path', 'sha256', 'bytes'} <= value.keys():
                target = (root / value['path']).resolve()
                target.relative_to(root)
                if target.stat().st_size != value['bytes'] or hashlib.sha256(target.read_bytes()).hexdigest() != value['sha256']:
                    raise ValueError('Sampled-key pinned identity differs: ' + value['path'])
                checks += 1
            for item in value.values():
                inspect(item)
        elif isinstance(value, list):
            for item in value:
                inspect(item)

    inspect(packet)
    for key, expected in [('candidateFunctions', 9), ('candidateInstructionBytes', 11000),
                          ('segmentCases', 4608), ('floorBitPatterns', 3072),
                          ('returningControlsCount', 7), ('returningControlExecutions', 21)]:
        if packet[key] != expected:
            raise ValueError('Sampled-key declared population differs: ' + key)
    for key in ['sourceCreditGranted', 'matchingCreditGranted', 'sdkCreditGranted']:
        if packet[key] != 0:
            raise ValueError('Worker packet grants its own credit')
    for key in ['sourceMapsOriginalImageOrSdk', 'selectorAndGameReachabilityQualified',
                'animationIdentityQualified', 'floatingPointStatusEquivalenceClaimed',
                'wholeMemoryEquivalenceClaimed', 'universalEquivalenceClaimed',
                'completeNativeGameQualified', 'androidOsOrDeviceExecuted']:
        if packet[key]:
            raise ValueError('Sampled-key scope was widened: ' + key)
    cases = json.loads((root / packet['caseRows']['path']).read_text())
    if cases['cases'] != 4608 or len(cases['rows']) != 4608:
        raise ValueError('Sampled-key case report is incomplete')
    for row in cases['rows']:
        if not row['originalReturnedNormally'] or not row['originalCalleeSavedGuardsPreserved']:
            raise ValueError('Original sampled-key ABI observation failed')
        if set(row['sources']) != {'arm', 'windows', 'a64'}:
            raise ValueError('Sampled-key source platform is absent')
        for profile, result in row['sources'].items():
            if result['result'] != row['original'] or not result['returnedNormally'] or not result['callerGuardsPreserved']:
                raise ValueError('Sampled-key source behavior or caller guard failed')
            if profile == 'windows':
                if not result['nativePointersAbove32Bits'] or not result['paddingPreserved']:
                    raise ValueError('Windows widened-pointer/padding observation failed')
            elif not result['calleeSavedGuardsPreserved'] or not result['sourceOnlyExecution'] or result['mapsOriginalImageOrSdk']:
                raise ValueError('Compiled source ABI or source-only guard failed')
    floor = json.loads((root / packet['floorRows']['path']).read_text())
    if floor['patterns'] != 3072 or len(floor['rows']) != 3072:
        raise ValueError('Floor bit-pattern report is incomplete')
    for row in floor['rows']:
        if set(row['sourceResultBits']) != {'arm', 'a64', 'windows'} or any(
            item != row['originalResultBits'] for item in row['sourceResultBits'].values()):
            raise ValueError('Floor source value differs')
    controls = json.loads((root / packet['returningControls']['path']).read_text())
    inspect(controls)
    if controls['controlCount'] != 7 or controls['sourcePlatformExecutions'] != 21:
        raise ValueError('Returning semantic controls are absent')
    for row in controls['rows']:
        if {item['profile'] for item in row['profiles']} != {'arm', 'windows', 'a64'}:
            raise ValueError('A semantic control platform is absent')
        for result in row['profiles']:
            if not all(result[key] for key in ['returnedNormally', 'callerGuardsPreserved',
                                              'semanticMismatchDetected', 'sourceOnlyExecution']):
                raise ValueError('A wrong source did not return and fail semantically')
            if result['actualResult'] == row['expectedReferenceResult']:
                raise ValueError('A wrong source unexpectedly equals the original')
    total = 0
    for row in packet['functions']:
        addresses = {at for span in row['instructionRanges'] for at in range(span['start'], span['endExclusive'], 4)}
        observed = set(row['observedInstructionAddresses'])
        missing = set(row['unobservedInstructionAddresses'])
        if observed & missing or observed | missing != addresses or missing:
            raise ValueError('Canonical original instruction coverage is incomplete')
        total += len(addresses) * 4
    if total != 11000 or packet['testReceipt']['actualWindowsTestsPassed'] != 19 or packet['testReceipt']['exitCode']:
        raise ValueError('Sampled-key instruction/test population differs')
    return {'status': 'verified-bounded-sampled-key-candidate-not-admission',
            'fileIdentityChecks': checks, 'candidateFunctions': 9, 'candidateInstructionBytes': 11000,
            'segmentCases': 4608, 'floorBitPatterns': 3072, 'returningControlExecutions': 21,
            'sourceCreditGranted': 0, 'matchingCreditGranted': 0}
