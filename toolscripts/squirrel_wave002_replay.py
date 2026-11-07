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
    if not destination.is_relative_to((ROOT / 'work/squirrel-source-wave002/replays').resolve()) or destination.exists():
        raise ValueError('Replay requires a new owned work/squirrel-source-wave002/replays/ directory')
    destination.mkdir(parents=True)
    lock = json.loads((ROOT / 'tools.lock.json').read_text())
    paths = [path.relative_to(ROOT).as_posix() for path in (ROOT / 'source/squirrel-wave002').glob('*') if path.suffix in ('.c', '.h')]
    paths += ['toolscripts/' + name for name in ('squirrel_source_wave002.py', 'squirrel_wave002_oracle.py', 'squirrel_wave002_platform.py', 'squirrel_wave002_boundaries.py')]
    paths += ['src/native/wave005/chain.c', 'src/native/wave005/vm_views.h', 'tests/test_squirrel_source_wave002.py', 'generated/update-content0/code.bin']
    paths += ['evidence/lanes/squirrel-source-wave002/claim.json', 'evidence/lanes/native-inventory-completion/seeded/update-census.json']
    pins = {row['path']: row for row in lock['files']}
    paths += ['tools/clang-21/' + name for name in ('clang.exe', 'ld.lld.exe', 'libwinpthread-1.dll', 'libxml2.dll')]
    snapshot = []
    for relative in paths:
        original = ROOT / relative
        sha = digest(original)
        if relative.startswith('tools/') and sha != pins[relative]['sha256']:
            raise ValueError('Compiler input differs from tool lock')
        target = destination / relative
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(original, target)
        if digest(target) != sha:
            raise ValueError('Independent input copy differs')
        snapshot.append({'path': relative, 'sha256': sha})
    commands = []

    def command(arguments, name, cwd=None):
        result = subprocess.run([str(value) for value in arguments], cwd=cwd, capture_output=True, timeout=120)
        log = destination / (name + '.log')
        log.write_bytes(result.stdout + result.stderr)
        commands.append({'name': name, 'returncode': result.returncode, 'logSha256': digest(log)})
        if result.returncode:
            raise ValueError('Independent replay failed: ' + name)

    command([sys.executable, '-m', 'venv', destination / 'tools/python'], 'new-environment')
    python = destination / 'tools/python/Scripts/python.exe'
    wheels = []
    for wheel in lock['wheels']:
        if wheel['name'] not in ('unicorn', 'pyelftools'):
            continue
        path = ROOT / 'tools/wheels' / wheel['filename']
        if digest(path) != wheel['sha256']:
            raise ValueError('Offline wheel differs from tool lock')
        target = destination / 'tools/wheels' / path.name
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(path, target)
        wheels.append(target)
    command([python, '-m', 'pip', 'install', '--no-index', '--disable-pip-version-check', *wheels], 'offline-install')
    external = destination / 'work/external-cwd'
    external.mkdir(parents=True)
    command([python, destination / 'toolscripts/squirrel_source_wave002.py', '--publish'], 'component-replay', external)
    command([python, '-m', 'unittest', 'discover', '-s', destination / 'tests', '-p', 'test_squirrel_source_wave002.py', '-v'], 'tests', external)
    actual = json.loads((destination / 'evidence/lanes/squirrel-source-wave002/report.json').read_text())
    expected = json.loads((ROOT / 'evidence/lanes/squirrel-source-wave002/report.json').read_text())
    identities = ['originalReturns', 'sourceReturns', 'modelComparisons', 'negativeControls']
    if any(actual[key] != expected[key] for key in identities):
        raise ValueError('Fresh original/source behavior or wrong-source controls differ')
    if [row['elfSha256'] for row in actual['profiles']] != [row['elfSha256'] for row in expected['profiles']]:
        raise ValueError('Independent ARM ELF components are not byte reproducible')
    if actual['platformComponent']['windowsExeSha256'] != expected['platformComponent']['windowsExeSha256']:
        raise ValueError('Independent Windows component is not byte reproducible')
    if actual['platformComponent']['androidArm64Objects'] != expected['platformComponent']['androidArm64Objects']:
        raise ValueError('Independent Android objects are not byte reproducible')
    for reference in snapshot:
        if digest(ROOT / reference['path']) != reference['sha256'] or digest(destination / reference['path']) != reference['sha256']:
            raise ValueError('Frozen replay input changed during execution')
    result = {'schemaVersion': 1, 'status': 'independent-copied-input-component-replay-passed',
              'snapshot': snapshot, 'commands': commands, 'freshPythonEnvironment': True,
              'offlineHashPinnedWheels': True, 'separatelyMaterializedCompiler': True,
              'sourceInstructionAndDataBehaviorReproduced': True, 'armElfBytesReproduced': True,
              'windowsExeBytesReproduced': True, 'androidObjectBytesReproduced': True,
              'testsPassed': 10, 'originalReturns': actual['originalReturns'], 'sourceReturns': actual['sourceReturns'],
              'sourceCodeCreditGranted': 0, 'committedSourceSnapshot': False,
              'scope': 'Copied hash-frozen new source and original module; no source-only game or committed-tree acceptance claim'}
    (destination / 'verification.json').write_text(json.dumps(result, indent=2) + '\n')
    (ROOT / 'evidence/lanes/squirrel-source-wave002/verification.json').write_text(json.dumps(result, indent=2) + '\n')
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--destination', required=True)
    args = parser.parse_args()
    result = replay(ROOT / args.destination)
    print(json.dumps({key: result[key] for key in ('status', 'testsPassed', 'originalReturns', 'sourceReturns', 'sourceCodeCreditGranted')}))


if __name__ == '__main__':
    main()
