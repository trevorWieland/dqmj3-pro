import argparse
import hashlib
import json
import subprocess
import sys
import time
from pathlib import Path

import native_effect065_build as common
import native_effect065_resource_build as kernels
import native_effect065_resource_vertex_cases as vertex
import native_effect065_resource_commands_cases as commands
import native_effect065_resource_constants as constants
import native_effect065_resource_texture_cases as texture
import native_effect065_resource_vertex_negative as vertex_negative
import native_effect065_resource_graph_build as graph
import native_effect065_resource_graph_cases as graph_cases
import native_effect065_resource_graph_lifecycle as lifecycle
import native_effect065_resource_graph_negative as negative
import native_effect065_resource_graph_copy as tiny


ROOT = common.ROOT


def checked(row):
    path = Path(row['path'])
    if not path.is_absolute():
        path = ROOT / path
    if not path.is_file() or path.stat().st_size != row['bytes'] or hashlib.sha256(path.read_bytes()).hexdigest() != row['sha256']:
        raise ValueError('Resource stage dependency differs: ' + str(path))


def runtime_inputs():
    paths = {Path(sys.executable), Path(sys._base_executable), common.TOOLS / 'clang.exe', common.TOOLS / 'ld.lld.exe'}
    for module in list(sys.modules.values()):
        path = getattr(module, '__file__', None)
        if path and Path(path).is_file():
            paths.add(Path(path).resolve())
    inherited = []
    for name in ['runtime-closure-during-stage-v1.json', 'loaded-runtime-closure-v1.json']:
        path = ROOT / 'work/native-effect065' / name
        row = json.loads(path.read_text())
        for pin in row['files']:
            checked(pin)
        inherited.append(common.pin(path))
    def pin(path):
        return {'path': str(path), 'bytes': path.stat().st_size, 'sha256': hashlib.sha256(path.read_bytes()).hexdigest()}
    return {'status': 'actual-resource-producer-import-and-tool-closure-plus-verified-predecessor-native-runtime',
        'files': [pin(path) for path in sorted(paths)], 'verifiedPredecessorNativeClosures': inherited,
        'pythonVersion': sys.version, 'processStartMemoryModuleListClaimed': False}


def run(output):
    if output.exists():
        raise ValueError('Preserve complete resource CPU stage')
    output.mkdir(parents=True)
    started = time.monotonic()
    paths = sorted((ROOT / 'src/native/wave065-resource').glob('*.[ch]'))
    paths += [ROOT / 'src/native/wave065/effect_shader.c', ROOT / 'src/native/wave065/effect_shader.h', ROOT / 'src/native/wave065/effect_services.h']
    paths += sorted((ROOT / 'toolscripts').glob('native_effect065_resource*'))
    paths += [ROOT / 'toolscripts/native_effect065_build.py', ROOT / 'tests/test_native_effect065_resource_conditions.py',
        ROOT / 'tests/test_native_effect065_resource_graph.py', ROOT / 'docs/native-effect065-resource.md']
    paths += [Path(module.__file__).resolve() for module in list(sys.modules.values()) if getattr(module, '__file__', None)
        and str(Path(module.__file__).resolve()).startswith(str(ROOT / 'toolscripts'))]
    before = [common.pin(path) for path in sorted(set(paths))]
    (output / 'input-manifest.json').write_text(json.dumps(before, indent=2) + '\n')
    runtime = runtime_inputs()
    (output / 'runtime-before.json').write_text(json.dumps(runtime, indent=2) + '\n')
    try:
        kernels.build(output / 'kernel-build')
        vertex.run(output / 'vertex', output / 'kernel-build')
        commands.run(output / 'commands', output / 'kernel-build')
        constants.run(output / 'constants', output / 'kernel-build')
        texture.run(output / 'texture', output / 'kernel-build')
        vertex_negative.run(output / 'vertex-negative')
        graph.build(output / 'graph-build', ROOT / 'toolscripts/native_effect065_resource_graph_fixture.c')
        graph_cases.run(output / 'graph-build', output / 'graph')
        lifecycle.run(output / 'graph-build', output / 'lifecycle')
        negative.run(output / 'graph-build', output / 'negative')
        tiny.run(output / 'graph-build', output / 'graph/report.json', output / 'source-only')
        tests = subprocess.run([sys.executable, '-m', 'unittest', 'discover', '-s', 'tests',
            '-p', 'test_native_effect065_resource*.py'], cwd=ROOT, capture_output=True)
        (output / 'tests.log').write_bytes(tests.stdout + tests.stderr)
        if tests.returncode:
            raise ValueError('Resource observer/predicate regression tests failed')
        if before != [common.pin(path) for path in sorted(set(paths))]:
            raise ValueError('Owned/imported resource stage inputs changed during sealing')
        for row in runtime['files']:
            checked(row)
    except Exception as error:
        (output / 'failure.json').write_text(json.dumps({'status': 'preserved-resource-cpu-stage-stop', 'error': str(error),
            'elapsedSeconds': time.monotonic() - started, 'sourceCreditGranted': 0}, indent=2) + '\n')
        raise
    reports = [output / name for name in ['kernel-build/build.json', 'vertex/report.json', 'commands/report.json',
        'constants/report.json', 'texture/report.json', 'vertex-negative/report.json', 'graph-build/build.json',
        'graph/report.json', 'lifecycle/report.json', 'negative/report.json', 'source-only/report.json', 'tests.log', 'runtime-before.json']]
    packet = {'status': 'bounded-resource-CPU-kernels-and-joined-construction-review-candidate',
        'inputs': before, 'reports': [common.pin(path) for path in reports], 'ownedImportedInputsUnchanged': True,
        'elapsedSeconds': time.monotonic() - started, 'sourceCreditGranted': 0, 'matchingCreditGranted': 0,
        'fullEffectGraphQualified': False, 'nativeGPUQualified': False,
        'limits': ['The whole canonical4572-byte constructor denominator is retained; unvisited/unqualified paths remain.',
            'Game caller, factory/replacement, storage1/2 queues and platform startup remain outside this bounded stage.',
            'Generated fixtures, explicit class allocator budgets and reference cache-flush contract do not establish native rendering.']}
    (output / 'packet.json').write_text(json.dumps(packet, indent=2) + '\n')
    (output / 'ready.json').write_text(json.dumps({'status': packet['status'], 'packet': common.pin(output / 'packet.json'),
        'sourceCreditGranted': 0}, indent=2) + '\n')
    print(json.dumps({'ready': common.pin(output / 'ready.json'), 'elapsedSeconds': packet['elapsedSeconds'], 'sourceCreditGranted': 0}))


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    destination = args.output.resolve()
    destination.relative_to(ROOT / 'work/native-effect065')
    run(destination)
