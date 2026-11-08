import argparse
from collections import Counter
import hashlib
import importlib.util
import json
from pathlib import Path
import sys


def verify(root, public, output):
    sys.path.insert(0, str(public / 'toolscripts'))
    import filesystem071072_inputs as inputs
    import filesystem071072_replay as replay
    ready = json.loads((output / 'ready.json').read_text())
    manifest = json.loads((output / 'manifest.json').read_text())
    assert ready['sourceOnly'] and not ready['smoke'] and len(ready['children']) == 217
    assert not manifest['originalInputs']
    cache = {}
    def checked(path, expected):
        path = Path(path)
        if str(path) not in cache: cache[str(path)] = inputs.identity(path)
        assert cache[str(path)] == {key: expected[key] for key in ['bytes', 'sha256']}, str(path)
    counts, imports, receipts, controls = Counter(), {}, [], {}
    exact_artifacts = 0
    for row in ready['children']:
        label = row['child']
        receipt_path = output / ('receipt-' + label + '.json')
        record = json.loads(receipt_path.read_text())
        probe = record['probe']
        after = bool(probe and probe.startswith('after-terminal-'))
        terminal = replay.verify_journal(output / ('journal-' + label + '.jsonl'), bool(probe), after)
        assert terminal == row['postExitJournal']
        assert record['immutableInputsUnchanged'] and record['bytecodePrefixAbsent']
        assert not record['originalImageAccessPermitted']
        mode, family, profile = record['mode'], record['family'], record['profile']
        counts[mode] += 1
        if not probe:
            assert row['exitCode'] == 0 and record['status'] == 'passed'
            assert not record['audit']['forbiddenAccessAttempts'] and not record['audit']['originalImageConstructorAttempts']
        for path, expected in record['inputPins'].items(): checked(path, expected)
        assert record['actualFreshImportCount'] == len(record['freshSourceImports']) == row['actualFreshImportCount']
        for imported in record['freshSourceImports']:
            checked(imported['actualSource'], imported)
            assert not imported['bytecodeCacheUsed']
            assert Path(imported['actualSource']).is_relative_to(output / ('tiny/code' if record['tiny'] else 'code'))
        if mode in ['source', 'control']:
            assert not record['compilerInputsPermitted']
            assert not any('/tools/clang-21/' in name.replace('\\', '/').lower() for name in record['inputPins'])
            nested = json.loads(Path(record['result']['report']).read_text())
            assert record['result']['sourceReturned'] and nested['immutableInputsUnchanged'] and not nested['originalImageMapped']
            assert record['result']['independentObserverRejected'] == (mode == 'control')
            imports.setdefault(family, {}).setdefault(profile, set()).add(record['actualFreshImportCount'])
            if mode == 'control':
                controls.setdefault(family, set()).add(record['control'])
                assert nested['status'] == 'failed' and record['result']['caughtSemanticError'] is not None
            else:
                assert nested['status'] == 'passed'
                if family == 'branch':
                    assert nested['coupledAlgorithmsReplaceNamespaceAndConstructionPorts']
                    assert nested['coupledFilesystemIO'] == nested['coupledFilesystemExpectedIO'] and not nested['finalRawHandleLifetime']['live']
                if family == 'construction':
                    assert nested['finishReturned'] and nested['finalOwnership']['deviceLive'] == nested['finalOwnership']['streamLive'] == nested['finalOwnership']['openRawHandles'] == 0
                    if profile != 'windows': assert len(nested['compiled072EntriesObserved']) == (14 if record['case'] == 'small' else 15)
        if mode == 'build':
            assert record['compilerInputsPermitted'] and len(record['exactArtifacts']) == 145
            exact_artifacts += len(record['exactArtifacts'])
        if mode == 'abi':
            abi = record['headerABI']
            assert record['compilerInputsPermitted'] and abi['status'] == 'versioned-header-ABI-analysis-passed'
            assert len(abi['mixedModelFences']) == 6 and all(value['compilerRejected'] for value in abi['mixedModelFences'])
            assert len(abi['allFiveExistingDependentTranslationUnits']) == 15
            assert all(value['bothModelsRecompiledExactly'] for value in abi['allFiveExistingDependentTranslationUnits'])
        if probe:
            assert row['persistentProbeRejected']
            if probe.startswith(('late-', 'after-terminal-')):
                assert record['returnedPositiveBodyBeforeBoundary']['sourceReturned'] and row['exitCode'] == 0
            else: assert row['exitCode'] != 0 and record['status'] == 'failed'
        receipts.append({'child': label, 'receipt': inputs.identity(receipt_path), 'postExitJournal': terminal})
    assert counts == {'build': 2, 'abi': 1, 'source': 84, 'control-build': 28, 'control': 84, 'probe': 18}
    assert {family: len(values) for family, values in controls.items()} == {'sdk':6,'branch':4,'namespace':6,'construction':12}
    observed = {family: {profile: sorted(values) for profile, values in profiles.items()} for family, profiles in imports.items()}
    assert observed == {'sdk': {'arm':[23],'windows':[23],'a64':[23]}, 'branch': {'arm':[24],'windows':[22],'a64':[24]},
        'namespace': {'arm':[23],'windows':[23],'a64':[23]}, 'construction': {'arm':[23],'windows':[23],'a64':[23]}}
    assert exact_artifacts == 290
    assert not (output / 'unwritten-bytecode').exists() and not (output / 'tiny/unwritten-bytecode').exists()
    return {'status': 'independent-public-post-exit-verification-passed', 'children': len(receipts), 'counts': dict(counts),
        'actualFreshSourceImportCounts': observed, 'allUniquePinnedFilesRehashedAfterExit': len(cache),
        'copiedExactCompilerArtifacts': exact_artifacts, 'receipts': receipts, 'sourceCreditGranted': 0, 'matchingCreditGranted': 0}


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path, default=Path.cwd())
    parser.add_argument('--public-root', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--write', type=Path)
    args = parser.parse_args()
    root = args.root.resolve()
    public = args.public_root.resolve() if args.public_root else root
    value = verify(root, public, args.output.resolve())
    if args.write:
        assert not args.write.exists()
        args.write.write_text(json.dumps(value, indent=2) + '\n')
    print(json.dumps({key: value[key] for key in ['status','children','counts','actualFreshSourceImportCounts']}))
