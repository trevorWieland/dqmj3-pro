import argparse
import concurrent.futures
import hashlib
import json
import os
import shutil
import subprocess
import time
from pathlib import Path

import capstone
from capstone.arm import ARM_OP_IMM, ARM_OP_MEM, ARM_OP_REG, ARM_REG_PC

import ghidra_inventory_wave002 as qualified
import native_inventory_complete as inventory


ROOT = inventory.ROOT
WORK = ROOT / 'work/native-inventory-seeded'
EVIDENCE = ROOT / 'evidence/lanes/native-inventory-completion/seeded'


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def constructor_table(label):
    metadata = inventory.read(ROOT / f'evidence/inventory/{label}-content0.json')
    native = inventory.read(ROOT / f'evidence/lanes/inventory-wave001/{label}-native.json')
    code = (ROOT / f'generated/{label}-content0/code.bin').read_bytes()
    if sha(code) != metadata['codeSha256'] or native['codeSha256'] != metadata['codeSha256']:
        raise ValueError('Constructor discovery input identity differs')
    segments = metadata['layout']['segments']

    def offset(address, size):
        for row in segments:
            if row['address'] <= address and address + size <= row['address'] + row['initializedBytes']:
                return row['codeBinOffset'] + address - row['address']
        raise ValueError('Constructor read outside initialized segment')

    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_THUMB)
    engine.detail = True
    candidates = []
    for call in native['entryGraph']['directCalls']:
        if call['targetMode'] != 'Thumb':
            continue
        address = call['targetAddress']
        begin = offset(address, 64)
        instructions = list(engine.disasm(code[begin:begin + 64], address))
        stop = next((i for i, row in enumerate(instructions) if row.mnemonic == 'pop' and 'pc' in row.op_str), None)
        if stop is None:
            continue
        instructions = instructions[:stop + 1]
        expected = ['push', 'ldr', 'add', 'ldr', 'add', 'b', 'ldr', 'adds', 'blx', 'adds', 'cmp', 'bne', 'pop']
        if [row.mnemonic for row in instructions] != expected:
            continue
        if [row.op_str for row in instructions[6:12]] != ['r0, [r4]', 'r0, r0, r4', 'r0', 'r4, r4, #4', 'r4, r5', '#0x' + format(address + 12, 'x')]:
            raise ValueError('Constructor iteration semantics differ from qualified signed-slot reader')
        bounds, literal_addresses = [], []
        for load_index, add_index, register in [(1, 2, 'r4'), (3, 4, 'r5')]:
            load, add = instructions[load_index], instructions[add_index]
            if len(load.operands) != 2 or load.operands[0].type != ARM_OP_REG or load.reg_name(load.operands[0].reg) != register:
                raise ValueError('Constructor table bound register mismatch')
            memory = load.operands[1]
            if memory.type != ARM_OP_MEM or memory.mem.base != ARM_REG_PC or add.op_str != register + ', pc':
                raise ValueError('Constructor table bound is not a reviewed PC-relative load/add')
            literal = ((load.address + 4) & ~3) + memory.mem.disp
            position = offset(literal, 4)
            value = int.from_bytes(code[position:position + 4], 'little')
            bounds.append((value + add.address + 4) & 0xffffffff)
            literal_addresses.append(literal)
        start, end = bounds
        if start % 4 or end % 4 or not 0 < end - start <= 32768:
            raise ValueError('Constructor table bounds invalid')
        position = offset(start, end - start)
        raw = code[position:position + end - start]
        text = next(row for row in segments if row['name'] == 'text')
        seeds = inventory.relative_seeds(raw, start, text['address'], text['address'] + text['initializedBytes'])
        reader_end = instructions[-1].address + instructions[-1].size
        candidates.append({'label': label, 'programId': metadata['programId'], 'moduleSha256': metadata['codeSha256'],
                           'exheaderSha256': metadata['exheaderSha256'], 'startupCaller': call,
                           'reader': {'address': address, 'endExclusive': reader_end, 'mode': 'Thumb',
                                      'sha256': sha(code[begin:begin + reader_end - address]), 'literalAddresses': literal_addresses},
                           'table': {'address': start, 'endExclusive': end, 'bytes': len(raw), 'sha256': sha(raw),
                                     'encoding': 'signed-rel32-to-own-slot', 'entries': len(seeds)},
                           'functionSeeds': seeds, 'exactFunctionExtentsEstablished': False, 'sourceCredit': 0})
    if len(candidates) != 1:
        raise ValueError('Expected one independently qualified startup constructor reader')
    return candidates[0]


def prepare(label, folder):
    for name in ['project', 'home', 'settings', 'cache', 'scripts', 'export', 'inputs']:
        (folder / name).mkdir()
    metadata = inventory.read(ROOT / f'evidence/inventory/{label}-content0.json')
    for name, key in [('code.bin', 'codeSha256'), ('exheader.bin', 'exheaderSha256')]:
        source = ROOT / f'generated/{label}-content0' / name
        if inventory.digest(source) != metadata[key]:
            raise ValueError('Seeded-analysis native input changed')
        shutil.copyfile(source, folder / 'inputs' / name)
    discovered = constructor_table(label)
    inventory.save(EVIDENCE / f'{label}-constructor-seeds.json', discovered)
    seeds = {}
    legacy_path = (ROOT / 'evidence/lanes/inventory-wave002/seed-manifest.json' if label == 'update'
                   else ROOT / 'evidence/lanes/inventory-wave001/base-native.json')
    legacy = inventory.read(legacy_path)
    for row in legacy['functionSeeds'] + discovered['functionSeeds']:
        address, mode = row['address'], row['mode']
        if address in seeds and seeds[address]['mode'] != mode:
            raise ValueError('Contradictory original/constructor ARM-Thumb seed modes')
        seeds[address] = {'address': address, 'mode': mode}
    manifest = {'label': label, 'moduleSha256': metadata['codeSha256'], 'functionSeeds': [seeds[key] for key in sorted(seeds)],
                'legacySeeds': inventory.pin(legacy_path), 'constructorSeeds': inventory.pin(EVIDENCE / f'{label}-constructor-seeds.json'),
                'inputs': [inventory.pin(folder / 'inputs' / name) for name in ['code.bin', 'exheader.bin']],
                'sourceCredit': 0, 'functionBoundaryCompleteness': False}
    inventory.save(folder / 'inputs/manifest.json', manifest)
    java = ROOT / 'toolscripts/ghidra/NativeInventoryDetail.java'
    shutil.copyfile(java, folder / 'scripts/NativeInventoryDetail.java')
    return manifest


def analyze(label, analysis_budget, process_budget):
    folder = WORK / (label + '-' + time.strftime('%Y%m%d-%H%M%S'))
    folder.mkdir(parents=True)
    manifest = prepare(label, folder)
    pins, launcher = qualified.tool_pins()
    environment = os.environ.copy()
    environment['JAVA_HOME'] = str(ROOT / 'tools/app-shell-jdk25')
    environment['JAVA_TOOL_OPTIONS'] = ' '.join(['-Dapplication.settingsdir=' + (folder / 'settings').as_posix(),
                                               '-Dapplication.cachedir=' + (folder / 'cache').as_posix(),
                                               '-Duser.home=' + (folder / 'home').as_posix(), '-XX:ActiveProcessorCount=2'])
    arguments = [str(folder / 'export'), str(folder / 'inputs/exheader.bin'), str(folder / 'inputs/code.bin'), str(folder / 'inputs/manifest.json')]
    command = [str(launcher), str(folder / 'project'), 'J3Seeded' + label.capitalize(), '-import', str(folder / 'inputs/code.bin'),
               '-loader', 'BinaryLoader', '-loader-baseAddr', '0x100000', '-processor', 'ARM:LE:32:v6', '-cspec', 'default',
               '-scriptPath', str(folder / 'scripts'), '-preScript', 'NativeInventoryDetail.java', 'prepare', *arguments,
               '-postScript', 'NativeInventoryDetail.java', 'export', *arguments,
               '-analysisTimeoutPerFile', str(analysis_budget), '-max-cpu', '2',
               '-log', str(folder / 'analysis.log'), '-scriptlog', str(folder / 'script.log')]
    receipt = {'status': 'running', 'label': label, 'command': command, 'driver': inventory.pin(Path(__file__)),
               'java': inventory.pin(folder / 'scripts/NativeInventoryDetail.java'), 'manifest': inventory.pin(folder / 'inputs/manifest.json'),
               'tools': pins, 'analysisBudgetSeconds': analysis_budget, 'processBudgetSeconds': process_budget,
               'seedCount': len(manifest['functionSeeds']), 'sourceCredit': 0}
    inventory.save(folder / 'run.json', receipt)
    print(json.dumps({'label': label, 'status': 'started', 'seedCount': receipt['seedCount'], 'folder': str(folder)}), flush=True)
    started = time.monotonic()
    with (folder / 'stdout.log').open('wb') as output:
        process = subprocess.Popen(['cmd.exe', '/d', '/c', *command], cwd=ROOT, env=environment, stdout=output,
                                   stderr=subprocess.STDOUT, creationflags=subprocess.CREATE_NO_WINDOW)
        try:
            return_code = process.wait(timeout=process_budget)
            timed_out = False
        except subprocess.TimeoutExpired:
            subprocess.run(['taskkill', '/PID', str(process.pid), '/T', '/F'], capture_output=True)
            process.wait(timeout=30)
            return_code, timed_out = process.returncode, True
    lines = (folder / 'stdout.log').read_text(encoding='utf-8', errors='replace').splitlines()
    preparation_path = folder / 'export/preparation.json'
    preparation = inventory.read(preparation_path) if preparation_path.exists() else {}
    census_path = folder / 'export/ghidra-functions.json'
    analysis_timeout = any('timed out' in line.lower() for line in lines)
    success = (return_code == 0 and not timed_out and not analysis_timeout and census_path.exists()
               and preparation.get('preparationSucceeded') is True
               and preparation.get('allContextsInstalledBeforeAnyDisassembly') is True
               and preparation.get('contextsInstalled') == len(manifest['functionSeeds'])
               and any('NATIVE_INVENTORY_DETAIL_EXPORT_SUCCESS' in line for line in lines)
               and any('REPORT: Analysis succeeded for file:' in line for line in lines))
    receipt.update({'status': 'qualified-seeded-analysis' if success else 'failed-analysis-preserved',
                    'processExitCode': return_code, 'processTimedOut': timed_out, 'analysisTimedOut': analysis_timeout,
                    'elapsedSeconds': round(time.monotonic() - started, 3),
                    'warningCount': sum('warn' in line.lower() for line in lines), 'errorCount': sum('error' in line.lower() for line in lines),
                    'privateStdout': inventory.pin(folder / 'stdout.log')})
    inventory.save(folder / 'run.json', receipt)
    inventory.save(EVIDENCE / f'{label}-run.json', receipt)
    if census_path.exists():
        census = inventory.read(census_path)
        metadata = inventory.read(ROOT / f'evidence/inventory/{label}-content0.json')
        if (census['codeSha256'], census['exheaderSha256']) != (metadata['codeSha256'], metadata['exheaderSha256']):
            raise ValueError('Seeded census image identity changed')
        for source, suffix in [(census_path, 'census.json'), (preparation_path, 'preparation.json'),
                               (folder / 'inputs/manifest.json', 'manifest.json')]:
            shutil.copyfile(source, EVIDENCE / (label + '-' + suffix))
        receipt['candidateFunctions'] = census['functionCount']
        receipt['bodyBytes'] = census['functionBodyUnionBytes']
        receipt['unclassifiedTextBytes'] = census['unclassifiedTextBytes']
        inventory.save(EVIDENCE / f'{label}-run.json', receipt)
    print(json.dumps({key: receipt.get(key) for key in ['label', 'status', 'candidateFunctions', 'bodyBytes', 'unclassifiedTextBytes']}), flush=True)
    return success


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--label', action='append', choices=['base', 'update'])
    parser.add_argument('--discover-only', action='store_true')
    parser.add_argument('--analysis-budget-seconds', type=int, default=1200)
    parser.add_argument('--process-budget-seconds', type=int, default=1500)
    args = parser.parse_args()
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    labels = args.label or ['base', 'update']
    if args.discover_only:
        for label in labels:
            finding = constructor_table(label)
            inventory.save(EVIDENCE / f'{label}-constructor-seeds.json', finding)
            print(json.dumps({'label': label, 'table': finding['table'], 'reader': finding['reader']}))
        return
    if args.analysis_budget_seconds < 60 or args.process_budget_seconds < args.analysis_budget_seconds + 120:
        raise ValueError('Analysis/process budgets invalid')
    with concurrent.futures.ThreadPoolExecutor(max_workers=len(labels)) as executor:
        futures = [executor.submit(analyze, label, args.analysis_budget_seconds, args.process_budget_seconds) for label in labels]
        outcomes = [future.result() for future in futures]
    if not all(outcomes):
        raise RuntimeError('One or more seeded analyses did not qualify; evidence preserved')


if __name__ == '__main__':
    main()
