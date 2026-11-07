import argparse
import ast
import hashlib
import json
from pathlib import Path
import subprocess
import sys
from native_state055_measure import ROOT, WORK, SOURCE, HEADER, EVIDENCE, PRIVATE_READY, measure, pin
from native_state055_build import build
from native_state055_reference import run as reference
from native_state055_qualify import run as qualify
from native_state055_controls import run as controls
from native_state055_invariant import prove
from native_state055_rebuild import run as rebuild


def read(path):
    return json.loads(Path(path).read_text(encoding='utf-8'))


def write(path, value):
    Path(path).write_text(json.dumps(value, indent=2)+'\n', encoding='utf-8')


def verify(rows):
    for row in rows:
        assert pin(ROOT/row['path']) == row, row['path']


def inputs():
    paths = set((ROOT/'toolscripts').glob('native_state055_*.py'))
    paths |= {SOURCE, HEADER, ROOT/'tests/test_native_state055.py', ROOT/'docs/native-state055.md'}
    pending = [path for path in paths if path.suffix == '.py']
    while pending:
        path = pending.pop()
        for node in ast.walk(ast.parse(path.read_text(encoding='utf-8'))):
            names = [node.module] if isinstance(node, ast.ImportFrom) else [row.name for row in node.names] if isinstance(node, ast.Import) else []
            for name in names:
                other = ROOT/'toolscripts'/((name or '').split('.')[0]+'.py')
                if other.is_file() and other not in paths:
                    paths.add(other)
                    pending.append(other)
    return [pin(path) for path in sorted(paths)]


def compact(report):
    result = {key: value for key, value in report.items() if key != 'cases'}
    result['cases'] = []
    for row in report['cases']:
        value = {key: item for key, item in row.items() if key != 'original'}
        original = {key: item for key, item in row['original'].items() if key not in ['originalReads', 'originalWrites']}
        original['originalReadCount'] = len(row['original']['originalReads'])
        original['originalWriteCount'] = len(row['original']['originalWrites'])
        original['physicalReadAddresses'] = sorted({event[1] for event in row['original']['originalReads']}) if row['input']['label'] == 'count-2-capacity-5' else []
        value['original'] = original
        result['cases'].append(value)
    result['rawSyntheticTrace'] = pin(WORK/'execution.json')
    result['originalPayloadsPublished'] = False
    return result


def relocation():
    values = []
    identities = {'state055.c': '0dc88d3e60de5bf1595385441b43b4bf5954a4cf521a6fd2a0967ca5ee73521f',
                  'state055.h': '45fe75a1f18fcf918a01f538f63be98ba8a342ff6f6c294bb25fa05b5f222dc1'}
    for name, expected in identities.items():
        current = pin(SOURCE.with_name(name))
        assert current['sha256'] == expected
        old = dict(path='work/native-state055/'+name, bytes=current['bytes'], sha256=expected)
        values.append(dict(privateFrozenSource=old, publicSource=current, byteForByteRelocation=True))
    return dict(schemaVersion=1, privateFrozenReady=PRIVATE_READY, sources=values,
                sourceSemanticsChanged=False, privatePredecessorModified=False,
                exportedFunction='state_write055', canonicalEntry=0x6f95a4,
                canonicalNameMetadataIntegrationOwnedByCoordinator=True, sourceCreditGranted=0)


def execute():
    before = inputs()
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    measure()
    primary_build = build(WORK/'build')
    for row in [primary_build['clang'], primary_build['linker'], *primary_build['artifacts']]:
        verify([row])
    reference()
    primary = qualify()
    controls()
    prove()
    rebuild()
    copy = WORK/'source-snapshot'
    copy.mkdir(parents=True, exist_ok=True)
    for path in [SOURCE, HEADER]:
        (copy/path.name).write_bytes(path.read_bytes())
        assert (copy/path.name).read_bytes() == path.read_bytes()
    snapshot_build = build(copy/'build', copy/SOURCE.name)
    snapshot = qualify(copy/'build', copy/'execution.json')
    assert snapshot['cases'] == primary['cases']
    artifacts = []
    for old, new in zip(primary_build['artifacts'], snapshot_build['artifacts']):
        verify([old, new])
        assert old['bytes'] == new['bytes'] and old['sha256'] == new['sha256']
        artifacts.append(dict(primary=old, sourceSnapshot=new, byteIdentical=True))
    write(EVIDENCE/'claim.json', read(WORK/'claim.json'))
    write(EVIDENCE/'execution.json', compact(primary))
    write(EVIDENCE/'controls.json', read(WORK/'controls.json'))
    write(EVIDENCE/'invariant.json', read(WORK/'invariant.json'))
    write(EVIDENCE/'rebuild.json', read(WORK/'rebuild.json'))
    write(EVIDENCE/'relocation.json', relocation())
    snapshot_receipt = dict(schemaVersion=1, sourceFiles=[pin(copy/SOURCE.name), pin(copy/HEADER.name)],
                            report=pin(copy/'execution.json'), caseSets=83, targetObservations=332,
                            completeCaseObservationsIdentical=True, artifacts=artifacts,
                            repositoryOrToolsOrOriginalImagesCopied=False,
                            sourceSnapshotBytes=sum(path.stat().st_size for path in [copy/SOURCE.name, copy/HEADER.name]),
                            productionProvidersChanged=False, sourceCreditGranted=0)
    write(EVIDENCE/'source-snapshot.json', snapshot_receipt)
    test = subprocess.run([sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_native_state055.py', '-v'],
                          cwd=ROOT, capture_output=True)
    (WORK/'tests.log').write_bytes(test.stdout+test.stderr)
    assert test.returncode == 0 and b'Ran 9 tests' in test.stderr and test.stderr.strip().endswith(b'OK')
    verify(before)
    paths = ['claim', 'execution', 'controls', 'invariant', 'rebuild', 'relocation', 'source-snapshot']
    files = before+[pin(EVIDENCE/(name+'.json')) for name in paths]
    evidence = dict(schemaVersion=1, status='public-relocated-state055-leaf-v1-ready-for-independent-review',
                    files=files, originalEntry=0x6f95a4, mode='ARM', instructionBytes=224, excludedPoolBytes=4,
                    originalInstructionPcsVisited=49, finiteInvariantPcs=7,
                    caseSetsPerRun=83, primaryTargetObservations=332, sourceSnapshotTargetObservations=332,
                    normallyReturningControls=5, controlExecutions=15, testsPassed=9,
                    allPublicSourceSnapshotArtifactsIdentical=True, privateFrozenPredecessor=PRIVATE_READY,
                    rawExecution=pin(WORK/'execution.json'), rawReference=pin(WORK/'reference.json'),
                    rawTests=pin(WORK/'tests.log'), tools=primary['tools'],
                    compiler=primary_build['clang'], linker=primary_build['linker'],
                    explicitLimits=['Count 0..4096; aligned physically backed padding and no reservation/address overflow.',
                                    'Pair itself cannot alias input/output; no concurrent or asynchronous observers.',
                                    'Only leaf global binding; original containing state and production initializer unqualified.',
                                    'Entire initialized data arena, not arbitrary CPU stack or all machine state.',
                                    'Actual Windows execution; AArch64 CPU model, no Android OS/device/game execution.',
                                    'Source-only C/H snapshot, no full cold repository/tool copy.'],
                    priorHarnessFailure=dict(path='work/native-state055/attempts/incorrect-a64-guard/failure.json',
                                             preserved=True, cause='Noncontiguous Unicorn X29 enum incorrectly inferred by addition; guard now names registers explicitly.'),
                    completeFamilyQualified=False, sourceCreditGranted=0, exactMatchingClaimed=False,
                    originalPayloadsPublished=False, sharedConfigurationModified=False,
                    producer=pin(Path(__file__).resolve()))
    write(EVIDENCE/'ready.json', evidence)
    verify(evidence['files'])
    print(json.dumps(dict(ready=pin(EVIDENCE/'ready.json'), caseSetsPerRun=83, observationsAcrossTwoRuns=664, tests=9)))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--verify', action='store_true')
    arguments = parser.parse_args()
    if arguments.verify:
        evidence = read(EVIDENCE/'ready.json')
        verify(evidence['files'])
        print(json.dumps(dict(ready=pin(EVIDENCE/'ready.json'), verifiedFiles=len(evidence['files']))))
    else:
        execute()


if __name__ == '__main__':
    main()
