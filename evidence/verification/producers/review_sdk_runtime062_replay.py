import ast
import hashlib
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[3]
REVISION = '4faa51173dc70578287caeaef6664b2a85686355'
REPLAY = ROOT / 'work/clean-replay/sdk-runtime062-4faa511'
FRESH = REPLAY / 'work/sdk-runtime062-public-replay-v1'
BASELINE = ROOT / 'work/sdk-runtime062-public-preflight-v2'
PUBLIC = ROOT / 'evidence/lanes/native-sdk-runtime062/public-inputs-v3'
STAGES = ('binding', 'binding-start', 'construction', 'manager', 'erase', 'timer')
TESTS = (10, 10, 12, 15, 10, 12)
CHECKS = (18, 24, 36, 30, 24, 33)
SAME = (15, 9, 9, 9, 3, 3)
sys.path.insert(0, str(ROOT / 'toolscripts'))
from public_sdk_runtime062_replay import contract, validate_child


def read(path):
    return json.loads(path.read_bytes())


def pin(path):
    data = path.read_bytes()
    return dict(bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def require(value, reason):
    if not value:
        raise ValueError(reason)


def pairs(value):
    checked = 0
    if isinstance(value, dict):
        for key in ('rawArenaSha256', 'arenaSha256'):
            if key in value and 'expectedArenaSha256' in value:
                require(value[key] == value['expectedArenaSha256'], 'Independent complete-arena model differs')
                checked += 1
        if 'rawReturn' in value and 'expectedReturn' in value:
            require(value['rawReturn'] == value['expectedReturn'], 'Independent typed return model differs')
        for child in value.values():
            checked += pairs(child)
    elif isinstance(value, list):
        for child in value:
            checked += pairs(child)
    return checked


def source_transport():
    transport = contract()
    require(len(transport['files']) == 74, 'Public authored transport membership differs')
    formatting = read(PUBLIC / 'python-transport-formatting-v1.json')
    archive = read(ROOT / formatting['originalArchive'])
    original = archive['utf8Text'].encode('utf-8')
    require(dict(bytes=len(original), sha256=hashlib.sha256(original).hexdigest()) == formatting['original'], 'Original Python formatting archive differs')
    require(pin(ROOT / formatting['path']) == formatting['normalized'], 'Normalized Python formatting differs')
    require(ast.dump(ast.parse(original.decode('utf-8')), include_attributes=False) == ast.dump(ast.parse((ROOT / formatting['path']).read_text()), include_attributes=False), 'Python transport changed its AST')
    sources = read(PUBLIC / 'source-manifest-v1.json')
    support = read(PUBLIC / 'support-manifest-v3.json')
    require(len(sources['existingSdkInputs']) == 31 and len(support['inheritedFiles']) == 40, 'Existing authored source/support closure differs')
    for row in sources['existingSdkInputs'] + support['inheritedFiles']:
        expected = {k: row[k] for k in ('bytes', 'sha256')}
        require(pin(ROOT / row['path']) == expected and pin(REPLAY / row['path']) == expected, 'Pinned inherited source/helper changed')
    changed = []
    for row in transport['files']:
        expected = {k: row[k] for k in ('bytes', 'sha256')}
        require(pin(REPLAY / row['masterPath']) == expected, 'Committed public master changed')
        require(pin(FRESH / 'intake' / row['intakePath']) == expected, 'Fresh authored snapshot changed')
        old = BASELINE / 'intake' / row['intakePath']
        if pin(old) != expected:
            changed.append(row['masterPath'])
    allowed = [formatting['path'], 'evidence/lanes/native-sdk-runtime062/public-inputs-v3/support-manifest-v3.json']
    require(sorted(changed) == sorted(allowed), 'Preflight differs beyond explicit Python formatting and its manifest pin')
    return changed


def main():
    raw_path = ROOT / 'evidence/verification/sdk-runtime062-isolated-4faa511.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION, 'Exact committed runtime pipeline did not pass')
    require(raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs'] and not raw['sourceAdmissionGranted'], 'Runtime isolation/admission contract differs')
    pipeline_tests = 0
    for step in raw['steps']:
        log = REPLAY / step['log']
        require(step['returncode'] == 0 and pin(log)['sha256'] == step['logSha256'], 'Runtime pipeline step/log changed')
        if step['name'].endswith('-tests'):
            counts = re.findall(r'Ran (\d+) tests? in ', log.read_text(errors='replace'))
            require(len(counts) == 1 and int(counts[0]) > 0, 'Pipeline module has no completed tests')
            pipeline_tests += int(counts[0])
    for row in raw['packets']:
        require(pin(REPLAY / row['path']) == {k: row[k] for k in ('bytes', 'sha256')}, 'Completed runtime packet changed')
    proof = read(FRESH / 'public-replay.json')
    require(proof['status'] == 'complete-public-runtime-source-path-replay-passed' and proof['predecessorTests'] == 69 and proof['guardTests'] == 6 and proof['inputFiles'] == 74, 'Public runtime producer roster differs')
    require(len(proof['children']) == 12 and not proof['sourceOriginalImageMapped'] and not proof['wholeSdkFactoryTaskOwnerClaimed'], 'Runtime producer boundary differs')
    require(proof['producer'] == pin(REPLAY / 'toolscripts/public_sdk_runtime062_replay.py') and proof['manifest'] == pin(REPLAY / PUBLIC.relative_to(ROOT) / 'transport.json'), 'Qualified producer identity differs')
    require(proof['guardLog'] == pin(FRESH / 'guard-tests.log'), 'Guard regressions changed')
    formatting = source_transport()
    stages, arena_checks = [], 0
    for index, stage in enumerate(STAGES):
        folder = FRESH / 'intake/replay' / stage
        for mode in ('proof', 'tests'):
            child = read(folder / ('transport-' + mode + '.json'))
            validate_child(child, stage, mode)
            require(child['stage'] == stage and child['mode'] == mode, 'Child stage/mode differs')
            if mode == 'tests':
                require(child['tests'] == TESTS[index], 'Predecessor tests differ')
        report = read(folder / 'final-v1/report.json')
        old = read(BASELINE / 'intake/replay' / stage / 'final-v1/report.json')
        require(report['status'] == old['status'] and report['originalPcAccounting'] == old['originalPcAccounting'], 'Canonical runtime scope or PC accounting changed')
        checked = pairs(report)
        require(checked > 0, 'No complete-arena comparisons were retained')
        arena_checks += checked
        controls = read(folder / 'final-v1/controls/report.json')
        observations = [observation for control in controls['controls'] for observation in control['observations']]
        require(controls['checks'] == CHECKS[index] == len(observations), 'Returning control census differs')
        require(all(row['normalReturnBeforeRejection'] and row['reason'] for row in observations), 'Control did not return normally before semantic rejection')
        same = sum(bool(row['sameFinalArena']) for row in observations)
        require(controls['sameFinalArenaChecks'] == SAME[index] == same, 'Same-final-arena controls differ')
        stages.append(dict(stage=stage, predecessorTests=TESTS[index], returningControls=len(observations), sameFinalArenaControls=same, completeArenaModelChecks=checked, originalPcAccounting=report['originalPcAccounting']))
    suffixes = {'.o', '.obj', '.elf', '.dll', '.exp', '.lib'}
    roster = lambda folder: {path.relative_to(folder).as_posix(): pin(path) for path in folder.rglob('*') if path.is_file() and path.suffix in suffixes}
    fresh, old = roster(FRESH), roster(BASELINE)
    require(fresh == old and len(fresh) == 2809, 'Complete raw native artifact membership or bytes differ')
    compilation = read(REPLAY / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
    require(compilation['status'] == 'compiled' and compilation['unitCount'] == 565 and len(compilation['results']) == 1623, 'Public production compilation census differs')
    result = dict(status='complete-public-runtime-CPU-replay-reviewed-by-coordinator', sourceRevision=REVISION, pipelineTests=pipeline_tests, predecessorTests=69, guardTests=6, returningControls=165, sameFinalArenaControls=48, identicalNativeArtifacts=2809, authoredTransportInputs=74, formattingOnlyDifferences=formatting, completeArenaModelChecks=arena_checks, stages=stages, compilerOutputsPatched=False, sourceCreditGranted=0, wholeFactoryTaskOwnerGpuPhysicalAndroidOrGameClaimed=False, rawPipelineReceipt=dict(path=raw_path.relative_to(ROOT).as_posix(), **pin(raw_path)), producer=dict(path=Path(__file__).resolve().relative_to(ROOT).as_posix(), **pin(Path(__file__).resolve())))
    output = ROOT / 'evidence/verification/sdk-runtime062-coordinator-4faa511.json'
    require(not output.exists(), 'Preserve existing coordinator review')
    output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({k: result[k] for k in ('status', 'pipelineTests', 'identicalNativeArtifacts', 'returningControls', 'completeArenaModelChecks')}))


if __name__ == '__main__':
    main()
