import argparse
import hashlib
import json
import subprocess
import sys
from datetime import datetime, timezone
from pathlib import Path


ROOT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 'toolscripts'))
from source_policy import policy as authored_policy


CHECKS = [
    ('tool-pins', ['setup_tools.py', '--verify'], 900),
    ('references', ['toolscripts/verify_references.py'], 300),
    ('compile', ['toolscripts/compile_sources.py'], 3600),
    ('report', ['toolscripts/check_report.py'], 3600),
    ('tests', ['-m', 'unittest', 'discover', '-s', str(ROOT / 'tests')], 7200),
]

QUICK = {'report'}


def digest(path):
    with path.open('rb') as handle:
        return hashlib.file_digest(handle, 'sha256').hexdigest()


def command_for(args):
    command = [sys.executable, *args]
    if args[0].endswith('.py'):
        command[1] = str(ROOT / args[0])
    return command


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--quick', action='store_true',
                        help='skip the checks that need the original image')
    parser.add_argument('--only', nargs='*', default=None)
    args = parser.parse_args()

    output = ROOT / 'work/checks'
    output.mkdir(parents=True, exist_ok=True)
    target = output / 'receipt.json'

    selected = [(name, argv, timeout) for name, argv, timeout in CHECKS
                if (args.only is None or name in args.only)
                and not (args.quick and name in QUICK)]

    receipt = {
        'schemaVersion': 3,
        'startedUtc': datetime.now(timezone.utc).isoformat(),
        'sourceHashes': authored_policy(),
        'toolLockSha256': digest(ROOT / 'tools.lock.json'),
        'projectConfigSha256': digest(ROOT / 'project.json'),
        'splitSha256': digest(ROOT / 'config/symbols.txt'),
        'quick': args.quick,
        'checks': [],
        'status': 'running',
    }
    target.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')

    passed = True
    for name, argv, timeout in selected:
        command = command_for(argv)
        started = datetime.now(timezone.utc)
        try:
            completed = subprocess.run(command, cwd=output, capture_output=True, timeout=timeout)
            returncode = completed.returncode
            payload = completed.stdout + completed.stderr
        except subprocess.TimeoutExpired as error:
            returncode = 124
            payload = (error.stdout or b'') + (error.stderr or b'')
            receipt.setdefault('timeouts', []).append(name)
        log = output / (name + '.log')
        log.write_bytes(payload)
        elapsed = (datetime.now(timezone.utc) - started).total_seconds()
        receipt['checks'].append({
            'name': name,
            'argv': command,
            'returncode': returncode,
            'seconds': round(elapsed, 1),
            'logPath': log.relative_to(ROOT).as_posix(),
            'logSha256': digest(log),
        })
        print('%s: %s (%.1fs)' % (name, 'passed' if returncode == 0 else 'failed', elapsed), flush=True)
        if returncode:
            passed = False
            break

    receipt['status'] = 'passed' if passed else 'failed'
    receipt['finishedUtc'] = datetime.now(timezone.utc).isoformat()
    target.write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
    print('receipt: ' + target.relative_to(ROOT).as_posix())
    return 0 if passed else 1


if __name__ == '__main__':
    raise SystemExit(main())
