import argparse
import ast
import json
import re
import shutil
import subprocess
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import squirrel_source_wave002 as prior


ROOT = Path(__file__).resolve().parents[1]


def replay(output, report_path=None):
    output = output.resolve()
    if not output.is_relative_to((ROOT / 'work/squirrel-source-wave006').resolve()) or output.exists():
        raise ValueError('Copied replay requires a fresh path inside private wave006 work')
    public_report = ROOT / 'evidence/lanes/squirrel-source-wave006/report.json'
    report_path = public_report if report_path is None else report_path.resolve()
    if report_path != public_report and not report_path.is_relative_to((ROOT / 'work/squirrel-source-wave006').resolve()):
        raise ValueError('Private checkpoint report escaped wave006 work')
    primary = json.loads(report_path.read_text())
    paths = {ROOT / row['path'] for group in ('sources', 'frozenDependencies', 'producer') for row in primary[group]}
    paths |= {ROOT / row['path'] for row in primary['toolchainRuntime']}
    paths |= {ROOT / relative for relative in ('source/squirrel-wave006/README.md', 'tests/test_squirrel_source_wave006.py',
              'generated/update-content0/code.bin', 'evidence/lanes/squirrel-source-wave005/execute-milestone.json',
              'evidence/lanes/native-inventory-completion/seeded/update-census.json',
              'tools/clang-21/clang.exe', 'tools/clang-21/ld.lld.exe')}
    pending = [path for path in paths if path.parent == ROOT / 'toolscripts' and path.suffix == '.py']
    while pending:
        path = pending.pop()
        for node in ast.walk(ast.parse(path.read_text())):
            names = [alias.name for alias in node.names] if isinstance(node, ast.Import) else [node.module] if isinstance(node, ast.ImportFrom) and node.module else []
            for name in names:
                dependency = ROOT / 'toolscripts' / (name.split('.')[0] + '.py')
                if dependency.is_file() and dependency not in paths:
                    paths.add(dependency)
                    pending.append(dependency)
    copy_root = output / 'copied-source'
    snapshot = []
    for path in sorted(paths):
        target = copy_root / path.relative_to(ROOT)
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copy2(path, target)
        if path.read_bytes() != target.read_bytes(): raise ValueError('Copied source changed')
        snapshot.append(prior.pin(path))
    for group in ('sources', 'frozenDependencies', 'producer', 'toolchainRuntime'):
        for row in primary[group]:
            if prior.pin(ROOT / row['path']) != row: raise ValueError('Primary source report is stale')
    if prior.pin(ROOT / primary['scopeDocument']['path']) != primary['scopeDocument']:
        raise ValueError('Primary scope document changed')
    commands = []

    def run(arguments, name):
        result = subprocess.run([str(value) for value in arguments], cwd=copy_root, capture_output=True, timeout=600)
        log = result.stdout + result.stderr
        (output / (name + '.log')).write_bytes(log)
        commands.append({'argv': [str(value).replace(str(copy_root), '${COPY}').replace(str(ROOT), '${SOURCE}') for value in arguments],
                         'returncode': result.returncode, 'logSha256': prior.sha(log)})
        if result.returncode: raise ValueError('Copied replay failed: ' + name)
        return log.decode('utf-8', errors='replace')

    copied_output = copy_root / 'work/squirrel-source-wave006/isolated'
    run([sys.executable, copy_root / 'toolscripts/squirrel_source_wave006.py', '--output', copied_output], 'replay')
    test_output = run([sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_squirrel_source_wave006.py'], 'tests')
    rebuilt_path = copied_output / 'report.json'
    rebuilt = json.loads(rebuilt_path.read_text())
    for key in ('moduleSha256', 'armElfSha256', 'originalReturns', 'sourceReturns', 'implementedDispatchEntries', 'wholeRootComplete'):
        if rebuilt[key] != primary[key]: raise ValueError('Copied Execute result differs: ' + key)
    if primary['platform']['windowsExeSha256'] != rebuilt['platform']['windowsExeSha256']:
        raise ValueError('Copied native host executable is not identical')
    receipt = {'schemaVersion': 1, 'status': 'qualified-copied-local-source-partial-replay', 'snapshot': snapshot,
               'producer': prior.pin(Path(__file__)), 'primaryReportSha256': prior.sha(report_path.read_bytes()),
               'copiedReportSha256': prior.sha(rebuilt_path.read_bytes()), 'commands': commands,
               'armElfIdentical': True, 'windowsExeIdentical': True,
               'testsPassed': int(re.search(r'Ran (\d+) tests?', test_output).group(1)),
               'originalReturns': rebuilt['originalReturns'], 'sourceReturns': rebuilt['sourceReturns'],
               'typeNameOriginalReturns': len(rebuilt['typeNameHelperCases']), 'typeNameSourceReturns': len(rebuilt['typeNameHelperCases']),
               'negativeControls': len(rebuilt['negativeControls']), 'windowsCases': rebuilt['platform']['windowsObservation']['cases'],
               'androidArm64TranslationUnits': len(rebuilt['platform']['androidArm64Objects']),
               'wholeRootComplete': False, 'sourceCodeCreditGranted': 0, 'committedSourceReplay': False,
               'androidDeviceExecution': False, 'wholeGameBuild': False}
    prior.save(output / 'verification.json', receipt)
    if report_path == public_report: prior.save(ROOT / 'evidence/lanes/squirrel-source-wave006/verification.json', receipt)
    return receipt


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    result = replay(args.output, args.report)
    print(json.dumps({key: result[key] for key in ('status', 'originalReturns', 'sourceReturns', 'testsPassed')}))
