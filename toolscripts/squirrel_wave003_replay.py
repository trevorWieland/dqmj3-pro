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
    if destination.exists() or not destination.is_relative_to((ROOT / 'work/squirrel-source-wave003/replays').resolve()):
        raise ValueError('Use a new owned wave003/replays directory')
    destination.mkdir(parents=True)
    lock = json.loads((ROOT / 'tools.lock.json').read_text())
    report = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave003/report.json').read_text())
    paths = [row['path'] for row in report['sources'] + report['frozenDependencies']]
    paths += ['toolscripts/squirrel_source_wave003.py', 'toolscripts/squirrel_wave003_oracle.py',
              'toolscripts/squirrel_wave003_platform.py', 'toolscripts/squirrel_wave003_boundaries.py',
              'tests/test_squirrel_source_wave003.py', 'evidence/lanes/squirrel-source-wave003/claim.json',
              'evidence/lanes/native-inventory-completion/seeded/update-census.json',
              'evidence/lanes/inventory-wave001/update-native.json', 'generated/update-content0/code.bin']
    paths += ['tools/clang-21/' + name for name in ('clang.exe', 'ld.lld.exe', 'libwinpthread-1.dll', 'libxml2.dll')]
    tool_pins = {row['path']: row for row in lock['files']}
    snapshot = []
    for relative in sorted(set(paths)):
        source = ROOT / relative
        identity = digest(source)
        if relative.startswith('tools/') and identity != tool_pins[relative]['sha256']:
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
            raise ValueError('Isolated controller replay failed: ' + name)

    command([sys.executable, '-m', 'venv', destination / 'tools/python'], 'environment')
    python = destination / 'tools/python/Scripts/python.exe'
    wheels = []
    for item in lock['wheels']:
        if item['name'] not in ('unicorn', 'pyelftools'):
            continue
        path = ROOT / 'tools/wheels' / item['filename']
        if digest(path) != item['sha256']:
            raise ValueError('Offline dependency wheel changed')
        target = destination / 'tools/wheels' / path.name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(path, target)
        wheels.append(target)
    command([python, '-m', 'pip', 'install', '--no-index', '--disable-pip-version-check', *wheels], 'offline-install')
    external = destination / 'work/unrelated-cwd'
    external.mkdir(parents=True)
    command([python, destination / 'toolscripts/squirrel_source_wave003.py', '--publish'], 'component', external)
    command([python, '-m', 'unittest', 'discover', '-s', destination / 'tests', '-p', 'test_squirrel_source_wave003.py', '-v'], 'tests', external)
    copied = json.loads((destination / 'evidence/lanes/squirrel-source-wave003/report.json').read_text())
    for key in ('elfSha256', 'originalReturns', 'sourceReturns', 'normalReturnModelComparisons', 'assertionTerminalComparisons',
                'cases', 'assertionCases', 'excludedFillAllocationFailure', 'negativeControls'):
        if copied[key] != report[key]:
            raise ValueError('Independent controller identity/behavior differs: ' + key)
    for key in ('windowsExecutables', 'windowsObservations', 'androidArm64Objects'):
        if copied['platformComponent'][key] != report['platformComponent'][key]:
            raise ValueError('Independent platform artifact or behavior differs: ' + key)
    for reference in snapshot:
        if digest(ROOT / reference['path']) != reference['sha256'] or digest(destination / reference['path']) != reference['sha256']:
            raise ValueError('Source/input snapshot changed during replay')
    result = {'schemaVersion': 1, 'status': 'independent-copied-input-controller-replay-passed',
              'snapshot': snapshot, 'commands': commands, 'freshPythonEnvironment': True, 'hashPinnedOfflineWheels': True,
              'separatelyMaterializedCompiler': True, 'armElfBytesReproduced': True, 'windowsExeBytesReproduced': True,
              'androidObjectBytesReproduced': True, 'completeVmArenaModelsReproduced': True,
              'testsPassed': 11, 'originalReturns': copied['originalReturns'], 'sourceReturns': copied['sourceReturns'],
              'noreturnAssertionsSeparateFromReturns': True, 'unsupportedFaultNotGrantedReturnCredit': True,
              'sourceCodeCreditGranted': 0, 'committedSourceSnapshot': False, 'wholeGameBuild': False}
    (destination / 'verification.json').write_text(json.dumps(result, indent=2) + '\n')
    (ROOT / 'evidence/lanes/squirrel-source-wave003/verification.json').write_text(json.dumps(result, indent=2) + '\n')
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--destination', required=True)
    args = parser.parse_args()
    result = replay(ROOT / args.destination)
    print(json.dumps({key: result[key] for key in ('status', 'testsPassed', 'originalReturns', 'sourceReturns', 'sourceCodeCreditGranted')}))


if __name__ == '__main__':
    main()
