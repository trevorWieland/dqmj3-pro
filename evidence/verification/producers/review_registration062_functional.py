import copy
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[3]
sys.path.insert(0, str(ROOT / 'toolscripts'))
import ci_native_build as ci
import functional_report
import native_heap_inventory as inventory


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    raw = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(raw), sha256=hashlib.sha256(raw).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def main():
    proof_path = ROOT / 'evidence/verification/registration062-coordinator-6ff4f78.json'
    proof = read(proof_path)
    require(proof['status'] == 'coordinator-reviewed-committed-registration062-replay-passed'
            and proof['pipelineTests'] == 100 and proof['completeNativeArtifactsChecked'] == 3352
            and proof['mandatoryPackets'] == 49 and proof['totalCompleteArenaModelObservations'] == 35496,
            'Independent registration proof incomplete')
    require(pin(ROOT / proof['producer']['path']) == proof['producer']
            and pin(ROOT / proof['rawReplay']['path']) == proof['rawReplay'], 'Coordinator source or raw replay differs')
    registry = read(ROOT / 'config/functional-functions.json')
    require(len(registry['functions']) == 507, 'Unexpected pre-admission registry')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {r['address']: r for r in census['functions']}
    existing = {int(r['name'][3:], 16) for r in registry['functions']}
    existing.update(r['address'] for r in ci.accepted_functions(ROOT))
    roster_path = ROOT / 'evidence/lanes/sdk-registration062-public-input/entry-roster-v1.json'
    roster = read(roster_path)
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest() == registry['moduleSha256'], 'Original module differs')
    selected = {0x4955f0, 0x49599c, 0x495d00}
    functions = []
    for row in roster['entries']:
        address = int(row['address'], 16)
        if address not in selected:
            continue
        require(address not in existing, 'Registration entry already accounted')
        original = canonical[address]
        ranges = [{k: span[k] for k in ('start', 'endExclusive', 'bytes')} for span in row['ranges']]
        require(original['mode'] == row['mode'] == 'ARM' and original['ranges'] == ranges
                and original['textBodyBytes'] == row['instructionBytes'], 'Canonical registration extent differs')
        require(not any(max(a['start'], b['start']) < min(a['endExclusive'], b['endExclusive'])
                for owner in existing for a in ranges for b in canonical[owner]['ranges']),
                'Registration body overlaps prior source credit')
        for span in row['ranges']:
            data = image[span['start'] - 0x100000:span['endExclusive'] - 0x100000]
            require(len(data) == span['bytes'] and hashlib.sha256(data).hexdigest() == span['sha256'],
                    'Original registration instruction hash differs')
        coverage = next(r for r in proof['originalInstructionCoverage'] if int(r['address'], 16) == address)
        require(not coverage['unobservedPositions'] and coverage['observedPositions'] * 4 == row['instructionBytes'],
                'Registration instruction-position corpus incomplete')
        source = ROOT / row['sourcePath']
        require(pin(source)['sha256'] == row['sourceSha256']
                and source.read_bytes() == subprocess.check_output(['git', 'show', proof['sourceRevision'] + ':'
                   + row['sourcePath']], cwd=ROOT), 'Committed registration source changed')
        body = b''.join(image[r['start'] - 0x100000:r['endExclusive'] - 0x100000] for r in ranges)
        functions.append(dict(symbol=f'fn_{address:08x}', source=pin(source), sourceName=row['sourceFunction'],
            symbolNames=pin(ROOT / 'include/bytematch_names.h'),
            canonicalIdentity=dict(address=address, mode='ARM', programId=registry['programId'], moduleSha256=registry['moduleSha256']),
            originalInstructionBytes=len(body), originalInstructionRanges=ranges,
            originalBodySha256=hashlib.sha256(body).hexdigest(), reportEntryBytes=ranges[0]['endExclusive'] - address,
            literalPoolsExcluded=[], exactObjectSpan=False, exactLinkedSpan=False, functionalConfidence='medium',
            behavior=dict(allPassed=True, boundedNotUniversalEquivalence=True,
                independentSourceComponentReplay=pin(proof_path), completeCanonicalWitnesses=pin(roster_path),
                actualWindowsAndHighAddressA64=True, physicalAndroidExecutionClaimed=False,
                sourceCodeOriginalImageMapped=False, pipelineTests=100, completeNativeArtifactChecks=3352,
                sourceOnlyProfilesPerRoot=12, completeArenaModelObservations=35496,
                returningSemanticRejectionsPerFullRoot=24, persistentCaughtAttemptControlsPerRoot=11,
                allInstructionPositionsEncountered=True, allConditionalOutcomesProven=False,
                domain=row['domain'], limits=[
                    'Only the measured registry prefix is modeled; a full Info or owning game-class ABI is unqualified.',
                    'Valid sorted unique-key vectors and nonnull live borrowed owners; successful nonwrapping allocation.',
                    'Stable default context, explicit lookup-lock byte and uncontended recursive locking.',
                    'Callbacks do not reenter or mutate the registry; owners are borrowed, not retained or destroyed.',
                    'No callback mutation, arbitrary fabricated vectors, use after destruction or general memory-safety claim.',
                    'Constructor/destructor credit, full SDK startup, separate owner maps, physical Android and full games excluded.'],
                confidenceJustification='Medium: committed independent original/ARM/native replay, complete independent arena models, explicit ownership projection, returning controls and persistent input boundaries; finite ABI/service domain.')))
    require(len(functions) == 3 and sum(r['originalInstructionBytes'] for r in functions) == 1600,
            'Registration additional accounting differs')
    manifest = read(ROOT / 'evidence/lanes/sdk-registration062-public-input/source-map-v1.json')
    dependencies = [pin(ROOT / r['target']) for r in manifest['files'] if r['role'] == 'production']
    dependencies += [pin(ROOT / r['path']) for r in manifest['readOnlyHelpers'] if r['path'].endswith(('.c', '.h'))]
    packet = dict(schemaVersion=1, status='coordinator-reviewed-bounded-sdk-registration-operations',
        moduleSha256=registry['moduleSha256'], functions=functions, sourceDependencies=dependencies,
        headers=[r for r in dependencies if r['path'].endswith('.h')] + [pin(ROOT / 'include/bytematch_names.h')],
        qualificationOnlySources=[r['target'] for r in manifest['files'] if r['role'] == 'qualification'],
        excludedUnvisitedBodies=['fn_00495e28', 'fn_00495f88'], originalPackets=[pin(proof_path), pin(roster_path)],
        producer=pin(Path(__file__).resolve()), acceptedSourceCreditGranted=0, exactMatchingClaimed=False,
        overallConfirmedSourceCoverageClaimed=False, wholeGameClaimed=False)
    output = ROOT / 'evidence/functional/registration062.json'
    require(not output.exists(), 'Preserve prior registration packet')
    output.write_text(json.dumps(packet, indent=2) + '\n', encoding='utf-8')
    fragment = copy.deepcopy(registry)
    fragment['functions'] = [dict(name=r['symbol'], confidence='medium', packet=pin(output),
                                  sourceLookup='repository-function-index') for r in functions]
    report = read(ROOT / 'build/update-content0/report.json')
    require(len(functional_report.generate(ROOT, report, fragment)['functions']) == 3, 'Registration schema rejected')
    folder = ROOT / 'work/registration062-admission/negative-proofs-v1'
    folder.mkdir(parents=True, exist_ok=False)
    controls = []
    for name in ['wrong-byte-count', 'wrong-mode', 'wrong-source', 'wrong-source-name', 'wrong-entry', 'wrong-confidence']:
        bad = copy.deepcopy(packet)
        row = bad['functions'][0]
        if name == 'wrong-byte-count': row['originalInstructionBytes'] -= 4
        elif name == 'wrong-mode': row['canonicalIdentity']['mode'] = 'Thumb'
        elif name == 'wrong-source': row['source'] = pin(ROOT / 'src/native/wave062-registration/registry062ad.h')
        elif name == 'wrong-source-name': row['sourceName'] = 'unimplemented_registry_operation'
        elif name == 'wrong-entry': row['reportEntryBytes'] -= 4
        else: row['functionalConfidence'] = 'high'
        path = folder / (name + '.json')
        path.write_text(json.dumps(bad, indent=2) + '\n')
        invalid = copy.deepcopy(fragment)
        for item in invalid['functions']: item['packet'] = pin(path)
        try:
            functional_report.generate(ROOT, report, invalid)
        except ValueError as error:
            controls.append(dict(case=name, rejected=True, reason=str(error)))
        else:
            raise ValueError('Malformed registration proof accepted: ' + name)
    result = dict(status='three-medium-registration-operations-schema-validated-pending-registry',
        functions=fragment['functions'], instructionFootprintBytes=1600, packet=pin(output), controls=controls,
        excludedUnvisitedBodies=['fn_00495e28', 'fn_00495f88'], exactMatchingCreditGranted=0)
    (ROOT / 'evidence/verification/registration062-functional-validation.json').write_text(json.dumps(result, indent=2) + '\n')
    print(json.dumps(dict(functions=3, instructionBytes=1600, malformedProofControls=len(controls))))


if __name__ == '__main__':
    main()
