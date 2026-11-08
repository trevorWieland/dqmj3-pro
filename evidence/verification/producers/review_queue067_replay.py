import hashlib
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[3]
REVISION = '000282d4bf6b8fc81715e3ed93944a741842b7b4'
REPLAY = ROOT / 'work/clean-replay/queue067-000282d'
FRESH = REPLAY / 'work/queue067-public-replay-v1'
BASELINE = ROOT / 'work/queue067-root-preflight-v1'


def read(path):
    return json.loads(path.read_bytes())


def identity(path):
    data = path.read_bytes()
    return dict(bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def pin(path):
    return dict(path=path.relative_to(ROOT).as_posix(), **identity(path))


def require(value, reason):
    if not value:
        raise ValueError(reason)


def native_files(folder):
    return {p.relative_to(folder).as_posix(): identity(p) for p in folder.rglob('*')
            if p.is_file() and p.suffix in {'.o', '.obj', '.elf', '.dll', '.lib', '.exp'}}


def main():
    raw_path = ROOT / 'evidence/verification/queue067-isolated-000282d.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION,
            'Exact committed queue pipeline did not pass')
    require(raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
            and not raw['sourceAdmissionGranted'], 'Queue replay isolation or admission scope differs')
    tests = 0
    for step in raw['steps']:
        log = REPLAY / step['log']
        require(step['returncode'] == 0 and identity(log)['sha256'] == step['logSha256'],
                'Queue pipeline result or log changed')
        if step['name'].endswith('-tests'):
            counts = re.findall(r'Ran (\d+) tests? in ', log.read_text(errors='replace'))
            require(len(counts) == 1 and int(counts[0]) > 0, 'Empty queue pipeline test module')
            tests += int(counts[0])
    require(len(raw['packets']) == 83, 'Queue mandatory81 packets plus2 final reports are incomplete')
    for row in raw['packets']:
        require(identity(REPLAY / row['path']) == {key: row[key] for key in ('bytes', 'sha256')},
                'Required committed queue packet changed')
    ready = read(FRESH / 'ready.json')
    require(ready['status'] == 'public067-fresh-source-transport-passed'
            and not ready['smokeOnly'] and not ready['wholeGameQualified']
            and ready['sourceCreditGranted'] == 0 and ready['quiescentTaskObservationsOnly'],
            'Queue complete runtime domain differs')
    require(len(ready['children']) == 4 and all(x['exitCode'] == 0 for x in ready['children'])
            and len(ready['probes']) == 11 and all(x['rejectedEvenIfCaught'] for x in ready['probes']),
            'Queue positive children or persistent rejection controls incomplete')
    manifest = read(FRESH / 'manifest.json')
    require(manifest == read(BASELINE / 'manifest.json'), 'Queue preflight/committed input identity differs')
    original_paths = {(REPLAY / row['path']).resolve() for row in manifest['originalInputs']}
    require(not {row['path'] for row in manifest['originalInputs']}
            & {row['path'] for row in manifest['runtimeFiles'] + manifest['referenceMetadata']},
            'Original payload was hidden in the non-original runtime/metadata roster')
    require(len(manifest['productionAndFixtures']) == 78 and len(manifest['support']) == 40
            and len(manifest['runtimeFiles']) == 282, 'Queue source/helper/runtime membership differs')
    for role, count in [('production-algorithm', 34), ('header', 30),
                        ('qualification-fixture', 12), ('qualification-header', 2)]:
        require(sum(x['role'] == role for x in manifest['productionAndFixtures']) == count,
                'Queue production/header/fixture role changed')
    for row in manifest['productionAndFixtures'] + manifest['support']:
        require(identity(REPLAY / row['proposedPublicPath']) == {key: row[key] for key in ('bytes', 'sha256')},
                'Public queue source/helper snapshot changed')
    children, verified = [], set()
    for mode, imports, cases in [('build', 6, 0), ('original', 28, 9), ('source', 36, 27), ('tiny', 33, 27)]:
        path = FRESH / ('receipt-' + mode + '.json')
        child = read(path)
        audit = child['audit']
        require(child['status'] == 'passed' and not audit['forbiddenAccessAttempts']
                and child['originalMapped'] == (mode == 'original'), 'Queue positive child access boundary failed')
        if mode != 'original':
            require(not audit['originalImageConstructorAttempts'], 'Queue source/build instantiated original code')
            require(not original_paths & {Path(path).resolve() for path in child['inputPins']}
                    and not original_paths & {Path(path).resolve() for path in audit['readPaths']},
                    'Queue non-original setup/read ledger accessed an original payload')
        require(len(child['freshSourceImports']) == imports
                and all(not row['bytecodeCacheUsed'] for row in child['freshSourceImports']),
                'Queue fresh Python import roster differs')
        for row in child['freshSourceImports']:
            source = Path(row['actualSource'])
            require(source.is_relative_to(FRESH) and source.suffix == '.py'
                    and identity(source) == {key: row[key] for key in ('bytes', 'sha256')},
                    'Queue authored Python was not the selected source snapshot')
        for source, expected in child['inputPins'].items():
            key = (source, expected)
            if key not in verified:
                require(identity(Path(source))['sha256'] == expected, 'Queue declared immutable input changed')
                verified.add(key)
        require(len(child.get('cases', [])) == cases, 'Queue complete case/profile roster differs')
        if mode in {'build', 'tiny'}:
            require(len(child.get('exactArtifacts', child.get('exactTinyArtifacts', []))) == 109,
                    'Queue frozen compiler/linker artifact roster differs')
        if mode == 'source':
            require(child['tests'] == 9, 'Frozen queue observer test count differs')
        children.append(dict(mode=mode, cases=cases, imports=imports,
                             originalMapped=child['originalMapped'], receipt=pin(path)))
    corpora = []
    for expected in manifest['expectedObservations']:
        path = FRESH / 'metadata' / expected['snapshot']
        reference = read(path)
        require(identity(path) == {key: expected[key] for key in ('bytes', 'sha256')},
                'Frozen original queue observation changed')
        for mode, profiles in [('original', ['original']), ('source', ['arm', 'windows', 'a64']),
                               ('tiny', ['arm', 'windows', 'a64'])]:
            for profile in profiles:
                relative = mode + '/' + reference['case'] + '-' + profile + '.json'
                actual = FRESH / relative
                require(read(actual) == reference and identity(actual) == identity(BASELINE / relative),
                        'Complete queue logical graph/budget/file-operation corpus differs')
                corpora.append(pin(actual))
    require(len(corpora) == 63, 'Queue original/source/copied corpus incomplete')
    controls = read(FRESH / 'controls/report.json')['controls']
    applicable = [x for x in controls if x['applicable']]
    excluded = [x for x in controls if not x['applicable']]
    require(len(controls) == 21 and len(applicable) == 20
            and all(x['rejected'] and x['actualSourceOperationReturned'] for x in applicable)
            and len(excluded) == 1 and excluded[0]['control'] == 'native-pointer-width'
            and excluded[0]['profile'] == 'arm' and not excluded[0]['rejected'],
            'Queue returning wrong-source discrimination or ABI-specific exception differs')
    for probe in ready['probes']:
        receipt = read(FRESH / ('receipt-' + probe['probe'] + '.json'))
        require(receipt['status'] == 'failed' and (receipt['audit']['forbiddenAccessAttempts']
                or receipt['audit']['originalImageConstructorAttempts']), 'Caught queue attempt escaped rejection')
    native = native_files(FRESH)
    require(len(native) == 990 and native == native_files(BASELINE),
            'Complete queue native artifacts or import-library bytes differ')
    record = dict(schemaVersion=1, status='coordinator-reviewed-committed-queue-replay-passed',
        sourceRevision=REVISION, rawReplay=pin(raw_path), producer=pin(Path(__file__).resolve()),
        pipelineTests=tests, requiredPackets=83, children=children, completeLogicalCorpora=corpora,
        completeNativeArtifactComparisons=990, baselineAndTinySelectedArtifactsEach=109,
        productionAndFixtures=dict(productionC=34, headers=30, qualificationC=12, qualificationHeaders=2),
        returningControlChecks=21, applicableSemanticRejections=20, arm32NarrowingControlInapplicable=True,
        persistentCaughtAttemptControls=11, forbiddenPositiveAttempts=0, sourceCreditGranted=0,
        quiescentTaskObservationsOnly=True, arbitraryConcurrentTaskPollingQualified=False,
        physicalAndroidOrWholeGameExecutionClaimed=False)
    output = ROOT / 'evidence/verification/queue067-coordinator-000282d.json'
    output.write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(status=record['status'], pipelineTests=tests,
                         nativeArtifactComparisons=990, completeLogicalCorpora=len(corpora))))


if __name__ == '__main__':
    main()
