import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys


def checked(path, row):
    raw = path.read_bytes()
    if (len(raw), hashlib.sha256(raw).hexdigest()) != (row['bytes'], row['sha256']):
        raise ValueError('Public066 intake file identity differs: ' + str(path))
    return raw


def copy(path, row, target):
    raw = checked(path, row)
    target.parent.mkdir(parents=True, exist_ok=True)
    target.write_bytes(raw)


def run(root, intake, output, smoke=False, public_root=None):
    if output.exists() or not output.is_relative_to(root / 'work') or output == root / 'work':
        raise ValueError('Public066 needs a new exclusively owned workspace output')
    manifest = json.loads((intake / 'manifest.json').read_bytes())
    public_root = root if public_root is None else public_root
    capsule = output / 'input-package'
    payload, metadata = capsule / 'payload', capsule / 'metadata'
    metadata.mkdir(parents=True)
    for row in manifest['support']:
        copy(public_root / row['proposedPublicPath'], row, payload / row['snapshot'])
    for row in manifest['productionAndFixtures']:
        if 'snapshot' in row:
            copy(public_root / row['proposedPublicPath'], row, payload / row['snapshot'])
        else:
            checked(root / row['path'], row)
    for row in manifest['metadataSnapshots']:
        copy(intake / row['snapshot'], row, metadata / row['snapshot'])
    for row in manifest['publicAdapterFiles']:
        copy(public_root / row['path'], row, payload / Path(row['path']).name)
    (metadata / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    script = payload / 'effect_file066_public_replay.py'
    command = [sys.executable, '-B', str(script), '--root', str(root), '--draft', str(capsule), '--output', str(output / 'execution')]
    if smoke:
        command.append('--smoke')
    with (output / 'replay.log').open('wb') as stream:
        result = subprocess.run(command, cwd=root, stdout=stream, stderr=subprocess.STDOUT)
    receipt = {'status': 'passed' if result.returncode == 0 else 'failed', 'returncode': result.returncode,
        'argv': command, 'sourceCreditGranted': 0, 'fullRepositoryToolsOriginalsOrOldArtifactsCopied': False,
        'scope': 'Small public support/qualification source and metadata capsule; fresh child builds and executions.'}
    (output / 'intake-replay.json').write_text(json.dumps(receipt, indent=2) + '\n')
    if result.returncode:
        raise ValueError('Preserved public066 replay failure: ' + str(output / 'replay.log'))
    return receipt


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', required=True, type=Path)
    parser.add_argument('--intake', required=True, type=Path)
    parser.add_argument('--output', required=True, type=Path)
    parser.add_argument('--smoke', action='store_true')
    parser.add_argument('--public-root', type=Path)
    args = parser.parse_args()
    run(args.root.resolve(), args.intake.resolve(), args.output.resolve(), args.smoke,
        args.public_root.resolve() if args.public_root else None)
