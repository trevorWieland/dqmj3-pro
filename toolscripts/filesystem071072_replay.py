import argparse
import builtins
import ctypes
import importlib
import json
import os
from pathlib import Path
import shutil
import subprocess
import sys

import filesystem071072_inputs as inputs


PROBES = ['open', 'stat', 'lstat', 'listdir', 'scandir', 'resolve', 'original-constructor',
    'image-read', 'metadata-write', 'named-library', 'absolute-library', 'generated-library', 'tiny-history', 'late-stat', 'late-original-constructor', 'after-terminal-stat', 'after-terminal-original-constructor', 'compiler-runtime-input']


def build(root, target, family, source, output):
    module = importlib.import_module('build_combined')
    base = importlib.import_module('build068')
    common = base.builder.predecessor.cached.common
    common.ROOT, common.TOOLS = target, root / 'tools/clang-21'
    return module.run(output, source)


def source_case(anchor, target, family, case, profile, build_root, source, output, guard, manifest, control):
    module = importlib.import_module('cohort_' + family)
    module.ROOT, module.BASE = anchor, target
    support = {str(anchor / row['logicalPath']): row['sha256'] for row in manifest['support']}
    def execute(code, namespace):
        builtins.exec(code, namespace)
        namespace['install_guard'] = lambda: (guard, support)
    module.exec = execute
    caught = None
    try:
        if family == 'sdk': module.run(profile, build_root, source, output)
        else: module.run(profile, case, build_root, source, output)
    except (ValueError, AssertionError) as error:
        if not control: raise
        caught = type(error).__name__ + ':' + str(error)
    report = json.loads((output / 'report.json').read_text())
    returned = report.get('sourceReturned') or (family == 'construction' and report.get('constructorReturned'))
    if report['status'] != ('failed' if control else 'passed') or not returned or (control and caught is None):
        raise ValueError('Combined source-return/independent observer status differs')
    if not report['immutableInputsUnchanged'] or not report['bytecodePrefixAbsent']:
        raise ValueError('Combined source receipt integrity differs')
    return {'sourceReturned': bool(returned), 'factoryReturned': report.get('factoryReturned'),
        'independentObserverRejected': control, 'caughtSemanticError': caught, 'report': str(output / 'report.json'),
        'authoritativeActualImportsInOuterReceipt': True, 'frozenGuardCodeExecutedWithPersistentOuterPolicyBinding': True}


def probe(root, output, target, name):
    history = root / 'work/undeclared070-public-history/absent.bin'
    operations = {'open': history.read_bytes, 'stat': history.stat, 'lstat': history.lstat,
        'listdir': lambda: os.listdir(history.parent), 'scandir': lambda: os.scandir(history.parent),
        'resolve': history.resolve, 'image-read': lambda: (root / 'generated/update-content0/code.bin').read_bytes(),
        'metadata-write': lambda: (target / 'metadata/branch/source-oracle.json').write_text('forbidden'),
        'named-library': lambda: ctypes.CDLL('undeclared070.dll'),
        'absolute-library': lambda: ctypes.CDLL(str(root / 'tools/clang-21/undeclared070.dll')),
        'generated-library': lambda: ctypes.CDLL(str(target / 'undeclared/effect_resource.dll')),
        'tiny-history': lambda: (target / 'source/work/absent.bin').stat(),
        'compiler-runtime-input': lambda: (root / 'tools/clang-21/clang.exe').read_bytes()}
    try:
        if name.startswith('late-'):
            import atexit
            constructor = importlib.import_module('native_wave013_file_owner_reference_image').ReferenceImage if name == 'late-original-constructor' else history.stat
            def later():
                try: constructor()
                except ValueError: pass
            atexit.register(later)
        elif name == 'original-constructor':
            importlib.import_module('native_wave013_file_owner_reference_image').ReferenceImage()
        else: operations[name]()
    except ValueError:
        pass


def child(root, output, mode, family, case, profile, control, selected_probe, tiny):
    from filesystem071072_policy import FreshSources, Guard
    manifest = json.loads((output / 'manifest.json').read_text())
    target = output / 'tiny' if tiny else output
    compiler_mode = mode in ['build', 'control-build', 'abi']
    before = inputs.pins(root, output, target, manifest, False, compiler_mode)
    audit_mode = 'source' if selected_probe and (selected_probe.startswith('late-') or selected_probe.startswith('after-terminal-')) else mode
    before.update(inputs.artifact_pins(target, audit_mode, family, control, manifest))
    anchor = target / 'source' if tiny else root
    label = '-'.join(value for value in ['tiny' if tiny else '', mode, family, case, control, profile, selected_probe] if value)
    journal_path = output / ('journal-' + label + '.jsonl')
    journal = journal_path.open('x', encoding='utf-8')
    policy_manifest = {**manifest, 'compilerInputsPermitted': compiler_mode, 'runtimeFiles': [row for row in manifest['runtimeFiles'] if compiler_mode or row.get('scope') != 'project' or not row['path'].startswith('tools/clang-21/')]}
    guard = Guard(root, output, target, anchor, family, False, policy_manifest, journal)
    directory = target / 'controls' / family / control / 'build' if mode == 'control' else target / 'build-combined'
    if audit_mode in ['source', 'control']:
        guard.generated_libraries.add(guard.path(directory / 'windows/effect_resource.dll'))
    guard.immutable.update(guard.path(path) for path in before if guard.within(guard.path(path), guard.output))
    guard.immutable.add(guard.path(journal_path))
    loader = FreshSources(anchor, target, manifest, guard)
    guard.install(); loader.install()
    def unchanged():
        actual = inputs.pins(root, output, target, manifest, False, compiler_mode)
        actual.update(inputs.artifact_pins(target, audit_mode, family, control, manifest))
        if actual != before:
            raise ValueError('Filesystem071072 selected immutable bytes changed')
    if selected_probe and selected_probe.startswith('after-terminal-'):
        import atexit
        def after_terminal():
            try:
                if selected_probe == 'after-terminal-stat': (root / 'work/undeclared071072-history/absent.bin').stat()
                else: importlib.import_module('native_wave013_file_owner_reference_image').ReferenceImage()
            except ValueError: pass
        atexit.register(after_terminal)
    guard.terminal(unchanged)
    sys.pycache_prefix = str(target / 'unwritten-bytecode')
    record = {'status': 'failed', 'mode': mode, 'family': family, 'case': case, 'profile': profile,
        'control': control, 'probe': selected_probe, 'tiny': tiny, 'sourceCreditGranted': 0,
        'compilerInputsPermitted': compiler_mode, 'originalImageAccessPermitted': False, 'wholeGameQualified': False}
    try:
        if selected_probe:
            if selected_probe.startswith('late-') or selected_probe.startswith('after-terminal-'):
                destination = target / 'probe-bodies' / selected_probe
                destination.parent.mkdir(parents=True, exist_ok=True)
                record['returnedPositiveBodyBeforeBoundary'] = source_case(anchor, target, 'branch', 'alias', 'windows',
                    target / 'build-combined', target / 'source', destination, guard, manifest, False)
            if not selected_probe.startswith('after-terminal-'): probe(root, output, target, selected_probe)
        elif mode == 'abi':
            import filesystem071072_abi as abi
            record['headerABI'] = abi.run(root, target, target / 'abi-analysis', manifest)
        elif mode == 'build':
            recipe = build(root, target, family, target / 'source', target / 'build-combined')
            expected = json.loads((target / 'metadata/combined/build-seed.json').read_text())['artifacts']
            record['exactArtifacts'] = inputs.compare(recipe, expected)
        elif mode == 'control-build':
            row = json.loads((target / 'metadata' / family / 'controls.json').read_text())[control]
            folder = target / 'controls' / family / control
            source = folder / 'source'
            for item in manifest['productionAndFixtures']:
                logical = inputs.relative(item['logicalPath'])
                destination = source / logical
                destination.parent.mkdir(parents=True, exist_ok=True)
                shutil.copyfile(inputs.checked(target / 'source' / logical, item), destination)
            mutation = row
            path = source / mutation['file']
            text = path.read_text()
            if 'function' in mutation:
                start = text.index(mutation['function'] + '(')
                end = text.index('\n}\n', start) + 3
                body = text[start:end]
                if body.count(mutation['before']) != 1: raise ValueError('Combined scoped mutation selector differs')
                changed = text[:start] + body.replace(mutation['before'], mutation['after']) + text[end:]
            else:
                if text.count(mutation['before']) != 1: raise ValueError('Combined mutation selector differs')
                changed = text.replace(mutation['before'], mutation['after'])
            path.write_bytes(changed.encode())
            inputs.checked(path, mutation)
            guard.immutable.update(guard.path(path) for path in source.rglob('*') if path.is_file())
            recipe = build(root, target, family, source, folder / 'build')
            record['controlArtifacts'] = recipe['artifacts']
            record['exactSourceMutation'] = inputs.identity(path)
        elif mode in ['source', 'control']:
            if mode == 'control':
                folder = target / 'controls' / family / control
                source, build_root = folder / 'source', folder / 'build'
                output_case = folder / 'profiles' / profile
            else:
                source, build_root = target / 'source', target / 'build-combined'
                output_case = target / 'profiles' / family / (case or 'device') / profile
            output_case.parent.mkdir(parents=True, exist_ok=True)
            record['result'] = source_case(anchor, target, family, case, profile, build_root, source, output_case, guard, manifest, mode == 'control')
        guard.assert_clean(); unchanged()
        record['status'] = 'passed'
    finally:
        try:
            unchanged(); clean = True
        except Exception as error:
            clean = False
            record['integrityFailure'] = str(error)
        record.update(inputPins=before, immutableInputsUnchanged=clean, audit=guard.receipt(),
            freshSourceImports=loader.loaded, actualFreshImportCount=len(loader.loaded),
            bytecodePrefixAbsent=not Path(sys.pycache_prefix).exists())
        inputs.write(output / ('receipt-' + label + '.json'), record)
        guard.emit({'event': 'receipt-written', 'status': record['status'], 'receipt': 'receipt-' + label + '.json'})


def verify_journal(path, rejected, after_terminal=False):
    rows = [json.loads(line) for line in path.read_text().splitlines()]
    previous = '0' * 64
    import hashlib
    for index, row in enumerate(rows):
        if row['sequence'] != index or row['previousSHA256'] != previous:
            raise ValueError('Filesystem071072 child audit journal chain differs')
        previous = hashlib.sha256(json.dumps(row, sort_keys=True).encode()).hexdigest()
    terminal = rows[-1]
    if after_terminal:
        index = next(index for index, row in enumerate(rows) if row['event'] == 'terminal-after-run')
        if rows[index]['status'] != 'clean' or index == len(rows) - 1 or not any(row['event'].startswith(('after-terminal', 'rejected-')) for row in rows[index + 1:]):
            raise ValueError('Combined after-terminal attempt was not persistently rejected')
        return {'rows': len(rows), 'terminalSHA256': previous, 'terminalStatus': 'invalidated-after-terminal', 'cleanReceiptRejected': True}
    if terminal['event'] != 'terminal-after-run' or (terminal['status'] == 'clean') == rejected:
        raise ValueError('Filesystem071072 post-exit terminal audit status differs')
    return {'rows': len(rows), 'terminalSHA256': previous, 'terminalStatus': terminal['status']}


def run(root, public, intake, output, source_only, smoke):
    manifest = inputs.materialize(root, public, intake, output)
    script = output / 'adapter' / Path(__file__).name
    children = []
    def invoke(mode, family='branch', case=None, profile=None, control=None, selected_probe=None, tiny=False):
        label = '-'.join(value for value in ['tiny' if tiny else '', mode, family, case, control, profile, selected_probe] if value)
        argv = [sys.executable, '-B', str(script), '--root', str(root), '--output', str(output), '--child', mode, '--family', family]
        for flag, value in [('--case', case), ('--profile', profile), ('--control', control), ('--probe', selected_probe)]:
            if value: argv += [flag, value]
        if tiny: argv.append('--tiny')
        with (output / (label + '.log')).open('wb') as stream:
            result = subprocess.run(argv, stdout=stream, stderr=subprocess.STDOUT, cwd=root, timeout=1800)
        receipt = json.loads((output / ('receipt-' + label + '.json')).read_text())
        terminal = verify_journal(output / ('journal-' + label + '.jsonl'), bool(selected_probe), bool(selected_probe and selected_probe.startswith('after-terminal-')))
        rejected = receipt['audit']['forbiddenAccessAttempts'] or receipt['audit']['originalImageConstructorAttempts']
        if selected_probe:
            late = selected_probe.startswith(('late-', 'after-terminal-'))
            if late and (result.returncode != 0 or receipt['status'] != 'passed' or not receipt['returnedPositiveBodyBeforeBoundary']['sourceReturned']):
                raise ValueError('Combined late boundary did not return from the actual coupled body first')
            if not late and (result.returncode == 0 or receipt['status'] != 'failed' or not rejected):
                raise ValueError('Combined caught boundary attempt escaped persistent rejection')
        elif result.returncode or receipt['status'] != 'passed' or not receipt['immutableInputsUnchanged'] or not receipt['bytecodePrefixAbsent']:
            raise ValueError('Combined child failed: ' + label)
        row = {'child': label, 'exitCode': result.returncode, 'postExitJournal': terminal,
            'actualFreshImportCount': receipt['actualFreshImportCount'], 'persistentProbeRejected': bool(selected_probe)}
        children.append(row)
        inputs.write(output / 'pipeline.json', children)
        print(json.dumps(row), flush=True)
    invoke('build')
    invoke('abi')
    for family, cases in manifest['families'].items():
        for case in cases:
            for profile in ['windows'] if smoke else ['arm', 'windows', 'a64']: invoke('source', family, case, profile)
    if not smoke:
        for family in manifest['families']:
            controls = json.loads((output / 'metadata' / family / 'controls.json').read_text())
            for control, row in controls.items():
                invoke('control-build', family, control=control)
                for profile in ['arm', 'windows', 'a64']: invoke('control', family, row['case'], profile, control)
    inputs.tiny_copy(output, manifest)
    invoke('build', tiny=True)
    for family, cases in manifest['families'].items():
        for case in cases:
            for profile in ['windows'] if smoke else ['arm', 'windows', 'a64']: invoke('source', family, case, profile, tiny=True)
    for name in PROBES: invoke('probe', selected_probe=name, tiny=name == 'tiny-history')
    inputs.write(output / 'ready.json', {'status': 'combined071072-public-source-replay-passed', 'sourceOnly': True,
        'smoke': smoke, 'children': children, 'sourceCreditGranted': 0, 'matchingCreditGranted': 0,
        'nativeTextByteDenominatorChanged': False, 'originalToolOrArtifactTreesCopied': False})


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--root', type=Path, default=Path.cwd())
    parser.add_argument('--public-root', type=Path)
    parser.add_argument('--intake', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--source-only', action='store_true')
    parser.add_argument('--smoke', action='store_true')
    parser.add_argument('--child', choices=['build', 'abi', 'source', 'control-build', 'control', 'probe'])
    parser.add_argument('--family', choices=['sdk', 'branch', 'namespace', 'construction'], default='branch')
    parser.add_argument('--case', type=str)
    parser.add_argument('--profile', choices=['arm', 'windows', 'a64'])
    parser.add_argument('--control')
    parser.add_argument('--probe', choices=PROBES)
    parser.add_argument('--tiny', action='store_true')
    args = parser.parse_args()
    root, output = args.root.resolve(), args.output.resolve()
    try:
        if args.child: child(root, output, args.child, args.family, args.case, args.profile, args.control, args.probe, args.tiny)
        else:
            public = args.public_root.resolve() if args.public_root else root
            intake = args.intake.resolve() if args.intake else public / 'evidence/lanes/native-file071072/public-inputs-v1'
            run(root, public, intake, output, args.source_only, args.smoke)
    except Exception as error:
        print(type(error).__name__ + ': ' + str(error), file=sys.stderr)
        sys.exit(1)
