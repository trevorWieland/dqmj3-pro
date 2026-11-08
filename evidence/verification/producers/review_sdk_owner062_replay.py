import hashlib
import json
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[3]
REVISION = '3208f366b4deb6e0fa06c949bbd50b3707c79551'
REPLAY = ROOT / 'work/clean-replay/sdk-owner062-3208f36'
FRESH = REPLAY / 'work/sdk-owner062-public-replay-v2'
BASELINE = ROOT / 'work/sdk-owner062-public-preflight-v2'


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


def corpus(folder, original):
    profiles = {'original', 'arm', 'windows', 'a64'} if original else {'arm', 'windows', 'a64'}
    counts, packets = {}, []
    for stage, per_profile in [('record', 5), ('selector', 6), ('owner', 10)]:
        path = folder / stage / 'report.json'
        rows = read(path)['observations']
        require(len(rows) == per_profile * len(profiles), 'Incomplete owner logical corpus')
        require({row['profile'] for row in rows} == profiles, 'Owner execution profile missing')
        for profile in profiles:
            require(sum(row['profile'] == profile for row in rows) == per_profile, 'Owner profile count differs')
        for row in rows:
            if stage == 'selector':
                require(all(x['rawReturn'] == x['expectedReturn'] for x in row['observations']),
                        'Typed selector pointer-role comparison failed')
                require(row.get('globalInitializerCredit', 0) == 0, 'Selector fixture granted startup credit')
                if row['profile'] in {'windows', 'a64'} and 'actualTableAddress' in row:
                    require(row['actualTableAddress'] > 2**32, 'Native selector pointer was narrowed')
            else:
                require(row['rawArenaSha256'] == row['expectedArenaSha256'], 'Complete independent arena differs')
                if stage == 'record':
                    require(row['fullIndependentModelEqual'] and row['returnIsThis'], 'Configuration model failed')
                else:
                    require(row['fullIndependentArenaEqual'] and row['rawReturn'] == row['expectedReturn'],
                            'Owner graph or return identity differs')
                    require(all(x['fullIndependentArenaEqual'] for x in row['insertions'] + row['timerObservations']),
                            'Intermediate insertion/timer arena differs')
                if row['profile'] in {'windows', 'a64'}:
                    require(row['actualNativeBase'] > 2**32, 'Native owner pointer was narrowed')
        counts[stage] = len(rows)
        packets.append(pin(path))
    return counts, packets


def main():
    raw_path = ROOT / 'evidence/verification/sdk-owner062-isolated-3208f36.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION, 'Committed owner replay failed')
    require(raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
            and not raw['sourceAdmissionGranted'], 'Owner replay isolation/credit scope differs')
    tests = 0
    for step in raw['steps']:
        log = REPLAY / step['log']
        require(step['returncode'] == 0 and identity(log)['sha256'] == step['logSha256'],
                'Owner pipeline step or log changed')
        if step['name'].endswith('-tests'):
            counts = re.findall(r'Ran (\d+) tests? in ', log.read_text(errors='replace'))
            require(len(counts) == 1 and int(counts[0]) > 0, 'Empty owner pipeline test suite')
            tests += int(counts[0])
    for row in raw['packets']:
        require(identity(REPLAY / row['path']) == {key: row[key] for key in ('bytes', 'sha256')},
                'Owner required pipeline packet changed')
    parent = read(FRESH / 'public-replay.json')
    require(parent['status'] == 'complete-public-owner-v2-path-replay-passed'
            and parent['sourceCreditGranted'] == 0 and parent['boundaryTests'] == 21,
            'Owner public parent proof differs')
    source = read(REPLAY / 'evidence/lanes/native-sdk-owner062/public-inputs-v2/source-manifest-v1.json')
    support = read(REPLAY / 'evidence/lanes/native-sdk-owner062/public-inputs-v2/support-manifest-v1.json')
    require(len(source['files']) == 13 and len(source['existingSdkInputs']) == 27
            and len(support['files']) == 10 and len(support['inheritedFiles']) == 15,
            'Owner authored or inherited input membership differs')
    for role, count in [('production-algorithm', 7), ('header', 2), ('qualification-fixture', 4)]:
        require(sum(row['role'] == role for row in source['files']) == count, 'Owner source role changed')
    for row in source['files']:
        require(identity(REPLAY / row['proposedPath']) == {key: row[key] for key in ('bytes', 'sha256')},
                'Committed production/header/fixture input changed')
    cohorts, corpora, artifact_count = [], [], 0
    verified = set()
    for name, original in [('full-v2', True), ('source-only-v3', False), ('tiny-copy-v2/inputs/full', True)]:
        folder = FRESH / 'intake' / name
        child = read(folder / 'transport.json')
        require(child['status'] == 'public-owner-input-and-closure-replay-passed'
                and not child['blockedReadsOrConstructions'] and not child['rejectedMetadata']
                and child['freshPyOnlyAuthoredImports'], 'Owner positive provenance failed')
        require(child['returningControls'] == 27 and child['sameFinalPrimaryArenaControls'] == 9
                and child['tests'] == (10 if original else 8), 'Owner child controls/test count differs')
        for path, expected in child['sourceInputs'].items():
            key = (path, expected['sha256'])
            if key not in verified:
                require(identity(Path(path)) == expected, 'Pinned source/helper/runtime changed')
                verified.add(key)
        require(len(child['authoredModules']) == 24, 'Fresh owner authored module membership differs')
        for module in child['authoredModules'].values():
            path = Path(module['path'])
            require(path.suffix == '.py' and path.is_relative_to(REPLAY)
                    and identity(path) == {key: module[key] for key in ('bytes', 'sha256')},
                    'Fresh selected authored Python source changed or escaped replay')
        if original:
            require(child['primaryInsertionPcVisits'] == 206 and child['combinedInsertionPcVisits'] == 246,
                    'Primary and supplemental owner coverage conflated')
        else:
            require(child['sourceOnlyOriginalReadsOrConstructions'] == 0
                    and child['originalConstructions'] == 0, 'Source-only original state accessed')
        counts, rows = corpus(folder, original)
        corpora.extend(rows)
        controls = read(folder / 'controls/report.json')
        require(controls['count'] == 24 and controls['sameFinalPrimaryArena'] == 9
                and len(controls['observations']) == 24
                and all(x['rejected'] and x['observation']['normallyReturned'] for x in controls['observations']),
                'Owner controls did not reject normally returning wrong source')
        rotation = read(folder / 'rotation-report.json')
        require(len(rotation['observations']) == (16 if original else 12) and len(rotation['controls']) == 3
                and all(x['error'] and x['observation']['normallyReturned'] for x in rotation['controls']),
                'Rotation control or corpus membership differs')
        for row in rotation['observations']:
            require(row['rawArenaSha256'] == row['expectedArenaSha256']
                    and row['fullIndependentArenaEqual'] and row['rawReturn'] == row['expectedReturn']
                    and all(x['fullIndependentArenaEqual'] for x in row['insertions'] + row['timerObservations']),
                    'Complete supplemental rotation graph differs')
        native = native_files(folder)
        require(len(native) == 1236 and native == native_files(BASELINE / 'intake' / name),
                'Complete raw native artifact membership or bytes differ')
        artifact_count += len(native)
        corpora.append(pin(folder / 'rotation-report.json'))
        cohorts.append(dict(name=name, originalPermitted=original, observations=counts,
                            tests=child['tests'], returningControls=27, nativeArtifacts=len(native)))
    record = dict(schemaVersion=1, status='coordinator-reviewed-committed-owner-replay-passed',
        sourceRevision=REVISION, rawReplay=pin(raw_path), pipelineTests=tests,
        freshEnvironment=True, forbiddenPositiveAccesses=0, metadataBoundaryTests=21,
        sourceAndFixtures=dict(productionC=7, headers=2, qualificationC=4),
        cohorts=cohorts, nativeArtifactComparisons=artifact_count, logicalCorpora=corpora,
        windowsAddressHashesComparedAcrossProcesses=False,
        windowsArenaAndPointerRolesCheckedIndependently=True,
        primaryInsertionPcVisits=206, combinedInsertionPcVisits=246,
        sourceCreditGranted=0, wholeFactoryDefaultAllocatorStartupOrGameClaimed=False,
        producer=pin(Path(__file__).resolve()))
    output = ROOT / 'evidence/verification/sdk-owner062-coordinator-3208f36.json'
    output.write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(status=record['status'], pipelineTests=tests,
                         nativeArtifactComparisons=artifact_count)))


if __name__ == '__main__':
    main()
