import argparse
import hashlib
import importlib.util
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / 'evidence/lanes/native-stream059/stage-v1'
BASE = ROOT / 'work/native-stream059-public/v1'
LANE = BASE / 'lane'


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def pin(path):
    data = path.read_bytes()
    return dict(path=path.relative_to(ROOT).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def write(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def source_contract():
    if not BASE.resolve().is_relative_to((ROOT / 'work').resolve()):
        raise ValueError('059 stage left its workspace')
    manifest = read(PUBLIC / 'stage-inputs.json')
    if len(manifest['files']) != 40:
        raise ValueError('059 public source roster changed')
    records = []
    destinations = set()
    for row in manifest['files']:
        source = (ROOT / row['publicInput']['path']).resolve()
        relative = Path(row['stagedRelativePath'])
        destination = (LANE / relative).resolve()
        if relative.is_absolute() or not destination.is_relative_to(LANE.resolve()) or destination in destinations:
            raise ValueError('059 invalid or duplicate staged path')
        if not source.is_relative_to(ROOT) or source.is_symlink() or pin(source) != row['publicInput']:
            raise ValueError('059 public source identity changed')
        if row['privateFrozen']['sha256'] != row['publicInput']['sha256'] or not row['byteIdentical']:
            raise ValueError('059 promotion changed a frozen input')
        destinations.add(destination)
        records.append((source, destination, row['publicInput']))
    if pin(ROOT / manifest['publicFrozenOrigin']['path']) != manifest['publicFrozenOrigin']:
        raise ValueError('059 frozen origin record changed')
    return manifest, records


def verify_staged(records):
    for source, destination, expected in records:
        actual = pin(destination)
        if (actual['sha256'], actual['bytes']) != (expected['sha256'], expected['bytes']):
            raise ValueError('059 staged source identity changed: ' + str(destination))


def prepare():
    manifest, records = source_contract()
    LANE.mkdir(parents=True, exist_ok=False)
    for source, destination, expected in records:
        destination.parent.mkdir(parents=True, exist_ok=True)
        destination.write_bytes(source.read_bytes())
    verify_staged(records)
    write(BASE / 'staged-inputs.json', dict(status='byte-identical-public-source-only-stage',
        publicManifest=pin(PUBLIC / 'stage-inputs.json'),
        files=[dict(publicInput=row, stagedInput=pin(destination)) for source, destination, row in records],
        repositoryToolsOrOriginalInputsCopied=False, sourceCreditGranted=0))


def load_lane():
    manifest, records = source_contract()
    verify_staged(records)
    sys.path.insert(0, str(LANE))
    import build059
    import inputs059
    if build059.WORK.resolve() != LANE.resolve():
        raise ValueError('059 producer imported from another lane')
    return records, build059, inputs059


def run_phase(phase):
    producer_before = pin(Path(__file__))
    records, builder, inputs = load_lane()
    before = inputs.inputs()
    output = BASE / phase
    if phase == 'positive':
        import verify059
        verify059.verify(output)
    elif phase == 'controls':
        import controls059
        for target in ['arm', 'windows', 'a64']:
            builder.build(LANE / 'build' / target, target)
        controls059.run(output)
    elif phase == 'tail':
        path = LANE / 'tail-qualification/boundary.py'
        spec = importlib.util.spec_from_file_location('boundary059', path)
        module = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(module)
        module.verify(output, BASE / 'positive/build')
    elif phase == 'tests':
        output.mkdir(exist_ok=False)
        result = subprocess.run([sys.executable, '-m', 'unittest', 'discover', '-s', str(LANE), '-p', 'test059.py', '-v'],
                                cwd=ROOT, capture_output=True)
        (output / 'tests.log').write_bytes(result.stdout + result.stderr)
        if result.returncode or b'Ran 10 tests' not in result.stderr or not result.stderr.strip().endswith(b'OK'):
            raise ValueError('059 fresh staged tests failed')
    else:
        raise ValueError('Unknown059 phase')
    inputs.guard(before, output)
    verify_staged(records)
    source_contract()
    if pin(Path(__file__)) != producer_before:
        raise ValueError('059 stage producer changed during execution')
    write(output / 'public-input-guard.json', dict(publicManifest=pin(PUBLIC / 'stage-inputs.json'),
        publicInputs=[pin(source) for source, destination, expected in records],
        stagedInputs=[pin(destination) for source, destination, expected in records],
        producer=producer_before, unchanged=True, sourceOrSdkCreditGranted=0))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('phase', choices=['prepare', 'positive', 'controls', 'tail', 'tests'])
    args = parser.parse_args()
    if args.phase == 'prepare': prepare()
    else: run_phase(args.phase)
    print(json.dumps(dict(phase=args.phase, completed=True, sourceCreditGranted=0)))
