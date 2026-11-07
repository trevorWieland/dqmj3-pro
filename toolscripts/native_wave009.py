import argparse
import bisect
import ctypes
import hashlib
import importlib.metadata
import io
import json
import re
import subprocess
import sys
from pathlib import Path

import capstone
import unicorn
from capstone.arm import ARM_INS_BL, ARM_INS_BLX, ARM_OP_IMM
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection

import native_wave009_oracle as oracle


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/wave009-native'
OUT = ROOT / 'evidence/lanes/wave009-native'
SOURCE = ROOT / 'src/native/wave009/interval_set.c'
HEADER = ROOT / 'src/native/wave009/interval_set.h'
CENSUS = ROOT / 'evidence/lanes/native-inventory-completion/seeded/update-census.json'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
ADDRESSES = [0x780578, 0x7805e4]
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2', '-std=c11', '-ffreestanding',
         '-fno-builtin', '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables',
         '-Wall', '-Wextra', '-Werror']


def sha(raw):
    return hashlib.sha256(raw).hexdigest()


def record(path):
    return {'path': path.resolve().relative_to(ROOT).as_posix(), 'sha256': sha(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def command(arguments, log, receipts):
    process = subprocess.run([str(item) for item in arguments], capture_output=True, timeout=120)
    log.write_bytes(process.stdout + process.stderr)
    receipt = {'argv': [str(item) for item in arguments], 'exitCode': process.returncode, 'privateLog': record(log)}
    receipts.append(receipt)
    if process.returncode or process.stderr:
        raise RuntimeError('Compiler/linker failure or diagnostic; private log retained')


def functions(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf['e_machine'] != 'EM_ARM' or not elf.little_endian:
        raise ValueError('Expected an ARM little-endian ELF object')
    table = elf.get_section_by_name('.symtab')
    undefined = [symbol.name for symbol in table.iter_symbols() if symbol.name and symbol['st_shndx'] == 'SHN_UNDEF']
    if undefined:
        raise ValueError('Closed membership source has unresolved symbols')
    result = {}
    for symbol in table.iter_symbols():
        if not symbol.name.startswith('fn_') or not isinstance(symbol['st_shndx'], int):
            continue
        section = elf.get_section(symbol['st_shndx'])
        offset = (symbol['st_value'] & ~1) - section['sh_addr']
        relocations = [entry for rel in elf.iter_sections() if isinstance(rel, RelocationSection)
                       and rel['sh_info'] == symbol['st_shndx'] for entry in rel.iter_relocations()]
        if relocations or symbol['st_value'] & 1:
            raise ValueError('Unexpected relocation or Thumb symbol in closed ARM membership object')
        address = int(symbol.name[3:], 16)
        result[address] = {'symbol': symbol.name, 'section': section.name, 'address': symbol['st_value'],
                           'size': symbol['st_size'], 'sectionBytes': section['sh_size'],
                           'raw': section.data()[offset:offset + symbol['st_size']]}
    if set(result) != set(ADDRESSES):
        raise ValueError('Membership object omits or adds a claimed function')
    return result


def boundaries(image, census):
    by_address = {row['address']: row for row in census['functions']}
    instruction_ranges = census['instructionRanges']
    starts = [row['start'] for row in instruction_ranges]
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    result = []
    for address in ADDRESSES:
        function = by_address[address]
        if function['mode'] != 'ARM' or function['ranges'] != [{'start': address, 'bytes': 108, 'endExclusive': address + 108}]:
            raise ValueError('Claimed membership function boundary changed')
        raw = image[address - 0x100000:address - 0x100000 + 108]
        instructions = list(engine.disasm(raw, address))
        if len(instructions) != 27 or any('[pc' in item.op_str or item.id in [ARM_INS_BL, ARM_INS_BLX] for item in instructions):
            raise ValueError('Membership instruction/pool/dependency closure changed')
        if any(item.operands and item.operands[-1].type == ARM_OP_IMM and item.mnemonic.startswith('b')
               and not address <= item.operands[-1].imm < address + 108 for item in instructions):
            raise ValueError('Unexpected outgoing branch in closed membership routine')
        witnesses = []
        for caller in census['functions']:
            if address not in caller['calledFunctionAddresses'] or caller['mode'] != 'ARM':
                continue
            for extent in caller['ranges']:
                for site in range(extent['start'], extent['endExclusive'] - 3, 4):
                    index = bisect.bisect_right(starts, site) - 1
                    if index < 0 or site + 4 > instruction_ranges[index]['endExclusive']:
                        continue
                    instruction = next(engine.disasm(image[site - 0x100000:site - 0x100000 + 4], site, count=1), None)
                    if instruction and instruction.id in [ARM_INS_BL, ARM_INS_BLX] and instruction.operands[0].type == ARM_OP_IMM and instruction.operands[0].imm == address:
                        witnesses.append({'callerFunction': caller['address'], 'callsite': site,
                                          'callsiteSha256': sha(image[site - 0x100000:site - 0x100000 + 4])})
        if not witnesses:
            raise ValueError('Missing actual direct caller witness')
        result.append({'address': address, 'mode': 'ARM', 'bytes': 108, 'endExclusive': address + 108,
                       'sha256': sha(raw), 'ghidraRanges': function['ranges'], 'callerWitnesses': witnesses,
                       'instructionBytes': 108, 'poolBytes': 0, 'outgoingDependencies': [],
                       'semanticRole': 'tagged singleton or inclusive circular interval-set membership'})
    return result


def platform(source, build, cases, receipts):
    clang, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    windows_object, dll = build / 'interval_set.windows.obj', build / 'interval_set.dll'
    command([clang, '--target=x86_64-pc-windows-msvc', '-O2', '-std=c11', '-ffreestanding', '-fno-builtin',
             '-Wall', '-Wextra', '-Werror', '-c', source, '-o', windows_object], build / 'windows-compile.log', receipts)
    command([linker, '-flavor', 'link', '/dll', '/noentry', '/machine:x64', '/nodefaultlib', '/out:' + str(dll),
             *['/export:fn_' + format(address, '08x') for address in ADDRESSES], windows_object], build / 'windows-link.log', receipts)
    library = ctypes.CDLL(str(dll))
    for address in ADDRESSES:
        function = getattr(library, 'fn_' + format(address, '08x'))
        function.argtypes = [ctypes.POINTER(oracle.NativeSet), ctypes.c_uint]
        function.restype = ctypes.c_int
        for case in cases:
            oracle.execute_windows(function, case)
    android_object, shared = build / 'interval_set.android.o', build / 'libinterval_set.so'
    command([clang, '--target=aarch64-linux-android29', '-O2', '-std=c11', '-ffreestanding', '-fno-builtin', '-fPIC',
             '-Wall', '-Wextra', '-Werror', '-c', source, '-o', android_object], build / 'android-compile.log', receipts)
    command([linker, '-shared', '--no-undefined', '-z', 'max-page-size=16384', '-soname', 'libinterval_set.so',
             '-o', shared, android_object], build / 'android-link.log', receipts)
    elf = ELFFile(io.BytesIO(shared.read_bytes()))
    loads = [segment['p_align'] for segment in elf.iter_segments() if segment['p_type'] == 'PT_LOAD']
    if elf['e_machine'] != 'EM_AARCH64' or not loads or any(value < 16384 for value in loads):
        raise ValueError('Android component architecture or 16 KiB segment alignment differs')
    return {'windowsNativeExecution': True, 'windowsCasesPerFunction': len(cases), 'windowsDll': record(dll),
            'androidArm64Api29Build': True, 'androidSharedLibrary': record(shared), 'androidLoadAlignments': loads,
            'androidDeviceExecution': False, 'wholeGameBuildOrExecution': False}


def build_packet(build, output):
    build.mkdir(parents=True, exist_ok=True)
    OUT.mkdir(parents=True, exist_ok=True)
    image_path = ROOT / 'generated/update-content0/code.bin'
    image, census = image_path.read_bytes(), json.loads(CENSUS.read_text())
    if sha(image) != MODULE_SHA or census['codeSha256'] != MODULE_SHA:
        raise ValueError('Canonical original/census module identity differs')
    rows = boundaries(image, census)
    claim = {'schemaVersion': 1, 'lane': 'wave009-native', 'programId': '0004000e001acb00',
             'moduleSha256': MODULE_SHA, 'census': record(CENSUS), 'intervals': rows,
             'exclusiveSourceRoot': 'src/native/wave009', 'sourceCreditRequested': 0,
             'behaviorDomain': 'Valid aligned typed objects; finite circular lists of 0..128 nodes; arbitrary u32 query, u8 tag and u16 bounds; no concurrent mutation'}
    save(OUT / 'claim.json', claim)
    receipts = []
    clang, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    obj, linked = build / 'interval_set.o', build / 'interval_set.elf'
    command([clang, *FLAGS, '-c', SOURCE, '-o', obj], build / 'compile.log', receipts)
    compiled = functions(obj)
    script = build / 'membership.ld'
    script.write_text('SECTIONS {\n' + '\n'.join('.text.fn_' + format(address, '08x') + ' ' + hex(address)
                      + ' : { KEEP(*(.text.fn_' + format(address, '08x') + ')) }' for address in ADDRESSES)
                      + '\n/DISCARD/ : { *(.ARM.exidx*) *(.ARM.extab*) *(.comment) *(.note*) *(.llvm_addrsig) }\n}\n')
    command([linker, '-m', 'armelf', '--no-undefined', '--build-id=none', '--entry=fn_00780578',
             '-T', script, obj, '-o', linked], build / 'link.log', receipts)
    placements = functions(linked)
    for address in ADDRESSES:
        if placements[address]['address'] != address or placements[address]['raw'] != compiled[address]['raw']:
            raise ValueError('Genuine candidate source-link placement changed')
    wrong = {}
    for name, before, after in [('upper-bound', 'value <= node->last', 'value < node->last'),
                                ('singleton', 'set->value == value', 'set->value != value')]:
        source, destination = build / ('wrong-' + name + '.c'), build / ('wrong-' + name + '.o')
        source.write_text(SOURCE.read_text().replace(before, after))
        command([clang, *FLAGS, '-I', HEADER.parent, '-c', source, '-o', destination], build / ('wrong-' + name + '.log'), receipts)
        wrong[name] = functions(destination)
    cases = oracle.fixtures()
    outcomes, negatives, corpus = [], [], []
    for row in rows:
        address = row['address']
        original = image[address - 0x100000:address - 0x100000 + row['bytes']]
        paths, digest = set(), hashlib.sha256()
        for index, case in enumerate(cases):
            arguments = (address, case, address + index, bool(index & 1), index % 16)
            reference = oracle.execute(original, *arguments)
            candidate = oracle.execute(placements[address]['raw'], *arguments)
            if reference['result'] != candidate['result']:
                raise ValueError('Original and compiled membership behavior disagree')
            paths.update(reference['path'])
            digest.update(json.dumps({'case': case, 'result': reference['result']}, sort_keys=True).encode())
        for flags in range(16):
            for return_thumb in [False, True]:
                for query in [7, 8]:
                    case = {'kind': 3, 'value': 0, 'query': query, 'ranges': [(1, 7)]}
                    reference = oracle.execute(original, address, case, address + flags, return_thumb, flags)
                    candidate = oracle.execute(placements[address]['raw'], address, case, address + flags, return_thumb, flags)
                    if reference['result'] != candidate['result']:
                        raise ValueError('Original/source flag and return-mode cross-product differs')
        if paths != set(range(address, address + 108, 4)):
            raise ValueError('Fixtures did not reach every original membership instruction')
        for name, case in [('upper-bound', {'kind': 3, 'value': 0, 'query': 7, 'ranges': [(1, 7)]}),
                           ('singleton', {'kind': 2, 'value': 7, 'query': 7, 'ranges': []})]:
            try:
                oracle.execute(wrong[name][address]['raw'], address, case, 1, True, 15)
            except oracle.ResultMismatch as failure:
                negatives.append({'address': address, 'kind': name, 'detected': True,
                                  'failureClass': type(failure).__name__, **failure.details})
            else:
                raise ValueError('Compiled wrong-source control unexpectedly passed')
        exact = compiled[address]['raw'] == original
        outcomes.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                              'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                              'address': address, 'mode': 'ARM'},
                         'symbol': compiled[address]['symbol'], 'source': record(SOURCE), 'object': record(obj),
                         'linkedElf': record(linked), 'originalInstructionBytes': 108, 'candidateInstructionBytes': compiled[address]['size'],
                         'originalSpanSha256': row['sha256'], 'candidateObjectSpanSha256': sha(compiled[address]['raw']),
                         'candidateLinkedSpanSha256': sha(placements[address]['raw']), 'poolBytes': 0, 'bodyRelocations': [],
                         'unresolvedSymbols': [], 'exactObjectSpan': exact, 'exactLinkedSpan': exact,
                         'behavior': {'allPassed': True, 'cases': len(cases), 'caseResultDigest': digest.hexdigest(),
                                      'wholeOriginalInstructionPathCovered': True, 'fullMemoryPreserved': True,
                                      'calleeSavedSpLrPreserved': True, 'typedReadFootprintOnly': True,
                                      'returnFlagCrossProductCases': 64,
                                      'ARMThumbReturnModesAndAll16InitialFlagsCovered': True},
                         'functionalConfidence': 'medium', 'sourceCreditRequested': 0})
        corpus.append({'symbol': compiled[address]['symbol'], 'cases': cases, 'resultDigest': digest.hexdigest()})
    portability = platform(SOURCE, build, cases, receipts)
    attempts = []
    for source, name in [(WORK / 'compiler-attempts.json', 'compiler-attempts.json'),
                         (WORK / 'compiler/availability.json', 'optional-compiler-availability.json')]:
        if source.exists():
            destination = OUT / name
            destination.write_bytes(source.read_bytes())
            attempts.append(record(destination))
    save(OUT / 'behavior-corpus.json', {'schemaVersion': 1, 'moduleSha256': MODULE_SHA, 'functions': corpus})
    packet = {'schemaVersion': 1, 'lane': 'wave009-native', 'status': 'bounded-validated-functional-nonmatching-C',
              'moduleSha256': MODULE_SHA, 'programId': '0004000e001acb00', 'claim': record(OUT / 'claim.json'),
              'script': record(Path(__file__)), 'oracle': record(ROOT / 'toolscripts/native_wave009_oracle.py'),
              'sources': [record(SOURCE)], 'headers': [record(HEADER)], 'compiler': record(clang), 'linker': record(linker),
              'configuration': FLAGS, 'historicalCompilerIdentified': False, 'functions': outcomes,
              'negativeControls': negatives, 'commands': receipts, 'portability': portability,
              'preservedCompilerAttempts': attempts,
              'behaviorCorpus': record(OUT / 'behavior-corpus.json'), 'exactMatchingFunctions': sum(row['exactObjectSpan'] for row in outcomes),
              'functionalFunctions': len(outcomes), 'functionalOriginalInstructionBytes': 216, 'acceptedSourceCreditGranted': 0,
              'limits': ['Bounded finite typed-list domain, not universal equivalence', 'No cyclic-malformed, dangling, concurrent or service/MMIO inputs',
                         'Ordinary C source differs from original machine code', 'Platform outputs are function components, not game builds'],
              'runtime': {'python': sys.version, 'unicornDistribution': importlib.metadata.version('unicorn'),
                          'unicornRuntime': unicorn.__version__, 'capstoneDistribution': importlib.metadata.version('capstone'),
                          'capstoneRuntime': capstone.__version__}}
    save(output, packet)
    print(json.dumps({'status': packet['status'], 'functions': len(outcomes), 'originalBytes': 216,
                      'exactMatchingFunctions': packet['exactMatchingFunctions'], 'casesPerFunction': len(cases),
                      'wrongControls': len(negatives), 'windowsExecuted': True, 'androidBuilt': True}))
    return packet


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--work', type=Path, default=WORK / 'build')
    parser.add_argument('--output', type=Path, default=OUT / 'packet.json')
    args = parser.parse_args()
    build, output = args.work.resolve(), args.output.resolve()
    if not build.is_relative_to(WORK.resolve()) or not output.is_relative_to(OUT.resolve()):
        raise ValueError('Wave009 output path escapes its exclusive lane')
    build_packet(build, output)


if __name__ == '__main__':
    main()
