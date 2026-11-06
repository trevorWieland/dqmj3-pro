import argparse
import hashlib
import io
import json
import shutil
import subprocess
import sys
import zipfile
from pathlib import Path

from module_link import digest, write_json
from native_batch import ROOT, load_plan


def copy_input(root, destination, relative, expected):
    source, target = root / relative, destination / relative
    if not source.is_file() or digest(source) != expected:
        raise ValueError('Materialization input differs: ' + relative)
    target.parent.mkdir(parents=True, exist_ok=True)
    shutil.copyfile(source, target)
    if digest(target) != expected or target.is_symlink():
        raise ValueError('Independent materialization failed: ' + relative)
    return {'path': relative, 'sha256': expected}


def replay(plan_path, destination, revision):
    plan = load_plan(plan_path)
    destination = destination.resolve()
    if not destination.is_relative_to(ROOT / 'work/clean-replay') or destination.exists():
        raise ValueError('Replay needs a new private work/clean-replay directory')
    revision = subprocess.check_output(['git', '-C', str(ROOT), 'rev-parse', revision + '^{commit}'], text=True).strip()
    relative_plan = plan_path.relative_to(ROOT).as_posix()
    committed = subprocess.check_output(['git', '-C', str(ROOT), 'show', revision + ':' + relative_plan])
    if hashlib.sha256(committed).hexdigest() != digest(plan_path):
        raise ValueError('Replay plan differs from committed snapshot')
    if shutil.disk_usage(ROOT).free < 3 * 1024 ** 3:
        raise ValueError('Replay requires 3 GiB free space')
    archive = subprocess.check_output(['git', '-C', str(ROOT), 'archive', '--format=zip', revision])
    destination.mkdir(parents=True)
    with zipfile.ZipFile(io.BytesIO(archive)) as source:
        if any(not (destination / row.filename).resolve().is_relative_to(destination) for row in source.infolist()):
            raise ValueError('Replay source archive escapes its root')
        source.extractall(destination)
    lock = json.loads((destination / 'tools.lock.json').read_text())
    project = json.loads((destination / 'project.json').read_text())
    materialized, copied = [], {}
    items = [{'path': relative, 'sha256': project[label + 'CiaSha256']}
             for label, relative in project['inputs'].items()]
    items += lock['files']
    items += json.loads((destination / 'platform/app-shell/tool-inputs.json').read_text())['files']
    items += [{'path': 'tools/wheels/' + row['filename'], 'sha256': row['sha256']} for row in lock['wheels']]
    items += [{'path': 'tools/ctrtool-v1.3.0-win_x64.zip', 'sha256': lock['ctrtoolArchive']['sha256']}]
    for item in items:
        if item['path'] in copied:
            if copied[item['path']] != item['sha256']:
                raise ValueError('Conflicting materialization pins')
            continue
        materialized.append(copy_input(ROOT, destination, item['path'], item['sha256']))
        copied[item['path']] = item['sha256']
    subprocess.run([sys.executable, '-m', 'venv', str(destination / 'tools/python')], check=True, timeout=120)
    python = destination / 'tools/python/Scripts/python.exe'
    commands = [
        ('setup', [str(destination / 'setup_tools.py'), '--clang-source', str(destination / 'tools/clang-21')]),
        ('fresh-intake', ['-c', 'import sys;from pathlib import Path;sys.path.insert(0,"toolscripts");'
                          'import ci_native_build as ci;root=Path.cwd();'
                          'ci.extract_inputs(root,root/"work/native-batch-intake")']),
        ('wave007', [str(destination / 'toolscripts/native_wave007.py')]),
        ('wave008', [str(destination / 'toolscripts/native_wave008.py'), '--output',
                     str(destination / 'work/wave008-native/final')]),
        ('prepare', [str(destination / 'toolscripts/native_batch.py'), '--plan', str(destination / relative_plan)]),
        ('parent-and-regression-checks', [str(destination / 'run_checks.py')]),
    ]
    steps = []
    receipt = {'schemaVersion': 1, 'sourceRevision': revision, 'replayRoot': str(destination),
               'cohort': plan['cohort'], 'sourceArchiveSha256': hashlib.sha256(archive).hexdigest(),
               'plan': {'path': relative_plan, 'sha256': digest(plan_path)}, 'materialized': materialized,
               'sharedGeneratedOrWorkInputs': False, 'sharedToolOrDependencyLinks': False,
               'pythonRuntime': sys.version, 'steps': steps, 'status': 'running',
               'sourceOnlyModule': False, 'wholeGameExecution': False, 'acceptanceGrantedByThisTool': False}
    output = ROOT / 'evidence/verification' / ('clean-checkout-' + plan['cohort'] + '.json')
    write_json(output, receipt)
    for name, args in commands:
        log = destination / ('native-batch-' + name + '.log')
        with log.open('wb') as stream:
            try:
                done = subprocess.run([str(python), *args], cwd=destination, stdout=stream,
                                      stderr=subprocess.STDOUT, timeout=1800)
                code = done.returncode
            except subprocess.TimeoutExpired:
                code = 124
        steps.append({'name': name, 'argv': [str(python), *args], 'returncode': code,
                      'log': log.relative_to(destination).as_posix(), 'logSha256': digest(log)})
        if name == 'wave008' and code == 0:
            shutil.copyfile(destination / 'work/wave008-native/final/packet.json',
                            destination / 'evidence/lanes/wave008-native/packet.json')
        print(name + ': ' + ('passed' if code == 0 else 'failed'), flush=True)
        write_json(output, receipt)
        if code:
            break
    passed = len(steps) == len(commands) and all(row['returncode'] == 0 for row in steps)
    if passed:
        result = destination / 'evidence/cohorts' / plan['cohort'] / 'verification.json'
        checks = destination / 'evidence/verification/checks.json'
        receipt.update({'integrationReceiptSha256': digest(result), 'checksReceiptSha256': digest(checks)})
    receipt['status'] = 'passed' if passed else 'failed'
    write_json(output, receipt)
    return passed


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--plan', type=Path, required=True)
    parser.add_argument('--destination', type=Path, required=True)
    parser.add_argument('--revision', default='HEAD')
    arguments = parser.parse_args()
    raise SystemExit(0 if replay(arguments.plan.resolve(), arguments.destination, arguments.revision) else 1)
