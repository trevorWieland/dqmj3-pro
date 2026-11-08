import hashlib
import json
from pathlib import Path
import re
import subprocess

ROOT = Path(__file__).resolve().parents[3]
REVISION = 'c9a8c549b757f617d317115a7f34d9199406225b'
BASELINE = ROOT / 'work/heap062-root-public-v1'
FRESH = ROOT / 'work/clean-replay/sdk-heap062-c9a8c54'


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def artifacts(folder):
    result = {}
    for path in folder.rglob('*'):
        if path.suffix not in ['.o', '.obj', '.dll', '.elf', '.lib', '.exp']:
            continue
        key = re.sub(r'inputs/fresh-test-[^/]+/', 'inputs/fresh-test/<fresh>/', path.relative_to(folder).as_posix())
        require(key not in result, 'Heap native artifact identity duplicated')
        result[key] = {key: value for key, value in pin(path).items() if key != 'path'}
    return result


def main():
    replay_path = ROOT / 'evidence/verification/sdk-heap062-isolated-c9a8c54.json'
    replay = read(replay_path)
    require(replay['status'] == 'passed' and replay['sourceRevision'] == REVISION
            and replay['freshEnvironment'] and not replay['sharedGeneratedOrWorkInputs']
            and not replay['sourceAdmissionGranted'] and not replay['wholeGameClaimed'],
            'Independent heap committed replay is incomplete')
    archive = subprocess.check_output(['git', 'archive', '--format=zip', REVISION], cwd=ROOT)
    require(hashlib.sha256(archive).hexdigest() == replay['sourceArchiveSha256'], 'Heap committed archive differs')
    require(all(row['returncode'] == 0 and pin(FRESH / row['log'])['sha256'] == row['logSha256']
                for row in replay['steps']), 'Heap pipeline command or preserved log differs')
    plan = read(ROOT / 'config/replays/sdk-heap062.json')
    require(plan == replay['plan'], 'Heap independent plan differs')
    expected = set(plan['packets']) | {'build/update-content0/report.json', 'build/update-content0/functional.json'}
    require({row['path'] for row in replay['packets']} == expected and len(expected) == 58,
            'Heap mandatory packet roster differs')
    for row in replay['packets']:
        actual = pin(FRESH / row['path'])
        require(all(actual[key] == row[key] for key in ('bytes', 'sha256')), 'Heap required packet changed')
    fresh = FRESH / 'work/heap062-public-replay-v1'
    total_artifacts, summaries = 0, []
    for folder in [BASELINE, fresh]:
        parent = read(folder / 'public-replay.json')
        require(parent['status'] == 'public-heap062-full-source-only-copy-and-terminal-guards-passed'
                and parent['sourceCreditGranted'] == 0 and not parent['wholeGameQualified']
                and (parent['sourceInputs'], parent['sourceBytes'], parent['sourceOnlyProfiles']) == (29, 88600, 117),
                'Heap parent qualification differs')
        primary = artifacts(folder / 'qualification-final-v2')
        copied = artifacts(folder / 'copied-final-v2')
        source = artifacts(folder / 'source-only-final-v2')
        require(primary == copied and len(primary) == 284 and len(source) == 43,
                'Heap complete native artifacts differ or are missing')
        require(source == {key: value for key, value in primary.items() if key.startswith('build/')},
                'Heap source-only native artifact closure differs')
        total_artifacts += len(primary) + len(copied) + len(source)
        controls = read(folder / 'qualification-final-v2/controls/report.json')
        require(len(controls['controls']) == 9 and all(len(row['outcomes']) == 3
                and all(out['status'] == 'normally-returning-source-rejected' for out in row['outcomes'])
                for row in controls['controls']), 'Heap27 normally returning wrong-source checks missing')
        require(len(controls['sameFinalStateControls']) == 3 and all(row['returnedNormally']
                and row['intermediateBytesDiffer'] and row['finalArenaBytesEqual']
                for row in controls['sameFinalStateControls']), 'Heap equal-final-arena control missing')
        boundary = read(folder / 'boundary-controls-v1/report.json')
        require(boundary['status'] == 'passed' and len(boundary['controls']) == 11
                and boundary['controls'][-1]['childExit'] == 0
                and boundary['controls'][-1]['status'] == 'supervisor-rejected'
                and boundary['controls'][-1]['violations'], 'Heap persistent shutdown violation was accepted')
        summaries.append((primary, read(folder / 'copy-verification-v2.json')))
    require(summaries[0][0] == summaries[1][0], 'Heap Root/fresh artifact identities differ')
    require([(row['scope'], row['semanticSha256']) for row in summaries[0][1]['semanticReports']]
            == [(row['scope'], row['semanticSha256']) for row in summaries[1][1]['semanticReports']],
            'Heap exact modeled observations or validated named-pointer projection differ')
    original_pcs = [read(folder / 'qualification-final-v2/receipt.json')['allOriginalPcs'] for folder in [BASELINE, fresh]]
    require(original_pcs[0] == original_pcs[1], 'Heap original PC corpus differs')
    tests = sum(int(match.group(1)) for row in replay['steps'] if row['name'].endswith('-tests')
                for match in re.finditer(r'Ran (\d+) tests?', (FRESH / row['log']).read_text()))
    report = read(FRESH / 'build/update-content0/report.json')
    functional = read(FRESH / 'build/update-content0/functional.json')
    require(int(report['measures']['total_functions']) == 26659 and int(report['measures']['matched_code']) == 5128
            and len(functional['functions']) == 486, 'Heap independent progress accounting changed')
    receipt = dict(status='coordinator-reviewed-committed-heap-source-replay-passed', sourceRevision=REVISION,
        producer=pin(Path(__file__).resolve()), rawReplay=pin(replay_path), mandatoryPackets=58,
        pipelineTests=tests, completeNativeArtifactsChecked=total_artifacts, artifactIdentitiesPerFullRoot=284,
        sourceOnlyArtifactIdentities=43, sourceOnlyProfilesPerRoot=117,
        normallyReturningSemanticRejectionsPerFullRoot=27, equalFinalStateControlsPerFullRoot=3,
        persistentBoundaryControlsPerRoot=11, originalInstructionPcCorpus=len(original_pcs[0]),
        explicitNamedPointerProjection=True, arbitraryPointerWordNormalization=False,
        baselineParent=pin(BASELINE / 'public-replay.json'), freshParent=pin(fresh / 'public-replay.json'),
        sourceCreditGranted=0, inventoryRepairRequired=['0x10b980 remote range currently owned by0x105408'],
        existingWorkingCEntryNotNew='fn_00170b94', historicalFunctionInventoryComplete=False, wholeGameQualified=False)
    target = ROOT / 'evidence/verification/heap062-coordinator-c9a8c54.json'
    target.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(receipt))


if __name__ == '__main__':
    main()
