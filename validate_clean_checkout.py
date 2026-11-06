import argparse
import hashlib
import io
import json
import shutil
import subprocess
import sys
import zipfile
from pathlib import Path


ROOT = Path(__file__).resolve().parent


def digest(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def copy_pinned(source, destination, expected):
    if not source.is_file() or digest(source) != expected:
        raise ValueError('Private materialization input missing or stale: ' + str(source))
    destination.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(source, destination)
    if digest(destination) != expected:
        raise ValueError('Materialized input hash mismatch')


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--destination', type=Path, required=True)
    parser.add_argument('--revision', default='HEAD')
    args = parser.parse_args()
    destination = args.destination.resolve()
    allowed = (ROOT / 'work').resolve()
    if not destination.is_relative_to(allowed) or destination == allowed or destination.exists():
        raise ValueError('Replay destination must be a new directory beneath this project work/')
    if shutil.disk_usage(ROOT).free < 3 * 1024**3:
        raise ValueError('At least 3 GiB free space required for explicit private materialization')
    revision = subprocess.check_output(['git', '-C', str(ROOT), 'rev-parse', args.revision + '^{commit}'], text=True).strip()
    archive = subprocess.check_output(['git', '-C', str(ROOT), 'archive', '--format=zip', revision])
    destination.mkdir(parents=True)
    with zipfile.ZipFile(io.BytesIO(archive)) as z:
        for member in z.infolist():
            resolved = (destination / member.filename).resolve()
            if not resolved.is_relative_to(destination):
                raise ValueError('Source archive member escapes replay root')
        z.extractall(destination)
    config = json.loads((destination / 'project.json').read_text())
    lock = json.loads((destination / 'tools.lock.json').read_text())
    materialized = []
    for label, name in config['inputs'].items():
        copy_pinned(ROOT / name, destination / name, config[label + 'CiaSha256'])
        materialized.append({'kind': 'private-game-input', 'path': name,
                             'sha256': config[label + 'CiaSha256']})
    for item in lock['files']:
        copy_pinned(ROOT / item['path'], destination / item['path'], item['sha256'])
        materialized.append({'kind': 'pinned-tool', 'path': item['path'], 'sha256': item['sha256']})
    for item in lock['wheels']:
        name = 'tools/wheels/' + item['filename']
        copy_pinned(ROOT / name, destination / name, item['sha256'])
        materialized.append({'kind': 'pinned-wheel', 'path': name, 'sha256': item['sha256']})
    name = 'tools/ctrtool-v1.3.0-win_x64.zip'
    copy_pinned(ROOT / name, destination / name, lock['ctrtoolArchive']['sha256'])
    subprocess.run([sys.executable, '-m', 'venv', str(destination / 'tools/python')], check=True, timeout=120)
    py = destination / 'tools/python/Scripts/python.exe'
    commands = [[str(py), str(destination / 'setup_tools.py'), '--clang-source', str(destination / 'tools/clang-21')],
                [str(py), str(destination / 'run_checks.py')]]
    logs = []
    for index, command in enumerate(commands):
        log = destination / f'clean-replay-{index}.log'
        with log.open('wb') as stream:
            completed = subprocess.run(command, cwd=destination.parent, stdout=stream,
                                       stderr=subprocess.STDOUT, timeout=600)
        logs.append({'argv': command, 'returncode': completed.returncode, 'sha256': digest(log)})
        print('clean-replay-' + str(index) + ': ' + ('passed' if completed.returncode == 0 else 'failed'), flush=True)
        if completed.returncode:
            break
    passed = len(logs) == len(commands) and all(x['returncode'] == 0 for x in logs)
    record = {'schemaVersion': 1, 'sourceRevision': revision,
              'sourceArchiveSha256': hashlib.sha256(archive).hexdigest(),
              'replayRoot': str(destination), 'materialized': materialized,
              'sharedGeneratedOrWorkInputs': False, 'sharedToolOrDependencyLinks': False,
              'pythonRuntimeVersion': sys.version, 'logs': logs,
              'scope': 'Initial intake, surveys and bounded-validation pipeline; optional Ghidra diagnostic excluded',
              'status': 'passed' if passed else 'failed',
              'acceptedRecoveredFunctions': 0, 'acceptedRecoveredBytes': 0,
              'wholeGameExecution': False, 'sourceOnlyExecutableProof': False}
    if passed:
        report = destination / 'evidence/verification/checks.json'
        record['checksReceiptSha256'] = digest(report)
        record['checksReceipt'] = json.loads(report.read_text())
    output = ROOT / 'evidence/verification/clean-checkout.json'
    output.write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')
    raise SystemExit(0 if passed else 1)


if __name__ == '__main__':
    main()
