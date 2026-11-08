import argparse
import importlib
import json
import os
from pathlib import Path
import subprocess
import sys
import time
import shutil

import queue_file067_inputs as inputs
from queue_file067_guard import Guard
from queue_file067_loader import FreshSources


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n')


def child(root, output, mode, smoke, probe):
    manifest = json.loads((output / 'manifest.json').read_text())
    before = inputs.verify(root, output, manifest, mode)
    mappings = {root / row['legacyRequest']: output / 'metadata' / row['snapshot'] for row in manifest['metadataSnapshots']}
    guard = Guard(root, output, mode, mappings, manifest)
    target = output
    anchor = root
    actual_code = None
    if mode == 'tiny':
        target = output / 'tiny'
        anchor = target / 'source'
        for directory in ['source', 'code']:
            for path in sorted((output / directory).rglob('*')):
                if path.is_file():
                    destination = target / directory / path.relative_to(output / directory)
                    destination.parent.mkdir(parents=True, exist_ok=True)
                    shutil.copyfile(path, destination)
                    guard.immutable.add(guard.path(destination))
        actual_code = target / 'code'
        guard.logical_anchors.update(guard.path(anchor / row['logicalPath']) for row in manifest['support'])
        guard.logical_anchors.add(guard.path(anchor))
        guard.additional_forbidden_roots = [guard.path(anchor / name) for name in ['work', 'generated']]
    loader = FreshSources(anchor, output, manifest, guard, actual_code)
    guard.install()
    loader.install()
    started = time.monotonic()
    record = {'status': 'failed', 'mode': mode, 'sourceCreditGranted': 0}
    try:
        if probe:
            history = root / 'work/undeclared067-history/absent.bin'
            operations = {'open': lambda: history.read_bytes(), 'stat': history.stat, 'lstat': history.lstat,
                'listdir': lambda: os.listdir(history.parent), 'scandir': lambda: os.scandir(history.parent),
                'resolve': history.resolve,
                'image-read': lambda: (root / manifest['originalInputs'][0]['path']).read_bytes(),
                'metadata-write': lambda: (root / manifest['metadataSnapshots'][0]['legacyRequest']).write_text('forbidden')}
            try:
                if probe == 'original-constructor':
                    importlib.import_module('native_wave013_file_owner_reference_image').ReferenceImage()
                elif probe in ['named-library', 'absolute-library']:
                    import ctypes
                    ctypes.CDLL('undeclared067.dll' if probe == 'named-library' else str(root / 'work/undeclared067.dll'))
                else:
                    operations[probe]()
            except ValueError:
                pass
        elif mode == 'build':
            builder = importlib.import_module('effect_queue067_source_build')
            recipe = inputs.bind_builder(root, output, builder)(output / 'build')
            comparisons = []
            for profile, actual in recipe['artifacts'].items():
                previous = manifest['originalBuildArtifacts'][profile]
                pairs = list(zip(previous['objects'], actual['objects'], strict=True)) + [(previous['linked'], actual['linked'])]
                for old, new in pairs:
                    if (old['bytes'], old['sha256']) != (new['bytes'], new['sha256']):
                        raise ValueError('Public067 compiler/linker artifact identity changed')
                    comparisons.append({'profile': profile, 'bytes': new['bytes'], 'sha256': new['sha256']})
            record['exactArtifacts'] = comparisons
        else:
            if mode == 'tiny':
                builder = importlib.import_module('effect_queue067_source_build')
                builder.predecessor.cached.common.TOOLS = root / 'tools/clang-21'
                builder.predecessor.cached.common.ROOT = target
                recipe = inputs.bind_builder(root, target, builder)(target / 'build')
                pairs = []
                for profile, actual in recipe['artifacts'].items():
                    old = manifest['originalBuildArtifacts'][profile]
                    for a, b in list(zip(old['objects'], actual['objects'], strict=True)) + [(old['linked'], actual['linked'])]:
                        if (a['bytes'], a['sha256']) != (b['bytes'], b['sha256']):
                            raise ValueError('Tiny public067 copied-source artifact changed')
                        pairs.append({'bytes': b['bytes'], 'sha256': b['sha256']})
                record['exactTinyArtifacts'] = pairs
            cohort = importlib.import_module('effect_queue067_cohort')
            rows = []
            expected_rows = manifest['expectedObservations'][:1] if smoke else manifest['expectedObservations']
            for expected_row in expected_rows:
                expected = json.loads((output / 'metadata' / expected_row['snapshot']).read_text())
                case = expected['case']
                for profile in ['original'] if mode == 'original' else ['arm', 'windows', 'a64']:
                    machine = cohort.Original(target / 'build/arm/effect_resource.elf') if profile == 'original' else cohort.native.Native(target / 'build/windows') if profile == 'windows' else cohort.cpu.Machine(profile, target / 'build' / profile / 'effect_resource.elf')
                    actual = cohort.run_case(machine, case)
                    if actual != expected:
                        write(output / (mode + '-mismatch.json'), {'case': case, 'profile': profile, 'expected': expected, 'actual': actual})
                        raise ValueError('Fresh public067 source/original graph differs from frozen receipt')
                    write(output / mode / (case + '-' + profile + '.json'), actual)
                    rows.append({'case': case, 'profile': profile})
                print(json.dumps({'case': case, 'mode': mode}), flush=True)
            record['cases'] = rows
            if mode == 'source' and not smoke:
                builder = importlib.import_module('effect_queue067_source_build')
                inputs.bind_builder(root, output, builder)
                importlib.import_module('effect_queue067_controls').run(output / 'metadata/expected', output / 'controls')
                import types
                import unittest
                package = types.ModuleType('toolscripts')
                package.__path__ = []
                sys.modules['toolscripts'] = package
                tests = importlib.import_module('test_effect_queue067')
                outcome = unittest.TextTestRunner(verbosity=2).run(unittest.defaultTestLoader.loadTestsFromModule(tests))
                if not outcome.wasSuccessful() or outcome.testsRun != 9:
                    raise ValueError('Public067 frozen observer regression count/result differs')
                record['tests'] = outcome.testsRun
        guard.assert_clean()
        if inputs.verify(root, output, manifest, mode) != before:
            raise ValueError('Public067 immutable inputs changed during execution')
        record['status'] = 'passed'
    finally:
        record.update(elapsedSeconds=time.monotonic() - started, inputPins=before, audit=guard.receipt(),
            freshSourceImports=loader.loaded, originalMapped=mode == 'original')
        write(output / ('receipt-' + (probe or mode) + '.json'), record)


def run(root, public_root, intake, output, source_only=False, smoke=False):
    inputs.materialize(root, public_root, intake, output)
    script = output / 'adapter' / Path(__file__).name
    children = []
    for mode in ['build', 'source', 'tiny'] if source_only else ['build', 'original', 'source', 'tiny']:
        argv = [sys.executable, '-B', str(script), '--root', str(root), '--output', str(output), '--child', mode]
        if smoke:
            argv.append('--smoke')
        with (output / (mode + '.log')).open('wb') as stream:
            result = subprocess.run(argv, cwd=root, stdout=stream, stderr=subprocess.STDOUT, timeout=1800)
        children.append({'mode': mode, 'exitCode': result.returncode})
        print(json.dumps(children[-1]), flush=True)
        if result.returncode:
            write(output / 'failure.json', {'status': 'preserved-public067-transport-failure', 'children': children})
            raise ValueError('Public067 child failed; preserve ' + str(output / (mode + '.log')))
    probes = []
    for probe in ['open', 'stat', 'lstat', 'listdir', 'scandir', 'resolve', 'original-constructor',
        'image-read', 'metadata-write', 'named-library', 'absolute-library']:
        argv = [sys.executable, '-B', str(script), '--root', str(root), '--output', str(output), '--child', 'source', '--probe', probe]
        with (output / (probe + '.log')).open('wb') as stream:
            result = subprocess.run(argv, cwd=root, stdout=stream, stderr=subprocess.STDOUT, timeout=120)
        row = json.loads((output / ('receipt-' + probe + '.json')).read_text())
        if result.returncode == 0 or row['status'] != 'failed' or not (row['audit']['forbiddenAccessAttempts'] or row['audit']['originalImageConstructorAttempts']):
            raise ValueError('Public067 caught input/library attempt escaped persistent rejection')
        probes.append({'probe': probe, 'rejectedEvenIfCaught': True})
    write(output / 'ready.json', {'status': 'public067-fresh-source-transport-passed', 'children': children,
        'probes': probes, 'sourceOnly': source_only, 'smokeOnly': smoke, 'sourceCreditGranted': 0,
        'quiescentTaskObservationsOnly': True, 'wholeGameQualified': False})


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', required=True, type=Path)
    parser.add_argument('--public-root', type=Path)
    parser.add_argument('--intake', type=Path)
    parser.add_argument('--output', required=True, type=Path)
    parser.add_argument('--source-only', action='store_true')
    parser.add_argument('--smoke', action='store_true')
    parser.add_argument('--child', choices=['build', 'original', 'source', 'tiny'])
    parser.add_argument('--probe')
    args = parser.parse_args()
    root, output = args.root.resolve(), args.output.resolve()
    if not output.is_relative_to(root / 'work') or output == root / 'work':
        raise ValueError('Public067 output escaped its owned workspace')
    if args.child:
        child(root, output, args.child, args.smoke, args.probe)
    else:
        run(root, args.public_root.resolve() if args.public_root else root, args.intake.resolve(), output, args.source_only, args.smoke)
