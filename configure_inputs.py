import argparse
import hashlib
import json
import shutil
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parent


def digest(path):
    with path.open('rb') as f:
        return hashlib.file_digest(f, 'sha256').hexdigest()


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--archive', type=Path, required=True)
    parser.add_argument('--sevenzip', type=Path, default=Path('C:/Program Files/7-Zip/7z.exe'))
    parser.add_argument('--verify-only', action='store_true')
    args = parser.parse_args()
    config = json.loads((ROOT / 'project.json').read_text())
    archive = args.archive.resolve(strict=True)
    actual = digest(archive)
    if actual != config['archiveSha256']:
        raise ValueError('Archive differs from pinned owner archive')
    targets = [(label, ROOT / config['inputs'][label]) for label in ('base', 'update')]
    missing = []
    for label, target in targets:
        if target.exists():
            if digest(target) != config[label + 'CiaSha256']:
                raise ValueError('Existing input has wrong hash; retained without overwrite: ' + str(target))
        else:
            missing.append(target)
    if missing:
        if args.verify_only:
            raise ValueError('Expected extracted inputs are missing')
        needed = sum(1591612416 if x.name == 'DQMJ3P.cia' else 15710528 for x in missing)
        if shutil.disk_usage(ROOT).free < needed + 256 * 1024 * 1024:
            raise ValueError('Insufficient free space for bounded extraction')
        destination = ROOT / 'inputs/archive'
        destination.mkdir(parents=True, exist_ok=True)
        members = ['dqmj3pro/' + target.name for target in missing]
        command = [str(args.sevenzip), 'x', str(archive), '-o' + str(destination), '-aos', *members]
        completed = subprocess.run(command, capture_output=True, timeout=600)
        if completed.returncode:
            raise ValueError('7-Zip extraction failed: ' + str(completed.returncode))
    for label, target in targets:
        if not target.exists() or digest(target) != config[label + 'CiaSha256']:
            raise ValueError('Extracted input hash mismatch: ' + label)
    report = {'schemaVersion': 1, 'archivePath': str(archive), 'archiveBytes': archive.stat().st_size,
              'archiveSha256': actual, 'sevenzipPath': str(args.sevenzip),
              'sevenzipSha256': digest(args.sevenzip),
              'inputs': [{'label': label, 'path': target.relative_to(ROOT).as_posix(),
                          'size': target.stat().st_size, 'sha256': digest(target)}
                         for label, target in targets],
              'status': 'verified', 'originalArchiveModified': False}
    target = ROOT / 'evidence/inventory/archive.json'
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(json.dumps({'status': 'verified', 'archiveSha256': actual, 'inputCount': 2}))


if __name__ == '__main__':
    main()
