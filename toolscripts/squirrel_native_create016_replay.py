import argparse
import ast
import json
import re
import shutil
import subprocess
import sys
from pathlib import Path

from squirrel_source_wave002 import sha


ROOT = Path(__file__).resolve().parents[1]


def record(path):
    data = path.read_bytes()
    return {'path': path.relative_to(ROOT).as_posix(), 'bytes': len(data), 'sha256': sha(data)}


def replay(report_path, output):
    report_path, output = report_path.resolve(), output.resolve()
    private = ROOT / 'work/squirrel-native-create016'
    if not report_path.is_relative_to(private) or not output.is_relative_to(private) or output.exists():
        raise ValueError('Reference replay needs a private report and fresh private output')
    primary = json.loads(report_path.read_text(encoding='utf-8'))
    paths = {ROOT / row['path'] for row in primary['inputs']}
    paths |= {ROOT / 'tests/test_squirrel_native_create016.py', Path(__file__).resolve(),
              ROOT / 'generated/update-content0/code.bin'}
    pending = [path for path in paths if path.parent == ROOT / 'toolscripts' and path.suffix == '.py']
    while pending:
        path = pending.pop()
        for node in ast.walk(ast.parse(path.read_text(encoding='utf-8'))):
            names = [alias.name for alias in node.names] if isinstance(node, ast.Import) else [node.module] if isinstance(node, ast.ImportFrom) and node.module else []
            for name in names:
                candidate = ROOT / 'toolscripts' / (name.split('.')[0] + '.py')
                if candidate.is_file() and candidate not in paths:
                    paths.add(candidate)
                    pending.append(candidate)
    for item in primary['inputs']:
        if record(ROOT / item['path']) != item:
            raise ValueError('Qualified reference input is stale: ' + item['path'])
    copied = output / 'copied-source'
    snapshot = []
    for path in sorted(paths):
        target = copied / path.relative_to(ROOT)
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(path, target)
        item = record(path)
        if sha(target.read_bytes()) != item['sha256']:
            raise ValueError('Reference snapshot copy differs')
        snapshot.append(item)
    commands = []

    def run(arguments, label):
        result = subprocess.run([str(value) for value in arguments], cwd=copied, capture_output=True, timeout=600)
        payload = result.stdout + result.stderr
        (output / (label + '.log')).write_bytes(payload)
        commands.append({'argv': [str(value).replace(str(copied), '${COPY}').replace(str(ROOT), '${SOURCE}') for value in arguments],
                         'returncode': result.returncode, 'logSha256': sha(payload)})
        if result.returncode:
            raise ValueError('Copied reference replay failed: ' + label)
        return payload.decode('utf-8', errors='replace')

    rebuilt_path = copied / 'work/squirrel-native-create016/isolated-native-create/report.json'
    run([sys.executable, copied / 'toolscripts/squirrel_native_create016.py', '--output', rebuilt_path.parent], 'producer')
    tests = run([sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_squirrel_native_create016.py'], 'tests')
    rebuilt = json.loads(rebuilt_path.read_text(encoding='utf-8'))
    for key in ('moduleSha256', 'armElfSha256', 'originalReturns', 'sourceReturns', 'nativeReturns', 'androidModelReturns'):
        if rebuilt[key] != primary[key]:
            raise ValueError('Copied reference result differs: ' + key)
    if rebuilt['native']['exeSha256'] != primary['native']['exeSha256']:
        raise ValueError('Copied native executable differs')
    if rebuilt['android'] != primary['android']:
        raise ValueError('Copied Android objects differ')
    receipt = {'schemaVersion': 1, 'status': 'qualified-copied-local-native-closure-creation016', 'snapshot': snapshot,
        'primaryReportSha256': sha(report_path.read_bytes()), 'copiedReportSha256': sha(rebuilt_path.read_bytes()),
        'producer': record(Path(__file__).resolve()), 'commands': commands, 'armElfBytesReproduced': True,
        'nativeExecutableBytesReproduced': True, 'androidObjectBytesReproduced': True,
        'testsPassed': int(re.search(r'Ran (\d+) tests?', tests).group(1)),
        'originalReturns': rebuilt['originalReturns'], 'sourceReturns': rebuilt['sourceReturns'],
        'nativeReturns': rebuilt['nativeReturns'], 'androidModelReturns': rebuilt['androidModelReturns'], 'committedSourceReplay': False, 'freshPythonEnvironment': False,
        'fullTransitiveGraphClosed': False, 'acceptedSourceCreditGranted': 0, 'wholeGameBuild': False,
        'androidDeviceExecution': False}
    (output / 'verification.json').write_text(json.dumps(receipt, indent=2) + '\n', encoding='utf-8')
    return receipt


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--report', required=True, type=Path)
    parser.add_argument('--output', required=True, type=Path)
    args = parser.parse_args()
    result = replay(args.report, args.output)
    print(json.dumps({'status': result['status'], 'originalReturns': result['originalReturns'], 'testsPassed': result['testsPassed']}))
