import hashlib
import json
from pathlib import Path
import struct

from capstone import Cs, CS_ARCH_ARM, CS_MODE_ARM
from native_wave014_oracle import original_image


ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'evidence/lanes/squirrel-script-closure017'


def sha(value):
    return hashlib.sha256(value).hexdigest()


def measure():
    image = original_image()
    previous = ROOT / 'evidence/lanes/squirrel-closure-release010/claim.json'
    old = json.loads(previous.read_text())
    if sha(image) != old['moduleSha256']:
        raise ValueError('Script-closure original module changed')
    rows = []
    decoder = Cs(CS_ARCH_ARM, CS_MODE_ARM)
    for row in old['functions']:
        start, end = row['entry'], row['endExclusive']
        body = image[start - 0x100000:end - 0x100000]
        if sha(body) != row['instructionSha256'] or sha(image[end - 0x100000:end - 0x100000 + row['poolBytes']]) != row['poolSha256']:
            raise ValueError('Frozen complete script lifetime body/pool differs')
        decoded = list(decoder.disasm(body, start))
        if len(decoded) * 4 != len(body):
            raise ValueError('Script lifetime body is not completely decoded')
        rows.append({key: row[key] for key in ['role', 'entry', 'endExclusive', 'mode', 'instructionBytes',
            'instructionSha256', 'poolBytes', 'poolSha256', 'directCalleesOrTailCalls']})
    table = image[0x8516d0 - 0x100000:0x8516dc - 0x100000]
    if struct.unpack('<3I', table) != (0x6a769c, 0, 0x6a7610):
        raise ValueError('Actual script lifetime vtable changed')
    if struct.unpack_from('<3I', image, 0x6a7774 - 0x100000) != (0x8516d0, 0x81d020, 0x01000001):
        raise ValueError('Script lifetime identity/reset pool changed')
    if struct.unpack_from('<I', image, 0x8516f4 - 0x100000)[0] != 0x6a7780:
        raise ValueError('Following weak entry table witness changed')
    report = {'schemaVersion': 1, 'status': 'remeasured-before-opaque-script-closure017-source',
        'program': 'dqmj3pro', 'version': 'update-content0', 'module': 'main', 'imageBase': 0x100000,
        'moduleSha256': sha(image), 'completeBodies': rows, 'measuredInstructionBytes': 256, 'poolBytes': 12,
        'newPhysicalInstructionCredit': 0, 'existingPhysicalFamily': {'claim': str(previous.relative_to(ROOT)).replace('\\', '/'), 'sha256': sha(previous.read_bytes())},
        'distinctSourceApis': ['sq_script_closure_release017', 'sq_script_closure_destroy017'],
        'canonicalNamePromotionOwnedByCoordinator': True, 'actualVtable': {'address': 0x8516d0, 'bytes': 12, 'sha256': sha(table)},
        'targetLayout': {'collectableBytes': 20, 'commonPrefixBytes': 12, 'closureBytes': 64,
            'shared': 20, 'environment': 24, 'function': 32, 'outers': 40, 'defaults': 52, 'objectBytes': 8},
        'nativePlannedNaturalLayout': {'collectableBytes': 40, 'commonPrefixBytes': 24, 'closureBytes': 112,
            'shared': 40, 'environment': 48, 'function': 64, 'outers': 80, 'defaults': 96, 'objectBytes': 16},
        'readOrder': ['Install actual script identity; unlink only if count highbit is clear',
            'Destroy defaults before current outers; fresh vector reads across callbacks',
            'Release current actual prototype before current environment',
            'Install base identity; invalidate current weak target before final64-byte disposal'],
        'sharedDependencies': [{'entry': 0x24d73c, 'role': 'unlink', 'newCredit': 0}, {'entry': 0x77f3f8, 'role': 'captured-object vector cleanup', 'newCredit': 0}],
        'providerGapBeingClosed': 'Frozen010 generic20-byte collectable view excludes actual12-byte compact prototypes;017 uses exact011 opaque prefix/value/vtable and named012 collectable',
        'realPayloadFamilies': ['compact prototype011', 'native closure013', 'weak reference014', 'byte string015', 'nested script closure017'],
        'explicitServices': ['typed retained-storage disposal; allocator not recovered', 'source015 successful string allocation/provisioner contract only when source graph requires it'],
        'sourceCodeWrittenAtMeasurement': False, 'closureCreationInScope': False,
        'requestedExactBytes': 0, 'acceptedSourceCreditGranted': 0, 'coordinatorAdmissionRequired': True,
        'legacy010Or006Modified': False, 'wholeVmGcGameOrDeviceClaimed': False, 'originalPayloadsPublished': False}
    OUT.mkdir(parents=True, exist_ok=True)
    if (ROOT / 'source/squirrel-wave017/script_closure.c').exists():
        current = json.loads((OUT / 'claim.json').read_text())
        if current['completeBodies'] != rows:
            raise ValueError('Historical017 body measurement changed')
        print(json.dumps({'status': 'historical017-remeasurement-revalidated'}))
        return
    (OUT / 'claim.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps({'status': report['status'], 'measuredInstructionBytes': 256, 'newPhysicalCredit': 0}))


if __name__ == '__main__':
    measure()
