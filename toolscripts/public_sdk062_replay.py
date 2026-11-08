import argparse
import hashlib
import importlib
import json
import os
from pathlib import Path
import runpy
import subprocess
import sys
import unittest

import public_sdk062_bindings as bindings
import public_sdk062_inputs as inputs
import public_sdk062_runtime as runtime

ROOT = Path(__file__).resolve().parents[1]
sys.dont_write_bytecode = True


def write(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def pins(root, output, selected):
    result = {}
    for category in ('sources', 'support', 'reference'):
        for row in selected[category]['files']:
            path = inputs.checked(root, row)
            result[str(path)] = inputs.digest(path)
            if category == 'sources':
                copied = output / row['lane'] / 'source' / path.name
            elif category == 'support':
                copied = output / Path(row['path']).relative_to('toolscripts/sdk062')
            else:
                copied = output / row['lane'] / path.name
            result[str(copied)] = inputs.digest(copied)
            if result[str(copied)] != row['sha256']:
                raise ValueError('SDK source snapshot differs from public source')
    names = ['public_sdk062_replay.py', 'public_sdk062_bindings.py', 'public_sdk062_inputs.py',
             'public_sdk062_runtime.py', 'sdk062_original_v1.py', 'digest024_build.py', 'digest024_measure.py',
             'digest024_oracle.py', 'inventory.py']
    for name in names:
        path = root / 'toolscripts' / name
        result[str(path)] = inputs.digest(path)
    for name in ('source-manifest.json', 'support-manifest.json', 'reference-manifest.json', 'runtime-manifest.json'):
        path = root / inputs.MANIFEST / name
        result[str(path)] = inputs.digest(path)
    return result


def audited(root, output):
    reads, libraries, rejected = set(), set(), []

    def audit(event, args):
        if event not in ('open', 'ctypes.dlopen') or not args or not isinstance(args[0], (str, bytes)):
            return
        path = Path(os.fsdecode(args[0])).resolve()
        if path.is_relative_to(root / 'work') and not path.is_relative_to(output):
            rejected.append(str(path))
            raise ValueError('Historical work input forbidden in public SDK replay: ' + str(path))
        if event == 'ctypes.dlopen':
            libraries.add(str(path))
        else:
            mode = args[1] if len(args) > 1 else None
            if not isinstance(mode, str) or not any(letter in mode for letter in 'wax+'):
                reads.add(str(path))

    sys.addaudithook(audit)
    return reads, libraries, rejected


def run_proofs(stage, folder):
    if stage == 'context':
        for name in ('map_proof062s', 'context_proof062s', 'mutex_proof062s', 'controls062s'):
            importlib.import_module(name).main()
    elif stage == 'arbiter':
        reference = importlib.import_module('reference_probe062a')
        windows = importlib.import_module('windows_probe062a')
        cpu = importlib.import_module('cpu_probe062a')
        rows = []
        for depth in (1, 2, 3, 8):
            rows.append(dict(depth=depth, original=reference.main(depth, folder / f'original-depth{depth}.json'),
                windows=windows.main(depth, folder / f'windows-depth{depth}.json'),
                arm=cpu.program('arm', depth), a64=cpu.program('a64', depth)))
        importlib.import_module('controls062a').main()
        write(folder / 'handoff-programs.json', dict(programs=rows, sourceCreditGranted=0))
    elif stage == 'object':
        importlib.import_module('suite062t').run(rebuild=False)
        importlib.import_module('controls062t').main()
    else:
        importlib.import_module('suite062u').run()
        importlib.import_module('controls062u').main()
        importlib.import_module('constructor_math_proof062u').main()
        script = folder / 'tools/default_work_coverage062u.py'
        runpy.run_path(str(script), run_name='__main__')


def child(output, stage, mode):
    selected = inputs.load(ROOT)
    before = pins(ROOT, output, selected)
    runtime_before = runtime.verify(ROOT)
    effective_runtime = runtime.identity()
    reads, libraries, rejected = audited(ROOT, output)
    record = dict(status='failed', stage=stage, mode=mode, sourceCreditGranted=0)
    try:
        builder, baseline = bindings.bind(ROOT, output, stage, selected)
        if mode == 'tests':
            tests = unittest.defaultTestLoader.discover(str(output / stage / 'tests'))
            result = unittest.TextTestRunner(verbosity=2).run(tests)
            expected = dict(context=14, arbiter=11, object=16, startup=18)[stage]
            if not result.wasSuccessful() or result.testsRun != expected:
                raise ValueError('SDK public test successor failed or count differs')
            record['tests'] = result.testsRun
        else:
            for target in ('arm', 'windows', 'a64'):
                builder.build(baseline / target, target)
            run_proofs(stage, output / stage)
            log = output / stage / 'public-tests.log'
            command = [sys.executable, str(Path(__file__)), '--mode', 'tests', '--stage', stage,
                       '--output', str(output)]
            with log.open('wb') as stream:
                done = subprocess.run(command, cwd=ROOT, stdout=stream, stderr=subprocess.STDOUT)
            if done.returncode:
                raise ValueError('Fresh SDK test process failed: ' + str(log))
        if pins(ROOT, output, selected) != before:
            raise ValueError('SDK declared sources/producers changed during replay')
        if runtime.verify(ROOT) != runtime_before or runtime.identity() != effective_runtime:
            raise ValueError('SDK effective runtime/tool inputs changed during replay')
        record.update(status='passed', publicAndCopiedSourcePins=len(before),
            declaredSourceInputsUnchanged=True, oldWorkInputsRead=False,
            historicalOriginalFixtureMapped=False, fullSdkFactoryStartupOrGameClaimed=False)
    finally:
        record.update(readPaths=sorted(reads), requestedLibraries=sorted(libraries),
                      forbiddenHistoricalWorkAccess=rejected, inputPins=before,
                      runtimePins=runtime_before, effectiveRuntime=effective_runtime)
        write(output / stage / f'public-{mode}-receipt.json', record)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--output', type=Path, default=ROOT / 'work/sdk062-public-replay-v1')
    parser.add_argument('--stage', choices=inputs.STAGES)
    parser.add_argument('--mode', choices=('all', 'qualify', 'tests'), default='all')
    args = parser.parse_args()
    output = args.output.resolve()
    if not output.is_relative_to(ROOT / 'work') or output == ROOT / 'work':
        raise ValueError('SDK output must be owned project work')
    if args.mode != 'all':
        if not args.stage:
            raise ValueError('SDK child stage is required')
        child(output, args.stage, args.mode)
        return
    inputs.materialize(ROOT, output)
    stages = (args.stage,) if args.stage else inputs.STAGES
    results = []
    try:
        for stage in stages:
            log = output / stage / 'public-qualification.log'
            with log.open('wb') as stream:
                done = subprocess.run([sys.executable, str(Path(__file__)), '--mode', 'qualify',
                    '--stage', stage, '--output', str(output)], cwd=ROOT, stdout=stream,
                    stderr=subprocess.STDOUT)
            results.append(dict(stage=stage, returncode=done.returncode, log=str(log),
                                logSha256=hashlib.sha256(log.read_bytes()).hexdigest()))
            print(stage, done.returncode, flush=True)
            if done.returncode:
                raise ValueError('Public SDK stage failed; preserve attempt: ' + stage)
    finally:
        write(output / 'public-replay.json', dict(status='passed' if len(results) == len(stages)
            and all(row['returncode'] == 0 for row in results) else 'failed', stages=results,
            sourceCreditGranted=0, fullSdkFactoryStartupOrGameClaimed=False))


if __name__ == '__main__':
    main()
