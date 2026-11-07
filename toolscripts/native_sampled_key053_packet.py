import argparse
import importlib.metadata
import json
import os
import platform
import struct
import subprocess
import sys
import time
from pathlib import Path

import capstone
import unicorn
from elftools.elf.elffile import ELFFile

from native_sampled_key053_build import build
from native_sampled_key053_cases import cases, fixture, floor_patterns, normalized_target
from native_sampled_key053_controls import run as controls
from native_sampled_key053_domain import validate
from native_sampled_key053_elf import graph, object_record, public_graph
from native_sampled_key053_measure import ROOT, ENTRIES, pin, digest
from native_sampled_key053_reference import run as reference
from native_sampled_key053_source import run as source
from native_sampled_key053_windows import Native
from native_sampled_key053_verify import verify


def save(path, value):
    path.write_text(json.dumps(value, indent=2) + '\n')


def identities():
    selected = [*ROOT.joinpath('src/native/wave053').glob('*'),
                *ROOT.joinpath('toolscripts').glob('native_sampled_key053*.py'),
                ROOT / 'tests/test_native_sampled_key053.py', ROOT / 'docs/native-sampled-key053.md',
                *ROOT.joinpath('evidence/lanes/native-sampled-key053').glob('*.json'),
                *ROOT.joinpath('evidence/lanes/native-sampled-key053/history').glob('*')]
    selected += [ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json',
                 ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe']
    return [pin(path) for path in sorted(set(selected)) if path.is_file()]


def pic_record(path):
    with path.open('rb') as stream:
        elf = ELFFile(stream)
        loads = [{'virtualAddress': item['p_vaddr'], 'offset': item['p_offset'],
                  'fileBytes': item['p_filesz'], 'memoryBytes': item['p_memsz'],
                  'alignment': item['p_align']} for item in elf.iter_segments()
                 if item['p_type'] == 'PT_LOAD']
        undefined = [row.name for row in elf.get_section_by_name('.dynsym').iter_symbols()
                     if row.name and row['st_shndx'] == 'SHN_UNDEF']
        if undefined or not loads or any(row['alignment'] < 16384 or
            (row['virtualAddress'] - row['offset']) % 16384 for row in loads):
            raise ValueError('Android PIC component has unresolved symbols or bad page alignment')
        return {'artifact': pin(path), 'loads': loads, 'undefinedSymbols': undefined,
                'androidOsOrDeviceExecuted': False, 'sourceOnlyComponent': True}


def run(work, output):
    started = time.monotonic()
    work.mkdir(parents=True, exist_ok=True)
    output.mkdir(parents=True, exist_ok=True)
    inputs = identities()
    claim_path = ROOT / 'evidence/lanes/native-sampled-key053/claim.json'
    claim = json.loads(claim_path.read_text())
    receipts = []
    artifacts = {profile: build(work / profile, profile, receipts)
                 for profile in ['arm', 'windows', 'a64', 'android']}
    graphs = {profile: graph(artifacts[profile]) for profile in ['arm', 'a64']}
    native = Native(artifacts['windows'])
    rows, observed = [], set()
    for index, case in enumerate(cases()):
        validate(case)
        original = reference(case['entry'], case['header'], case['keys'], case['state'], case['position'])
        expected = normalized_target(original['output'])
        results = {'windows': native.run(case),
                   **{profile: source(value, case) for profile, value in graphs.items()}}
        if any(row['result'] != expected for row in results.values()):
            save(work / 'unexpected-case-mismatch.json',
                 {'caseIndex': index, 'original': expected,
                  'sources': {name: row['result'] for name, row in results.items()}})
            raise ValueError('Authored sampled-key result differs from original')
        observed.update(original['executed'])
        rows.append({'caseIndex': index, 'entry': case['entry'],
                     'formatIndex': case['formatIndex'], 'positionBits': struct.unpack('<I', struct.pack('<f', case['position']))[0],
                     'headerSha256': digest(case['header']), 'keysSha256': digest(case['keys']),
                     'initialStateSha256': digest(case['state']), 'keyCount': case['keyCount'],
                     'original': expected,
                     'sources': {name: {key: value for key, value in row.items()
                                        if key not in ['executed', 'resultFloatBits']}
                                 for name, row in results.items()},
                     'originalReturnedNormally': original['returnedNormally'],
                     'originalCalleeSavedGuardsPreserved': original['calleeSavedGuardsPreserved']})
        if (index + 1) % 576 == 0:
            print(json.dumps({'phase': 'segment-cases', 'passed': index + 1,
                              'elapsedSeconds': time.monotonic() - started}), flush=True)
    if len(rows) != 4608:
        raise ValueError('Declared sampled-key fixture population differs')
    save(output / 'case-rows.json', {'cases': len(rows), 'rows': rows})
    floor_rows = []
    for index, bits in enumerate(floor_patterns()):
        case = fixture(0, 0, 0, 0)
        case['entry'], case['positionBits'] = 0x6FA358, bits
        original = reference(case['entry'], case['header'], case['keys'], case['state'], 0, position_bits=bits)
        values = {profile: source(value, case)['resultFloatBits'] for profile, value in graphs.items()}
        values['windows'] = native.floor(bits)
        if any(value != original['resultFloatBits'] for value in values.values()):
            raise ValueError('Authored floor bit result differs from original: ' + hex(bits))
        observed.update(original['executed'])
        floor_rows.append({'inputBits': bits, 'originalResultBits': original['resultFloatBits'],
                           'sourceResultBits': values})
        if (index + 1) % 512 == 0:
            print(json.dumps({'phase': 'floor-patterns', 'passed': index + 1,
                              'elapsedSeconds': time.monotonic() - started}), flush=True)
    save(output / 'floor-rows.json', {'patterns': len(floor_rows), 'rows': floor_rows,
                                     'floatingPointStatusEquivalenceClaimed': False})
    negative = controls(work / 'controls', receipts)
    save(output / 'returning-controls.json', negative)
    environment = dict(os.environ, SAMPLED_KEY053_BUILD=str(work))
    argv = [sys.executable, '-m', 'unittest', 'discover', '-s', 'tests', '-p', 'test_native_sampled_key053.py', '-v']
    tested = subprocess.run(argv, cwd=ROOT, env=environment, capture_output=True, timeout=180)
    log = work / 'tests.log'
    log.write_bytes(tested.stdout + tested.stderr)
    if tested.returncode or b'Ran 19 tests' not in tested.stdout + tested.stderr or b'skipped=' in tested.stdout + tested.stderr:
        raise ValueError('Actual Windows sampled-key tests did not all pass')
    functions = []
    for row in claim['functions']:
        addresses = {address for span in row['instructionRanges']
                     for address in range(span['start'], span['endExclusive'], 4)}
        symbol = 'fn_' + format(row['entry'], '08x')
        functions.append({**row, 'sourceSymbol': symbol,
                          'observedInstructionAddresses': sorted(addresses & observed),
                          'unobservedInstructionAddresses': sorted(addresses - observed),
                          'sourceArmFunction': graphs['arm']['functions'][symbol]})
    object_records = {profile: [object_record(path) for path in sorted((work / profile).glob('*.o'))]
                      for profile in ['arm', 'a64']}
    packet = {'schemaVersion': 1, 'status': 'frozen-bounded-sampled-key-candidate-not-admission',
              'producer': pin(Path(__file__)), 'inputs': inputs, 'claim': pin(claim_path),
              'moduleSha256': claim['moduleSha256'], 'candidateFunctions': 9,
              'candidateInstructionBytes': 11000, 'functions': functions,
              'originalInputIdentity': pin(ROOT / 'generated/update-content0/code.bin'),
              'caseRows': pin(output / 'case-rows.json'), 'floorRows': pin(output / 'floor-rows.json'),
              'returningControls': pin(output / 'returning-controls.json'),
              'sourceGraphs': {name: public_graph(value) for name, value in graphs.items()},
              'sourceObjects': object_records, 'windowsDll': pin(artifacts['windows']),
              'windowsObjects': [pin(path) for path in sorted((work / 'windows').glob('*.obj'))],
              'androidPicComponent': pic_record(artifacts['android']),
              'windowsCompiledLayout': native.layout, 'compilerReceipts': receipts,
              'testReceipt': {'argv': argv, 'exitCode': tested.returncode, 'log': pin(log), 'actualWindowsTestsPassed': 19},
              'tools': {'pythonVersion': platform.python_version(), 'pythonExecutable': pin(Path(sys.executable)),
                        'unicornDistribution': importlib.metadata.version('unicorn'),
                        'unicornInterface': unicorn.__version__, 'unicornRuntime': unicorn.uc_version(),
                        'capstoneDistribution': importlib.metadata.version('capstone'),
                        'capstoneInterface': capstone.__version__, 'capstoneRuntime': capstone.cs_version()},
              'segmentCases': len(rows), 'floorBitPatterns': len(floor_rows),
              'returningControlsCount': negative['controlCount'], 'returningControlExecutions': negative['sourcePlatformExecutions'],
              'actualWindowsExecution': True, 'highAarch64Execution': True,
              'windowsCalleeSavedRegistersDirectlyObserved': False,
              'sourceMapsOriginalImageOrSdk': False, 'originalRegisterReturnContractQualified': False,
              'selectorAndGameReachabilityQualified': False, 'animationIdentityQualified': False,
              'originalTargetInputBytes': 36, 'nativeInputBytes': 40,
              'originalTargetResultBytes': 32, 'nativeResultBytes': 40,
              'floatingPointStatusEquivalenceClaimed': False, 'arbitraryUnsafeInputEquivalenceClaimed': False,
              'wholeMemoryEquivalenceClaimed': False, 'universalEquivalenceClaimed': False,
              'completeNativeGameQualified': False, 'androidOsOrDeviceExecuted': False,
              'sourceCreditGranted': 0, 'matchingCreditGranted': 0, 'sdkCreditGranted': 0,
              'elapsedSeconds': time.monotonic() - started}
    for row in inputs:
        if pin(ROOT / row['path']) != row:
            raise ValueError('Sampled-key input changed while sealing: ' + row['path'])
    save(output / 'packet.json', packet)
    save(output / 'verification.json', verify(ROOT, output / 'packet.json'))
    frozen = [*inputs, *[pin(path) for path in output.glob('*.json')]]
    save(output / 'frozen-manifest.json', {'schemaVersion': 1, 'status': 'frozen-worker-candidate-not-admission',
                                         'files': list({row['path']: row for row in frozen}.values())})
    ready = {'status': 'ready-for-independent-coordinator-replay', 'packet': pin(output / 'packet.json'),
             'verification': pin(output / 'verification.json'), 'manifest': pin(output / 'frozen-manifest.json'),
             'candidateFunctions': 9, 'candidateInstructionBytes': 11000,
             'sourceCreditGranted': 0, 'elapsedSeconds': time.monotonic() - started}
    save(output / 'ready.json', ready)
    print(json.dumps(ready), flush=True)


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=ROOT / 'work/sampled-key053/sealing-v1')
    parser.add_argument('--output', type=Path, default=ROOT / 'evidence/lanes/native-sampled-key053/stage-v1')
    args = parser.parse_args()
    run(args.work.resolve(), args.output.resolve())
