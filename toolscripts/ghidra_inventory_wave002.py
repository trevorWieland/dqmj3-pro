import argparse
import collections
import hashlib
import json
import os
import shutil
import subprocess
import time
from pathlib import Path


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/inventory-wave002'
EVIDENCE = ROOT / 'evidence/lanes/inventory-wave002'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
HEADER_SHA = '32fcbe9adf7ea39c01c825af0d41c5ecb933549917ccc903a102eb83fb21f435'
OLD_SHA = '424ae7c002d030733468d4f8b583114ef2475fc10c26233fa0565ed31a0ce2d4'
LANES = ['wave001-native', 'wave002-native', 'wave003-abi', 'wave004-native',
         'wave005-native', 'wave006-native', 'wave007-native', 'wave008-native']


def digest(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    path = Path(path).resolve()
    return {'path': path.relative_to(ROOT).as_posix() if path.is_relative_to(ROOT) else str(path),
            'sha256': digest(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def read(path):
    return json.loads(path.read_text(encoding='utf-8'))


def merge(intervals):
    result = []
    for start, end in sorted(intervals):
        if start >= end:
            raise ValueError('Empty or reversed interval')
        if result and start <= result[-1][1]:
            result[-1][1] = max(end, result[-1][1])
        else:
            result.append([start, end])
    return result


def subtract(left, right):
    result = []
    right = merge(right)
    for start, end in merge(left):
        for low, high in right:
            if high <= start:
                continue
            if low >= end:
                break
            if low > start:
                result.append([start, low])
            start = max(start, high)
            if start >= end:
                break
        if start < end:
            result.append([start, end])
    return result


def interval_report(intervals):
    return {'bytes': sum(end - start for start, end in intervals),
            'ranges': [{'start': start, 'endExclusive': end, 'bytes': end - start} for start, end in intervals]}


def prepare_inputs(folder):
    original_path = ROOT / 'generated/update-content0/code.bin'
    header = ROOT / 'generated/update-content0/exheader.bin'
    original = original_path.read_bytes()
    if digest(original) != MODULE_SHA or digest(header.read_bytes()) != HEADER_SHA:
        raise RuntimeError('Canonical code/ExHeader mismatch')
    old_path = ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json'
    if digest(old_path.read_bytes()) != OLD_SHA:
        raise RuntimeError('Frozen old inventory changed')
    inputs, seeds, conflicts, excluded = [], {}, [], []
    snapshots = folder / 'inputs'
    snapshots.mkdir()

    def snapshot(path, label):
        target = snapshots / (label + '.json')
        shutil.copyfile(path, target)
        inputs.append({'source': record(path), 'snapshot': record(target)})
        return read(target), record(target)

    def add(address, mode, provenance):
        if mode not in ('ARM', 'Thumb') or address % (4 if mode == 'ARM' else 2):
            conflicts.append({'address': address, 'mode': mode, 'reason': 'invalid mode/alignment', 'provenance': provenance})
            return
        if address in seeds and seeds[address]['mode'] != mode:
            conflicts.append({'address': address, 'first': seeds[address], 'secondMode': mode, 'provenance': provenance})
            return
        seeds.setdefault(address, {'address': address, 'mode': mode, 'provenance': [], 'acceptedSourceBytes': 0})['provenance'].append(provenance)

    old_seeds, pin = snapshot(ROOT / 'evidence/lanes/inventory-wave001/update-native.json', 'old-seeds')
    if old_seeds['codeSha256'] != MODULE_SHA or len(old_seeds['functionSeeds']) != 66:
        raise RuntimeError('Original 66-seed identity mismatch')
    for index, row in enumerate(old_seeds['functionSeeds']):
        add(row['address'], row['mode'], {'input': pin, 'row': index, 'kind': 'legacy-inventory-candidate', 'oldSources': row['sources']})
    proposals = []
    for lane in LANES:
        packet, pin = snapshot(ROOT / 'evidence/lanes' / lane / 'packet.json', lane)
        for index, row in enumerate(packet['functions']):
            identity = row['canonicalIdentity']
            if identity['moduleSha256'] != MODULE_SHA or identity['programId'] != '0004000e001acb00':
                raise RuntimeError('Native proposal canonical identity mismatch')
            if not row.get('exactObjectSpan') or not row.get('exactLinkedSpan'):
                excluded.append({'lane': lane, 'address': identity['address'], 'reason': 'nonmatching/unsupported source proposal not seeded'})
                continue
            address = identity['address']
            size = row['instructionBytes'] + row.get('poolBytes', 0)
            raw = original[address - 0x100000:address - 0x100000 + size]
            if len(raw) != size or digest(raw) != row['originalSpanSha256']:
                raise RuntimeError('Native proposal whole original span mismatch')
            item = {'address': address, 'mode': identity['mode'], 'size': size, 'lane': lane,
                    'originalSpanSha256': row['originalSpanSha256'], 'input': pin, 'row': index}
            proposals.append(item)
            add(address, identity['mode'], {**item, 'kind': 'exact-source-byte-proposal-analysis-hint-not-admission'})
    accepted, acceptance_pin = snapshot(ROOT / 'evidence/cohorts/bundle001/acceptance.json', 'accepted267')
    pending, pending_pin = snapshot(ROOT / 'evidence/cohorts/bundle002/verification.json', 'proposed356')
    if accepted['acceptedFunctions'] != 267 or pending['sourceLinkedFunctions'] != 356:
        raise RuntimeError('Requested comparison cohort size changed')
    if accepted['moduleSha256'] != MODULE_SHA or pending['moduleSha256'] != MODULE_SHA:
        raise RuntimeError('Comparison cohort module mismatch')
    for address, row in seeds.items():
        if not 0x100000 <= address < 0x100000 + int.from_bytes(header.read_bytes()[0x18:0x1c], 'little'):
            conflicts.append({'address': address, 'reason': 'seed outside initialized text', 'seed': row})
    manifest = {'schemaVersion': 1, 'moduleSha256': MODULE_SHA, 'code': record(original_path), 'exheader': record(header),
                'oldInventory': record(old_path), 'oldSeedCount': 66, 'qualifiedNativeProposalCount': len(proposals),
                'functionSeeds': [seeds[address] for address in sorted(seeds)], 'conflicts': conflicts,
                'excludedProposals': excluded, 'inputPins': inputs, 'qualifiedNativeProposals': proposals,
                'comparisonCohorts': {'accepted267': acceptance_pin, 'proposed356': pending_pin},
                'scope': 'Analysis seeds and comparison hints only; no source proof or changed boundary inputs',
                'acceptedSourceBytes': 0, 'denominatorComplete': False}
    manifest_path = folder / 'seed-manifest.json'
    save(manifest_path, manifest)
    save(EVIDENCE / 'seed-conflicts.json', {'conflicts': conflicts, 'manifest': record(manifest_path)})
    if conflicts:
        raise RuntimeError('Conflicting or invalid seeds; no disassembly launched')
    return manifest_path, manifest, accepted['functions'], pending['functions']


def tool_pins():
    prior = read(ROOT / 'evidence/lanes/inventory-wave001/ghidra-run.json')
    result = []
    for item in prior['toolFiles']:
        old_path = Path(item['path'])
        if '\\jdk\\' in str(old_path):
            suffix = str(old_path).split('jdk-25.0.5+8\\', 1)[1]
            path = ROOT / 'tools/app-shell-jdk25' / suffix
        else:
            path = old_path
        pin = record(path)
        if pin['sha256'] != item['sha256']:
            raise RuntimeError('Qualified Ghidra/JDK tool identity mismatch: ' + str(path))
        result.append({**pin, 'matchesPriorQualification': True, 'priorPath': item['path']})
    return result, Path(prior['reproductionArgv'][0])


def compare(old, new, accepted, pending, proposals):
    old_functions = {row['address']: row for row in old['functions']}
    new_functions = {row['address']: row for row in new['functions']}
    common = sorted(old_functions.keys() & new_functions.keys())
    changed = []
    for address in common:
        before, after = old_functions[address], new_functions[address]
        if before['mode'] != after['mode'] or before['ranges'] != after['ranges']:
            changed.append({'address': address, 'oldMode': before['mode'], 'newMode': after['mode'],
                            'oldRanges': before['ranges'], 'newRanges': after['ranges']})
    text = [[new['initializedTextStart'], new['initializedTextStart'] + new['initializedTextGrossBytes']]]
    old_covered = subtract(text, [[row['start'], row['endExclusive']] for row in old['uncoveredRanges']])
    new_covered = subtract(text, [[row['start'], row['endExclusive']] for row in new['uncoveredRanges']])

    def cohort(rows):
        outcomes = []
        for row in rows:
            address = row['address']
            size = row.get('size', row.get('instructionBytes', 0) + row.get('poolBytes', 0))
            actual = new_functions.get(address)
            exact_range = bool(actual and len(actual['ranges']) == 1 and actual['ranges'][0]['start'] == address
                               and actual['ranges'][0]['endExclusive'] == address + size)
            outcomes.append({'address': address, 'expectedMode': row['mode'], 'expectedBytes': size,
                             'entryFound': actual is not None, 'modeAgrees': bool(actual and actual['mode'] == row['mode']),
                             'exactExpectedRange': exact_range, 'newRanges': actual['ranges'] if actual else [],
                             'status': 'analysis-agreement-not-new-source-proof' if exact_range and actual['mode'] == row['mode'] else 'requires-manual-boundary-review'})
        return {'count': len(outcomes), 'entriesFound': sum(row['entryFound'] for row in outcomes),
                'modesAgree': sum(row['modeAgrees'] for row in outcomes), 'exactRangesAgree': sum(row['exactExpectedRange'] for row in outcomes),
                'functions': outcomes, 'sourceCredit': 0}

    return {'oldFunctionCount': old['functionCount'], 'newFunctionCount': new['functionCount'],
            'oldFunctionBodyUnionBytes': old['functionBodyUnionBytes'], 'newFunctionBodyUnionBytes': new['functionBodyUnionBytes'],
            'coverageGained': interval_report(subtract(new_covered, old_covered)),
            'coverageLost': interval_report(subtract(old_covered, new_covered)),
            'newEntries': [new_functions[address] for address in sorted(new_functions.keys() - old_functions.keys())],
            'removedEntries': [old_functions[address] for address in sorted(old_functions.keys() - new_functions.keys())],
            'changedCommonFunctions': changed, 'modeChangeCount': sum(row['oldMode'] != row['newMode'] for row in changed),
            'boundaryChangeCount': sum(row['oldRanges'] != row['newRanges'] for row in changed),
            'newModeCounts': dict(collections.Counter(row['mode'] for row in new['functions'])),
            'accepted267': cohort(accepted), 'proposed356': cohort(pending), 'allQualifiedNativeProposals': cohort(proposals),
            'denominatorComplete': False, 'acceptedSourceBytes': 0}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--prepare-only', action='store_true')
    args = parser.parse_args()
    WORK.mkdir(parents=True, exist_ok=True)
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    active = WORK / 'active.json'
    if active.exists() and read(active).get('status') == 'running':
        raise RuntimeError('Prior owned run still marked active; inspect it before any new project launch')
    number = 1
    while (WORK / ('run-' + str(number).zfill(3))).exists():
        number += 1
    folder = WORK / ('run-' + str(number).zfill(3))
    folder.mkdir()
    manifest_path, manifest, accepted, pending = prepare_inputs(folder)
    tools, launcher = tool_pins()
    java_source = ROOT / 'toolscripts/ghidra/InventoryWave002.java'
    for name in ['project', 'home', 'settings', 'cache', 'scripts', 'export']:
        (folder / name).mkdir()
    copied_script = folder / 'scripts/InventoryWave002.java'
    shutil.copyfile(java_source, copied_script)
    if copied_script.read_bytes() != java_source.read_bytes():
        raise RuntimeError('Owned script staging mismatch')
    env = os.environ.copy()
    env['JAVA_HOME'] = str(ROOT / 'tools/app-shell-jdk25')
    env['JAVA_TOOL_OPTIONS'] = ' '.join(['-Dapplication.settingsdir=' + (folder / 'settings').as_posix(),
                                      '-Dapplication.cachedir=' + (folder / 'cache').as_posix(),
                                      '-Duser.home=' + (folder / 'home').as_posix(), '-XX:ActiveProcessorCount=2'])
    script_args = [str(folder / 'export'), str(ROOT / 'generated/update-content0/exheader.bin'),
                   str(ROOT / 'generated/update-content0/code.bin'), str(manifest_path)]
    argv = [str(launcher), str(folder / 'project'), 'J3InventoryWave002', '-import', str(ROOT / 'generated/update-content0/code.bin'),
            '-loader', 'BinaryLoader', '-loader-baseAddr', '0x100000', '-processor', 'ARM:LE:32:v6', '-cspec', 'default',
            '-scriptPath', str(folder / 'scripts'), '-preScript', 'InventoryWave002.java', 'prepare', *script_args,
            '-postScript', 'InventoryWave002.java', 'export', *script_args, '-analysisTimeoutPerFile', '480', '-max-cpu', '2',
            '-log', str(folder / 'analysis.log'), '-scriptlog', str(folder / 'script.log')]
    run = {'status': 'prepared-not-launched', 'driver': record(Path(__file__)), 'javaSource': record(java_source),
           'stagedJava': record(copied_script), 'seedManifest': record(manifest_path), 'tools': tools,
           'environment': {key: env[key] for key in ['JAVA_HOME', 'JAVA_TOOL_OPTIONS']}, 'argv': argv,
           'oldGhidraRun': record(ROOT / 'evidence/lanes/inventory-wave001/ghidra-run.json'),
           'analysisTimeoutSeconds': 480, 'processTimeoutSeconds': 660, 'maxCpu': 2,
           'sourceCredit': 0, 'denominatorComplete': False}
    save(folder / 'run.json', run)
    print(json.dumps({'folder': str(folder), 'uniqueSeeds': len(manifest['functionSeeds']),
                      'nativeProposals': len(manifest['qualifiedNativeProposals']), 'status': run['status']}), flush=True)
    if args.prepare_only:
        return
    stdout_path = folder / 'stdout.log'
    start = time.monotonic()
    with stdout_path.open('wb') as output:
        process = subprocess.Popen(['cmd.exe', '/d', '/c', *argv], cwd=ROOT, env=env, stdout=output, stderr=subprocess.STDOUT,
                                   creationflags=subprocess.CREATE_NO_WINDOW)
        save(active, {'status': 'running', 'pid': process.pid, 'run': str(folder)})
        try:
            exit_code = process.wait(timeout=660)
            run['processTimedOut'] = False
        except subprocess.TimeoutExpired:
            subprocess.run(['taskkill', '/PID', str(process.pid), '/T', '/F'], capture_output=True)
            process.wait(timeout=30)
            exit_code = process.returncode
            run['processTimedOut'] = True
    run['processExitCode'] = exit_code
    run['elapsedSeconds'] = round(time.monotonic() - start, 3)
    logs = [path for path in [stdout_path, folder / 'analysis.log', folder / 'script.log'] if path.exists()]
    run['logs'] = [record(path) for path in logs]
    lines = stdout_path.read_text(encoding='utf-8', errors='replace').splitlines()
    run['warningsAndErrors'] = [line for line in lines if any(token in line.lower() for token in ['warn', 'error', 'exception', 'failed', 'overlap', 'uninitialized'])]
    prep_path, export_path = folder / 'export/preparation.json', folder / 'export/ghidra-functions.json'
    preparation = read(prep_path) if prep_path.exists() else {}
    success = (exit_code == 0 and not run['processTimedOut'] and preparation.get('preparationSucceeded') is True
               and preparation.get('allContextsInstalledBeforeAnyDisassembly') is True
               and preparation.get('instructionCountWhenAllContextsVerified') == 0
               and preparation.get('contextsInstalled') == len(manifest['functionSeeds'])
               and not preparation.get('conflicts') and export_path.exists()
               and any('INVENTORY_WAVE002_PREPARATION_SUCCESS' in line for line in lines)
               and any('INVENTORY_WAVE002_EXPORT_SUCCESS' in line for line in lines))
    run['explicitPreparationSucceeded'] = bool(preparation.get('preparationSucceeded'))
    run['status'] = 'qualified-analysis-for-review' if success else 'failed-analysis-preserved'
    save(folder / 'run.json', run)
    save(active, {'status': run['status'], 'pid': process.pid, 'run': str(folder)})
    save(EVIDENCE / 'ghidra-run.json', run)
    if not success:
        raise RuntimeError('Explicit preparation/export qualification failed; inspect preserved owned run')
    census = read(export_path)
    if census['codeSha256'] != MODULE_SHA or census['exheaderSha256'] != HEADER_SHA or census['seedManifestSha256'] != record(manifest_path)['sha256']:
        raise RuntimeError('Export input identities differ from frozen launch')
    old = read(ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json')
    differences = compare(old, census, accepted, pending, manifest['qualifiedNativeProposals'])
    save(EVIDENCE / 'comparison.json', differences)
    for source, name in [(manifest_path, 'seed-manifest.json'), (prep_path, 'preparation.json'), (export_path, 'ghidra-functions.json')]:
        shutil.copyfile(source, EVIDENCE / name)
    packet = {'status': 'analysis-only-frozen-for-review', 'driver': record(Path(__file__)), 'java': record(java_source),
              'run': record(EVIDENCE / 'ghidra-run.json'), 'seeds': record(EVIDENCE / 'seed-manifest.json'),
              'preparation': record(EVIDENCE / 'preparation.json'), 'census': record(EVIDENCE / 'ghidra-functions.json'),
              'comparison': record(EVIDENCE / 'comparison.json'), 'oldInventory': record(ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json'),
              'acceptedSourceBytes': 0, 'denominatorComplete': False,
              'oldBoundaryAndSourceInputsReplaced': False,
              'limitations': ['Preparation success certifies context phase, not every seed function boundary',
                             'Analyzer mode/body coverage remains fallible; no executable denominator lock',
                             'Accepted/proposed cohort comparisons do not grant or revoke source acceptance']}
    save(EVIDENCE / 'packet.json', packet)
    print(json.dumps({'functions': census['functionCount'], 'bodyUnionBytes': census['functionBodyUnionBytes'],
                      'preparationSucceeded': True, 'sourceCredit': 0}), flush=True)


if __name__ == '__main__':
    main()
