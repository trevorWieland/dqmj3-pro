import copy
import hashlib
import json
from pathlib import Path
import re
import struct
import sys

ROOT = Path(__file__).resolve().parents[3]
REVISION = '5c2b215eba7d23f5b5b9b18953b54d88693ddecd'
REPLAY = ROOT / 'work/clean-replay/resource065-5c2b215'
FRESH = REPLAY / 'work/resource065-public-replay-v1'
BASELINE = ROOT / 'work/resource065-public-preflight-v1'
sys.path.insert(0, str(ROOT / 'toolscripts'))
import effect_resource065_graph_oracle as oracle
import effect_resource065_header_review as headers
import native_effect065_build as compiler
from effect_resource065_graph_cases import cases


def read(path):
    return json.loads(path.read_bytes())


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def pin(path):
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size, sha256=digest(path))


def require(value, reason):
    if not value:
        raise ValueError(reason)


def layout(profile):
    if profile == 'windows':
        return oracle.Native(FRESH / 'graph-build/windows/effect_resource.dll').layout
    image = compiler.read_elf(FRESH / ('graph-build/' + profile + '/effect_resource.elf'))
    row = image['objects']['effect_graph_fixture_layout065']
    for segment in image['segments']:
        offset = row['address'] - segment['address']
        if 0 <= offset and offset + row['bytes'] <= len(segment['fileBytes']):
            raw = segment['fileBytes'][offset:offset + row['bytes']]
            return dict(zip(oracle.LAYOUT_NAMES, struct.unpack('<' + 'I' * (len(raw) // 4), raw), strict=True))
    raise ValueError('Actual resource fixture layout has no complete initialized backing')


def observed_rows(folder, filename):
    if filename == 'graph/report.json':
        return read(folder / filename)['rows']
    return [json.loads(line) for line in (folder / 'lifecycle/rows.jsonl').read_text().splitlines()]


def normalized_rows(folder, filename, layouts):
    rows = copy.deepcopy(observed_rows(folder, filename))
    indexes = {name: index for index, (name, _, _) in enumerate(cases())}
    checked = 0
    for row in rows:
        phases = ['snapshot'] if filename == 'graph/report.json' else ['created', 'released']
        for phase in phases:
            raw = row[phase].pop('resourceRawHex')
            profile = 'arm' if row['profile'] == 'original' else row['profile']
            headers.assert_header_padding(raw, layouts[profile], [0, 0x5a, 0xa5, 0xff][indexes[row['name']] % 4])
            checked += 1
    return rows, checked


def main():
    raw_path = ROOT / 'evidence/verification/resource065-isolated-5c2b215.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION, 'Exact committed resource pipeline did not pass')
    require(raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs'] and not raw['sourceAdmissionGranted'], 'Resource replay isolation/admission contract differs')
    pipeline_tests = 0
    for step in raw['steps']:
        log = REPLAY / step['log']
        require(step['returncode'] == 0 and digest(log) == step['logSha256'], 'Resource pipeline step/log failed or changed')
        if step['name'].endswith('-tests'):
            count = re.findall(r'Ran (\d+) tests? in ', log.read_text(errors='replace'))
            require(len(count) == 1 and int(count[0]) > 0, 'Resource test module missing or empty')
            pipeline_tests += int(count[0])
    for row in raw['packets']:
        path = REPLAY / row['path']
        require(path.stat().st_size == row['bytes'] and digest(path) == row['sha256'], 'Completed resource packet changed')
    proof = read(FRESH / 'public-replay.json')
    baseline = read(BASELINE / 'public-replay.json')
    require(proof['status'] == 'passed' and proof['tests'] == 15 and not proof['blockedWorkAccesses'], 'Resource producer/observer/import boundary failed')
    source_map = lambda value: {row['path']: row for row in value['inputPins']}
    require(source_map(proof) == source_map(baseline) and len(proof['inputPins']) == 80, 'Resource preflight and clean authored/canonical input identities differ')
    require(len(proof['runtimePins']) == 275 and len(proof['importedAuthoredModules']) == 31, 'Resource tool/import closure differs')
    for row in proof['inputPins']:
        for base in (ROOT, REPLAY):
            path = base / row['path']
            require(path.stat().st_size == row['bytes'] and digest(path) == row['sha256'], 'Resource declared input changed after qualification')
    binaries = {}
    suffixes = {'.o', '.obj', '.elf', '.dll', '.exp', '.lib'}
    for folder in (BASELINE, FRESH):
        binaries[folder] = {path.relative_to(folder).as_posix(): path for path in folder.rglob('*') if path.is_file() and path.suffix in suffixes}
    require(set(binaries[BASELINE]) == set(binaries[FRESH]) and len(binaries[FRESH]) == 461, 'Complete resource native artifact roster differs')
    for name, path in binaries[FRESH].items():
        old = binaries[BASELINE][name]
        require(old.stat().st_size == path.stat().st_size and digest(old) == digest(path), 'Raw resource native artifact differs: ' + name)
    corpora = []
    for filename, sets in [('vertex/rows.jsonl', 1852), ('commands/rows.jsonl', 728), ('constants/rows.json', 324), ('texture/rows.jsonl', 434)]:
        require(digest(BASELINE / filename) == digest(FRESH / filename), 'Complete resource kernel corpus differs: ' + filename)
        corpora.append(dict(path=filename, sets=sets, rawBytesIdentical=True))
    layouts = {profile: layout(profile) for profile in ('arm', 'windows', 'a64')}
    header_checks, observation_checks = 0, 0
    for filename in ('graph/report.json', 'lifecycle/report.json'):
        old, old_count = normalized_rows(BASELINE, filename, layouts)
        new, new_count = normalized_rows(FRESH, filename, layouts)
        require(old == new and old_count == new_count, 'Complete typed resource ownership/graph observation differs')
        header_checks += new_count
        observation_checks += len(new)
    require(header_checks == 156 and observation_checks == 104, 'Joined resource observation/header roster differs')
    vertex = read(FRESH / 'vertex-negative/report.json')
    graph = read(FRESH / 'negative/report.json')
    padding = read(FRESH / 'header-review/report.json')
    require(vertex['checks'] == 24 and all(row['returnedNormally'] and row['semanticallyRejected'] for row in vertex['rows']), 'A vertex semantic control failed or did not return')
    require(graph['checks'] == 12 and all(row['actualReturnedNormally'] and row['rejectedBySemanticObserver'] for row in graph['rows']), 'A resource graph control failed or did not return')
    require(padding['retainedHeaderObservations'] == 156 and len(padding['controls']) == 3, 'Independent header successor roster differs')
    require(all(row['actualReturnedNormally'] and row['v1LogicalProjectionStillEqual'] and row['rejectedByHeaderSuccessor']
                for row in padding['controls']), 'A padding control failed, changed its logical result or did not return')
    compilation = read(REPLAY / 'work/source-compile-ci/committed-replay/manifests/compilation.json')
    require(compilation['status'] == 'compiled' and compilation['unitCount'] == 547 and len(compilation['results']) == 1569, 'Public resource source compilation census differs')
    result = dict(status='complete-public-resource-CPU-replay-reviewed-by-coordinator', sourceRevision=REVISION,
        pipelineTests=pipeline_tests, observerTests=15, returningControls=39, sourceInputPins=80,
        runtimeToolPins=275, importedAuthoredModules=31, identicalNativeArtifacts=461, corpora=corpora,
        typedJoinedObservations=104, rawHeaderChecks=156, headerRawPointerWordsProjectedOnlyThroughTypedIdentityModel=True,
        unknownTargetBytesAndNativePaddingIndependentlyChecked=True, blockedWorkAccesses=[],
        rawPipelineReceipt=pin(raw_path), producer=pin(Path(__file__).resolve()), compilerOutputsPatched=False,
        sourceCreditGranted=0, wholeResourceCtorFinalizerGpuPhysicalAndroidOrGameClaimed=False)
    output = ROOT / 'evidence/verification/resource065-coordinator-5c2b215.json'
    require(not output.exists(), 'Preserve existing resource coordinator review')
    output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(status=result['status'], pipelineTests=pipeline_tests, identicalNativeArtifacts=461, returningControls=39)))


if __name__ == '__main__':
    main()
