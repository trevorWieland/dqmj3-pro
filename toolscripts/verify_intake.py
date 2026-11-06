import hashlib
import json
import subprocess
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]


def digest(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def verify():
    tool = ROOT / 'tools/ctrtool-1.3.0/ctrtool.exe'
    result = {'schemaVersion': 1, 'kind': 'independent-extraction-comparison',
              'scriptSha256': digest(Path(__file__)), 'ctrtoolSha256': digest(tool),
              'records': [], 'acceptedRecoveredFunctions': 0,
              'acceptedRecoveredBytes': 0, 'signatureAuthenticityVerified': False}
    for label in ['base', 'update']:
        inventory = json.loads((ROOT / f'evidence/inventory/{label}.json').read_text())
        cia = Path(inventory['path'])
        if digest(cia) != inventory['sha256']:
            raise ValueError('CIA changed after inventory')
        destination = ROOT / 'work/independent' / label
        destination.mkdir(parents=True, exist_ok=True)
        command = [str(tool), '--quiet', '--ncch=0',
                   '--exheader=' + str(destination / 'exheader.bin'),
                   '--exefsdir=' + str(destination / 'exefs'), str(cia)]
        completed = subprocess.run(command, capture_output=True, timeout=120)
        if completed.returncode:
            raise ValueError('Independent ctrtool extraction failed: ' + str(completed.returncode))
        comparisons = []
        for ours, theirs in [('exheader.bin', 'exheader.bin'), ('code.bin', 'exefs/code.bin')]:
            original = ROOT / 'generated' / f'{label}-content0' / ours
            independent = destination / theirs
            if not original.is_file() or not independent.is_file():
                raise ValueError('Expected extraction artifact missing: ' + ours)
            left, right = digest(original), digest(independent)
            if left != right:
                raise ValueError('Independent extraction differs: ' + ours)
            comparisons.append({'artifact': ours, 'size': original.stat().st_size,
                                'sha256': left, 'matches': True})
        result['records'].append({'label': label, 'ciaSha256': inventory['sha256'],
                                  'argv': command, 'returncode': completed.returncode,
                                  'comparisons': comparisons})
    result['status'] = 'passed'
    target = ROOT / 'evidence/verification/intake-independent.json'
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'status': result['status'], 'comparisons': 4,
                      'acceptedRecoveredBytes': 0}))


if __name__ == '__main__':
    verify()
