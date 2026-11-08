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

import coupled_file070_inputs as inputs


PROBES = ['open', 'stat', 'lstat', 'listdir', 'scandir', 'resolve', 'original-constructor',
    'image-read', 'metadata-write', 'named-library', 'absolute-library', 'generated-library', 'tiny-history', 'late-stat', 'late-original-constructor']


def build(root, target, family, source, output):
    module = importlib.import_module('build069' if family == 'sdk' else 'build070')
    base = importlib.import_module('build068')
    common = base.builder.predecessor.cached.common
    common.ROOT, common.TOOLS = target, root / 'tools/clang-21'
    return module.run(output, source)


def source_case(anchor, target, family, case, profile, build_root, source, output, guard, manifest, control):
    module = importlib.import_module('cohort069' if family == 'sdk' else 'cohort070')
    module.ROOT, module.BASE = anchor, target
    support = {str(anchor / row['logicalPath']): row['sha256'] for row in manifest['support']}
    def execute(code, namespace):
        builtins.exec(code, namespace)
        namespace['install_guard'] = lambda: (guard, support)
    module.exec = execute
    try:
        if family == 'sdk': module.run(profile, build_root, source, output)
        else: module.run(profile, case, build_root, source, output)
    except ValueError:
        if not control: raise
    report = json.loads((output / 'report.json').read_text())
    if report['status'] != ('failed' if control else 'passed') or not report['sourceReturned'] or bool(report['mismatch']) != control:
        raise ValueError('Coupled070 source return/observer result differs')
    if not report['immutableInputsUnchanged'] or not report['bytecodePrefixAbsent']:
        raise ValueError('Coupled070 frozen source receipt integrity differs')
    return {'sourceReturned': True, 'independentObserverRejected': control, 'report': str(output / 'report.json'),
        'nestedImportPathsAreDeclaredLogicalAnchors': True, 'authoritativeActualImportsInOuterReceipt': True,
        'frozenGuardCodeExecutedWithPersistentOuterPolicyBinding': True}


def probe(root, output, target, name):
    history = root / 'work/undeclared070-public-history/absent.bin'
    operations = {'open': history.read_bytes, 'stat': history.stat, 'lstat': history.lstat,
        'listdir': lambda: os.listdir(history.parent), 'scandir': lambda: os.scandir(history.parent),
        'resolve': history.resolve, 'image-read': lambda: (root / 'generated/update-content0/code.bin').read_bytes(),
        'metadata-write': lambda: (target / 'metadata/branch/source-oracle.json').write_text('forbidden'),
        'named-library': lambda: ctypes.CDLL('undeclared070.dll'),
        'absolute-library': lambda: ctypes.CDLL(str(root / 'tools/clang-21/undeclared070.dll')),
        'generated-library': lambda: ctypes.CDLL(str(target / 'undeclared/effect_resource.dll')),
        'tiny-history': lambda: (target / 'source/work/absent.bin').stat()}
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
    from coupled_file070_policy import FreshSources, Guard
    manifest = json.loads((output / 'manifest.json').read_text())
    target = output / 'tiny' if tiny else output
    before = inputs.pins(root, output, target, manifest, mode == 'original')
    before.update(inputs.artifact_pins(target, mode, family, control))
    anchor = target / 'source' if tiny else root
    label = '-'.join(value for value in ['tiny' if tiny else '', mode, family, case, control, profile, selected_probe] if value)
    journal_path = output / ('journal-' + label + '.jsonl')
    journal = journal_path.open('x', encoding='utf-8')
    guard = Guard(root, output, target, anchor, family, mode == 'original', manifest, journal)
    directory = target / 'controls' / family / control / 'build' if mode == 'control' else target / ('build-' + family)
    if mode in ['source', 'control']:
        guard.generated_libraries.add(guard.path(directory / 'windows/effect_resource.dll'))
    guard.immutable.update(guard.path(path) for path in before if guard.within(guard.path(path), guard.output))
    guard.immutable.add(guard.path(journal_path))
    loader = FreshSources(anchor, target, manifest, guard)
    guard.install(); loader.install()
    def unchanged():
        actual = inputs.pins(root, output, target, manifest, mode == 'original')
        actual.update(inputs.artifact_pins(target, mode, family, control))
        if actual != before:
            raise ValueError('Coupled070 selected immutable bytes changed')
    guard.terminal(unchanged)
    sys.pycache_prefix = str(target / 'unwritten-bytecode')
    record = {'status': 'failed', 'mode': mode, 'family': family, 'case': case, 'profile': profile,
        'control': control, 'probe': selected_probe, 'tiny': tiny, 'sourceCreditGranted': 0,
        'originalImageAccessPermitted': mode == 'original', 'wholeGameQualified': False}
    try:
        if selected_probe: probe(root, output, target, selected_probe)
        elif mode == 'build':
            recipe = build(root, target, family, target / 'source', target / ('build-' + family))
            expected = json.loads((target / 'metadata' / family / 'build-seed.json').read_text())['artifacts']
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
            mutation = row['mutation']
            path = source / mutation['file']
            text = path.read_text()
            if text.count(mutation['before']) != 1: raise ValueError('Coupled070 mutation selector differs')
            path.write_text(text.replace(mutation['before'], mutation['after']))
            inputs.checked(path, mutation)
            guard.immutable.update(guard.path(path) for path in source.rglob('*') if path.is_file())
            record['exactArtifacts'] = inputs.compare(build(root, target, family, source, folder / 'build'), row['artifacts'])
        elif mode in ['source', 'control']:
            if mode == 'control':
                folder = target / 'controls' / family / control
                source, build_root = folder / 'source', folder / 'build'
                output_case = folder / 'profiles' / profile
            else:
                source, build_root = target / 'source', target / ('build-' + family)
                output_case = target / 'profiles' / family / (case or 'device') / profile
            output_case.parent.mkdir(parents=True, exist_ok=True)
            record['result'] = source_case(anchor, target, family, case, profile, build_root, source, output_case, guard, manifest, mode == 'control')
        elif mode == 'original':
            from coupled_file070_reference import observe
            record['originalObservation'] = observe(target, family, case)
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


def verify_journal(path, rejected):
    rows = [json.loads(line) for line in path.read_text().splitlines()]
    previous = '0' * 64
    import hashlib
    for index, row in enumerate(rows):
        if row['sequence'] != index or row['previousSHA256'] != previous:
            raise ValueError('Coupled070 child audit journal chain differs')
        previous = hashlib.sha256(json.dumps(row, sort_keys=True).encode()).hexdigest()
    terminal = rows[-1]
    if terminal['event'] != 'terminal-after-run' or (terminal['status'] == 'clean') == rejected:
        raise ValueError('Coupled070 post-exit terminal audit status differs')
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
        terminal = verify_journal(output / ('journal-' + label + '.jsonl'), bool(selected_probe))
        rejected = receipt['audit']['forbiddenAccessAttempts'] or receipt['audit']['originalImageConstructorAttempts']
        if selected_probe:
            late = selected_probe.startswith('late-')
            if late and (result.returncode != 0 or receipt['status'] != 'passed'):
                raise ValueError('Coupled070 late boundary control did not return cleanly before callback')
            if not late and (result.returncode == 0 or receipt['status'] != 'failed' or not rejected):
                raise ValueError('Coupled070 caught boundary attempt escaped persistent rejection')
        elif result.returncode or receipt['status'] != 'passed' or not receipt['immutableInputsUnchanged'] or not receipt['bytecodePrefixAbsent']:
            raise ValueError('Coupled070 child failed: ' + label)
        row = {'child': label, 'exitCode': result.returncode, 'postExitJournal': terminal,
            'actualFreshImportCount': receipt['actualFreshImportCount'], 'persistentProbeRejected': bool(selected_probe)}
        children.append(row)
        print(json.dumps(row), flush=True)
    for family in ['sdk', 'branch']: invoke('build', family)
    if not source_only:
        invoke('original', 'sdk')
        for case in ['alias', 'null-equal', 'warm']: invoke('original', 'branch', case)
    for family, cases in [('sdk', [None]), ('branch', ['alias', 'null-equal', 'warm'])]:
        for case in cases:
            for profile in ['windows'] if smoke else ['arm', 'windows', 'a64']: invoke('source', family, case, profile)
    if not smoke:
        for family in ['sdk', 'branch']:
            controls = json.loads((output / 'metadata' / family / 'controls.json').read_text())
            for control, row in controls.items():
                invoke('control-build', family, control=control)
                for profile in ['arm', 'windows', 'a64']:
                    invoke('control', family, row['mutation'].get('case'), profile, control)
    inputs.tiny_copy(output, manifest)
    for family in ['sdk', 'branch']: invoke('build', family, tiny=True)
    for family, cases in [('sdk', [None]), ('branch', ['alias', 'null-equal', 'warm'])]:
        for case in cases:
            for profile in ['windows'] if smoke else ['arm', 'windows', 'a64']: invoke('source', family, case, profile, tiny=True)
    for name in PROBES: invoke('probe', selected_probe=name, tiny=name == 'tiny-history')
    inputs.write(output / 'ready.json', {'status': 'coupled069070-public-transport-passed', 'sourceOnly': source_only,
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
    parser.add_argument('--child', choices=['build', 'source', 'control-build', 'control', 'original', 'probe'])
    parser.add_argument('--family', choices=['sdk', 'branch'], default='branch')
    parser.add_argument('--case', choices=['alias', 'null-equal', 'warm'])
    parser.add_argument('--profile', choices=['arm', 'windows', 'a64'])
    parser.add_argument('--control')
    parser.add_argument('--probe', choices=PROBES)
    parser.add_argument('--tiny', action='store_true')
    args = parser.parse_args()
    root, output = args.root.resolve(), args.output.resolve()
    if args.child: child(root, output, args.child, args.family, args.case, args.profile, args.control, args.probe, args.tiny)
    else:
        public = args.public_root.resolve() if args.public_root else root
        intake = args.intake.resolve() if args.intake else public / 'evidence/lanes/native-file-coupled070/public-inputs-v1'
        run(root, public, intake, output, args.source_only, args.smoke)
