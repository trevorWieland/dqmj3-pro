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
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


coordinator_path = ROOT / 'evidence/verification/state-deps055-coordinator-63bceb3.json'
coordinator = read(coordinator_path)
assert coordinator['recursiveSemanticComparisonPassed'] and coordinator['runnerTests'] == 122
assert coordinator['producerInnerTests'] == 19 and len(coordinator['comparisonControls']) == 4
registry = read(ROOT / 'config/functional-functions.json')
assert len(registry['functions']) == 355
census, overlays = native_census_overlay.compose(ROOT, read(ROOT / registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
existing = {int(row['name'][3:], 16) for row in registry['functions']}
existing.update(int(row['symbol'][3:], 16) for row in ci.accepted_functions(ROOT))
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == registry['moduleSha256']
base = ROOT / 'evidence/lanes/native-state055/controller-deps-public-v1'
claims = read(base / 'writers-claim.json')
measurements = {row['entry']: row for row in claims['functions']}
reference = read(base / 'writers-reference.json')
invariant = read(base / 'writer-invariant.json')
assert invariant['countDomain'] == [0, 4096]
assert len(invariant['unvisitedInstructionPcs']) == 24
assert set(invariant['unvisitedInstructionPcs']) == set(reference['coverage']['fixed']['missing'])
aliases = [row for row in read(ROOT / 'config/source-names.json')['mappings']
           if row['sourcePath'].startswith('src/native/wave055/controller-deps-v1/')]
assert len(aliases) == 3 and {int(row['symbol'][3:], 16) for row in aliases} == {0x6f9544, 0x166900, 0x7292d0}
functions = []
for alias in aliases:
    address = int(alias['symbol'][3:], 16)
    original, measurement = canonical[address], measurements[address]
    assert address not in existing and original['mode'] == 'ARM'
    assert original['textBodyBytes'] == measurement['instructionBytes']
    assert [(p['start'], p['endExclusive']) for p in original['ranges']] == [
        (p['start'], p['endExclusive']) for p in measurement['ranges']]
    assert all(max(a['start'], b['start']) >= min(a['endExclusive'], b['endExclusive'])
               for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges'])
    body = b''.join(image[p['start'] - 0x100000:p['endExclusive'] - 0x100000] for p in original['ranges'])
    entry = next(p for p in original['ranges'] if p['start'] <= address < p['endExclusive'])
    resource = address == 0x7292d0
    coverage = reference['coverage'][{0x6f9544: 'reserve', 0x166900: 'fixed', 0x7292d0: 'lookup'}[address]]
    assert len(body) // 4 == coverage['instructions']
    domain = ('Opaque real resource pointers in declared global/node fixtures; indices0..31 and null/non-null paths; '
              'independent native pointer topology and downstream scalar consumers; full production resource ownership excluded.'
              if resource else 'Counts0..4096, physically backed aligned buffers, non-overflowing reservation and declared state-pair object; '
              'full initialized data arena and observed return role retained; Windows declared-pair ASLR compared only after execution. '
              'The24 optimized-copy PCs are finite-domain unreachable. Global initialization and arbitrary alias/overflow domains excluded.')
    functions.append(dict(symbol=alias['symbol'], source=pin(ROOT / alias['sourcePath']),
        sourceName=alias['sourceName'], symbolNames=pin(ROOT / 'include/bytematch_names.h'),
        canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'], moduleSha256=registry['moduleSha256']),
        originalInstructionBytes=len(body), originalInstructionRanges=original['ranges'],
        originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
        exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
        behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coordinator_path), familyCaseSets=51 if resource else 152,
            originalInstructionPcs=coverage['instructions'], originalInstructionPcsVisited=coverage['visited'],
            domainUnreachablePcs=len(coverage['missing']), domain=domain,
            actualWindowsAndHighAddressA64=True, sourceGraphOriginalCodeMapped=False,
            familyReturningControls=8, familyControlExecutions=24, rejectedControlObservations=23,
            expectedArm32PointerTruncationIdentity=1, oldTokenLookupQualifiedAsProductionPointer=False,
            fullResourceOwnerGlobalControllerHardwareGameOrUniversalEquivalenceClaimed=False,
            confidenceJustification='Medium: complete canonical instruction extents, four-target bounded fixtures, independently rebuilt source and normally returning controls. Whole-game, arbitrary-input, complete owner initialization and physical GPU behavior remain unqualified.')))
assert sum(row['originalInstructionBytes'] for row in functions) == 532
dependencies = [pin(path) for path in sorted((ROOT / 'src/native/wave055/controller-deps-v1').iterdir())
                if path.suffix in ['.c', '.h']]
dependencies.append(pin(ROOT / 'src/native/wave055/state055.h'))
packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-controller-dependencies055',
    moduleSha256=registry['moduleSha256'], functions=functions,
    headers=[row for row in dependencies if row['path'].endswith('.h')], sourceDependencies=dependencies,
    originalPackets=[pin(base / 'ready.json'), pin(coordinator_path)], producer=pin(Path(__file__).resolve()),
    acceptedSourceCreditGranted=0, exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
output = ROOT / 'evidence/functional/state-deps055.json'
output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                              sourceLookup='repository-function-index') for row in functions]
progress = read(ROOT / 'build/update-content0/report.json')
assert len(functional_report.generate(ROOT, progress, fragment)['functions']) == 3
work = ROOT / 'work/native-state055-deps-public/admission'
work.mkdir(parents=True, exist_ok=True)
controls = []
for name in ['wrong-mode', 'wrong-byte-count', 'wrong-source', 'unsupported-confidence']:
    wrong = copy.deepcopy(packet)
    first = wrong['functions'][0]
    if name == 'wrong-mode': first['canonicalIdentity']['mode'] = 'THUMB'
    elif name == 'wrong-byte-count': first['originalInstructionBytes'] += 4
    elif name == 'wrong-source': first['source'] = pin(ROOT / 'src/native/wave055/controller-deps-v1/helpers055.h')
    else: first['functionalConfidence'] = 'high'
    bad = work / (name + '.json')
    bad.write_text(json.dumps(wrong, indent=2) + '\n', encoding='utf-8')
    test = copy.deepcopy(fragment)
    for row in test['functions']: row['packet'] = pin(bad)
    try:
        functional_report.generate(ROOT, progress, test)
    except ValueError as error:
        controls.append(dict(case=name, rejected=True, reason=str(error)))
    else:
        raise ValueError('Malformed controller dependencies proof accepted: ' + name)
validation = dict(status='state-deps055-three-medium-functions-schema-validated-pending-registry',
    proof=pin(output), functions=fragment['functions'], controls=controls, instructionFootprintBytes=532,
    sourceCreditGranted=0, exactMatchingCreditGranted=0, wholeRendererGameOrDeviceClaimed=False,
    producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/state-deps055-functional-validation.json').write_text(
    json.dumps(validation, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(functions=3, controls=len(controls), instructionFootprint=532)))
