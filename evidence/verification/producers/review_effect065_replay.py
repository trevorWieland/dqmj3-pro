import argparse
import hashlib
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[3]
REVISION = '81fb34b3c81d3fcfab63bd4be17d514cfc2606b7'


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
    raw_path = ROOT / 'evidence/verification/effect065-isolated-81fb34b.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION
            and raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
            and Path(raw['replayRoot']).resolve() == replay.resolve(), 'Fresh pipeline identity differs')
    tests = 0
    for step in raw['steps']:
        path = replay / step['log']
        require(step['returncode'] == 0 and digest(path) == step['logSha256'], 'Pipeline phase/log changed')
        if step['name'].endswith('-tests'):
            match = re.search(r'Ran (\d+) tests?', path.read_text(encoding='utf-8'))
            require(match is not None, 'Pipeline test count absent')
            tests += int(match.group(1))
    require(tests == 124, 'Complete pipeline test roster differs')
    for row in raw['packets']:
        path = (replay / row['path']).resolve()
        require(path.is_relative_to(replay.resolve()) and digest(path) == row['sha256']
                and path.stat().st_size == row['bytes'], 'Declared pipeline packet changed')
    manifest = read(ROOT / 'evidence/lanes/native-effect065/public-replay-v1/input-manifest.json')
    guard = read(replay / 'work/effect065-public/v1/input-guard.json')
    require(len(manifest['files']) == 46 and guard['files'] == manifest['files']
            and guard['capturedToolFiles'] == 19, 'Exact public input guard differs')
    for row in manifest['files']:
        require(pin(ROOT / row['path']) == row and digest(replay / row['path']) == row['sha256'],
                'Public/fresh source input changed')
    frozen = read(ROOT / 'evidence/lanes/native-effect065/foundation-v1/frozen-manifest.json')
    require(len(frozen['files']) == 32, 'Frozen source roster differs')
    for row in frozen['files']:
        require(pin(ROOT / row['path']) == row, 'Frozen worker input changed')
    stage = replay / 'work/native-effect065/public-replay-v1'
    worker = ROOT / 'work/native-effect065/stage-v1'
    packet = read(stage / 'packet.json')
    require(packet['ownedInputsUnchanged'] and packet['authoredOriginalBodies'] == 6
            and packet['originalInstructionBytes'] == 1144 and not packet['fullEffectFamilyQualified']
            and not packet['GPUExecutionQualified'], 'Bounded effect scope changed')
    shader = read(stage / 'shader-corpus/report.json')
    preview = read(stage / 'preview-corpus/report.json')
    require(shader['cases'] == 16544 and shader['visitedCanonicalPCs'] == 80
            and not shader['unhitCanonicalPCs'] and preview['sets'] == 14, 'Positive corpus scope differs')
    for name in ['shader-corpus/rows.jsonl', 'preview-corpus/rows.json']:
        require((stage / name).read_bytes() == (worker / name).read_bytes(),
                'Complete logical observation corpus differs from worker: ' + name)
    for name in ['shader-lifetime.json', 'preview-reuse/report.json', 'preview-source-only/report.json']:
        require(read(stage / name)['rows'] == read(worker / name)['rows'], 'Complete worker runtime rows differ')
    lifetime = read(stage / 'shader-lifetime.json')
    reuse = read(stage / 'preview-reuse/report.json')
    copied = read(stage / 'preview-source-only/report.json')
    require(len(lifetime['rows']) == 93 and reuse['sets'] == 7 and reuse['visitedCanonicalPCs'] == 141
            and len(reuse['unhitCanonicalPCs']) == 38 and copied['copiedBytes'] == 35009
            and len(copied['copiedFiles']) == 18 and copied['originalImageConstructorForbidden']
            and not copied['originalArchiveImageAssetsOrToolTreeCopied']
            and all(row['agreed'] and row['targets'] == 3 for row in copied['rows']), 'Source-copy/reuse domain differs')
    shader_controls = read(stage / 'shader-negative/report.json')['controls']
    old_controls = read(worker / 'shader-negative/report.json')['controls']
    require(len(shader_controls) == 7, 'Shader control roster differs')
    checks, rejected, inapplicable = 0, 0, 0
    for control, old in zip(shader_controls, old_controls, strict=True):
        require(control['results'] == old['results'], 'Complete shader control observation differs')
        for row in control['results']:
            require(row['returnedNormally'], 'Shader control failed abnormally')
            checks += 1
            if row['applicableToThisPointerWidth']:
                require(row['semanticallyRejected'], 'Wrong shader source accepted')
                rejected += 1
            else:
                inapplicable += 1
    controls = read(stage / 'preview-negative/report.json')['rows']
    old = read(worker / 'preview-negative/report.json')['rows']
    require(len(controls) == 18, 'Preview control roster differs')
    for row, previous in zip(controls, old, strict=True):
        require(row['control'] == previous['control'] and row['profile'] == previous['profile']
                and row['returnedNormally'] and row['applicable'] == previous['applicable']
                and row['rejected'] == previous['rejected'], 'Preview control observation differs')
        require(row['authoredMutation']['sha256'] == previous['authoredMutation']['sha256'], 'Control source changed')
        checks += 1
        if row['applicable']:
            require(row['rejected'], 'Wrong preview source accepted')
            rejected += 1
        else:
            inapplicable += 1
    require((checks, rejected, inapplicable) == (39, 37, 2), 'Negative check accounting differs')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    boundaries = read(ROOT / 'evidence/lanes/native-effect065/foundation-v1/original-boundaries.json')
    require(hashlib.sha256(image).hexdigest() == boundaries['moduleSha256'], 'Original module differs')
    sys.path.insert(0, str(ROOT / 'toolscripts'))
    import native_provider_inventory as inventory
    registry = read(ROOT / 'config/functional-functions.json')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    for function in boundaries['functions']:
        row = canonical[function['entry']]
        require(row['textBodyBytes'] == function['instructionBytes'] and row['mode'] == function['mode']
                and [(p['start'], p['endExclusive']) for p in row['ranges']]
                == [(p['start'], p['endExclusive']) for p in function['instructionRanges']], 'Canonical ownership differs')
        for span in function['instructionRanges'] + function['PCRelativeData']:
            require(hashlib.sha256(image[span['start'] - 0x100000:span['endExclusive'] - 0x100000]).hexdigest()
                    == span['sha256'], 'Original instruction/data witness differs')
    exclusions_path = ROOT / 'evidence/verification/effect065-preview-invariants.json'
    exclusions = read(exclusions_path)
    require(exclusions['unhitCanonicalPCs'] == reuse['unhitCanonicalPCs'], 'Static exclusion address set differs')
    for row in exclusions['exclusions']:
        require(hashlib.sha256(image[row['witnessStart'] - 0x100000:row['witnessEndExclusive'] - 0x100000]).hexdigest()
                == row['witnessSha256'], 'Static exclusion byte witness differs')
    exact, timestamps = [], []
    for path in stage.rglob('*'):
        if not path.is_file() or path.suffix not in ['.o', '.obj', '.dll', '.elf']:
            continue
        other = worker / path.relative_to(stage)
        require(other.is_file(), 'Fresh artifact absent from worker')
        before, after = other.read_bytes(), path.read_bytes()
        if before == after:
            exact.append(dict(path=path.relative_to(replay).as_posix(), bytes=len(after), sha256=digest(path)))
        else:
            offsets = [i for i, (a, b) in enumerate(zip(before, after)) if a != b]
            require(len(before) == len(after) and path.suffix in ['.o', '.obj']
                    and before[:2] == after[:2] == b'\x64\x86' and offsets and set(offsets) <= {4, 5, 6, 7},
                    'Artifact changed beyond raw COFF header timestamp')
            timestamps.append(dict(path=path.relative_to(replay).as_posix(), bytes=len(after),
                workerSha256=digest(other), replaySha256=digest(path), differenceOffsets=offsets,
                allBytesOutsideHeaderTimestampIdentical=True, compilerOutputPatched=False))
    require(exact, 'No compared linked/source artifacts')
    return dict(schemaVersion=1, status='complete-public-effect-foundation-replay-reviewed-by-coordinator',
        sourceRevision=REVISION, rawReplay=pin(raw_path), pipelineTests=tests, producerTests=10,
        sourceInputPins=46, capturedTools=19, frozenWorkerPins=32, originalBodies=6,
        instructionFootprintBytes=1144, shaderSets=16544, releaseSets=93, previewSets=14, reuseSets=7,
        completeWorkerLogicalCorporaIdentical=True, returningControlChecks=checks,
        semanticControlRejections=rejected, pointerWidthInapplicableChecks=inapplicable,
        sourceCopyFiles=18, sourceCopyBytes=35009, identicalWorkerArtifacts=exact,
        coffHeaderTimestampOnlyArtifacts=timestamps, staticExclusionEvidence=pin(exclusions_path),
        shaderVisitedAddresses=80, previewVisitedAddresses=141, previewStaticExcludedAddresses=38,
        hookCountsDoNotProvePredicateSatisfiedExecution=True, compilerOutputPatched=False,
        sourceCreditGranted=0, functionalAdmissionPending=True, exactMatchingClaimed=False,
        fullEffectGraphGpuPhysicalAndroidOrGameClaimed=False)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--replay', type=Path, default=ROOT / 'work/clean-replay/effect065-81fb34b')
    parser.add_argument('--output', type=Path, default=ROOT / 'evidence/verification/effect065-coordinator-81fb34b.json')
    args = parser.parse_args()
    result = review(args.replay)
    args.output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(status=result['status'], pipelineTests=result['pipelineTests'],
        exactArtifacts=len(result['identicalWorkerArtifacts']), timestampOnlyArtifacts=len(result['coffHeaderTimestampOnlyArtifacts']))))
