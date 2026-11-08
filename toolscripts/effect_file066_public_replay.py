import argparse
import hashlib
import importlib
import json
import os
from pathlib import Path
import subprocess
import sys
import time
import unittest

import effect_file066_public_inputs as inputs
import effect_file066_public_guard as protection
import effect_file066_public_loader as loading
import effect_file066_public_proofs as proofs

sys.dont_write_bytecode = True


def child(root, output, mode, smoke=False, probe=None):
    started = time.monotonic()
    manifest = json.loads((output / 'manifest.json').read_bytes())
    before = inputs.verify(root, output, manifest, mode == 'original')
    mappings = {root / row['legacyRequest']: output / 'metadata' / row['snapshot'] for row in manifest['metadataSnapshots']}
    guard = protection.Guard(root, output, mode, mappings, manifest)
    loader = loading.FreshSources(root, output, manifest, guard)
    guard.install()
    loader.install()
    record = {'status': 'failed', 'mode': mode, 'sourceCreditGranted': 0}
    try:
        if probe == 'historical-caught':
            try:
                (root / 'work/undeclared-history066/absent.bin').read_bytes()
            except ValueError:
                pass
        elif probe == 'stat-caught':
            try:
                (root / 'work/undeclared-history066/absent.bin').stat()
            except ValueError:
                pass
        elif probe == 'original-caught':
            module = importlib.import_module('native_wave013_file_owner_reference_image')
            try:
                module.ReferenceImage()
            except ValueError:
                pass
        elif probe == 'image-read-caught':
            try:
                (root / manifest['originalInputs'][0]['path']).read_bytes()
            except ValueError:
                pass
        elif probe == 'metadata-write-caught':
            try:
                (root / manifest['metadataSnapshots'][0]['legacyRequest']).write_text('forbidden')
            except ValueError:
                pass
        elif probe == 'library-caught':
            import ctypes
            try:
                ctypes.CDLL('unapproved_historical066.dll')
            except ValueError:
                pass
        elif mode == 'build':
            builder = importlib.import_module('effect_request066_build')
            build = inputs.bind_builder(root, output, builder)
            recipe = build(output / 'build')
            for profile, actual in recipe['artifacts'].items():
                old = manifest['originalBuildArtifacts'][profile]
                pairs = list(zip(old['objects'], actual['objects'], strict=True)) + [(old['linked'], actual['linked'])]
                for first, second in pairs:
                    if (first['bytes'], first['sha256']) != (second['bytes'], second['sha256']):
                        raise ValueError('Public source snapshot changed genuine compiler/linker artifact bytes')
            record['exactArtifacts'] = sum(len(row['objects']) + 1 for row in recipe['artifacts'].values())
        else:
            results = proofs.qualify(output, mode, smoke)
            if not smoke:
                proofs.dispatch(output, mode)
            if mode == 'source' and not smoke:
                builder = importlib.import_module('effect_request066_build')
                inputs.bind_builder(root, output, builder)
                importlib.import_module('effect_request066_negative').run(output / 'negative')
                tests = importlib.import_module('test_effect_request066')
                outcome = unittest.TextTestRunner(verbosity=2).run(unittest.defaultTestLoader.loadTestsFromModule(tests))
                if not outcome.wasSuccessful() or outcome.testsRun != 10:
                    raise ValueError('Public frozen066 regression count/result differs')
                record['tests'] = outcome.testsRun
            record['profiles'] = list(results)
        guard.assert_clean()
        if inputs.verify(root, output, manifest, mode == 'original') != before:
            raise ValueError('Public source/support/metadata pins changed during child')
        record.update(status='passed', declaredInputsUnchanged=True, originalMapped=mode == 'original')
    finally:
        record.update(elapsedSeconds=time.monotonic() - started, audit=guard.receipt(),
            freshSourceImports=loader.loaded, inputPins=before)
        proofs.write(output / ('receipt-' + (probe or mode) + '.json'), record)


def run(root, draft, output, smoke=False):
    inputs.materialize(root, draft, output)
    script = output / 'adapter' / Path(__file__).name
    results = []
    for mode in ['build', 'original', 'source']:
        log = output / (mode + '.log')
        command = [sys.executable, '-B', str(script), '--root', str(root), '--output', str(output), '--child', mode]
        if smoke:
            command.append('--smoke')
        with log.open('wb') as stream:
            done = subprocess.run(command, cwd=root, stdout=stream, stderr=subprocess.STDOUT)
        results.append({'mode': mode, 'exitCode': done.returncode, 'logSha256': hashlib.sha256(log.read_bytes()).hexdigest()})
        print(json.dumps(results[-1]), flush=True)
        if done.returncode:
            proofs.write(output / 'failure.json', {'status': 'preserved-public066-adapter-failure', 'children': results})
            raise ValueError('Public066 child failed; preserve log: ' + str(log))
    expected = json.loads((output / 'original/original.json').read_bytes())
    for profile in ['arm', 'windows', 'a64']:
        if json.loads((output / 'source' / (profile + '.json')).read_bytes()) != expected:
            raise ValueError('Fresh original versus public source session observations differ')
        if not smoke and json.loads((output / 'source' / (profile + '-dispatch.json')).read_bytes()) != json.loads((output / 'original/original-dispatch.json').read_bytes()):
            raise ValueError('Public original/source dispatch and U64 observations differ')
    probes = []
    for probe in ['historical-caught', 'stat-caught', 'original-caught', 'image-read-caught', 'metadata-write-caught', 'library-caught']:
        log = output / (probe + '.log')
        command = [sys.executable, '-B', str(script), '--root', str(root), '--output', str(output), '--child', 'source', '--probe', probe]
        with log.open('wb') as stream:
            done = subprocess.run(command, cwd=root, stdout=stream, stderr=subprocess.STDOUT)
        receipt = json.loads((output / ('receipt-' + probe + '.json')).read_bytes())
        if done.returncode == 0 or receipt['status'] != 'failed' or not (receipt['audit']['forbiddenAccessAttempts'] or receipt['audit']['originalImageConstructorAttempts']):
            raise ValueError('Caught access/original-image control escaped the persistent audit')
        probes.append({'probe': probe, 'rejectedEvenIfCaught': True})
    proofs.write(output / 'ready.json', {'status': 'public066-fresh-source-import-and-four-target-replay-passed',
        'children': results, 'persistentRejectionControls': probes, 'sourceCreditGranted': 0, 'smokeOnly': smoke, 'wholeGameQualified': False})


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path, required=True)
    parser.add_argument('--draft', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--child', choices=['build', 'original', 'source'])
    parser.add_argument('--smoke', action='store_true')
    parser.add_argument('--probe', choices=['historical-caught', 'stat-caught', 'original-caught',
        'image-read-caught', 'metadata-write-caught', 'library-caught'])
    args = parser.parse_args()
    root, output = args.root.resolve(), args.output.resolve()
    if not output.is_relative_to(root / 'work') or output == root / 'work':
        raise ValueError('Public066 output must remain an owned workspace subdirectory')
    if args.child:
        child(root, output, args.child, args.smoke, args.probe)
    elif args.draft:
        run(root, args.draft.resolve(), output, args.smoke)
    else:
        parser.error('Provide a draft intake or child mode')
