import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path.cwd().resolve()
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_callback_inventory


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


coordinator_path = ROOT / 'evidence/verification/stream061-coordinator-787ca24.json'
coordinator = read(coordinator_path)
assert coordinator['byteIdenticalArtifacts'] == 371 and coordinator['runnerTests'] == 90
assert coordinator['canonicalInstructionBytes'] == 276 and coordinator['sourceControlExecutions'] == 18
registry = read(ROOT / 'config/functional-functions.json')
assert len(registry['functions']) == 362
census, overlays = native_callback_inventory.compose(ROOT, read(ROOT / registry['census']['path']))
canonical = {row['address']: row for row in census['functions']}
existing = {int(row['name'][3:], 16) for row in registry['functions']}
existing.update(int(row['symbol'][3:], 16) for row in ci.accepted_functions(ROOT))
image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
assert hashlib.sha256(image).hexdigest() == registry['moduleSha256']
base = ROOT / 'evidence/lanes/native-stream061/stage-v1'
measurements = {row['address']: row for row in read(base / 'asset-boundary-claim.json')['functions']}
coverage = {row['address']: row for row in coordinator['coverage']}
aliases = [row for row in read(ROOT / 'config/source-names.json')['mappings']
           if row['sourcePath'].startswith('src/native/wave061/')]
assert len(aliases) == len(measurements) == 4
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
    root = address == 0x44c578
    assert len(observation['unexecutedPcs']) == (4 if root else 0)
    functions.append(dict(symbol=alias['symbol'], source=pin(ROOT / alias['sourcePath']),
        sourceName=alias['sourceName'], symbolNames=pin(ROOT / 'include/bytematch_names.h'),
        canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'], moduleSha256=registry['moduleSha256']),
        originalInstructionBytes=len(body), originalInstructionRanges=original['ranges'],
        originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry['endExclusive'] - address,
        exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
        behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
            independentSourceComponentReplay=pin(coordinator_path), originalInstructionPcs=observation['instructionPcs'],
            originalInstructionPcsVisited=observation['executedPcs'], unexecutedOriginalPcs=observation['unexecutedPcs'],
            unexecutedInstructionsNeverClaimedExecuted=True, conditionalClosedGraphArgument=pin(base / 'scope-review.json'),
            actualWindowsAndHighAddressA64=True, sourceGraphOriginalCodeMapped=False,
            returningSourceControlExecutions=18, gameSdkOrWholeGameHeapQualified=False,
            assetBumpAndNoopCallbacksQualifiedInDeclaredDomain=True,
            authoredWorkspaceArgumentCount=1 if root else 0, extraAuthoredArguments=0,
            identicalOriginalWorkspaceLayoutClaimed=False,
            domain='Valid live nonalias input/output/workspace storage and measured nonreentrant stream callbacks. Count-times-size multiplication wraps U32; pointer-address wrap is excluded. The root uses enlarged authored workspace storage. Null-storage callback-trace differences and four initializer/end-error PCs remain explicit exclusions. The whole resource caller and arbitrary external stream mutation are unqualified.',
            physicalAndroidWholeGameOrUniversalEquivalenceClaimed=False,
            confidenceJustification='Medium: complete canonical instruction extents, independently byte-identical four-profile observations and371 compiled artifacts, eighteen returning controls and twenty native producer tests. The declared live-storage/service domain, enlarged workspace and four unexecuted error-path instructions remain explicit.')))
assert sum(row['originalInstructionBytes'] for row in functions) == 276
dependencies, promoted = {}, {}
for number in ['059', '061']:
    manifest = read(ROOT / f'evidence/lanes/native-stream{number}/stage-v1/stage-inputs.json')
    for row in manifest['files']:
        expected = row['publicInput']
        if Path(expected['path']).suffix in ['.c', '.h']:
            assert pin(ROOT / expected['path']) == expected
            dependencies[expected['path']] = expected
            promoted[row['privateFrozen']['path']] = expected
for row in read(base / 'private-frozen-origin.json')['runtimeInputs']:
    if Path(row['path']).suffix in ['.c', '.h']:
        expected = promoted.get(row['path'], row)
        assert expected['sha256'] == row['sha256'] and pin(ROOT / expected['path']) == expected
        assert expected['path'].startswith('src/native/')
        dependencies[expected['path']] = expected
deps = [dependencies[key] for key in sorted(dependencies)]
packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-asset061-decoder-and-helpers',
    moduleSha256=registry['moduleSha256'], functions=functions,
    headers=[row for row in deps if row['path'].endswith('.h')], sourceDependencies=deps,
    qualificationOnlySourceNames=['fixture061.c', 'fixture059.c', 'fixture058.c', 'fixed_gzip058.c'],
    originalPackets=[pin(base / 'stage-inputs.json'), pin(base / 'asset-boundary-claim.json'), pin(coordinator_path)],
    producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0,
    exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False)
output = ROOT / 'evidence/functional/stream061.json'
output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
fragment = copy.deepcopy(registry)
fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output),
                              sourceLookup='repository-function-index') for row in functions]
progress = read(ROOT / 'work/clean-replay/stream061-787ca24/build/update-content0/report.json')
assert len(functional_report.generate(ROOT, progress, fragment)['functions']) == 4
work = ROOT / 'work/native-stream061-public/admission'
work.mkdir(parents=True, exist_ok=True)
controls = []
for name in ['missing-status-range', 'wrong-byte-count', 'wrong-source', 'unsupported-confidence']:
    wrong = copy.deepcopy(packet)
    first = next(row for row in wrong['functions'] if row['symbol'] == 'fn_0044c74c')
    if name == 'missing-status-range': first['originalInstructionRanges'] = first['originalInstructionRanges'][:1]
    elif name == 'wrong-byte-count': first['originalInstructionBytes'] += 4
    elif name == 'wrong-source': first['source'] = pin(ROOT / 'src/native/wave061/asset061.h')
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
        raise ValueError('Malformed asset061 proof accepted: ' + name)
validation = dict(status='stream061-four-medium-functions-schema-validated-pending-registry',
    proof=pin(output), functions=fragment['functions'], controls=controls, instructionFootprintBytes=276,
    sourceCreditGranted=0, exactMatchingCreditGranted=0, wholeCallerApiGameOrDeviceClaimed=False,
    producer=pin(Path(__file__).resolve()))
(ROOT / 'evidence/verification/stream061-functional-validation.json').write_text(
    json.dumps(validation, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(functions=4, controls=len(controls), instructionFootprint=276)))
