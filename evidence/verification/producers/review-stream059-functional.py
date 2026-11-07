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
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


coordinator_path = ROOT / 'evidence/verification/stream059-coordinator-ac27445.json'
coordinator = read(coordinator_path)
assert coordinator['byteIdenticalArtifacts'] == 583 and coordinator['runnerTests'] == 103
assert coordinator['producerNativeTests'] == 10 and coordinator['canonicalInstructionBytes'] == 8616
registry = read(ROOT / 'config/functional-functions.json')
assert len(registry['functions']) == 358
census, overlays = native_census_overlay.compose(ROOT, read(ROOT / registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
existing = {int(row['name'][3:], 16) for row in registry['functions']}
existing.update(int(row['symbol'][3:], 16) for row in ci.accepted_functions(ROOT))
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == registry['moduleSha256']
base = ROOT / 'evidence/lanes/native-stream059/stage-v1'
measurements = {row['address']: row for row in read(base / 'claim.json')['functions']}
coverage = {row['address']: row for row in coordinator['coverage']}
aliases = [row for row in read(ROOT / 'config/source-names.json')['mappings']
           if row['sourcePath'].startswith('src/native/wave059/')]
assert len(aliases) == 4 and len(measurements) == 4
functions = []
for alias in aliases:
    address = int(alias['symbol'][3:], 16)
    original, measured = canonical[address], measurements[address]
    assert address not in existing and original['mode'] == 'ARM'
    assert original['textBodyBytes'] == measured['instructionBytes']
    assert [(p['start'], p['endExclusive']) for p in original['ranges']] == [
        (p['start'], p['endExclusive']) for p in measured['ranges']]
    assert all(max(a['start'], b['start']) >= min(a['endExclusive'], b['endExclusive'])
               for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges'])
    body = b''.join(image[p['start'] - 0x100000:p['endExclusive'] - 0x100000] for p in original['ranges'])
    entry = next(p for p in original['ranges'] if p['start'] <= address < p['endExclusive'])
    observation = coverage[address]
    root = address == 0x7321e4
    assert len(observation['unvisitedPcs']) == (10 if root else 0)
    functions.append(dict(symbol=alias['symbol'], source=pin(ROOT / alias['sourcePath']),
        sourceName=alias['sourceName'], symbolNames=pin(ROOT / 'include/bytematch_names.h'),
        canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'], moduleSha256=registry['moduleSha256']),
        originalInstructionBytes=len(body), originalInstructionRanges=original['ranges'],
        originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
        exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
        behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coordinator_path), originalInstructionPcs=observation['instructionPcs'],
            originalInstructionPcsVisited=observation['visitedPcs'], unexecutedOriginalPcs=observation['unvisitedPcs'],
            unexecutedInstructionsNeverClaimedExecuted=True,
            conditionalClosedGraphArgument=pin(base / 'closed-domain-review.json'),
            actualWindowsAndHighAddressA64=True, sourceGraphOriginalCodeMapped=False,
            returningSourceControlExecutions=30, productionAllocatorRecovered=False,
            completePresetDictionarySyncOrExternalMutationDomainQualified=False,
            explicitAuthoredWorkspaceArguments=2 if root else 0, identicalOriginalFunctionAbiClaimed=False,
            domain='Valid nonalias input/output/workspace/history and declared nonreentrant services; genuine058 init/reset; no external dictionary setter or sync/state mutation; optional typed borrowed-header fixture and bounded safe header capacities. The root ten dictionary/sync-default PCs are unexecuted under the recorded conditional domain argument.',
            physicalAndroidWholeGameOrUniversalEquivalenceClaimed=False,
            confidenceJustification='Medium: complete canonical instruction extents, byte-identical independent four-target corpus/control reports and583 compiled artifacts. Declared initialized-stream and safe memory/service domains only; two extra authored root workspaces, unexecuted dictionary/sync paths and unrecovered production allocator remain explicit.')))
assert sum(row['originalInstructionBytes'] for row in functions) == 8616
dependencies = {p.relative_to(ROOT).as_posix(): pin(p) for p in (ROOT / 'src/native/wave059').iterdir() if p.suffix in ['.c', '.h']}
origin = read(base / 'private-frozen-origin.json')
for row in origin['runtimeInputs']:
    if row['path'].startswith('src/native/') and Path(row['path']).suffix in ['.c', '.h']:
        assert pin(ROOT / row['path']) == row
        dependencies[row['path']] = row
deps = [dependencies[key] for key in sorted(dependencies)]
packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-inflater059-controller-and-helpers',
    moduleSha256=registry['moduleSha256'], functions=functions,
    headers=[row for row in deps if row['path'].endswith('.h')], sourceDependencies=deps,
    qualificationOnlySourceNames=['fixture059.c', 'fixture058.c', 'fixed_gzip058.c'],
    originalPackets=[pin(base / 'stage-inputs.json'), pin(base / 'claim.json'), pin(coordinator_path)],
    producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
    exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
output = ROOT / 'evidence/functional/stream059.json'
output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                              sourceLookup='repository-function-index') for row in functions]
progress = read(ROOT / 'build/update-content0/report.json')
assert len(functional_report.generate(ROOT, progress, fragment)['functions']) == 4
work = ROOT / 'work/native-stream059-public/admission'
work.mkdir(parents=True, exist_ok=True)
controls = []
for name in ['missing-root-range', 'wrong-byte-count', 'wrong-source', 'unsupported-confidence']:
    wrong = copy.deepcopy(packet)
    first = next(row for row in wrong['functions'] if row['symbol'] == 'fn_007321e4')
    if name == 'missing-root-range': first['originalInstructionRanges'] = first['originalInstructionRanges'][:1]
    elif name == 'wrong-byte-count': first['originalInstructionBytes'] += 4
    elif name == 'wrong-source': first['source'] = pin(ROOT / 'src/native/wave059/inflate059.h')
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
        raise ValueError('Malformed inflater059 proof accepted: ' + name)
validation = dict(status='stream059-four-medium-functions-schema-validated-pending-registry',
    proof=pin(output), functions=fragment['functions'], controls=controls, instructionFootprintBytes=8616,
    sourceCreditGranted=0, exactMatchingCreditGranted=0, wholeLibraryApiGameOrDeviceClaimed=False,
    producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/stream059-functional-validation.json').write_text(
    json.dumps(validation, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(functions=4, controls=len(controls), instructionFootprint=8616)))
