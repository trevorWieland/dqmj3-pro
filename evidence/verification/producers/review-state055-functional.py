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


coordinator_path = ROOT / 'evidence/verification/state055-coordinator-49799dd.json'
coordinator = read(coordinator_path)
assert coordinator['recursiveSemanticComparisonPassed'] and coordinator['runnerTests'] == 114
assert coordinator['producerInnerTests'] == 20 and coordinator['candidateInstructionBytes'] == 4604
registry = read(ROOT / 'config/functional-functions.json')
assert len(registry['functions']) == 336
census, overlays = native_census_overlay.compose(ROOT, read(ROOT / registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
existing = {int(row['name'][3:], 16) for row in registry['functions']}
existing.update(int(row['symbol'][3:], 16) for row in ci.accepted_functions(ROOT))
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == registry['moduleSha256']
base = ROOT / 'evidence/lanes/native-state055'
leaf = read(base / 'leaf-v1/claim.json')
claims = read(base / 'caller-public-v1/claim.json')
measurements = {row['entry']: row for row in claims['functions']}
measurements[leaf['entry']] = dict(ranges=leaf['instructionRanges'], instructionBytes=224)
observed_helpers = set(read(base / 'caller-public-v1/address-reference.json')['originalInstructionPcsUnion'])
observed_selector = set(read(base / 'caller-public-v1/selector-reference.json')['originalInstructionPcsUnion'])
excluded_leaf = set(read(base / 'leaf-v1/invariant.json')['unvisitedInstructionAddresses'])
aliases = [row for row in read(ROOT / 'config/source-names.json')['mappings']
           if row['sourcePath'].startswith('src/native/wave055/')]
assert len(aliases) == len(measurements) == 13
functions = []
for alias in aliases:
    address = int(alias['symbol'][3:], 16)
    original = canonical[address]
    measurement = measurements[address]
    assert address not in existing and original['mode'] == 'ARM'
    assert original['textBodyBytes'] == measurement['instructionBytes']
    assert [(p['start'], p['endExclusive']) for p in original['ranges']] == [
        (p['start'], p['endExclusive']) for p in measurement['ranges']]
    assert all(max(a['start'], b['start']) >= min(a['endExclusive'], b['endExclusive'])
               for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges'])
    body = b''.join(image[p['start'] - 0x100000:p['endExclusive'] - 0x100000] for p in original['ranges'])
    expected = {pc for part in original['ranges'] for pc in range(part['start'], part['endExclusive'], 4)}
    if address == 0x6f95a4:
        assert len(expected) == 56 and len(excluded_leaf) == 7 and excluded_leaf <= expected
        visited, cases = len(expected - excluded_leaf), 83
        domain = 'Count0..4096; aligned physically backed padding; no reservation overflow; pair cannot alias input/output; sequential array alias effects retained.'
    elif address == 0x7440bc:
        assert expected <= observed_selector and len(expected) == 986
        visited, cases = len(expected), 424
        domain = 'Exact frozen descriptor/context/cache32-word and physically backed soft-limit corpus; target address tokens remain U32 data; no production initialization or GPU meaning inferred.'
    else:
        assert expected <= observed_helpers
        visited, cases = len(expected), 156
        domain = 'Frozen arithmetic graph fixtures; first/second map helpers reached only with length1. Real native region pointers and explicit U32 target tokens remain distinct; no native physical mapping inferred.'
    entry = next(p for p in original['ranges'] if p['start'] <= address < p['endExclusive'])
    functions.append(dict(symbol=alias['symbol'], source=pin(ROOT / alias['sourcePath']),
        sourceName=alias['sourceName'], symbolNames=pin(ROOT / 'include/bytematch_names.h'),
        canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'],
                               moduleSha256=registry['moduleSha256']),
        originalInstructionBytes=len(body), originalInstructionRanges=original['ranges'],
        originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
        exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
        behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coordinator_path), familyCaseSets=cases,
            originalInstructionPcs=len(expected), originalInstructionPcsVisited=visited,
            domainUnreachablePcs=len(expected) - visited, domain=domain,
            fullInitializedDataArenasCompared=True, actualWindowsAndHighAddressA64=True,
            windowsCalleeSavedRegistersDirectlyObserved=False, sourceGraphOriginalCodeMapped=False,
            familyReturningControls=15, familyReturningSourceExecutions=45,
            productionGlobalInitializationQualified=False, floatingStatusEquivalenceClaimed=False,
            hardwareRendererGameOrUniversalEquivalenceClaimed=False,
            confidenceJustification='Medium: independently replayed complete canonical extents, finite four-target corpus and returning controls. Qualified caller/buffer/token domains only; not arbitrary parameter, global setup, physical address, floating status or whole-game equivalence.')))
assert sum(row['originalInstructionBytes'] for row in functions) == 4604
dependencies = [pin(path) for path in sorted((ROOT / 'src/native/wave055').iterdir())
                if path.name in ['state055.c', 'state055.h', 'selector055.c', 'selector055.h', 'address055.c', 'address055.h']]
assert len(dependencies) == 6
packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-state055-leaf-selector-address-family',
    moduleSha256=registry['moduleSha256'], functions=functions,
    headers=[row for row in dependencies if row['path'].endswith('.h')], sourceDependencies=dependencies,
    originalPackets=[pin(base / 'leaf-v1/ready.json'), pin(base / 'caller-public-v1/ready.json'), pin(coordinator_path)],
    producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
    exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
output = ROOT / 'evidence/functional/state055.json'
output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                              sourceLookup='repository-function-index') for row in functions]
progress = read(ROOT / 'build/update-content0/report.json')
assert len(functional_report.generate(ROOT, progress, fragment)['functions']) == 13
work = ROOT / 'work/native-state055/admission'
work.mkdir(parents=True, exist_ok=True)
controls = []
for name in ['omitted-selector-range', 'wrong-byte-count', 'wrong-source', 'unsupported-confidence', 'wrong-alias-pin']:
    wrong = copy.deepcopy(packet)
    first = wrong['functions'][0]
    if name == 'omitted-selector-range':
        selected = next(row for row in wrong['functions'] if row['symbol'] == 'fn_007440bc')
        selected['originalInstructionRanges'] = selected['originalInstructionRanges'][:1]
    elif name == 'wrong-byte-count':
        first['originalInstructionBytes'] += 4
    elif name == 'wrong-source':
        first['source'] = pin(ROOT / 'src/native/wave055/state055.h')
    elif name == 'unsupported-confidence':
        first['functionalConfidence'] = 'high'
    else:
        first['symbolNames']['sha256'] = '0' * 64
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
        raise ValueError('Malformed state055 proof accepted: ' + name)
validation = dict(status='state055-thirteen-medium-functions-schema-validated-pending-registry',
    proof=pin(output), functions=fragment['functions'], controls=controls, instructionFootprintBytes=4604,
    sourceCreditGranted=0, exactMatchingCreditGranted=0, wholeRendererGameOrDeviceClaimed=False,
    producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/state055-functional-validation.json').write_text(
    json.dumps(validation, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(functions=13, controls=len(controls), instructionFootprint=4604)))
