import argparse
import gc
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import zipfile

from public_sdk_heap062_replay import contained, pin
from sdk062_registration_v1 import verification

ROOT = Path(__file__).resolve().parents[1]
PUBLIC = ROOT / 'evidence/lanes/sdk-registration062-public-input'
SUPPORT = ROOT / 'toolscripts/sdk062_registration_v1'
VERIFICATION_SHA = 'e697a4a5d64de24065379ee2043fbbd377ec2004dd9958294d7ee5a345fb4619'
BOUNDARY_SHA = '3413eeedfb2eddd7bc861c222fa62069873e13f6f06b17d4ca42f474972c0fe2'


def validate_child(report, completion, source_only):
    if (report['status'] != 'passed' or report['sourceOnly'] != source_only
            or report['rejectedAttempts'] or completion['status'] != 'passed'
            or completion['returnCode'] != 0 or completion['rejectedAfterChildExit']
            or report['tests'] != 9 or len(report['profiles']) != 12):
        raise ValueError('Registration child or persistent terminal qualification failed')
    if source_only:
        if (report['originalConstructions'] or report['originalFileReads']
                or any(row['originalPcs'] or row['originalAuthoredEndpointsMapped'] for row in report['profiles'])):
            raise ValueError('Source-only registration accessed original inputs or execution')
    elif report['originalConstructions'] != 4 or len(report['originalFileReads']) != 3:
        raise ValueError('Original registration reference corpus incomplete')


def archive_reports(output, reports):
    archive = output / 'reports.zip'
    members = []
    with zipfile.ZipFile(archive, 'w', zipfile.ZIP_DEFLATED, compresslevel=1) as stream:
        for path in reports:
            member = path.relative_to(output).as_posix()
            stream.write(path, member)
            members.append(dict(member=member, **pin(path)))
    with zipfile.ZipFile(archive) as stream:
        if stream.testzip() is not None:
            raise ValueError('Registration report archive CRC differs')
        for row in members:
            digest, count = hashlib.sha256(), 0
            with stream.open(row['member']) as source:
                for block in iter(lambda: source.read(1024 * 1024), b''):
                    digest.update(block)
                    count += len(block)
            if count != row['bytes'] or digest.hexdigest() != row['sha256']:
                raise ValueError('Registration archived report bytes differ')
    manifest = dict(archive='reports.zip', **pin(archive), members=members, allMemberHashesAndCrcVerified=True)
    (output / 'report-archive.json').write_text(json.dumps(manifest, indent=2) + '\n')
    for path in reports:
        if not path.resolve().is_relative_to(output) or path.is_symlink():
            raise ValueError('Registration report cleanup escaped its exclusive output')
        path.unlink()
    return manifest


def run(output):
    output = output.resolve()
    if output.exists() or not output.is_relative_to(ROOT / 'work') or output == ROOT / 'work':
        raise ValueError('Registration replay requires an exclusive new work output')
    manifest_path = PUBLIC / 'source-map-v1.json'
    manifest = json.loads(manifest_path.read_bytes())
    baseline = json.loads((PUBLIC / 'qualification-baseline-v1.json').read_bytes())
    if (len(manifest['files']) != 19 or len(manifest['readOnlyHelpers']) != 30
            or manifest['sourceCreditGranted'] != 0 or baseline['sourceCreditGranted'] != 0
            or pin(manifest_path)['sha256'] != baseline['sourceMapSha256']):
        raise ValueError('Registration public input membership or baseline changed')
    verifier = SUPPORT / 'verifiers/verify-boundaries-v1.py'
    if pin(verifier)['sha256'] != BOUNDARY_SHA or pin(SUPPORT / 'verification.py')['sha256'] != VERIFICATION_SHA:
        raise ValueError('Registration comparison or terminal verifier changed')
    before = {row['target']: pin(contained(ROOT, row['target'])) for row in manifest['files']}
    for row in manifest['files']:
        if before[row['target']] != {key: row[key] for key in ('bytes', 'sha256')}:
            raise ValueError('Registration authored input differs')
    output.mkdir(parents=True)
    (output / 'source-map-v1.json').write_bytes(manifest_path.read_bytes())
    proposed = output / 'proposed'
    for row in manifest['files']:
        target = contained(proposed, row['target'])
        target.parent.mkdir(parents=True, exist_ok=True)
        shutil.copyfile(contained(ROOT, row['target']), target)
    shutil.copyfile(verifier, output / 'verify-boundaries-v1.py')
    record = dict(status='failed', children=[], sourceCreditGranted=0, wholeGameQualified=False)
    reports, binaries = [], {}
    producer = pin(Path(__file__).resolve())
    try:
        for name, inputs, source_only in [('full', ROOT, False), ('sourceOnly', ROOT, True), ('tiny', proposed, False)]:
            target = output / name
            launcher = inputs / 'toolscripts/sdk062_registration_v1/driver/launch.py'
            argv = [sys.executable, '-I', '-B', str(launcher), '--root', str(ROOT), '--inputs', str(inputs),
                    '--manifest', str(output / 'source-map-v1.json'), '--out', str(target)]
            if source_only:
                argv += ['--source-only']
            log = output / (name + '.log')
            with log.open('wb') as stream:
                result = subprocess.run(argv, cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
            if result.returncode:
                raise ValueError('Preserved registration child failure: ' + name)
            report_path = target / 'report.json'
            report = json.loads(report_path.read_bytes())
            completion = json.loads((target / 'process-completion.json').read_bytes())
            validate_child(report, completion, source_only)
            summary = verification.summarize(report)
            if summary != baseline['scopes'][name]['observations'] or summary['observations'] != 5916:
                raise ValueError('Registration complete models or ordered observations differ')
            del report
            gc.collect()
            native = verification.artifacts(target)
            expected = baseline['scopes'][name]['completeNativeArtifacts']
            if len(native) != expected:
                raise ValueError('Registration complete native artifact roster differs')
            binaries[name] = native
            if not source_only:
                controls = verification.controls(target)
                if name == 'full':
                    old_controls = controls
                elif controls != old_controls:
                    raise ValueError('Registration returning controls differ in copied source scope')
            record['children'].append(dict(name=name, sourceOnly=source_only, observations=summary,
                nativeArtifacts=len(native), report=pin(report_path), terminalSupervisor=pin(target / 'process-completion.json')))
            reports.append(report_path)
        if binaries['full'] != binaries['tiny'] or any(binaries['full'].get(k) != v for k, v in binaries['sourceOnly'].items()):
            raise ValueError('Registration full/copied/source-only artifact identities differ')
        log = output / 'boundaries.log'
        with log.open('wb') as stream:
            result = subprocess.run([sys.executable, '-I', '-B', str(output / 'verify-boundaries-v1.py')],
                                    cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
        boundary = json.loads((output / 'boundary-controls-v1/report.json').read_bytes())
        if result.returncode or boundary['status'] != 'passed' or len(boundary['controls']) != 11:
            raise ValueError('Registration persistent terminal boundaries failed')
        for row in manifest['files']:
            if pin(contained(ROOT, row['target'])) != before[row['target']] or pin(contained(proposed, row['target'])) != before[row['target']]:
                raise ValueError('Registration master or copied input changed')
        if pin(Path(__file__).resolve()) != producer or manifest != json.loads(manifest_path.read_bytes()):
            raise ValueError('Registration replay producer or manifest changed')
        archive = archive_reports(output, reports)
        (output / 'native-artifacts.json').write_text(json.dumps(binaries, indent=2) + '\n')
        record.update(status='public-registration062-full-source-only-copy-and-terminal-guards-passed',
            sourceInputs=19, sourceBytes=sum(row['bytes'] for row in manifest['files']),
            profilesPerScope=12, testsPerScope=9, completeArenaObservationsPerScope=5916,
            completeNativeArtifactsChecked=1676, returningControlsPerFullScope=24, boundaryControls=11,
            explicitNamedPointerRoleProjection=True, arbitraryPointerWordNormalization=False,
            producer=producer, archive=archive, boundaryProof=pin(output / 'boundary-controls-v1/report.json'))
    except BaseException as error:
        record['error'] = repr(error)
        raise
    finally:
        (output / 'public-replay.json').write_text(json.dumps(record, indent=2) + '\n')


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, required=True)
    run(parser.parse_args().output)
