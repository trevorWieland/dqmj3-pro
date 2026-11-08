import argparse
import ast
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys


ROOT = Path(__file__).resolve().parents[1]


def pin(path, root=ROOT):
    return {'path': path.relative_to(root).as_posix(), 'bytes': path.stat().st_size,
        'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}


def closure(selection):
    files = {ROOT / row['path'] for row in selection['sources']}
    files.add(ROOT / 'toolscripts/native_effect065_resource_runtime.c')
    pending = list(files)
    while pending:
        path = pending.pop()
        for include in re.findall(r'^\s*#\s*include\s*"([^"]+)"', path.read_text(), re.M):
            candidates = [path.parent / include, ROOT / 'src/native/wave065-resource' / include]
            included = next((item.resolve() for item in candidates if item.is_file()), None)
            if included is None or not included.is_relative_to(ROOT):
                raise ValueError('Quoted include is not in the small owned source graph')
            if included not in files:
                files.add(included)
                pending.append(included)
    pending = [ROOT / 'toolscripts' / name for name in ['effect_queue067_tiny.py', 'effect_queue067_cohort.py', 'effect_queue067_source_build.py']]
    while pending:
        path = pending.pop()
        if path in files:
            continue
        files.add(path)
        tree = ast.parse(path.read_text())
        for node in ast.walk(tree):
            names = [item.name for item in node.names] if isinstance(node, ast.Import) else [node.module] if isinstance(node, ast.ImportFrom) and node.module else []
            for name in names:
                local = ROOT / 'toolscripts' / (name.split('.')[0] + '.py')
                if local.is_file() and local not in files:
                    pending.append(local)
    return files


def stage(selection, expected, output):
    if output.exists():
        raise ValueError('Preserve small source-only copied replay')
    output.mkdir(parents=True)
    report = json.loads(selection.read_text())
    for row in report['sources']:
        if pin(ROOT / row['path']) != row:
            raise ValueError('Actual selected source bytes changed before copying')
    tiny = output / 'source'
    rows = []
    for path in sorted(closure(report)):
        destination = tiny / path.relative_to(ROOT)
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(path, destination)
        rows.append(pin(path))
    if sum(row['bytes'] for row in rows) > 4000000:
        raise ValueError('Source-only copied closure unexpectedly large')
    metadata = tiny / 'metadata'
    metadata.mkdir()
    for path in sorted(expected.glob('*-original.json')):
        shutil.copyfile(path, metadata / path.name)
    (output / 'copied-inputs.json').write_text(json.dumps({'files': rows, 'originalExecutableOrToolCopied': False,
        'metadata': [pin(path, tiny) for path in sorted(metadata.iterdir())]}, indent=2) + '\n')
    completed = subprocess.run([sys.executable, '-B', str(tiny / 'toolscripts/effect_queue067_tiny.py'),
        '--worker', str(ROOT / 'tools/clang-21'), str(output)], capture_output=True, timeout=1200)
    (output / 'worker.log').write_bytes(completed.stdout + completed.stderr)
    if completed.returncode:
        raise ValueError('Guarded small source-only copied worker failed')
    actual = json.loads((output / 'build/build.json').read_text())
    comparisons = []
    for profile in ['arm', 'windows', 'a64']:
        previous, current = report['artifacts'][profile], actual['artifacts'][profile]
        left, right = previous['objects'] + [previous['linked']], current['objects'] + [current['linked']]
        if len(left) != len(right):
            raise ValueError('Copied source artifact ownership count changed')
        for before, after in zip(left, right, strict=True):
            if (before['bytes'], before['sha256']) != (after['bytes'], after['sha256']):
                raise ValueError('Actual copied-source binary artifact differs')
            comparisons.append({'profile': profile, 'bytes': before['bytes'], 'sha256': before['sha256']})
    for row in rows:
        if pin(tiny / row['path'], tiny) != row or pin(ROOT / row['path']) != row:
            raise ValueError('Original/copied source or producer changed during replay')
    (output / 'report.json').write_text(json.dumps({'status': 'tiny-source-only-copy-rebuilt-and-reexecuted',
        'files': len(rows), 'sourceBytesCopied': sum(row['bytes'] for row in rows), 'exactArtifacts': comparisons,
        'originalExecutableOrToolCopied': False, 'sourceCreditGranted': 0}, indent=2) + '\n')
    print(json.dumps({'status': 'tiny-source-only-copy-rebuilt-and-reexecuted', 'files': len(rows), 'exactArtifacts': len(comparisons)}))


def worker(tools, output):
    from effect_queue067_source_guard import SourceGuard067
    guard = SourceGuard067(ROOT, output, tools, Path(sys.base_prefix))
    guard.install()
    blocked = guard.blocked
    import effect_queue067_source_build as builder
    import effect_queue067_cohort as cohort
    import native_wave013_file_owner_reference_image as image
    attempted = []
    def forbidden(*args, **kwargs):
        attempted.append(True)
        raise PermissionError('Source-only queue replay attempted an original image constructor')
    image.ReferenceImage.__init__ = forbidden
    builder.predecessor.cached.common.TOOLS = tools
    builder.predecessor.cached.common.ROOT = output
    builder.build(output / 'build')
    rows = []
    for path in sorted((ROOT / 'metadata').glob('*-original.json')):
        expected = json.loads(path.read_text())
        case = expected['case']
        for profile in ['arm', 'windows', 'a64']:
            machine = cohort.native.Native(output / 'build/windows') if profile == 'windows' else cohort.cpu.Machine(profile, output / 'build' / profile / 'effect_resource.elf')
            actual = cohort.run_case(machine, case)
            if actual != expected or blocked or attempted:
                raise ValueError('Copied-source runtime graph differs or attempted an original/historical read')
            rows.append({'case': case, 'profile': profile, 'actualSourceGraphMatchesOriginalReceipt': True})
        print(json.dumps({'case': case, 'sourceProfiles': 3}), flush=True)
    (output / 'runtime.json').write_text(json.dumps({'status': 'source-only-copied-queue-runtime-matches', 'rows': rows,
        'blockedHistoricalReads': blocked, 'originalImageConstructorAttempts': attempted, 'sourceCreditGranted': 0}, indent=2) + '\n')
    probes = []
    import os
    historical = tools.parent.parent / 'work/queue067-forbidden-historical-input.bin'
    for name, operation in [('open', lambda: historical.open('rb')), ('stat', historical.stat),
        ('listdir', lambda: os.listdir(historical.parent)), ('scandir', lambda: os.scandir(historical.parent)),
        ('copied-historical-open', lambda: (ROOT / 'work/forbidden.bin').open('rb'))]:
        count = len(blocked)
        try:
            operation()
        except PermissionError:
            pass
        if len(blocked) != count + 1:
            raise ValueError('A caught historical read did not remain in the guard ledger')
        probes.append({'operation': name, 'caughtAttemptStillRejected': True})
    try:
        image.ReferenceImage()
    except PermissionError:
        pass
    if attempted != [True]:
        raise ValueError('Original constructor guard did not fail before reading an image')
    probes.append({'operation': 'original-image-constructor', 'caughtAttemptStillRejected': True})
    (output / 'guard-controls.json').write_text(json.dumps({'status': 'six-caught-historical-and-image-attempts-remain-rejected',
        'probes': probes, 'blocked': blocked, 'originalImageConstructorAttempts': len(attempted)}, indent=2) + '\n')


if __name__ == '__main__':
    if len(sys.argv) == 4 and sys.argv[1] == '--worker':
        worker(Path(sys.argv[2]).resolve(), Path(sys.argv[3]).resolve())
    else:
        parser = argparse.ArgumentParser()
        parser.add_argument('selection', type=Path)
        parser.add_argument('expected', type=Path)
        parser.add_argument('output', type=Path)
        args = parser.parse_args()
        stage(args.selection.resolve(), args.expected.resolve(), args.output.resolve())
