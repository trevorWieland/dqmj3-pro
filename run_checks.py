import hashlib
import io
import json
import subprocess
import sys
import tokenize
from datetime import datetime, timezone
from pathlib import Path


ROOT = Path(__file__).resolve().parent


def digest(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def policy():
    files = [p for folder in ['toolscripts', 'tests'] for p in (ROOT / folder).rglob('*') if p.suffix in ('.py', '.java')]
    files.extend(ROOT.glob('*.py'))
    for path in files:
        text = path.read_text(encoding='utf-8')
        if len(text.splitlines()) > 500:
            raise ValueError('Authored file exceeds 500 lines: ' + str(path))
        if path.suffix == '.py' and any(token.type == tokenize.COMMENT for token in tokenize.generate_tokens(io.StringIO(text).readline)):
            raise ValueError('Authored comments violate source policy: ' + str(path))
    return {p.relative_to(ROOT).as_posix(): digest(p) for p in sorted(files)}


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
        ('tests', ['-m', 'unittest', 'discover', '-s', str(ROOT / 'tests'), '-v']),
    ]
    passed = True
    for name, args in commands:
        command = [sys.executable, *[str(ROOT / arg) if arg.endswith('.py') else arg for arg in args]]
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
                'work/validation-smoke/game-leaf-unittest/report.json']
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
