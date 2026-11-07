import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path.cwd().resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_census_overlay


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data),
                sha256=hashlib.sha256(data).hexdigest())


coordinator_path = ROOT / 'evidence/verification/sampled-key053-coordinator-91af291.json'
coordinator = read(coordinator_path)
assert coordinator['recursiveComparisonPassed'] and coordinator['tests'] == 113
base = ROOT / 'evidence/lanes/native-sampled-key053'
primary = read(base / 'stage-v1/packet.json')
assert pin(base / 'stage-v1/packet.json') == coordinator['primaryPacket']
registry = read(ROOT / 'config/functional-functions.json')
assert len(registry['functions']) == 325
census, overlays = native_census_overlay.compose(ROOT, read(ROOT / registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
existing = {int(row['name'][3:], 16) for row in registry['functions']}
existing.update(int(row['symbol'][3:], 16) for row in ci.accepted_functions(ROOT))
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == registry['moduleSha256'] == primary['moduleSha256']
packet = copy.deepcopy(read(base / 'review/functional-proposal.json'))
packet.update(status='coordinator-reviewed-bounded-sampled-key053-records-and-floor',
              independentCoordinatorReview=pin(coordinator_path), independentCleanReplayClaimed=True,
              producer=pin(Path(__file__).resolve()), sharedRegistryChanged=False)
witnesses = {row['sourceSymbol']: row for row in primary['functions']}
for row in packet['functions']:
    address = row['canonicalIdentity']['address']
    original = canonical[address]
    witness = witnesses[row['symbol']]
    assert address not in existing and original['mode'] == 'ARM'
    assert row['originalInstructionRanges'] == original['ranges']
    assert row['originalInstructionBytes'] == original['textBodyBytes'] == witness['instructionBytes']
    assert all(max(a['start'], b['start']) >= min(a['endExclusive'], b['endExclusive'])
               for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges'])
    body = b''.join(image[p['start'] - 0x100000:p['endExclusive'] - 0x100000] for p in original['ranges'])
    row['originalBodySha256'] = hashlib.sha256(body).hexdigest()
    expected = {pc for part in original['ranges'] for pc in range(part['start'], part['endExclusive'], 4)}
    assert set(witness['observedInstructionAddresses']) == expected
    assert not witness['unobservedInstructionAddresses'] and row['functionalConfidence'] == 'medium'
    row['behavior'].update(independentSourceComponentReplay=pin(coordinator_path),
        originalInstructionPcs=len(expected), originalInstructionPcsVisited=len(expected),
        boundedNotUniversalEquivalence=True, actualWindowsAndHighAddressA64=True,
        originalRegisterReturnContractQualified=False, floatingPointStatusEquivalenceClaimed=False,
        selectorAndGameReachabilityQualified=False, animationIdentityQualified=False,
        sourceGraphOriginalCodeMapped=False, normallyReturningWrongImplementations=7,
        wrongSourceExecutions=21, androidOsOrDeviceExecuted=False,
        confidenceJustification='Medium: all canonical PCs visited in independently reproduced four-target finite fixtures and returning controls; original register-return ABI, FPU exception state, unsafe inputs, game/caller identity and universal equivalence remain unqualified.')
assert sum(row['originalInstructionBytes'] for row in packet['functions']) == 11000
output = ROOT / 'evidence/functional/sampled-key053.json'
output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                              sourceLookup='repository-function-index') for row in packet['functions']]
report = read(ROOT / 'build/update-content0/report.json')
assert len(functional_report.generate(ROOT, report, fragment)['functions']) == 9
work = ROOT / 'work/sampled-key053/admission'
work.mkdir(parents=True, exist_ok=True)
controls = []
for name in ['omitted-range', 'wrong-byte-count', 'wrong-source', 'unsupported-confidence']:
    wrong = copy.deepcopy(packet)
    first = wrong['functions'][0]
    if name == 'omitted-range':
        first['originalInstructionRanges'] = first['originalInstructionRanges'][:1]
    elif name == 'wrong-byte-count':
        first['originalInstructionBytes'] += 4
    elif name == 'wrong-source':
        first['source'] = pin(ROOT / 'src/native/wave053/layout.c')
    else:
        first['functionalConfidence'] = 'high'
    bad = work / (name + '.json')
    bad.write_text(json.dumps(wrong, indent=2) + '\n', encoding='utf-8')
    test = copy.deepcopy(fragment)
    for row in test['functions']:
        row['packet'] = pin(bad)
    try:
        functional_report.generate(ROOT, report, test)
    except ValueError as error:
        controls.append(dict(case=name, rejected=True, reason=str(error)))
    else:
        raise ValueError('Malformed sampled-key proof accepted: ' + name)
validation = dict(schemaVersion=1, status='sampled-key053-nine-medium-functions-schema-validated-pending-registry',
                  proof=pin(output), functions=fragment['functions'], controls=controls,
                  instructionFootprintBytes=11000, independentReplayTests=113,
                  sourceCreditGranted=0, exactMatchingCreditGranted=0,
                  wholeGameOrPhysicalDeviceClaimed=False, producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/sampled-key053-functional-validation.json').write_text(
    json.dumps(validation, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(functions=9, controls=len(controls), instructionFootprint=11000)))
