import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / 'evidence/lanes/native-sdk-heap062/public-inputs-v1'
VERIFY = ROOT / 'toolscripts/sdk062_heap_v1/verifiers'
VERIFIERS = {
    'verify-copy-v1.py': '4d28574eecf988a05ac06e50e2310c2a89a7674b2d284e78b03654fc54edee5a',
    'verify-boundaries-v1.py': 'b029750e8ec1805c21c8e3483dc1e485cbf1432fd7a47bb474087cc9bc07aa72',
}


def pin(path):
    data = path.read_bytes()
    return dict(bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def contained(base, name):
    relative = Path(name)
    result = (base / relative).resolve()
    if (relative.is_absolute() or '..' in relative.parts or '\\' in name or ':' in name
            or result == base.resolve() or not result.is_relative_to(base.resolve())):
        raise ValueError('Heap transport path escaped its declared root')
    return result


def validate_child(receipt, completion, source_only):
    if (receipt['status'] != 'passed' or receipt['sourceOnly'] != source_only
            or receipt['rejectedAttempts'] or receipt['rejectedMetadata']
            or completion['status'] != 'passed' or completion['exitCode'] != 0
            or completion['postExitAuditRejections']):
        raise ValueError('Heap child or post-exit supervisor qualification failed')
    if source_only:
        if (receipt['originalConstructions'] != 0 or receipt['allOriginalPcs']
                or any('/generated/' in path.replace('\\', '/').lower() for path in receipt['reads'])):
            raise ValueError('Source-only heap child accessed original inputs or execution')
        if receipt['tests'] != 0:
            raise ValueError('Source-only profiles are not the original-dependent unittest suite')
    elif receipt['tests'] != 17 or receipt['originalConstructions'] <= 0:
        raise ValueError('Heap original/source test corpus missing')


def run(output):
    output = output.resolve()
    if output.exists() or not output.is_relative_to(ROOT / 'work') or output == ROOT / 'work':
        raise ValueError('Heap replay requires an exclusive new work output')
    manifest_path = PUBLIC / 'source-map-v1.json'
    manifest = json.loads(manifest_path.read_bytes())
    if (len(manifest['files']) != 29 or manifest['sourceCreditGranted'] != 0
            or manifest['excludeLinkedTranslationUnits'] != ['src/native/wave062-sdk/context/allocate062s.c']):
        raise ValueError('Heap source membership or single-environment link selection differs')
    before = {row['target']: pin(contained(ROOT, row['target'])) for row in manifest['files']}
    for row in manifest['files']:
        if before[row['target']] != {key: row[key] for key in ('bytes', 'sha256')}:
            raise ValueError('Heap public authored input differs')
    for name, digest in VERIFIERS.items():
        if pin(VERIFY / name)['sha256'] != digest:
            raise ValueError('Heap frozen comparison/boundary producer changed')
    producer = pin(Path(__file__).resolve())
    output.mkdir(parents=True)
    (output / 'source-map-v1.json').write_bytes(manifest_path.read_bytes())
    proposed = output / 'proposed'
    for row in manifest['files']:
        target = contained(proposed, row['target'])
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(contained(ROOT, row['target']), target)
    for name in VERIFIERS:
        shutil.copyfile(VERIFY / name, output / name)
    record = dict(status='failed', children=[], sourceCreditGranted=0, wholeGameQualified=False)
    try:
        launcher = ROOT / 'toolscripts/sdk062_heap_v1/driver/launch.py'
        scopes = [('qualification-final-v2', ROOT, False), ('source-only-final-v2', ROOT, True),
                  ('copied-final-v2', proposed, False)]
        for name, inputs, source_only in scopes:
            target = output / name
            argv = [sys.executable, '-I', '-B', str(launcher), '--root', str(ROOT),
                    '--inputs', str(inputs), '--manifest', str(output / 'source-map-v1.json'), '--out', str(target)]
            if source_only:
                argv += ['--source-only', '--no-controls']
            log = output / (name + '.log')
            with log.open('wb') as stream:
                result = subprocess.run(argv, cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
            if result.returncode:
                raise ValueError('Preserved heap child failure: ' + name)
            receipt_path, completion_path = target / 'receipt.json', target / 'process-completion.json'
            receipt, completion = json.loads(receipt_path.read_bytes()), json.loads(completion_path.read_bytes())
            validate_child(receipt, completion, source_only)
            if pin(receipt_path)['sha256'] != completion['receiptSha256']:
                raise ValueError('Heap receipt differs from terminal supervisor observation')
            if source_only:
                cases = json.loads((target / 'source-only.json').read_bytes())['cases']
                if len(cases) != 39 or sum(len(row) for row in cases) != 117:
                    raise ValueError('Source-only117-profile heap corpus incomplete')
            record['children'].append(dict(name=name, sourceOnly=source_only,
                tests=receipt['tests'], receipt=pin(receipt_path), terminalSupervisor=pin(completion_path),
                log=pin(log), originalConstructions=receipt['originalConstructions']))
        for name in VERIFIERS:
            log = output / (name + '.log')
            with log.open('wb') as stream:
                result = subprocess.run([sys.executable, '-I', '-B', str(output / name)],
                                        cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
            if result.returncode:
                raise ValueError('Preserved heap source-copy/projection/boundary failure: ' + name)
        copied = json.loads((output / 'copy-verification-v2.json').read_bytes())
        boundary = json.loads((output / 'boundary-controls-v1/report.json').read_bytes())
        if (copied['status'] != 'passed' or copied['strictArtifactCount'] != 284
                or copied['sourceOnlyIdenticalArtifactCount'] != 43 or copied['ownInputFiles'] != 29
                or not copied['projectionUsesOnlyValidatedOwnershipFields'] or copied['pointerLookingWordsScanned']
                or boundary['status'] != 'passed' or len(boundary['controls']) != 11):
            raise ValueError('Heap final copy/artifact/terminal-control contract differs')
        for row in manifest['files']:
            if pin(contained(ROOT, row['target'])) != before[row['target']] or pin(contained(proposed, row['target'])) != before[row['target']]:
                raise ValueError('Heap master or copied input changed during replay')
        if producer != pin(Path(__file__).resolve()) or manifest != json.loads(manifest_path.read_bytes()):
            raise ValueError('Heap public parent or manifest changed during execution')
        record.update(status='public-heap062-full-source-only-copy-and-terminal-guards-passed',
            sourceInputs=29, sourceBytes=sum(row['bytes'] for row in manifest['files']),
            testsPerFullRun=17, sourceOnlyProfiles=117, sourceCopyArtifacts=284,
            sourceOnlyBaselineArtifacts=43, boundaryControls=11,
            postExitPersistentJournalRequired=True, explicitNamedPointerRoleProjection=True,
            oldAllocatorExcludedFromLinkedClosure=True, producer=producer,
            copyProof=pin(output / 'copy-verification-v2.json'), boundaryProof=pin(output / 'boundary-controls-v1/report.json'))
    except BaseException as error:
        record['error'] = repr(error)
        raise
    finally:
        (output / 'public-replay.json').write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', required=True, type=Path)
    run(parser.parse_args().output)
