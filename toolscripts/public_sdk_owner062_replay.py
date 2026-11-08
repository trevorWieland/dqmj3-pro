import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / 'evidence/lanes/native-sdk-owner062/public-inputs-v2'


def pin(path):
    data = path.read_bytes()
    return dict(bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def contained(base, value):
    path = Path(value)
    resolved = (base / path).resolve()
    if (path.is_absolute() or '..' in path.parts or '\\' in value or ':' in value
            or not resolved.is_relative_to(base.resolve()) or resolved == base.resolve()):
        raise ValueError('Owner transport path escaped its declared root')
    return resolved


def contract():
    value = json.loads((PUBLIC / 'transport-v2.json').read_bytes())
    if value['version'] != 2 or len(value['files']) != 51 or value['sharedFilesEdited']:
        raise ValueError('Owner v2 public transport identity differs')
    masters, targets = set(), set()
    for row in value['files']:
        source = contained(ROOT, row['proposedPath'])
        contained(ROOT, row['intakePath'])
        if (row['proposedPath'] in masters or row['intakePath'] in targets
                or pin(source) != {key: row[key] for key in ('bytes', 'sha256')}):
            raise ValueError('Owner public input changed or membership duplicated')
        masters.add(row['proposedPath'])
        targets.add(row['intakePath'])
    source = json.loads((PUBLIC / 'source-manifest-v1.json').read_bytes())
    if (source['productionUnits'], source['headers'], source['qualificationOnlyUnits']) != (7, 2, 4):
        raise ValueError('Owner production/header/fixture membership differs')
    for row in source['files']:
        if ((row['role'] == 'qualification-fixture')
                != row['proposedPath'].startswith('toolscripts/fixtures/')):
            raise ValueError('Owner fixture was promoted into production')
    return value


def validate_child(value, mode):
    if (value['status'] != 'public-owner-input-and-closure-replay-passed'
            or value['mode'] != mode or value['blockedReadsOrConstructions']
            or value['rejectedMetadata'] or not value['freshPyOnlyAuthoredImports']
            or value['returningControls'] != 27 or value['sameFinalPrimaryArenaControls'] != 9
            or value['artifactsIdentical'] != 1133 or value['compiledSources'] != 33
            or value['existingSdkFiles'] != 27):
        raise ValueError('Owner child provenance, role or semantic-control contract differs')
    counts = value['metadataAccessCounts']
    if not all(counts.get(name, 0) > 0 for name in ('Path.resolve', 'os.stat', 'os.scandir', 'os.listdir')):
        raise ValueError('Owner metadata boundary was not exercised')
    if mode == 'full':
        if (value['tests'] != 10 or value['primaryInsertionPcVisits'] != 206
                or value['combinedInsertionPcVisits'] != 246 or value['originalConstructions'] != 6):
            raise ValueError('Owner original coverage/test scope differs')
    elif (value['tests'] != 8 or value['sourceOnlyOriginalReadsOrConstructions'] != 0
          or value['originalConstructions'] != 0):
        raise ValueError('Owner source-only child accessed original state or skipped tests')


def run(output):
    output = output.resolve()
    if output.exists() or not output.is_relative_to(ROOT / 'work') or output == ROOT / 'work':
        raise ValueError('Owner replay needs a fresh exclusively owned work output')
    before = contract()
    producer = pin(Path(__file__).resolve())
    manifest_pin = pin(PUBLIC / 'transport-v2.json')
    snapshot = output / 'intake'
    snapshot.mkdir(parents=True)
    for row in before['files']:
        target = contained(snapshot, row['intakePath'])
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(contained(ROOT, row['proposedPath']), target)
        if pin(target) != {key: row[key] for key in ('bytes', 'sha256')}:
            raise ValueError('Owner copied authored input differs')
    record = dict(status='failed', children=[], sourceCreditGranted=0, wholeGameClaimed=False)
    try:
        for mode, directory in [('full', 'full-v2'), ('source-only', 'source-only-v3')]:
            log = output / (mode + '.log')
            argv = [sys.executable, '-I', '-B', str(snapshot / 'entry.py'),
                    '--output', str(snapshot / directory), '--mode', mode]
            with log.open('wb') as stream:
                done = subprocess.run(argv, cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
            row = dict(mode=mode, exitCode=done.returncode, log=log.name, logPin=pin(log))
            record['children'].append(row)
            if done.returncode:
                raise ValueError('Preserved owner child failure: ' + mode)
            path = snapshot / directory / 'transport.json'
            validate_child(json.loads(path.read_bytes()), mode)
            row.update(receipt=path.relative_to(output).as_posix(), receiptPin=pin(path))
        log = output / 'transport-tests.log'
        with log.open('wb') as stream:
            done = subprocess.run([sys.executable, '-I', '-B', str(snapshot / 'test_transport.py'), '-v'],
                                  cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
        text = log.read_text(errors='replace')
        if done.returncode or re.findall(r'Ran (\d+) tests? in ', text) != ['21'] or not text.rstrip().endswith('OK'):
            raise ValueError('Owner metadata/import/role regressions failed')
        log = output / 'tiny-copy.log'
        with log.open('wb') as stream:
            done = subprocess.run([sys.executable, '-I', '-B', str(snapshot / 'copy_replay.py')],
                                  cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
        if done.returncode:
            raise ValueError('Preserved tiny owner source-copy failure')
        tiny = json.loads((snapshot / 'tiny-copy-v2/verification.json').read_bytes())
        if (tiny['status'] != 'tiny-public-owner-input-copy-and-full-replay-passed'
                or tiny['nativeArtifactsIdentical'] != 1236 or tiny['copiedInputs'] != 43
                or tiny['fullPrimaryAndCopyTests'] != 20 or tiny['returningControlsPerReplay'] != 27
                or tiny['primaryInsertionPcs'] != 206 or tiny['combinedInsertionPcs'] != 246
                or tiny['blockedReadsOrConstructions'] or tiny['originalOrToolCopies']):
            raise ValueError('Owner tiny source copy or coverage scope differs')
        for row in before['files']:
            if pin(contained(snapshot, row['intakePath'])) != {key: row[key] for key in ('bytes', 'sha256')}:
                raise ValueError('Owner authored input changed during replay')
        if before != contract() or producer != pin(Path(__file__).resolve()) or manifest_pin != pin(PUBLIC / 'transport-v2.json'):
            raise ValueError('Owner master inputs or public producer changed during replay')
        record.update(status='complete-public-owner-v2-path-replay-passed', inputs=len(before['files']),
            fullAndCopiedTests=20, sourceOnlyTests=8, boundaryTests=21, returningControlsPerReplay=27,
            sameFinalPrimaryArenaControls=9, goldenArtifacts=1133, completeCopiedArtifacts=1236,
            primaryInsertionPcVisits=206, combinedInsertionPcVisits=246,
            producer=producer, manifest=manifest_pin, tinyCopy=tiny,
            wholeSdkFactoryOwnerStartupOrGameClaimed=False)
    except BaseException as error:
        record['error'] = repr(error)
        raise
    finally:
        (output / 'public-replay.json').write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', required=True, type=Path)
    run(parser.parse_args().output)
