import json
import shutil
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
BUILD = ROOT / 'build/update-content0'
VERSION = 'update-content0'


def run(command):
    completed = subprocess.run(command, cwd=ROOT, capture_output=True)
    output = (completed.stdout + completed.stderr).decode('utf-8', 'replace')
    if completed.returncode:
        raise SystemExit('failed: %s\n%s' % (' '.join(map(str, command)), output))
    return output


def main():
    python = sys.executable
    objdiff = ROOT / 'tools/objdiff-3.8.3/objdiff-cli.exe'
    run([python, '-I', 'toolscripts/configure_objdiff.py', '--version', VERSION,
         '--output', 'objdiff.json'])
    report = BUILD / 'report.json'
    run([str(objdiff), 'report', 'generate', '-o', str(report)])
    shutil.copyfile(report, BUILD / 'report.raw.json')
    run([python, '-I', 'toolscripts/finalize_objdiff_report.py',
         '--input', 'build/update-content0/report.raw.json'])

    measures = json.loads(report.read_text(encoding='utf-8'))['measures']
    recovery = json.loads((ROOT / 'recovery.json').read_text(encoding='utf-8'))
    expected_bytes = recovery['acceptedRecoveredBytes']
    expected_functions = recovery['acceptedRecoveredFunctions']

    problems = []
    if int(measures['total_code']) != 7051280:
        problems.append('total_code %s != 7051280' % measures['total_code'])
    if int(measures['matched_code']) != expected_bytes:
        problems.append('matched_code %s != recovery %s' % (measures['matched_code'], expected_bytes))
    if int(measures['matched_functions']) != expected_functions:
        problems.append('matched_functions %s != recovery %s'
                        % (measures['matched_functions'], expected_functions))
    for problem in problems:
        print(problem)
    print('report: total_code=%s matched=%s functions=%s units=%s percent=%.6f'
          % (measures['total_code'], measures['matched_code'], measures['matched_functions'],
             measures['total_units'], measures['matched_code_percent']))
    if problems:
        return 1
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
