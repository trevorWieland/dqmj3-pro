import copy
import hashlib
import json
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_binding_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def main():
    coordinator_path = ROOT / 'evidence/verification/sdk-runtime062-coordinator-4faa511.json'
    coordinator = read(coordinator_path)
    require(coordinator['status'] == 'complete-public-runtime-CPU-replay-reviewed-by-coordinator' and coordinator['identicalNativeArtifacts'] == 2809 and coordinator['returningControls'] == 165 and coordinator['sameFinalArenaControls'] == 48, 'Independent complete runtime qualification is absent')
    registry = read(ROOT / 'config/functional-functions.json')
    require(len(registry['functions']) == 448, 'Unexpected pre-admission runtime registry')
    roster_path = ROOT / 'evidence/lanes/native-sdk-runtime062/public-inputs-v3/entry-roster-v2.json'
    roster = read(roster_path)
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    existing = {int(row['name'][3:], 16) for row in registry['functions']}
    existing.update(row['address'] for row in ci.accepted_functions(ROOT))
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest() == registry['moduleSha256'] == roster['moduleSha256'], 'Canonical runtime module differs')
    functions, requalified = [], []
    stages = {row['stage']: row for row in coordinator['stages']}
    for candidate in roster['entries']:
        address = candidate['canonicalAddress']
        original = canonical[address]
        keys = ('start', 'endExclusive', 'bytes')
        require(candidate['mode'] == original['mode'] and candidate['instructionBytes'] == original['textBodyBytes'] and [tuple(row[key] for key in keys) for row in candidate['instructionRanges']] == [tuple(row[key] for key in keys) for row in original['ranges']], 'Complete canonical runtime body differs')
        source = pin(ROOT / candidate['proposedProductionPath'])
        require(source['sha256'] == candidate['sourceSha256'], 'Frozen production source changed')
        for row in candidate['instructionRanges']:
            raw = image[row['start'] - 0x100000:row['endExclusive'] - 0x100000]
            require(len(raw) == row['bytes'] and hashlib.sha256(raw).hexdigest() == row['sha256'], 'Original instruction witness differs')
        for row in candidate['referencedLiteralWords']:
            raw = image[row['address'] - 0x100000:row['address'] - 0x100000 + row['bytes']]
            require(len(raw) == row['bytes'] and hashlib.sha256(raw).hexdigest() == row['sha256'] and not row['separateOwnershipClaim'], 'Original referenced literal witness differs')
        if address in existing:
            requalified.append(dict(address=address, instructionBytes=candidate['instructionBytes'], source=source, additionalCredit=0))
            continue
        require(not any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive']) for owner in existing for a in original['ranges'] for b in canonical[owner]['ranges']), 'Runtime body overlaps prior accounting')
        body = b''.join(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000] for row in original['ranges'])
        entry = [row for row in original['ranges'] if row['start'] <= address < row['endExclusive']]
        require(len(entry) == 1, 'Runtime entry has ambiguous canonical ownership')
        stage = stages[candidate['lane']]
        functions.append(dict(symbol=f'fn_{address:08x}', source=source, sourceName=candidate['sourceFunction'], symbolNames=pin(ROOT / 'include/bytematch_names.h'), canonicalIdentity=dict(address=address, mode=original['mode'], programId=registry['programId'], moduleSha256=registry['moduleSha256']), originalInstructionBytes=len(body), originalInstructionRanges=original['ranges'], originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=entry[0]['endExclusive'] - address, originalReferencedLiteralWords=candidate['referencedLiteralWords'], exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium', behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True, independentSourceComponentReplay=pin(coordinator_path), originalEntryAndDataWitnesses=pin(roster_path), actualWindowsAndHighAddressA64=True, sourceGraphOriginalImageMapped=False, returningSourceGraphControls=165, sameFinalArenaControls=48, pipelineTests=coordinator['pipelineTests'], freshPredecessorTests=69, guardTests=6, sourceOnlyUnits=565, functionSpecificDomain=candidate['domain'], limits=candidate['remainingExclusions'], originalStagePcAccounting=stage['originalPcAccounting'], hookVisitsDoNotProvePredicateSatisfiedExecution=True, globalDomain=['Normal-return behavior in declared initialized aligned bounded storage; callbacks, disposals, status errors and OS services retain explicit typed dependency boundaries.', 'Actual native pointers retain full width and are checked by independent complete-arena models; serialized U32 payloads remain opaque words.', 'Timer duplicate policy is the constructor-initialized zero domain; arbitrary nonzero policy is unqualified.', 'The full SDK factory/task/startup owners, physical Android, GPU and complete native game builds remain unqualified.'], confidenceJustification='Medium: complete canonical instruction/literal witnesses; independent committed four-profile CPU replay; native Windows/high-address A64 and complete typed arena models; all 165 wrong-source controls return and reject; all 2809 raw native artifacts reproduce. Bounded behavior is not universal or exact matching.')))
    require(len(functions) == 19 and sum(row['originalInstructionBytes'] for row in functions) == 3614, 'New runtime admission roster differs')
    require({row['address'] for row in requalified} == {0x100b58, 0x764e48} and sum(row['instructionBytes'] for row in requalified) == 1646, 'Existing source requalification differs')
    manifest = read(ROOT / 'evidence/lanes/native-sdk-runtime062/public-inputs-v3/source-manifest-v1.json')
    dependencies = [pin(ROOT / row['proposedPath']) for row in manifest['files'] if row['proposedPath'].startswith('src/native/')]
    require(len(dependencies) == 24, 'Runtime production/header membership differs')
    existing_closure = read(ROOT / 'evidence/lanes/native-sdk-runtime062/public-inputs-v3/minimal-existing-source-closure-v1.json')
    for row in existing_closure['files']:
        require(all(pin(ROOT / row['path'])[key] == row[key] for key in ('path', 'bytes', 'sha256')), 'Existing transitive source closure differs')
        dependencies.append(pin(ROOT / row['path']))
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-sdk-runtime-CPU', moduleSha256=registry['moduleSha256'], functions=functions, headers=[row for row in dependencies if row['path'].endswith('.h')] + [pin(ROOT / 'include/bytematch_names.h')], sourceDependencies=dependencies, requalifiedWithoutAdditionalCredit=requalified, qualificationOnlySources=[row['proposedPath'] for row in manifest['files'] if row['role'] == 'qualification-fixture'], producer=pin(Path(__file__).resolve()), originalPackets=[pin(coordinator_path), pin(roster_path)], acceptedSourceCreditGranted=0, exactMatchingClaimed=False, confirmedOverallSourceCoverageClaimed=False, fullSdkStartupFactoryTaskGpuPhysicalAndroidOrGameClaimed=False)
    output = ROOT / 'evidence/functional/sdk-runtime062.json'
    require(not output.exists(), 'Preserve existing runtime functional packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=row['symbol'], confidence='medium', packet=pin(output), sourceLookup='repository-function-index') for row in functions]
    progress = read(ROOT / 'work/clean-replay/sdk-runtime062-4faa511/build/update-content0/report.json')
    require(len(functional_report.generate(ROOT, progress, fragment)['functions']) == 19, 'Runtime functional schema validation failed')
    folder = ROOT / 'work/sdk-runtime062-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ('partial-range', 'wrong-byte-count', 'wrong-mode', 'wrong-source', 'wrong-entry', 'wrong-source-name'):
        malformed = copy.deepcopy(packet)
        row = malformed['functions'][0]
        if name == 'partial-range':
            row['originalInstructionRanges'][0]['endExclusive'] -= 4
            row['originalInstructionRanges'][0]['bytes'] -= 4
        elif name == 'wrong-byte-count':
            row['originalInstructionBytes'] -= 4
        elif name == 'wrong-mode':
            row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-source':
            row['source'] = pin(ROOT / 'src/native/wave062-runtime/include/binding062v.h')
        elif name == 'wrong-entry':
            row['reportEntryBytes'] -= 4
        else:
            row['sourceName'] = 'sdk_runtime_missing_definition'
        path = folder / (name + '.json')
        path.write_text(json.dumps(malformed, indent=2) + '\n', encoding='utf-8')
        control_registry = copy.deepcopy(fragment)
        for entry in control_registry['functions']:
            entry['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, progress, control_registry)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed runtime proof accepted: ' + name)
    report = dict(status='19-medium-runtime-functions-schema-validated-pending-registry', functions=fragment['functions'], controls=controls, instructionFootprintBytes=3614, requalifiedWithoutAdditionalCredit=requalified, packet=pin(output), sourceCreditGranted=0, exactMatchingCreditGranted=0)
    (ROOT / 'evidence/verification/sdk-runtime062-functional-validation.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(functions=19, instructionBytes=3614, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
