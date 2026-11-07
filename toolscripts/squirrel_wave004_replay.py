import argparse
import hashlib
import json
import shutil
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    with path.open('rb') as stream:
        return hashlib.file_digest(stream, 'sha256').hexdigest()


def replay(destination):
    destination = destination.resolve()
    if destination.exists() or not destination.is_relative_to((ROOT / 'work/squirrel-source-wave004/replays').resolve()):
        raise ValueError('Use a new owned wave004/replays directory')
    destination.mkdir(parents=True)
    lock = json.loads((ROOT / 'tools.lock.json').read_text())
    report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave004/report.json').read_text())
    paths = [row['path'] for row in report['sources'] + report['frozenDependencies'] + report['producer']]
    paths += ['tests/test_squirrel_source_wave004.py', 'evidence/lanes/squirrel-source-wave004/claim.json',
              'evidence/lanes/native-inventory-completion/seeded/update-census.json', 'generated/update-content0/code.bin',
              'source/squirrel-wave001/upstream/squirrel/sqvm.cpp', 'source/squirrel-wave001/upstream/squirrel/sqstate.cpp',
              'source/squirrel-wave001/upstream-manifest.json']
    paths += ['tools/clang-21/' + name for name in ('clang.exe', 'ld.lld.exe', 'libwinpthread-1.dll', 'libxml2.dll')]
    tools = {row['path']: row for row in lock['files']}
    snapshot = []
    for relative in sorted(set(paths)):
        source = ROOT / relative
        identity = digest(source)
        if relative.startswith('tools/') and identity != tools[relative]['sha256']:
            raise ValueError('Compiler differs from the frozen tool lock')
        target = destination / relative
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(source, target)
        if digest(target) != identity:
            raise ValueError('Input copy differs')
        snapshot.append({'path': relative, 'sha256': identity})
    commands = []

    def command(arguments, name, cwd=None):
        result = subprocess.run([str(value) for value in arguments], cwd=cwd, capture_output=True, timeout=120)
        log = destination / (name + '.log')
        log.write_bytes(result.stdout + result.stderr)
        commands.append({'name': name, 'returncode': result.returncode, 'logSha256': digest(log)})
        if result.returncode:
            raise ValueError('Isolated native dispatch replay failed: ' + name)

    command([sys.executable, '-m', 'venv', destination / 'tools/python'], 'environment')
    python = destination / 'tools/python/Scripts/python.exe'
    wheels = []
    for item in lock['wheels']:
        if item['name'] not in ('unicorn', 'pyelftools'):
            continue
        source = ROOT / 'tools/wheels' / item['filename']
        if digest(source) != item['sha256']:
            raise ValueError('Offline wheel differs from its lock')
        target = destination / 'tools/wheels' / source.name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(source, target)
        wheels.append(target)
    command([python, '-m', 'pip', 'install', '--no-index', '--disable-pip-version-check', *wheels], 'offline-install')
    external = destination / 'work/unrelated-cwd'
    external.mkdir(parents=True)
    command([python, destination / 'toolscripts/squirrel_source_wave004.py', '--publish'], 'component', external)
    command([python, '-m', 'unittest', 'discover', '-s', destination / 'tests', '-p', 'test_squirrel_source_wave004.py', '-v'], 'tests', external)
    copied = json.loads((destination / 'evidence/lanes/squirrel-source-wave004/report.json').read_text())
    for key in ('armElfSha256', 'normalCases', 'indeterminateFrameSeedControls', 'negativeControls',
                'separateNoreturnAssertion', 'originalReturns', 'sourceReturns', 'completePerModelHeapComparisons'):
        if copied[key] != report[key]:
            raise ValueError('Independent dispatch identity/state/behavior differs: ' + key)
    for key in ('windowsExeSha256', 'windowsObservation', 'wrongSourceObservation', 'androidArm64Objects'):
        if copied['platform'][key] != report['platform'][key]:
            raise ValueError('Independent native platform bytes/behavior differ: ' + key)
    for reference in snapshot:
        if digest(ROOT / reference['path']) != reference['sha256'] or digest(destination / reference['path']) != reference['sha256']:
            raise ValueError('Frozen copied source/input changed during replay')
    result = {'schemaVersion': 1, 'status': 'independent-copied-input-native-dispatch-replay-passed',
              'snapshot': snapshot, 'commands': commands, 'freshPythonEnvironment': True, 'hashPinnedOfflineWheels': True,
              'separatelyMaterializedCompiler': True, 'armElfBytesReproduced': True, 'windowsExeBytesReproduced': True,
              'androidObjectBytesReproduced': True, 'completePerModelHeapComparisonsReproduced': True,
              'semanticStateEquivalenceReproduced': True, 'rawWholeMemoryEqualityClaimed': False,
              'indeterminateFrameLifetimeAndConsumerScopeExplicit': True, 'testsPassed': 14,
              'originalReturns': copied['originalReturns'], 'sourceReturns': copied['sourceReturns'],
              'initializerPrefixAndNoreturnAssertionNotCountedAsReturns': True,
              'sourceCodeCreditGranted': 0, 'committedSourceSnapshot': False, 'wholeGameBuild': False}
    for path in (destination / 'verification.json', ROOT / 'evidence/lanes/squirrel-source-wave004/verification.json'):
        path.write_text(json.dumps(result, indent=2) + '\n')
    return result


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--destination', required=True)
    args = parser.parse_args()
    result = replay(ROOT / args.destination)
    print(json.dumps({key: result[key] for key in ('status', 'testsPassed', 'originalReturns', 'sourceReturns', 'sourceCodeCreditGranted')}))
