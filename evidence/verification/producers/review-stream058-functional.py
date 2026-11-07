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


coordinator_path = ROOT / 'evidence/verification/stream058-coordinator-63bceb3.json'
coordinator = read(coordinator_path)
assert coordinator['coordinatorAppliedBinaryOrReportNormalization'] is False and coordinator['tests'] == 111
assert coordinator['byteIdenticalArtifactCount'] == 253
registry = read(ROOT / 'config/functional-functions.json')
assert len(registry['functions']) == 349
census, overlays = native_census_overlay.compose(ROOT, read(ROOT / registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
existing = {int(row['name'][3:], 16) for row in registry['functions']}
existing.update(int(row['symbol'][3:], 16) for row in ci.accepted_functions(ROOT))
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == registry['moduleSha256']
positive_pin = next(row['primary'] for row in coordinator['reports'] if row['name'] == 'canonical-and-caller')
assert pin(ROOT / positive_pin['path']) == positive_pin
report = read(ROOT / positive_pin['path'])
source = pin(ROOT / 'src/native/wave058/initialize058.c')
functions = []
for coverage in report['coverage']:
    address = int(coverage['symbol'][3:], 16)
    original = canonical[address]
    assert address not in existing and original['mode'] == 'ARM'
    assert all(max(a['start'], b['start']) >= min(a['endExclusive'], b['endExclusive'])
               for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges'])
    expected_bytes = coverage['instructionPcs'] * 4
    assert original['textBodyBytes'] == expected_bytes
    body = b''.join(image[p['start'] - 0x100000:p['endExclusive'] - 0x100000] for p in original['ranges'])
    assert len(body) == expected_bytes
    entry = next(p for p in original['ranges'] if p['start'] <= address < p['endExclusive'])
    functions.append(dict(symbol=coverage['symbol'], source=source,
        canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'],
                               moduleSha256=registry['moduleSha256']),
        originalInstructionBytes=expected_bytes, originalInstructionRanges=original['ranges'],
        originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
        exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
        behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coordinator_path),
            familyCaseSets=273, fourTargetObservations=1092, fixedGzipCallers=13, fixedGzipObservations=52,
            originalInstructionPcs=coverage['instructionPcs'], originalInstructionPcsVisited=coverage['visitedPcs'],
            classifiedDomainUnreachablePcs=len(coverage['missing']), domainUnreachableAddresses=coverage['missing'],
            staticDomainProof=coordinator['staticDomainProof'], originalInstructionsOrFlagsPatched=False,
            fullInitializedArenaComparedBeforeReportPointerProjection=True,
            normallyReturningWrongImplementations=10, returningSourceExecutions=30,
            actualWindowsAndHighAddressA64=True, windowsCalleeSavedRegistersDirectlyObserved=False,
            sourceGraphOriginalCodeMapped=False, boundedInitializerQualified=True, fullOuterInflaterQualified=False,
            arbitraryMalformedMemoryAliasesOrUniversalEquivalenceClaimed=False,
            androidOsOrDeviceExecuted=False,
            confidenceJustification='Medium: independently replayed initialization/reset/end finite corpus and actual fixed-gzip caller boundary, exact canonical extents, callback/failure controls and full initialized arenas. Distinct initialized allocation and fresh-zero-window domain; not full allocator implementation, outer inflater, arbitrary callbacks/memory, hardware/game or universal equivalence.')))
packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-stream058-initialization-reset-end-family',
              moduleSha256=registry['moduleSha256'], functions=functions,
              headers=[pin(ROOT / 'src/native/wave058/stream058.h'), pin(ROOT / 'src/native/wave056/stream056.h')],
              sourceDependencies=[pin(ROOT / row['path']) for row in read(ROOT / 'evidence/lanes/native-stream058/stage-v1/ready.json')['ownedFiles'] if row['path'].startswith('src/native/')],
              originalPackets=[pin(ROOT / 'evidence/lanes/native-stream058/stage-v1/ready.json'), pin(coordinator_path)],
              producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
              exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
output = ROOT / 'evidence/functional/stream058.json'
output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                              sourceLookup='repository-function-index') for row in functions]
progress = read(ROOT / 'build/update-content0/report.json')
assert len(functional_report.generate(ROOT, progress, fragment)['functions']) == 6
work = ROOT / 'work/native-stream058/admission'
work.mkdir(parents=True, exist_ok=True)
controls = []
for name in ['wrong-mode', 'wrong-byte-count', 'wrong-source', 'unsupported-confidence']:
    wrong = copy.deepcopy(packet)
    first = wrong['functions'][0]
    if name == 'wrong-mode':
        first['canonicalIdentity']['mode'] = 'Thumb'
    elif name == 'wrong-byte-count':
        first['originalInstructionBytes'] += 4
    elif name == 'wrong-source':
        first['source'] = pin(ROOT / 'src/native/wave058/stream058.h')
    else:
        first['functionalConfidence'] = 'high'
    bad = work / (name + '.json')
    bad.write_text(json.dumps(wrong, indent=2) + '\n', encoding='utf-8')
    test = copy.deepcopy(fragment)
    for row in test['functions']:
        row['packet'] = pin(bad)
    try:
        functional_report.generate(ROOT, progress, test)
    except ValueError as error:
        controls.append(dict(case=name, rejected=True, reason=str(error)))
    else:
        raise ValueError('Malformed stream058 proof accepted: ' + name)
validation = dict(status='stream058-six-medium-functions-schema-validated-pending-registry',
                  proof=pin(output), functions=fragment['functions'], controls=controls,
                  instructionFootprintBytes=636, sourceCreditGranted=0, exactMatchingCreditGranted=0,
                  wholeInflaterGameOrDeviceClaimed=False, producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/stream058-functional-validation.json').write_text(
    json.dumps(validation, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(functions=6, controls=len(controls), instructionFootprint=636)))
