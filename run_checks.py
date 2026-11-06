import hashlib
import io
import json
import subprocess
import sys
import tokenize
from datetime import datetime, timezone
from pathlib import Path


ROOT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 'toolscripts'))
from source_policy import policy as authored_policy


def digest(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def policy():
    return authored_policy()


def main():
    output = ROOT / 'work/checks'
    output.mkdir(parents=True, exist_ok=True)
    target = ROOT / 'evidence/verification/checks.json'
    target.parent.mkdir(parents=True, exist_ok=True)
    if target.exists():
        previous = output / ('previous-' + datetime.now(timezone.utc).strftime('%Y%m%dT%H%M%S%fZ') + '.json')
        previous.write_bytes(target.read_bytes())
    receipt = {'schemaVersion': 1, 'startedUtc': datetime.now(timezone.utc).isoformat(),
               'sourceHashes': policy(), 'toolLockSha256': digest(ROOT / 'tools.lock.json'),
               'projectConfigSha256': digest(ROOT / 'project.json'), 'checks': [],
               'acceptedRecoveredFunctions': 0, 'acceptedRecoveredBytes': 0,
               'cleanIndependentReplay': False, 'wholeGameExecution': False}
    receipt['status'] = 'running'
    target.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
    commands = [
        ('tool-pins', ['setup_tools.py', '--verify']),
        ('intake', ['toolscripts/inventory.py']),
        ('independent-extraction', ['toolscripts/verify_intake.py']),
        ('assets', ['toolscripts/asset_survey.py']),
        ('native-candidates', ['toolscripts/native_survey.py']),
        ('native-boundary-controls', ['toolscripts/native_survey.py', '--self-test']),
        ('executable-inventory', ['toolscripts/executable_inventory.py']),
        ('script-interfaces', ['toolscripts/script_interfaces.py']),
        ('native-wave001', ['toolscripts/native_wave001.py']),
        ('native-wave002', ['toolscripts/native_wave002.py', '--workers', '3']),
        ('native-module-link', ['toolscripts/native_bundle.py']),
        ('native-platforms', ['toolscripts/platform_build.py']),
        ('native-wave003-abi', ['toolscripts/native_wave003_abi.py']),
        ('native-wave004', ['toolscripts/native_wave004.py']),
        ('native-wave005', ['toolscripts/native_wave005.py']),
        ('native-wave005-controls', ['-m', 'unittest', 'discover', '-s', str(ROOT / 'src/native/wave005'),
                                     '-p', 'test_oracle.py', '-v']),
        ('native-wave006', ['toolscripts/native_wave006.py']),
        ('native-bundle002', ['toolscripts/native_bundle002.py']),
        ('native-memory-platforms', ['toolscripts/platform_memory_wave002.py', '--capture-native']),
        ('public-app-tools', ['platform/app-shell/materialize_tools.py', '--verify']),
        ('native-diagnostic-app', ['toolscripts/app_shell_build.py']),
        ('formal-research-pilot', ['toolscripts/formal_equivalence_wave001.py']),
        ('tests', ['-m', 'unittest', 'discover', '-s', str(ROOT / 'tests'), '-v']),
    ]
    passed = True
    for name, args in commands:
        command = [sys.executable, *args]
        if args[0].endswith('.py'):
            command[1] = str(ROOT / args[0])
        try:
            completed = subprocess.run(command, cwd=output, capture_output=True, timeout=300)
        except subprocess.TimeoutExpired as error:
            completed = subprocess.CompletedProcess(command, 124, error.stdout or b'', error.stderr or b'')
            receipt.setdefault('timeouts', []).append(name)
        log = output / (name + '.log')
        log.write_bytes(completed.stdout + completed.stderr)
        receipt['checks'].append({'name': name, 'argv': command, 'returncode': completed.returncode,
                                   'logPath': log.relative_to(ROOT).as_posix(), 'logSha256': digest(log)})
        print(name + ': ' + ('passed' if completed.returncode == 0 else 'failed'), flush=True)
        if completed.returncode:
            passed = False
            break
    if receipt['sourceHashes'] != policy():
        passed = False
        receipt['sourceMutationDuringChecks'] = True
    expected = ['evidence/inventory/summary.json', 'evidence/verification/intake-independent.json',
                'evidence/assets/summary.json', 'evidence/native-survey/survey.json',
                'work/validation-smoke/unittest/report.json',
                'work/validation-smoke/game-leaf-unittest/report.json',
                'evidence/lanes/inventory-wave001/executable-summary.json',
                'evidence/lanes/inventory-wave001/script-summary.json',
                'evidence/lanes/wave001-native/packet.json',
                'evidence/cohorts/wave001/verification.json',
                'evidence/cohorts/bundle001/verification.json',
                'evidence/lanes/wave002-native/packet.json',
                'evidence/lanes/platform-wave001/report.json',
                'evidence/lanes/wave003-abi/packet.json',
                'evidence/lanes/wave004-native/packet.json',
                'evidence/lanes/wave005-native/packet.json',
                'evidence/lanes/wave006-native/packet.json',
                'evidence/cohorts/bundle002/verification.json',
                'evidence/lanes/platform-memory-wave002/report.json',
                'evidence/lanes/app-shell-wave001/report.json',
                'evidence/lanes/formal-equivalence-wave001/packet.json']
    receipt['artifacts'] = []
    if passed:
        for name in expected:
            path = ROOT / name
            if not path.is_file():
                passed = False
                receipt.setdefault('missingArtifacts', []).append(name)
            else:
                receipt['artifacts'].append({'path': name, 'sha256': digest(path)})
    receipt['status'] = 'passed' if passed else 'failed'
    receipt['finishedUtc'] = datetime.now(timezone.utc).isoformat()
    target.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
    if passed:
        for source, dest in [('work/validation-smoke/unittest/report.json', 'synthetic-behavior.json'),
                             ('work/validation-smoke/game-leaf-unittest/report.json', 'game-leaf-behavior.json')]:
            (target.parent / dest).write_bytes((ROOT / source).read_bytes())
    raise SystemExit(0 if passed else 1)


if __name__ == '__main__':
    try:
        main()
    except Exception as error:
        target = ROOT / 'evidence/verification/checks.json'
        target.parent.mkdir(parents=True, exist_ok=True)
        record = json.loads(target.read_text()) if target.exists() else {}
        record.update({'status': 'failed', 'exception': type(error).__name__, 'error': str(error)})
        target.write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')
        raise
