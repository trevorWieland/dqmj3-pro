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


coordinator_path = ROOT / 'evidence/verification/stream056-coordinator-9d86b4a.json'
coordinator = read(coordinator_path)
assert coordinator['noBinaryOrReportNormalizationUsed'] and coordinator['tests'] == 102
assert coordinator['byteIdenticalArtifactCount'] == 121
registry = read(ROOT / 'config/functional-functions.json')
assert len(registry['functions']) == 334
census, overlays = native_census_overlay.compose(ROOT, read(ROOT / registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
existing = {int(row['name'][3:], 16) for row in registry['functions']}
existing.update(int(row['symbol'][3:], 16) for row in ci.accepted_functions(ROOT))
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == registry['moduleSha256']
positive_pin = next(row['primary'] for row in coordinator['reports'] if row['kind'] == 'positive')
assert pin(ROOT / positive_pin['path']) == positive_pin
report = read(ROOT / positive_pin['path'])
objects = [row['primary'] for row in coordinator['artifacts']
           if '/final-v2/arm/' in row['primary']['path']
           and row['primary']['path'].endswith('.o') and not row['primary']['path'].endswith('/layout.o')]
assert len(objects) == 1
source = pin(ROOT / 'src/native/wave056/stream056.c')
functions = []
for coverage in report['coverage']:
    address = int(coverage['symbol'][3:], 16)
    original = canonical[address]
    assert address not in existing and original['mode'] == 'ARM'
    assert all(max(a['start'], b['start']) >= min(a['endExclusive'], b['endExclusive'])
               for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges'])
    expected_bytes = 1808 if address == 0x733e28 else 1804
    assert original['textBodyBytes'] == expected_bytes
    body = b''.join(image[p['start'] - 0x100000:p['endExclusive'] - 0x100000] for p in original['ranges'])
    assert len(body) == expected_bytes
    entry = next(p for p in original['ranges'] if p['start'] <= address < p['endExclusive'])
    functions.append(dict(symbol=coverage['symbol'], source=source,
        canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'],
                               moduleSha256=registry['moduleSha256']),
        originalInstructionBytes=expected_bytes, originalInstructionRanges=original['ranges'],
        originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
        exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium', candidateObject=objects[0],
        behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coordinator_path),
            batchCaseSets=732, perFunctionCaseSets=366, fourTargetObservations=2928,
            originalInstructionPcs=coverage['instructionPcs'], originalInstructionPcsVisited=coverage['visited'],
            classifiedDomainUnreachablePcs=39, domainUnreachableAddresses=coverage['unvisited'],
            staticDomainProof=coordinator['staticDomainProof'], originalInstructionsOrFlagsPatched=False,
            fullInitializedArenaComparedBeforeReportPointerProjection=True,
            normallyReturningWrongImplementations=10, returningTargetSymbolChecks=60,
            actualWindowsAndHighAddressA64=True, windowsCalleeSavedRegistersDirectlyObserved=False,
            sourceGraphOriginalCodeMapped=False, productionInitializerQualified=False,
            arbitraryMalformedMemoryAliasesOrUniversalEquivalenceClaimed=False,
            androidOsOrDeviceExecuted=False,
            confidenceJustification='Medium: independently reproduced valid-table, initialized-backing finite corpus, all reachable PCs plus measured domain exclusions, complete raw arenas and returning controls. Not arbitrary malformed-memory, SDK startup, whole inflater/game, hardware or universal equivalence.')))
packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-stream056-fast-kernels',
              moduleSha256=registry['moduleSha256'], functions=functions,
              headers=[pin(ROOT / 'src/native/wave056/stream056.h')],
              sourceDependencies=[source, pin(ROOT / 'src/native/wave056/stream056.h')],
              originalPackets=[pin(ROOT / 'evidence/lanes/native-stream056/stage-v1/ready.json'), pin(coordinator_path)],
              producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
              exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
output = ROOT / 'evidence/functional/stream056.json'
output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                              sourceLookup='repository-function-index') for row in functions]
progress = read(ROOT / 'build/update-content0/report.json')
assert len(functional_report.generate(ROOT, progress, fragment)['functions']) == 2
work = ROOT / 'work/native-stream056/admission'
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
        first['source'] = pin(ROOT / 'src/native/wave056/stream056.h')
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
        raise ValueError('Malformed stream056 proof accepted: ' + name)
validation = dict(status='stream056-two-medium-functions-schema-validated-pending-registry',
                  proof=pin(output), functions=fragment['functions'], controls=controls,
                  instructionFootprintBytes=3612, sourceCreditGranted=0, exactMatchingCreditGranted=0,
                  wholeInflaterGameOrDeviceClaimed=False, producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/stream056-functional-validation.json').write_text(
    json.dumps(validation, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(functions=2, controls=len(controls), instructionFootprint=3612)))
