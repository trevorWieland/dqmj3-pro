import argparse
import copy
import hashlib
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[3]
REVISION = '173c9fdb60c0968c8a7831dc763dd0b3b68ed3a8'


def read(path):
    return json.loads(path.read_bytes())


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def pin(path):
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=path.stat().st_size, sha256=digest(path))


def require(condition, reason):
    if not condition:
        raise ValueError(reason)


def checked(base, row):
    path = (base / row['path']).resolve()
    require(path.is_relative_to(base.resolve()) and digest(path) == row['sha256']
            and path.stat().st_size == row['bytes'], 'Declared artifact/log/input changed')
    return path


def cache_view(row):
    return {key: value for key, value in row.items()
        if key not in ['actualNamePointerWords', 'rawDescriptorSha256', 'actualLoadedDllPath']}


def review(replay):
    raw_path = ROOT / 'evidence/verification/init78-isolated-173c9fd.json'
    raw = read(raw_path)
    require(raw['status'] == 'passed' and raw['sourceRevision'] == REVISION
            and raw['freshEnvironment'] and not raw['sharedGeneratedOrWorkInputs']
            and Path(raw['replayRoot']).resolve() == replay.resolve(), 'Fresh committed pipeline differs')
    tests = 0
    for step in raw['steps']:
        path = replay / step['log']
        require(step['returncode'] == 0 and digest(path) == step['logSha256'], 'Pipeline phase/log changed')
        if step['name'].endswith('-tests'):
            match = re.search(r'Ran (\d+) tests?', path.read_text(encoding='utf-8'))
            require(match is not None, 'Pipeline test count absent')
            tests += int(match.group(1))
    require(tests == 113, 'Complete pipeline test roster differs')
    for row in raw['packets']:
        checked(replay, row)
    public = ROOT / 'evidence/lanes/native-state055/init78-public'
    manifest = read(public / 'stage-inputs.json')
    frozen_checks = 0
    for origin in manifest['frozenOrigins']:
        path = checked(ROOT, origin['publicInput'])
        require(digest(path) == origin['privateFrozen']['sha256'], 'Promoted origin differs')
        for row in read(path)['files']:
            checked(ROOT, row)
            frozen_checks += 1
    require(frozen_checks == 396 and len(manifest['files']) == 56, 'Frozen/minimal roster differs')
    for row in manifest['files']:
        checked(ROOT, row['publicInput'])
        require(row['byteIdentical'] and row['privateFrozen']['sha256'] == row['publicInput']['sha256'],
                'Promoted source differs')
        staged = replay / row['stagedPath']
        require(digest(staged) == row['publicInput']['sha256'], 'Fresh staged input differs')
    guard = read(replay / 'work/init78-public/v1/public-input-guard.json')
    require(guard['unchanged'] and len(guard['files']) == 56, 'Dependency guard incomplete')
    for name, count in [('controller7-tests.log', 17), ('controller8-tests.log', 11)]:
        log = (replay / 'work/init78-public/v1' / name).read_text(encoding='utf-8')
        require(re.search(r'Ran ' + str(count) + r' tests?\b', log) is not None, 'Producer tests absent')
    lane = replay / 'work/native-state055'
    worker = ROOT / 'work/native-state055'
    core = lane / 'controller-init-v7'
    cache = lane / 'controller-init-v8'
    contexts = read(core / 'context-replay-comparison-v1.json')
    resources = read(core / 'resource-replay-comparison-v1.json')
    arm = read(core / 'resource-arm-replay-comparison-v1.json')
    for name in ['context-replay-comparison-v1.json', 'resource-replay-comparison-v1.json']:
        require((core / name).read_bytes() == (worker / 'controller-init-v7' / name).read_bytes(),
                'Complete context/native-resource worker report differs')
    require(len(contexts['primary']) == len(contexts['copied']) == 9
            and len(resources['primary']) == len(resources['copied']) == 54
            and contexts['allRawExecutionRowsEqual'] and resources['rawExecutionRowsEqual'],
            'Core source-copy runtime roster differs')
    for value in [contexts, resources]:
        for row in value['primary'] + value['copied']:
            require(row['modelAccepted'] and row['sourceLoadedWithoutOriginalImage'], 'Core model rejected source')
        require(len(value['returningControls']) == 3, 'Core control roster differs')
        for control in value['returningControls']:
            require(control.get('normallyReturning', control.get('normallyReturned')),
                    'Core control failed abnormally')
            require(all(not row['modelAccepted'] for row in control['rows']), 'Wrong core source accepted')
    old_arm = read(worker / 'controller-init-v7/resource-arm-replay-comparison-v1.json')
    old_ref = read(checked(ROOT, old_arm['original']))
    new_ref = read(checked(replay, arm['original']))
    old_service = read(checked(ROOT, old_ref['callbackService']))
    new_service = read(checked(replay, new_ref['callbackService']))
    expected_service = copy.deepcopy(old_service)
    changed_argv = []
    for command_index, (before, after) in enumerate(zip(expected_service['commands'], new_service['commands'], strict=True)):
        for argument_index, (a, b) in enumerate(zip(before['argv'], after['argv'], strict=True)):
            if a == b:
                continue
            require(a.startswith(str(ROOT) + '\\') and b == str(replay) + a[len(str(ROOT)):],
                    'Callback build metadata changed beyond declared absolute root relocation')
            before['argv'][argument_index] = b
            changed_argv.append([command_index, argument_index])
    require(expected_service == new_service and changed_argv == [[0, 0], [0, 17], [0, 19], [1, 0], [1, 2], [1, 5], [1, 7]],
            'Callback build envelope has undeclared changes')
    expected_ref = copy.deepcopy(old_ref)
    expected_ref['callbackService'] = new_ref['callbackService']
    require(expected_ref == new_ref, 'Original resource observations changed')
    expected_arm = copy.deepcopy(old_arm)
    expected_arm['original'] = arm['original']
    require(expected_arm == arm and len(arm['cases']) == 12 and arm['artifactByteIdentical'],
            'Source ARM comparison changed beyond the preserved reference-envelope pin')
    require(all(row['returned'] for row in arm['returningControls']), 'ARM control did not return')
    coverage = read(core / 'context-coverage-v1.json')
    require(coverage['canonicalInstructionBytes'] == 1136 and coverage['originalExecutedInstructionCount'] == 275
            and coverage['unexecutedInstructionCount'] == 9, 'Context PC scope differs')
    require((core / 'context-coverage-v1.json').read_bytes()
            == (worker / 'controller-init-v7/context-coverage-v1.json').read_bytes(), 'Context invariant witness differs')
    image = (ROOT / 'generated/update-content0/code.bin').read_bytes()
    require(hashlib.sha256(image).hexdigest() == coverage['moduleSha256'], 'Original module identity differs')
    spans = coverage['instructionRanges'] + [coverage['dominatingInitialization']]
    spans += [part for group in coverage['invariantGroups'] for part in [group['branch'], *group['unexecutedInstructions']]]
    for row in spans:
        require(hashlib.sha256(image[row['start'] - 0x100000:row['endExclusive'] - 0x100000]).hexdigest()
                == row['sha256'], 'Context original-byte witness differs')
    sys.path.insert(0, str(ROOT / 'toolscripts'))
    import native_provider_inventory as inventory
    registry = read(ROOT / 'config/functional-functions.json')
    census, _ = inventory.compose(ROOT, read(ROOT / registry['census']['path']))
    canonical = {row['address']: row for row in census['functions']}
    context_pcs = {pc for part in canonical[0x12ab74]['ranges']
        for pc in range(part['start'], part['endExclusive'], 4)}
    require(len(context_pcs) == 284 and set(coverage['originalExecutedPcs'])
            | set(coverage['unexecutedPcs']) == context_pcs
            and not set(coverage['originalExecutedPcs']) & set(coverage['unexecutedPcs']),
            'Complete canonical context scope differs')
    reference_path = read(public / 'private-frozen-origin8.json')['originalReference']['path']
    cache_reference = read(replay / reference_path)
    cache_pcs = {pc for part in canonical[0x12a32c]['ranges']
        for pc in range(part['start'], part['endExclusive'], 4)}
    actual_cache_pcs = {pc for row in cache_reference['cases'] for pc in row['originalVisitedPcs']}
    require(len(cache_pcs) == 502 and cache_pcs <= actual_cache_pcs
            and cache_reference['initializedByActualOriginalInstructions']
            and not cache_reference['preparedObjectPrefixSupplied']
            and all(row['returned'] and row['noOriginalCallOrResultSubstitution']
                for row in cache_reference['cases']), 'Complete actual cache constructor execution differs')
    constructor = read(cache / 'source-replay-comparison-v2.json')
    old_constructor = read(worker / 'controller-init-v8/source-replay-comparison-v2.json')
    require(len(constructor['primary']) == len(constructor['copied']) == 27, 'Cache source-copy roster differs')
    for side in ['primary', 'copied']:
        for row, old in zip(constructor[side], old_constructor[side], strict=True):
            if 'actualLoadedDllPath' in row:
                relative = ('build-v2/cache8.dll' if side == 'primary' else 'source-replay-v2/build/cache8.dll')
                require(Path(row['actualLoadedDllPath']).resolve() == (cache / relative).resolve()
                        and Path(old['actualLoadedDllPath']).resolve()
                        == (worker / 'controller-init-v8' / relative).resolve()
                        and digest(cache / relative) == digest(worker / 'controller-init-v8' / relative),
                        'Actually loaded cache DLL path or binary identity differs')
            require(cache_view(row) == cache_view(old) and row['modelAccepted']
                    and row['sourceLoadedWithoutOriginalImage'] and row['logicalCatalogueEqual']
                    and row['registersEqual'] and row['masksEqual'], 'Cache declared nonpointer state differs')
            if 'Windows' in row['target']:
                require(row['realHighAddressNativeExecution'] and row['outsideArenaCanariesPreserved'],
                        'Actual high-address Windows execution or canaries absent')
            else:
                require(row['savedAbiSpCallerStackAndCanariesPreserved'], 'Emulated source ABI guards failed')
    policy = constructor['postExecutionAddressComparison']
    require(not policy['originalExecutedHeapRegistersCodeOrLiteralsModified']
            and policy['rawPrimaryAndCopiedRowsPreserved'] and policy['comparisonBuildsNewPythonViewsOnly']
            and policy['scalarCountTypeNameContentAndArenaBytesMustStillMatch'], 'Cache address boundary changed')
    require(len(constructor['returningControls']) == 4, 'Cache control roster differs')
    for control in constructor['returningControls']:
        require(control['normallyReturned'] and len(control['rows']) == 3
                and all(not row['modelAccepted'] for row in control['rows']), 'Wrong cache source accepted')
    data = read(cache / 'descriptor-data-comparison-v2.json')
    old_data = read(worker / 'controller-init-v8/descriptor-data-comparison-v2.json')
    require(len(data['sourceRows']) == 54 and len(data['originalActualNamePointers']) == 297
            and not data['normalizationAffectedExecutedState'] and not data['originalSourcePointerTruncation']
            and data['originalDescriptorRawSha256'] == old_data['originalDescriptorRawSha256'], 'Cache data audit differs')
    for row, old in zip(data['sourceRows'], old_data['sourceRows'], strict=True):
        require(row['descriptorCountTypeAndNameContentsEqual']
                and row['namePointersConvertedToSymbolicIndicesOnlyInNewPostExecutionPythonView']
                and row['logicalCatalogueSha256'] == old['logicalCatalogueSha256']
                and len(row['actualNamePointers']) == 297
                and row['sourcePointersAreActualDeclaredWidth'] == (4 if row['target'] == 'arm' else 8),
                'Actual typed cache data/name contents differ')
        runtime = next(x for x in constructor[row['side']] if (x['target'], x['seed'], x['skew'])
            == (row['target'], row['seed'], row['skew']))
        require(row['actualNamePointers'] == runtime['actualNamePointerWords']
                and row['rawArenaSha256'] == runtime['arenaSha256']
                and row['rawSourceDescriptorSha256'] == runtime['rawDescriptorSha256'], 'Data audit lost raw runtime identity')
    high = read(cache / 'high-a64-comparison-v2.json')
    require(high['artifactByteIdentical'] and len(high['cases']) == 9, 'High code/global supplement absent')
    for case in high['cases']:
        for row in [case['primary'], case['copied']]:
            require(row['allCodeObjectAndNameAddressesExceedU32'] and row['allWholeArenaAndLogicalDataEqual']
                    and row['ordinaryLinkRelocationsOnly'], 'High pointer/global qualification failed')
    binaries, timestamps = [], []
    for number in [7, 8]:
        family = lane / f'controller-init-v{number}'
        for path in family.rglob('*'):
            if path.is_file() and path.suffix in ['.elf', '.dll', '.o', '.obj']:
                other = worker / path.relative_to(lane)
                require(other.is_file(), 'Fresh artifact absent from frozen worker')
                before, after = other.read_bytes(), path.read_bytes()
                if before == after:
                    binaries.append(dict(path=path.relative_to(replay).as_posix(), bytes=len(after), sha256=digest(path)))
                else:
                    offsets = [index for index, (a, b) in enumerate(zip(before, after)) if a != b]
                    require(path.suffix in ['.o', '.obj'] and len(before) == len(after) and len(before) >= 20
                            and before[:2] == after[:2] == b'\x64\x86'
                            and offsets and set(offsets) <= {4, 5, 6, 7},
                            'Compiled artifact changed beyond x64 COFF header TimeDateStamp')
                    timestamps.append(dict(path=path.relative_to(replay).as_posix(), bytes=len(after),
                        workerSha256=digest(other), replaySha256=digest(path), differenceOffsets=offsets,
                        workerTimeDateStamp=int.from_bytes(before[4:8], 'little'),
                        replayTimeDateStamp=int.from_bytes(after[4:8], 'little'),
                        allBytesOutsideHeaderTimestampIdentical=True, eitherArtifactModified=False))
    require(binaries, 'No compiled artifact closure')
    return dict(schemaVersion=1, status='complete-public-initialization78-replay-reviewed-by-coordinator',
        sourceRevision=REVISION, rawReplay=pin(raw_path), frozenRosterPinsChecked=frozen_checks,
        promotedInputs=56, pipelineTests=tests, producerTests=dict(core7=17, corrected8=11),
        contextComparisonsPerCopy=9, contextInstructionBytes=1136, contextExecutedPcs=275,
        contextInvariantOnlyPcs=9, contextReturningControlExecutionsPerCopy=9,
        resourceNativeComparisonsPerCopy=54, resourceArmComparisonsPerCopy=12,
        resourceReturningArmCases=9, resourceTerminalArmCases=3, resourceControlExecutionsPerCopy=9,
        contextAndNativeResourceWholeWorkerReportsByteIdentical=True,
        resourceReferenceRawObservationsEqual=True,
        referenceEnvelopeRelocation=dict(changedArgvIndices=changed_argv,
            oldCallbackEnvelope=old_ref['callbackService'], freshCallbackEnvelope=new_ref['callbackService'],
            rawEnvelopesPreserved=True, sourceToolAndArtifactPinsUnchanged=True,
            executedMemoryRegistersCodeOrResultsNormalized=False),
        cacheComparisonsPerCopy=27, cacheInstructionBytes=2008, cacheExecutedPcs=502,
        cacheReturningControlExecutionsPerCopy=12, typedNameFields=297, dataAuditRows=54,
        cacheRawRowsPreserved=True, cacheComparisonOnlyDeclaredNamePointers=True,
        cacheRuntimeProjectionExcludedFields=['actualNamePointerWords', 'rawDescriptorSha256'],
        actualLoadedDllPathsRetainedAndVerifiedAtBothRoots=True,
        highCodeGlobalA64ComparisonsPerCopy=9, workerIdenticalBinaryArtifacts=binaries,
        workerCoffHeaderTimestampOnlyDifferences=timestamps,
        compilerOutputOrExecutedStatePatched=False,
        exactMatchingClaimed=False, functionalAdmissionPending=True, sourceCreditGranted=0,
        resourceLiveInvalidationNonzeroReleaseAndSdkDeallocationQualified=False,
        sourceThirdOomTrapEqualsOriginalFaultMechanism=False,
        wholeOwnerGpuPhysicalAndroidOrGameClaim=False)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--replay', type=Path, default=ROOT / 'work/clean-replay/init78-173c9fd')
    parser.add_argument('--output', type=Path, default=ROOT / 'evidence/verification/init78-coordinator-173c9fd.json')
    args = parser.parse_args()
    result = review(args.replay)
    args.output.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(status=result['status'], pipelineTests=result['pipelineTests'],
        binaryArtifacts=len(result['workerIdenticalBinaryArtifacts']), sourceCreditGranted=0)))
