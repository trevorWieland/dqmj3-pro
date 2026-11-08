import argparse
import hashlib
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[3]
REVISION = '97197d76ff9224f1dea22330145a7907cd2fbdd3'
ORIGIN_SHA = 'f24b7d59ad8a2524a42b0137c1d75b4332b1fd1c81f5d3b0b9a4e3b35a9d3bbe'
EXECUTION_SHA = '04abae71d7eff66ecc800d506be530c2f932e956647c54f5a21659c0659e0f4a'


def read(path):
    return json.loads(path.read_bytes())


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def pin(path):
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size, sha256=digest(path))


def require(condition, reason):
    if not condition:
        raise ValueError(reason)


def review(replay):
    sys.path.insert(0, str(ROOT / 'toolscripts'))
    import native_provider_inventory as inventory
    from native_wave014_oracle import original_image
    raw_path = ROOT / 'evidence/verification/dispatcher6-isolated-97197d7.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION
            and raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
            and Path(raw['replayRoot']).resolve() == replay.resolve(), 'Fresh replay identity differs')
    tests = 0
    for step in raw['steps']:
        log = replay / step['log']
        require(step['returncode'] == 0 and digest(log) == step['logSha256'], 'Pipeline/log changed')
        if step['name'].endswith('-tests'):
            match = re.search(r'Ran (\d+) tests?', log.read_text(encoding='utf-8'))
            require(match is not None, 'Pipeline test count absent')
            tests += int(match.group(1))
    require(tests == 112, 'Pipeline test roster changed')
    for row in raw['packets']:
        path = replay / row['path']
        require(digest(path) == row['sha256'] and path.stat().st_size == row['bytes'], 'Packet changed')
    public = ROOT / 'evidence/lanes/native-state055/dispatcher-v6-public'
    worker = ROOT / 'work/native-state055/dispatcher-v6'
    origin = public / 'private-frozen-origin.json'
    require(digest(origin) == digest(worker / 'ready.json') == ORIGIN_SHA, 'Frozen origin changed')
    frozen = read(origin)
    require(len(frozen['files']) == 261, 'Frozen closure count changed')
    for row in frozen['files']:
        require(pin(ROOT / row['path']) == row, 'Frozen input changed: ' + row['path'])
    manifest = read(public / 'stage-inputs.json')
    require(len(manifest['files']) == 54, 'Public promotion count differs')
    for row in manifest['files']:
        before, after = row['privateFrozen'], row['publicInput']
        require(row['byteIdentical'] and before['bytes'] == after['bytes']
                and before['sha256'] == after['sha256'] and pin(ROOT / after['path']) == after,
                'Promoted input differs')
    lane = replay / 'work/native-state055/dispatcher-v6'
    comparison = read(lane / 'source-replay-comparison.json')
    expected = dict(caseSets=3086, observations=12344, sourceSnapshotFiles=21,
        sourceSnapshotBytes=48229, originalInstructionCount=4574, originalExecutedInstructions=4565,
        finalObservedOriginalInstructions=4569, invariantAccountedInstructions=5,
        rawRuntimeRowsExactlyEqual=True, finalCoverageCompletelyAccounted=True,
        canonicalUniqueCaseSets=3088, executionEnvelopeBytesEqual=True,
        buildAndControlEnvelopesHaveDifferentPaths=True, sourceCreditGranted=0)
    require(all(comparison.get(k) == v for k, v in expected.items()), 'Complete dispatcher scope differs')
    for directory in [lane, lane / 'replay-v1', worker, worker / 'replay-v1']:
        path = directory / 'execution.json'
        require(digest(path) == EXECUTION_SHA and path.stat().st_size == 46206071,
                'Complete raw execution differs from frozen worker or copied source')
    execution = read(lane / 'execution.json')
    require(len(execution['cases']) == 3086, 'Runtime rows omitted')
    for row in execution['cases']:
        require(row['original']['returned'] and row['original']['finalArenaSha256']
                == row['sourceArm']['finalArenaSha256'], 'Original/ARM arena mismatch')
        for target in ['sourceArm', 'actualWindows', 'highAarch64']:
            require(row[target]['independentModelEqual'] and not row[target]['independentModelDifferences'],
                    'Independent model mismatch')
        require(row['actualWindows']['actualWindowsExecution']
                and row['actualWindows']['arenaBase'] > 0xffffffff
                and row['highAarch64']['arenaBase'] > 0xffffffff, 'Actual/widened execution absent')
    artifacts = []
    for row in comparison['artifacts']:
        for item in [row['primary'], row['copied']]:
            require(pin(replay / item['path'])['sha256'] == item['sha256'], 'Main artifact changed')
        require(row['primary']['sha256'] == row['copied']['sha256'], 'Main source-copy artifacts differ')
        name = Path(row['primary']['path']).name
        require(digest(worker / 'uniform-build' / name) == row['primary']['sha256'],
                'Fresh artifact differs from worker')
        artifacts.append(dict(name=name, bytes=row['primary']['bytes'], sha256=row['primary']['sha256']))
    require(len(artifacts) == 3 and len(comparison['controls']) == 8, 'Artifact/control roster incomplete')
    for directory in ['controls-primary-v2', 'replay-v1']:
        control = read(lane / directory / 'returning-controls.json')
        original = read(worker / directory / 'returning-controls.json')
        require(control['controls'] == 8 and control['executions'] == 24, 'Returning control count differs')
        for row, old in zip(control['cases'], original['cases'], strict=True):
            require(row['allThreeNormallyReturnedAndRejected'], 'Control failed abnormally or was accepted')
            for key in ['name', 'input', 'replacements', 'original', 'sourceArm', 'actualWindows', 'highAarch64']:
                require(row[key] == old[key], 'Complete worker/control runtime row differs')
            for name in ['arm.elf', 'a64.elf', 'uniform6.dll']:
                relative = Path(directory) / 'controls-v1' / row['name'] / 'uniform-build' / name
                require(digest(lane / relative) == digest(worker / relative), 'Worker/control artifact differs')
    for control in comparison['controls']:
        require(control['rawRuntimeExactlyEqual'], 'Control source-copy runtime differs')
        for row in control['artifacts']:
            require(row['primary']['sha256'] == row['copied']['sha256'], 'Control source-copy artifact differs')
            for item in [row['primary'], row['copied']]:
                require(digest(replay / item['path']) == item['sha256'], 'Control artifact changed')
    for name in ['final-path-supplement.json', 'actual-wrapper-frontier.json', 'control-invariants.json']:
        a, b = read(lane / name), read(worker / name)
        require(a == b, 'Complete supplemental/wrapper/invariant packet differs: ' + name)
    invariant = read(lane / 'control-invariants.json')
    image = original_image()
    require(hashlib.sha256(image).hexdigest() == invariant['moduleSha256'], 'Original image differs')
    for row in invariant['rows']:
        for span in [row['witness'], row['unexecuted']]:
            data = image[span['start'] - 0x100000:span['endExclusive'] - 0x100000]
            require(len(data) == span['bytes'] and hashlib.sha256(data).hexdigest() == span['sha256'],
                    'Invariant original-byte witness differs')
    domains = [[], [], [], []]
    for value in range(1 << 16):
        if value < 100:
            domains[0].append(value)
        elif value > 100 and value < 107:
            domains[1].append(value)
        elif 107 < value < 111:
            domains[2].append(value)
        elif 162 < value < 176:
            domains[3].append(value)
    require(domains == [row['admittedOperations'] for row in invariant['rows']],
            'Independent finite selector-domain review differs')
    require(all(x < 100 for x in domains[0]) and all(0 <= x - 101 < 6 for x in domains[1])
            and all(x in (108, 109, 110) for x in domains[2])
            and all(0 <= x - 163 < 13 for x in domains[3]), 'Dominated fallback became reachable')
    registry = read(ROOT / 'config/functional-functions.json')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = next(x for x in census['functions'] if x['address'] == 0x73b7a4)
    claim = read(lane / 'claim.json')
    require(canonical['textBodyBytes'] == claim['instructionBytes'] == 18296
            and [(x['start'], x['endExclusive']) for x in canonical['ranges']]
            == [(x['start'], x['endExclusive']) for x in claim['instructionRanges']], 'Canonical scope differs')
    guard = read(replay / 'work/dispatcher6-public/v1/public-input-guard.json')
    require(guard['unchanged'] and len(guard['files']) == 54, 'Staged dependency guard incomplete')
    producer_log = (replay / 'work/dispatcher6-public/v1/producer-tests.log').read_text(encoding='utf-8')
    require(re.search(r'Ran 12 tests?\b', producer_log) is not None, 'Producer tests absent')
    return dict(schemaVersion=1, status='complete-public-dispatcher-replay-reviewed-by-coordinator',
        sourceRevision=REVISION, rawReplay=pin(raw_path), frozenOrigin=pin(origin),
        frozenInputPinsChecked=261, promotedInputs=54, sourceSnapshotFiles=21, sourceSnapshotBytes=48229,
        pipelineTests=tests, producerTests=12, canonicalEntry=0x73b7a4, instructionBytes=18296,
        instructionCount=4574, executedPcs=4569, invariantOnlyPcs=5, finiteSelectorInputsReviewed=65536,
        primaryCases=3086, primaryObservations=12344, canonicalUniqueCases=3088,
        rawExecutionBytes=46206071, rawExecutionSha256=EXECUTION_SHA, rawWorkerAndCopiesByteIdentical=True,
        mainArtifacts=artifacts, returningControls=8, returningControlExecutionsPerCopy=24,
        byteIdenticalControlArtifactPairs=24, actualOriginalWrapperCases=8,
        exactMatchingClaimed=False, functionalAdmissionPending=True, sourceCreditGranted=0,
        wholeOwnerOrGpuOrPhysicalDeviceOrGameClaim=False,
        invariantReview='Original compare/branch/table instructions manually decoded; complete unsigned16 selector domain checked independently. Five PCs remain invariant-only, never counted as executed.',
        limitations=frozen['unsupported'])


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--replay', type=Path, default=ROOT / 'work/clean-replay/dispatcher6-97197d7')
    parser.add_argument('--output', type=Path,
        default=ROOT / 'evidence/verification/dispatcher6-coordinator-97197d7.json')
    args = parser.parse_args()
    result = review(args.replay)
    args.output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(status=result['status'], pipelineTests=result['pipelineTests'], sourceCreditGranted=0)))
