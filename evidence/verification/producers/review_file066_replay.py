import hashlib
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[3]
REVISION = '06fa4e1725305319ef18325c3f9af70ed2ea7b68'
REPLAY = ROOT / 'work/clean-replay/file066-06fa4e1'
FRESH = REPLAY / 'work/public066-replay-v1'
BASELINE = ROOT / 'work/public066-root-preflight-v1'


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
    suffixes = {'.o', '.obj', '.elf', '.dll', '.exp', '.lib'}
    return {path.relative_to(folder).as_posix(): identity(path)
            for path in folder.rglob('*') if path.is_file() and path.suffix in suffixes}


def main():
    raw_path = ROOT / 'evidence/verification/file066-isolated-06fa4e1.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION,
            'Exact committed file066 pipeline did not pass')
    require(raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
            and not raw['sourceAdmissionGranted'], 'File066 isolation/admission contract differs')
    pipeline_tests = 0
    for step in raw['steps']:
        log = REPLAY / step['log']
        require(step['returncode'] == 0 and identity(log)['sha256'] == step['logSha256'],
                'File066 pipeline step/log changed')
        if step['name'].endswith('-tests'):
            counts = re.findall(r'Ran (\d+) tests? in ', log.read_text(errors='replace'))
            require(len(counts) == 1 and int(counts[0]) > 0, 'Empty or incomplete pipeline test module')
            pipeline_tests += int(counts[0])
    for row in raw['packets']:
        require(identity(REPLAY / row['path']) == {key: row[key] for key in ('bytes', 'sha256')},
                'Completed file066 packet changed')
    require(read(FRESH / 'intake-replay.json')['status'] == 'passed', 'Public intake wrapper failed')
    execution = FRESH / 'execution'
    baseline = BASELINE / 'execution'
    ready = read(execution / 'ready.json')
    require(ready['status'] == 'public066-fresh-source-import-and-four-target-replay-passed'
            and ready['smokeOnly'] is False and not ready['wholeGameQualified'],
            'File066 full runtime scope differs')
    require(len(ready['children']) == 3 and all(row['exitCode'] == 0 for row in ready['children']),
            'File066 child roster or result differs')
    require(len(ready['persistentRejectionControls']) == 6
            and all(row['rejectedEvenIfCaught'] for row in ready['persistentRejectionControls']),
            'Caught source/original/history controls differ')
    manifest = read(execution / 'manifest.json')
    require(manifest == read(baseline / 'manifest.json'),
            'Fresh and public preflight source/support/metadata/runtime input identities differ')
    roles = manifest['productionAndFixtures']
    require(len(roles) == 68 and len(manifest['support']) == 48
            and len(manifest['runtimeFiles']) == 277, 'File066 source/helper/runtime roster differs')
    for role, count in [('production-algorithm', 30), ('header', 29), ('qualification-fixture', 9)]:
        require(sum(row['role'] == role for row in roles) == count, 'Production/fixture roles differ')
    for row in manifest['support'] + [row for row in roles if 'snapshot' in row]:
        require(identity(REPLAY / row['proposedPublicPath'])
                == {key: row[key] for key in ('bytes', 'sha256')}, 'Committed public snapshot changed')
    for row in roles:
        require(identity(execution / 'source' / row['logicalPath'])
                == {key: row[key] for key in ('bytes', 'sha256')}, 'Copied source/header changed')
        if 'snapshot' not in row:
            require(identity(ROOT / row['path']) == identity(REPLAY / row['path'])
                    == {key: row[key] for key in ('bytes', 'sha256')}, 'Master production source changed')
    children = []
    for mode, imports in [('build', 5), ('original', 28), ('source', 33)]:
        child = read(execution / ('receipt-' + mode + '.json'))
        require(child['status'] == 'passed' and child['declaredInputsUnchanged']
                and not child['audit']['forbiddenAccessAttempts']
                and not child['audit']['originalImageConstructorAttempts'], 'Positive child provenance failed')
        require(len(child['freshSourceImports']) == imports
                and all(not row['bytecodeCacheUsed'] for row in child['freshSourceImports']),
                'Fresh selected Python source import roster differs')
        require(child['originalMapped'] == (mode == 'original'), 'Source child original-image boundary differs')
        if mode == 'build':
            require(child['exactArtifacts'] == 97, 'Frozen compiler/linker artifact count differs')
        if mode == 'source':
            require(child['tests'] == 10, 'Frozen source regression count differs')
        children.append(dict(mode=mode, freshPythonModules=imports,
                             forbiddenAttempts=0, originalMapped=child['originalMapped']))
    for child in ready['children']:
        require(identity(execution / (child['mode'] + '.log'))['sha256'] == child['logSha256'],
                'Runtime child log changed')
    fresh_native = native_files(execution)
    require(fresh_native == native_files(baseline) and len(fresh_native) == 686,
            'Complete file066 native object/library artifact membership or bytes differ')
    corpora = []
    for folder, names in [('original', ['original']), ('source', ['arm', 'windows', 'a64'])]:
        for name in names:
            for suffix in ('', '-dispatch'):
                relative = folder + '/' + name + suffix + '.json'
                require(identity(execution / relative) == identity(baseline / relative),
                        'Complete original/source logical corpus changed: ' + relative)
                corpora.append(relative)
    expected = read(execution / 'original/original.json')
    dispatch = read(execution / 'original/original-dispatch.json')
    for profile in ('arm', 'windows', 'a64'):
        require(read(execution / ('source/' + profile + '.json')) == expected
                and read(execution / ('source/' + profile + '-dispatch.json')) == dispatch,
                'Fresh original/source typed observation corpus differs')
    controls = read(execution / 'negative/report.json')['results']
    require(len(controls) == 18 and all(row['returned'] for row in controls)
            and sum(row['rejected'] for row in controls) == 17, 'Returning semantic controls differ')
    inapplicable = [row for row in controls if not row['rejected']]
    require(len(inapplicable) == 1 and inapplicable[0]['profile'] == 'arm'
            and inapplicable[0]['control'] == 'returned-native-pointer-width'
            and 'inapplicable' in inapplicable[0]['applicability'],
            'ARM32 pointer-truncation applicability differs')
    for probe in ready['persistentRejectionControls']:
        receipt = read(execution / ('receipt-' + probe['probe'] + '.json'))
        require(receipt['status'] == 'failed'
                and (receipt['audit']['forbiddenAccessAttempts']
                     or receipt['audit']['originalImageConstructorAttempts']),
                'Caught provenance control lacks its actual rejected attempt')
    compilation = read(REPLAY / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
    require(compilation['status'] == 'compiled' and compilation['unitCount'] == 577
            and len(compilation['results']) == 1659, 'Production compilation census differs')
    result = dict(status='complete-public-file066-CPU-replay-reviewed-by-coordinator',
        sourceRevision=REVISION, pipelineTests=pipeline_tests, frozenSourceTests=10,
        publicGuardTests=10, persistentCaughtAttemptControls=6, returningSemanticObservations=18,
        applicableSemanticRejections=17, arm32PointerTruncationInapplicable=True,
        frozenGoldenArtifacts=97, completeIdenticalNativeArtifacts=686, identicalCorpora=corpora,
        productionC=30, headers=29, qualificationC=9, selectedSupportFiles=48,
        runtimeFiles=277, positiveChildren=children, originalImagesMappedBySource=False,
        normalizedTypedCorporaNotRawCrossPointerAddressEquality=True, sourceCreditGranted=0,
        wholeQueueBootstrapGpuPhysicalAndroidOrGameClaimed=False,
        rawPipelineReceipt=pin(raw_path), producer=pin(Path(__file__).resolve()))
    output = ROOT / 'evidence/verification/file066-coordinator-06fa4e1.json'
    require(not output.exists(), 'Preserve the existing coordinator review')
    output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({key: result[key] for key in ('status', 'pipelineTests',
        'completeIdenticalNativeArtifacts', 'returningSemanticObservations')}))


if __name__ == '__main__':
    main()
