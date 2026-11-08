import gc
import hashlib
import json
from pathlib import Path
import re
import subprocess
import sys
import zipfile

ROOT = Path(__file__).resolve().parents[3]
REVISION = '6ff4f7899ad415cf9aae17d48893a3a196dfa5f1'
FRESH = ROOT / 'work/clean-replay/sdk-registration062-6ff4f78'
BASELINE = ROOT / 'work/registration062-public-parent-v2'
sys.path.insert(0, str(ROOT / 'toolscripts'))
from sdk062_registration_v1 import verification


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    with path.open('rb') as stream:
        digest = hashlib.file_digest(stream, 'sha256').hexdigest()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size, sha256=digest)


def require(value, reason):
    if not value:
        raise ValueError(reason)


def scope(folder):
    parent = read(folder / 'public-replay.json')
    require(parent['status'] == 'public-registration062-full-source-only-copy-and-terminal-guards-passed'
            and parent['sourceCreditGranted'] == 0 and not parent['wholeGameQualified']
            and parent['sourceInputs'] == 19 and parent['completeNativeArtifactsChecked'] == 1676
            and parent['boundaryControls'] == 11, 'Registration parent qualification differs')
    archive = read(folder / 'report-archive.json')
    require(pin(folder / archive['archive'])['sha256'] == archive['sha256']
            and len(archive['members']) == 3 and archive['allMemberHashesAndCrcVerified'], 'Report archive differs')
    summaries, original_pcs = {}, set()
    with zipfile.ZipFile(folder / archive['archive']) as stream:
        require(stream.testzip() is None, 'Registration archive CRC differs')
        for row in archive['members']:
            with stream.open(row['member']) as source:
                digest, count = hashlib.sha256(), 0
                for block in iter(lambda: source.read(1024 * 1024), b''):
                    digest.update(block)
                    count += len(block)
            require(count == row['bytes'] and digest.hexdigest() == row['sha256'], 'Archived member differs')
            name = row['member'].split('/')[0]
            child = next(r for r in parent['children'] if r['name'] == name)
            require(child['report'] == {k: row[k] for k in ('bytes', 'sha256')}, 'Parent report pin differs')
            with stream.open(row['member']) as source:
                report = json.load(source)
            require(report['status'] == 'passed' and report['tests'] == 9 and len(report['profiles']) == 12
                    and not report['rejectedAttempts'], 'Archived registration scope incomplete')
            if name == 'sourceOnly':
                require(not report['originalConstructions'] and not report['originalFileReads']
                        and all(not r['originalPcs'] and not r['originalAuthoredEndpointsMapped']
                                for r in report['profiles']), 'Source-only accessed original inputs or execution')
            else:
                require(report['originalConstructions'] == 4 and len(report['originalFileReads']) == 3,
                        'Original reference scope differs')
                original_pcs.update(p for r in report['profiles'] for p in r['originalPcs'])
                verification.controls(folder / name)
            summaries[name] = verification.summarize(report)
            require(summaries[name] == child['observations'] and summaries[name]['observations'] == 5916,
                    'Complete arena/model or explicit ownership projection differs')
            del report
            gc.collect()
            completion = read(folder / name / 'process-completion.json')
            require(completion['status'] == 'passed' and completion['returnCode'] == 0
                    and not completion['rejectedAfterChildExit'], 'Terminal supervisor differs')
    declared = read(folder / 'native-artifacts.json')
    binaries = {name: verification.artifacts(folder / name) for name in ('full', 'sourceOnly', 'tiny')}
    require(binaries == declared and {k: len(v) for k, v in binaries.items()}
            == dict(full=762, sourceOnly=152, tiny=762), 'Complete compiled artifacts differ')
    require(binaries['full'] == binaries['tiny'] and all(binaries['full'].get(k) == v
            for k, v in binaries['sourceOnly'].items()), 'Source-only or tiny artifact closure differs')
    boundary = read(folder / 'boundary-controls-v1/report.json')
    require(boundary['status'] == 'passed' and len(boundary['controls']) == 11,
            'Persistent boundary corpus incomplete')
    return summaries, binaries, original_pcs


def main():
    raw_path = ROOT / 'evidence/verification/sdk-registration062-isolated-6ff4f78.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION and raw['freshEnvironment']
            and not raw['sharedGeneratedOrWorkInputs'] and not raw['sourceAdmissionGranted']
            and not raw['wholeGameClaimed'], 'Independent committed registration replay incomplete')
    archive = subprocess.check_output(['git', 'archive', '--format=zip', REVISION], cwd=ROOT)
    require(hashlib.sha256(archive).hexdigest() == raw['sourceArchiveSha256'], 'Committed archive differs')
    plan = read(ROOT / 'config/replays/sdk-registration062.json')
    expected = set(plan['packets']) | {'build/update-content0/report.json', 'build/update-content0/functional.json'}
    require(plan == raw['plan'] and len(expected) == 49 and {r['path'] for r in raw['packets']} == expected,
            'Mandatory registration replay packets differ')
    for row in raw['packets']:
        actual = pin(FRESH / row['path'])
        require(all(actual[k] == row[k] for k in ('bytes', 'sha256')), 'Mandatory packet changed')
    require(all(r['returncode'] == 0 and pin(FRESH / r['log'])['sha256'] == r['logSha256']
                for r in raw['steps']), 'Pipeline command or log differs')
    root_scope = scope(BASELINE)
    fresh_scope = scope(FRESH / 'work/registration062-public-replay-v1')
    require(root_scope == fresh_scope, 'Root and independent observations/artifacts/original PCs differ')
    roster = read(ROOT / 'evidence/lanes/sdk-registration062-public-input/entry-roster-v1.json')
    coverage = []
    for row in roster['entries']:
        pcs = {p for span in row['ranges'] for p in range(span['start'], span['endExclusive'], 4)}
        coverage.append(dict(address=row['address'], totalPositions=len(pcs),
            observedPositions=len(pcs & root_scope[2]), unobservedPositions=sorted(pcs - root_scope[2])))
    require(sum(r['totalPositions'] for r in coverage) == 532
            and sum(r['observedPositions'] for r in coverage) == 505, 'Original instruction corpus differs')
    report = read(FRESH / 'build/update-content0/report.json')
    functional = read(FRESH / 'build/update-content0/functional.json')
    require(int(report['measures']['total_functions']) == 26660 and int(report['measures']['matched_code']) == 5128
            and len(functional['functions']) == 507, 'Independent progress accounting differs')
    tests = sum(int(m.group(1)) for row in raw['steps'] if row['name'].endswith('-tests')
                for m in re.finditer(r'Ran (\d+) tests?', (FRESH / row['log']).read_text()))
    result = dict(status='coordinator-reviewed-committed-registration062-replay-passed', sourceRevision=REVISION,
        producer=pin(Path(__file__).resolve()), rawReplay=pin(raw_path), mandatoryPackets=49,
        pipelineTests=tests, completeNativeArtifactsChecked=3352, completeArenaObservationsPerScope=5916,
        comparedScopes=6, totalCompleteArenaModelObservations=35496, sourceInputs=19,
        returningWrongSourceRejectionsPerFullScope=24, persistentBoundaryRejectionsPerRoot=11,
        originalInstructionCoverage=coverage, allInstructionPositionsEncountered=False,
        staticConstructorDestructorInvariantsNotYetAccepted=True, sourceCreditGranted=0,
        explicitNamedWindowsRoleProjection=True, arbitraryPointerWordNormalization=False,
        overallConfirmedSourceCoverageClaimed=False, wholeGameQualified=False)
    target = ROOT / 'evidence/verification/registration062-coordinator-6ff4f78.json'
    target.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(result))


if __name__ == '__main__':
    main()
