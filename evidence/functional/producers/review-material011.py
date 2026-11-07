import hashlib
import json
from pathlib import Path


ROOT = Path.cwd()


def read(path):
    return json.loads((ROOT / path).read_text())


def pin(path):
    raw = (ROOT / path).read_bytes()
    return {'path': path, 'sha256': hashlib.sha256(raw).hexdigest(), 'bytes': len(raw)}


primary = read('evidence/lanes/wave011-material/constructor.json')
helpers = read('evidence/lanes/wave011-material/helpers/component.json')
replay = read('evidence/verification/native-scene-isolated-05fb713.json')
assert replay['status'] == 'passed' and replay['coordinatorComparison']['testCases'] == 105
assert primary == json.loads((Path(replay['replayRoot']) / 'work/replay-reports/material/constructor.json').read_text())
assert primary['tests']['returningComparisons'] == 267
assert primary['tests']['completeObjectBytesCompared'] and primary['tests']['completeAllocationCompared']
assert helpers['status'] == 'source-only-constructor-component-validated'
proof = {'symbol': 'fn_00554a30', 'canonicalIdentity': {'address': 0x554a30, 'mode': 'ARM',
    'programId': '0004000e001acb00', 'moduleSha256': primary['identity']['codeSha256']},
    'originalInstructionBytes': 3020, 'originalInstructionRanges': primary['originalInstructionRanges'],
    'source': pin('src/native/wave011-material/material.c'), 'functionalConfidence': 'medium',
    'exactObjectSpan': False, 'exactLinkedSpan': False,
    'candidateObjectSection': primary['build']['function'], 'actualCallerWitnesses': primary['callerWitnesses'],
    'behavior': {'allPassed': True, 'boundedNotUniversalEquivalence': True, 'returningComparisons': 267,
        'completeObjectAndAllocationCompared': True, 'sourceOnlyHelperGraphSeparatelyQualified': True,
        'originalInstructionsReached': primary['observedConstructorInstructionAddresses'],
        'unobservedInstructions': primary['unobservedConstructorInstructionAddresses'],
        'unobservedReason': primary['unobservedAddressExplanation'],
        'boundedDomain': ['Valid material wire data, terminated name table and deterministic resource/heap services',
            'Fresh exclusive construction epoch; no reads or observers of incomplete transient defaults',
            'Four-byte-aligned compatible typed or foreign storage; no mutable aliases',
            'Wrap values0..2 and filter values0..1; malformed resources excluded',
            'Original class dispatch, GPU upload, standalone allocator equivalence and game/device behavior excluded'],
        'independentSourceRevision': replay['sourceRevision']}}
packet = {'schemaVersion': 1, 'programId': '0004000e001acb00',
    'moduleSha256': primary['identity']['codeSha256'], 'acceptedSourceCreditGranted': 0,
    'functions': [proof], 'headers': [pin('src/native/wave011-material/material.h'),
        pin('src/native/wave011-material/helpers/services.h')],
    'originalPackets': [pin('evidence/lanes/wave011-material/constructor.json'),
        pin('evidence/lanes/wave011-material/helpers/component.json')],
    'independentReplay': pin('evidence/verification/native-scene-isolated-05fb713.json')}
(ROOT / 'evidence/functional/material011.json').write_text(json.dumps(packet, indent=2) + '\n')
print(json.dumps({'reviewedFunctions': 1, 'originalInstructionBytes': 3020, 'exactSourceCredit': 0}))
