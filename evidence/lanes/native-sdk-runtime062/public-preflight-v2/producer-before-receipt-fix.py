import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / 'evidence/lanes/native-sdk-runtime062/public-inputs-v3'
STAGES = ('binding', 'binding-start', 'construction', 'manager', 'erase', 'timer')
TESTS = dict(zip(STAGES, (10, 10, 12, 15, 10, 12), strict=True))


def pin(path):
    data = path.read_bytes()
    return dict(bytes=len(data), sha256=hashlib.sha256(data).hexdigest())


def contained(base, value):
    path = Path(value)
    resolved = (base / path).resolve()
    if path.is_absolute() or '..' in path.parts or '\\' in value or not resolved.is_relative_to(base.resolve()) or resolved == base.resolve():
        raise ValueError('Runtime source transport path escaped its root')
    return resolved


def contract():
    data = json.loads((PUBLIC / 'transport.json').read_bytes())
    masters, targets = set(), set()
    for row in data['files']:
        master = contained(ROOT, row['masterPath'])
        contained(ROOT, row['intakePath'])
        if row['masterPath'] in masters or row['intakePath'] in targets or pin(master) != {k: row[k] for k in ('bytes', 'sha256')}:
            raise ValueError('Runtime source transport identity or unique membership differs')
        masters.add(row['masterPath'])
        targets.add(row['intakePath'])
    sources = json.loads((PUBLIC / 'source-manifest-v1.json').read_bytes())
    if sources['productionUnits'] != 18 or sources['headers'] != 6 or sources['qualificationOnlyUnits'] != 6:
        raise ValueError('Runtime production/header/fixture membership differs')
    for row in sources['files']:
        fixture = row['role'] == 'qualification-fixture'
        if fixture != row['proposedPath'].startswith('toolscripts/fixtures/'):
            raise ValueError('Runtime qualification fixture was promoted into production')
    return data


def run(output):
    output = output.resolve()
    if not output.is_relative_to(ROOT / 'work') or output.exists():
        raise ValueError('Runtime replay requires a fresh project work output')
    before = contract()
    producer = pin(Path(__file__).resolve())
    manifest = pin(PUBLIC / 'transport.json')
    snapshot = output / 'intake'
    snapshot.mkdir(parents=True)
    for row in before['files']:
        destination = contained(snapshot, row['intakePath'])
        destination.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(contained(ROOT, row['masterPath']), destination)
        if pin(destination) != {k: row[k] for k in ('bytes', 'sha256')}:
            raise ValueError('Runtime copied authored input differs')
    record = dict(status='failed', sourceCreditGranted=0, wholeGameClaimed=False, children=[])
    try:
        for stage in STAGES:
            for mode in ('proof', 'tests'):
                log = output / (stage + '-' + mode + '.log')
                argv = [sys.executable, str(snapshot / 'replay_v3.py'), stage, '--output', str(snapshot / 'replay'), '--mode', mode]
                with log.open('wb') as stream:
                    done = subprocess.run(argv, cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
                row = dict(stage=stage, mode=mode, exitCode=done.returncode, log=log.relative_to(output).as_posix(), logPin=pin(log))
                record['children'].append(row)
                if done.returncode:
                    raise ValueError('Runtime child failed: ' + stage + '/' + mode)
                receipt = snapshot / 'replay' / stage / ('transport-' + mode + '.json')
                value = json.loads(receipt.read_bytes())
                if (value['status'] != 'version3-byte-identical-public-input-stage-passed'
                        or value['rejectedHistoricalReads'] or not value['freshSourceImports']
                        or not value['canonicalOriginalOnly'] or value['inheritedAuthoredSupportFiles'] != 40):
                    raise ValueError('Runtime child provenance/source boundary failed')
                if mode == 'tests' and value['tests'] != TESTS[stage]:
                    raise ValueError('Runtime predecessor test count differs')
                row.update(receipt=receipt.relative_to(output).as_posix(), receiptPin=pin(receipt))
        log = output / 'guard-tests.log'
        with log.open('wb') as stream:
            done = subprocess.run([sys.executable, str(snapshot / 'test_transport_v3.py'), '-v'], cwd=snapshot, stdout=stream, stderr=subprocess.STDOUT)
        text = log.read_text(errors='replace')
        if done.returncode or 'Ran 6 tests' not in text or not text.rstrip().endswith('OK'):
            raise ValueError('Runtime source/import/retained-sibling guard regressions failed')
        for row in before['files']:
            if pin(contained(snapshot, row['intakePath'])) != {k: row[k] for k in ('bytes', 'sha256')}:
                raise ValueError('Runtime snapshot input changed after replay')
        if before != contract() or producer != pin(Path(__file__).resolve()) or manifest != pin(PUBLIC / 'transport.json'):
            raise ValueError('Runtime public inputs/producer changed during replay')
        record.update(status='complete-public-runtime-source-path-replay-passed', predecessorTests=69,
            guardTests=6, inputFiles=len(before['files']), producer=producer, manifest=manifest,
            guardLog=pin(log), sourceOriginalImageMapped=False, wholeSdkFactoryTaskOwnerClaimed=False)
    except Exception as error:
        record['error'] = str(error)
        raise
    finally:
        (output / 'public-replay.json').write_text(json.dumps(record, indent=2) + '\n', encoding='utf-8')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, required=True)
    run(parser.parse_args().output)
