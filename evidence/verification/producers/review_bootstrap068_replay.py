import hashlib
import json
from pathlib import Path
import re
import subprocess

ROOT = Path(__file__).resolve().parents[3]
REVISION = 'fa94f6172cceeaa49bb93b3ff00c0dd9db72813a'
FRESH = ROOT / 'work/clean-replay/bootstrap068-fa94f61'
SCOPES = [ROOT / 'work/bootstrap068-root-public-v1', FRESH / 'work/bootstrap068-public-replay-v1',
          ROOT / 'work/bootstrap068-root-source-only-v1']
PROBES = {'open', 'stat', 'lstat', 'listdir', 'scandir', 'resolve', 'original-constructor',
          'image-read', 'metadata-write', 'named-library', 'absolute-library', 'tiny-history'}


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def artifacts(folder):
    return {p.relative_to(folder).as_posix(): (p.stat().st_size, hashlib.sha256(p.read_bytes()).hexdigest())
            for p in folder.rglob('*') if p.suffix in {'.o', '.obj', '.elf', '.dll', '.lib', '.exp'}}


def main():
    raw_path = ROOT / 'evidence/verification/bootstrap068-isolated-fa94f61.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION and raw['freshEnvironment']
            and not raw['sharedGeneratedOrWorkInputs'] and not raw['sourceAdmissionGranted']
            and not raw['wholeGameClaimed'], 'Committed bootstrap replay is incomplete')
    archive = subprocess.check_output(['git', 'archive', '--format=zip', REVISION], cwd=ROOT)
    require(hashlib.sha256(archive).hexdigest() == raw['sourceArchiveSha256'], 'Committed archive differs')
    require(all(r['returncode'] == 0 and pin(FRESH / r['log'])['sha256'] == r['logSha256']
                for r in raw['steps']), 'Pipeline command or preserved log differs')
    plan = read(ROOT / 'config/replays/bootstrap068.json')
    require(plan == raw['plan'], 'Bootstrap replay plan differs')
    expected = set(plan['packets']) | {'build/update-content0/report.json', 'build/update-content0/functional.json'}
    require(len(expected) == 50 and {r['path'] for r in raw['packets']} == expected,
            'Mandatory bootstrap packet roster differs')
    for row in raw['packets']:
        actual = pin(FRESH / row['path'])
        require(all(actual[k] == row[k] for k in ('bytes', 'sha256')), 'Mandatory packet differs')
    original = read(SCOPES[0] / 'actual-original-observation.json')
    require(original == read(SCOPES[1] / 'actual-original-observation.json'), 'Actual original observations differ')
    require(not original['workerScheduled'] and len(original['instructionWitnesses']) == 1540,
            'Original witness scope differs')
    reference_artifacts = artifacts(SCOPES[0])
    require(len(reference_artifacts) == 595, 'Complete baseline native artifact roster differs')
    totals = []
    for index, folder in enumerate(SCOPES):
        parent = read(folder / 'ready.json')
        require(parent['status'] == 'public068-fresh-source-transport-passed' and not parent['smokeOnly']
                and parent['sourceOnly'] == (index == 2) and parent['sourceCreditGranted'] == 0
                and not parent['workerScheduled'] and not parent['wholeGameQualified'], 'Parent scope differs')
        children = parent['children']
        require(len(children) == (30 if index == 2 else 31), 'Bootstrap child count differs')
        require({r['child'] for r in children if r['persistentProbeRejected']} == PROBES
                and all(r['exitCode'] == (1 if r['persistentProbeRejected'] else 0) for r in children),
                'Child exit or persistent rejection differs')
        require(artifacts(folder) == reference_artifacts, 'Complete native artifacts differ across replay scopes')
        for child in children:
            receipt = read(folder / ('receipt-' + child['child'] + '.json'))
            audit = receipt['audit']
            require(receipt['immutableInputsUnchanged'] and receipt['sourceCreditGranted'] == 0
                    and not receipt['workerScheduled'] and not receipt['wholeGameQualified'], 'Child input/scope differs')
            if child['persistentProbeRejected']:
                require(receipt['status'] == 'failed' and (audit['forbiddenAccessAttempts']
                        or audit['originalImageConstructorAttempts']), 'Caught boundary violation was accepted')
            else:
                require(receipt['status'] == 'passed' and not audit['forbiddenAccessAttempts'], 'Positive child failed')
                if child['child'] != 'original':
                    require(not receipt['originalImageAccessPermitted']
                            and not audit['originalImageConstructorAttempts'], 'Source child accessed original image')
        for relative in ['profiles', 'tiny/profiles']:
            for profile in ['arm', 'windows', 'a64']:
                report = read(folder / relative / profile / 'report.json')
                require(report['status'] == 'passed' and report['semantic'] == original['semantic']
                        and report['expectedSemantic'] == original['semantic'] and len(report['allocations']) == 4
                        and len(report['allocationGuards']) == 4 and not report['originalImageInstantiated'],
                        'Source ordered services, ownership projection or guards differ')
                receipt = read(folder / ('receipt-' + ('tiny' if relative.startswith('tiny') else 'source')
                                        + '-' + profile + '.json'))
                require(len(receipt['freshSourceImports']) == 23, 'Fresh source import closure differs')
        for control in ['cache-count', 'patch-name', 'allocation-order']:
            for profile in ['arm', 'windows', 'a64']:
                report = read(folder / 'controls' / control / 'profiles' / profile / 'report.json')
                require(report['status'] == 'source-observer-mismatch' and report['semantic']['returned'] == 1
                        and report['semantic'] != original['semantic'], 'Wrong source did not return before rejection')
        totals.append(pin(folder / 'ready.json'))
    packet = read(ROOT / 'evidence/lanes/native-file-bootstrap068/public-inputs-v1/bounded-source-packet.json')
    positions = {r['address'] for r in original['instructionWitnesses']}
    coverage = []
    for function in packet['candidateFunctions']:
        all_pcs = {p for span in function['completeRanges'] if span['role'] == 'instructions'
                   for p in range(span['start'], span['endExclusive'], 4)}
        coverage.append(dict(entry=hex(function['entry']), totalPositions=len(all_pcs),
                             observedPositions=len(all_pcs & positions), unobservedPositions=sorted(all_pcs - positions)))
    require([(r['totalPositions'], r['observedPositions']) for r in coverage] == [(23, 19), (41, 36)],
            'Candidate instruction encounter coverage differs')
    report = read(FRESH / 'build/update-content0/report.json')
    functional = read(FRESH / 'build/update-content0/functional.json')
    require(int(report['measures']['total_functions']) == 26660 and int(report['measures']['matched_code']) == 5128
            and len(functional['functions']) == 507, 'Independent progress accounting differs')
    tests = sum(int(m.group(1)) for row in raw['steps'] if row['name'].endswith('-tests')
                for m in re.finditer(r'Ran (\d+) tests?', (FRESH / row['log']).read_text()))
    result = dict(status='coordinator-reviewed-committed-bootstrap068-replay-passed', sourceRevision=REVISION,
        producer=pin(Path(__file__).resolve()), rawReplay=pin(raw_path), mandatoryPackets=50, pipelineTests=tests,
        completeNativeArtifactsChecked=1785, nativeArtifactsPerScope=595, selectedBuildScopesPerRoot=5,
        positiveSourceProfilesPerRoot=6, normallyReturningWrongSourceRejectionsPerRoot=9,
        persistentBoundaryRejectionsPerRoot=12, sourceImportClosure=23, semanticFields=21,
        orderedFilesystemServiceEvents=7, guardedAllocations=4, originalInstructionWitnesses=1540,
        candidateInstructionCoverage=coverage, completeInstructionCoverageClaimed=False,
        completeArenaEqualityClaimed=False, comparison='Exact ordered service trace, named ownership/state projection and allocation guards',
        scopes=totals, sourceCreditGranted=0, wholeGameQualified=False,
        limits=packet['limits'])
    target = ROOT / 'evidence/verification/bootstrap068-coordinator-fa94f61.json'
    target.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(result))


if __name__ == '__main__':
    main()
