import hashlib
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[3]
REVISION = 'a96256dc1eeb83529c6fbc49ff383e18c38d2044'
REPLAY = ROOT / 'work/clean-replay/sdk062-a96256d'
FRESH = REPLAY / 'work/sdk062-public-replay-v1'
PREFLIGHT = ROOT / 'work/sdk062-public-all-attempt001'


def read(path):
    return json.loads(path.read_bytes())


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def pin(path):
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size, sha256=digest(path))


def require(value, reason):
    if not value:
        raise ValueError(reason)


def compare(before, after, report, path='$', target=None, real=False, differences=None):
    require(type(before) is type(after), 'Observation type differs: ' + path)
    if isinstance(before, dict):
        require(set(before) == set(after), 'Observation fields differ: ' + path)
        target = after.get('target', target)
        real = after.get('actualWindowsClock', real)
        for key in before:
            compare(before[key], after[key], report, path + '.' + key, target, real, differences)
    elif isinstance(before, list):
        require(len(before) == len(after), 'Complete corpus length differs: ' + path)
        for left, right in zip(before, after, strict=True):
            compare(left, right, report, path + '[*]', target, real, differences)
    elif before != after:
        allowed = target == 'windows' and path.endswith('.arenaSha256')
        if report == 'context/context-proof-attempt001.json':
            allowed = path in ('$.programs[*][*].numericThreadId', '$.programs[*][*].tlsOwner',
                '$.programs[*][*].referenceSvcCalls[*].returnedNumericThreadId',
                '$.programs[*][*].observations[*].arenaSha256')
        if report == 'arbiter/handoff-programs.json':
            allowed = path in ('$.programs[*].original.svc22[*].hostAlias',
                              '$.programs[*].original.actualSharedBackingAddress')
        if report == 'startup/final-stage-v1/report.json' and path.startswith('$.clock[*].'):
            suffix = path[len('$.clock[*].'):]
            allowed = ((target == 'windows' or real) and suffix in ('callerArenaSha256', 'stateStorageSha256')
                or real and suffix in ('expectedOutput', 'rawTickInputs[*]', 'state.last', 'state.offset',
                                      'windowsPrimitiveRecords[*].counter', 'windowsPrimitiveRecords[*].targetTicks'))
        require(allowed, 'Undeclared semantic observation difference: ' + report + ':' + path)
        differences[path] = differences.get(path, 0) + 1


def main():
    raw_path = ROOT / ('evidence/verification/sdk062-isolated-' + REVISION[:7] + '.json')
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION
            and raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs'], 'Independent pipeline absent')
    tests = 0
    for row in raw['steps']:
        log = REPLAY / row['log']
        require(row['returncode'] == 0 and digest(log) == row['logSha256'], 'Pipeline phase/log differs')
        if row['name'].endswith('-tests'):
            tests += int(re.search(r'Ran (\d+) tests?', log.read_text(encoding='utf-8'))[1])
    require(tests == 128, 'Pipeline test roster differs')
    for row in raw['packets']:
        path = REPLAY / row['path']
        require(path.stat().st_size == row['bytes'] and digest(path) == row['sha256'], 'Pipeline packet changed')
    source_pins, runtime_pins, stage_tests = set(), set(), 0
    receipts = []
    for stage, count in zip(('context', 'arbiter', 'object', 'startup'), (14, 11, 16, 18), strict=True):
        for mode in ('qualify', 'tests'):
            path = FRESH / stage / f'public-{mode}-receipt.json'
            receipt = read(path)
            require(receipt['status'] == 'passed' and not receipt['forbiddenHistoricalWorkAccess']
                    and receipt['declaredSourceInputsUnchanged'] and receipt['historicalOriginalFixtureMapped'] is False
                    and len(receipt['inputPins']) == 149 and len(receipt['runtimePins']) == 275,
                    'SDK child provenance/closure differs')
            for name, expected in {**receipt['inputPins'], **receipt['runtimePins']}.items():
                require(digest(Path(name)) == expected, 'SDK source/runtime/tool changed after replay')
            for name in receipt['readPaths']:
                actual = Path(name).resolve()
                require(not actual.is_relative_to(REPLAY / 'work') or actual.is_relative_to(FRESH),
                        'SDK replay read historical work')
            if mode == 'tests':
                require(receipt['tests'] == count, 'Fresh SDK test count differs')
                stage_tests += count
            source_pins.update(receipt['inputPins'])
            runtime_pins.update(receipt['runtimePins'])
            receipts.append(pin(path))
    reports = ['context/map-proof-attempt001.json', 'context/context-proof-attempt001.json',
        'context/mutex-proof-attempt001.json', 'arbiter/handoff-programs.json',
        'object/final-attempt-v4/report.json', 'startup/final-stage-v1/report.json',
        'startup/standalone-constructor-math-v1/constructor-math.json']
    differences = []
    for name in reports:
        observed = {}
        compare(read(PREFLIGHT / name), read(FRESH / name), name, differences=observed)
        differences.append(dict(report=name, completeCorporaCompared=True, declaredRawRunDifferences=observed,
                                replay=pin(FRESH / name)))
    context = read(FRESH / reports[0])
    require(context['steps'] == 603, 'Map corpus differs')
    contexts = read(FRESH / reports[1])
    require(contexts['steps'] == 32 and contexts['observations'] == 128, 'Context corpus differs')
    for program in contexts['programs']:
        for profile in program:
            require(profile['numericThreadId'] != profile['tlsOwner'], 'Numeric thread identity aliases TLS owner')
            for call in profile.get('referenceSvcCalls', []):
                require(call['returnedNumericThreadId'] == profile['numericThreadId'], 'Actual thread identity changed')
    objects, startup = read(FRESH / reports[4]), read(FRESH / reports[5])
    require(objects['programSets'] == 2729 and objects['fourProfileObservations'] == 10916
            and all(row.get('fullArenaMatchesIndependentModel', True) for row in objects['observations']),
            'SDK object complete observation/model scope differs')
    require(startup['taskProgramSets'] == 1080 and startup['clockProgramSets'] == 1012
            and startup['fourProfileObservations'] == 8368, 'Task/clock corpus differs')
    clock_checks = 0
    for row in startup['clock']:
        require(row['completeCallerAndStateModelsMatch'], 'Clock complete caller/state model differs')
        for primitive in row['windowsPrimitiveRecords']:
            counter, frequency = primitive['counter'], primitive['frequency']
            expected = ((counter // frequency) * 268111856
                + ((counter % frequency) * 268111856) // frequency) & ((1 << 64) - 1)
            require(primitive['readFromActualWindows'] and primitive['targetTicks'] == expected,
                    'Actual Windows QPC equation differs')
            clock_checks += 1
    require(clock_checks == 6, 'Actual QPC observation count differs')
    controls = 0
    value = read(FRESH / 'context/controls-attempt003/report.json')
    for row in value['controls']:
        require(len(row['outcomes']) == 3 and all(x['normallyReturnedBeforeIndependentComparison']
            and x['reason'] for x in row['outcomes']), 'Context semantic control differs')
        controls += len(row['outcomes'])
    value = read(FRESH / 'arbiter/controls-attempt001/report.json')
    for row in value['controls']:
        require(len(row['observations']) == 3 and all(x['normallyReturned']
            and x['independentCellOrOwnerMismatch'] for x in row['observations']), 'Arbitration semantic control differs')
        controls += len(row['observations'])
    for name, flag, expected in [('object/attempt002-controls/report.json', 'normallyReturned', 30),
                                ('startup/attempt004-controls/report.json', 'returnedNormally', 27)]:
        value = read(FRESH / name)
        require(value['checks'] == expected == len(value['controls']) and all(x[flag] and x['rejection']
            for x in value['controls']), 'Object/task-clock semantic control differs')
        controls += expected
    require(controls == 99 and stage_tests == 59, 'Complete control/test roster differs')
    math = read(FRESH / reports[6])
    require(len(math['constructors']) == 48 and len(math['quotientReference']) == 4
            and all(row['cases'] == 2175 and row['allQuotientsMatchIndependentIntegerArithmetic']
                    for row in math['quotientReference']), 'Constructor/quotient supplement differs')
    coverage = read(FRESH / 'startup/default-work-coverage-v1.json')
    require(coverage['pcVisits'] == 10 and all(not row['unvisitedPcs'] for row in coverage['regions']),
            'Default-work visited-address supplement differs')
    artifacts = []
    for path in sorted(FRESH.rglob('*')):
        if path.is_file() and path.suffix in ('.o', '.obj', '.elf', '.dll', '.lib', '.exp'):
            other = PREFLIGHT / path.relative_to(FRESH)
            require(other.is_file() and path.read_bytes() == other.read_bytes(), 'Raw native artifact differs')
            artifacts.append(pin(path))
    require(len(artifacts) == 1761, 'Complete source artifact roster differs')
    result = dict(status='complete-public-SDK-replay-reviewed-by-coordinator', sourceRevision=REVISION,
        pipelineTests=tests, freshStageTests=59, returningControls=controls, sourceInputPins=149,
        runtimeToolPins=275, observations=dict(context=2636, arbiterPrograms=16, object=10916, taskClock=8368),
        mutexConstructorComparisons=48, quotientCasesPerProfile=2175, actualWindowsQpcChecks=clock_checks,
        defaultWorkVisitedAddresses=10, hookVisitsDoNotProvePredicateSatisfiedExecution=True,
        completeObservationComparisons=differences, childReceipts=receipts, identicalNativeArtifacts=artifacts,
        rawPipelineReceipt=pin(raw_path), compilerOutputsPatched=False, sourceCreditGranted=0,
        wholeSdkStartupFactoryGpuPhysicalAndroidOrGameClaimed=False)
    output = ROOT / ('evidence/verification/sdk062-coordinator-' + REVISION[:7] + '.json')
    require(not output.exists(), 'Preserve existing coordinator receipt')
    output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(pipelineTests=tests, freshTests=59, controls=controls, identicalArtifacts=len(artifacts))))


if __name__ == '__main__':
    main()
