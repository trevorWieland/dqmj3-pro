import argparse
import collections
import hashlib
import importlib.metadata
import io
import json
import os
import platform
import random
import subprocess
import sys
from pathlib import Path

import capstone
import unicorn
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176


ROOT = Path(__file__).resolve().parents[1]
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
SCALARS = {0x69180c: 20, 0x69ccf8: 20, 0x6cd9d8: 24, 0x3453a8: 12,
           0x6cd660: 12, 0x6f25cc: 16, 0x28b3a0: 16, 0x41fe24: 20,
           0x1648cc: 16, 0x6cd638: 20, 0x6f83f4: 12, 0x20ccc8: 20,
           0x4f0230: 16, 0x65d018: 16, 0x1649dc: 16, 0x235c5c: 12, 0x235c74: 16}
FIELDS = {0x17481c: 0x24, 0x174828: 4, 0x174834: 12, 0x174840: 0x40,
          0x17484c: 0x30, 0x174858: 0x38, 0x174864: 0x28}
EXPECTED_EXACT = {0x3453a8, 0x235c5c, 0x235c74, *FIELDS}
REGS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
        UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7,
        UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
        UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]
COMMON = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-ffreestanding',
          '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables']


class BehaviorMismatch(RuntimeError):
    def __init__(self, actual, expected_value, address):
        self.actual = actual
        self.expected_value = expected_value
        super().__init__(f'Returned to sentinel; semantic result {actual:#x} != {expected_value:#x} at {address:#x}')


def digest(data):
    return hashlib.sha256(data).hexdigest()


def file_record(path):
    return {'path': str(path.resolve()), 'sha256': digest(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2) + '\n', encoding='utf-8')


def signed(x):
    return x if x < 0x80000000 else x - 0x100000000


def expected(address, x, y):
    rules = {
        0x69180c: lambda: int(1 <= x <= 10), 0x69ccf8: lambda: int(1 <= x <= 32),
        0x6cd9d8: lambda: x + (0x11dc if y == 0 else 0x24a0),
        0x3453a8: lambda: x * 500, 0x6cd660: lambda: x + 0x9918,
        0x6f25cc: lambda: int(y < 6), 0x28b3a0: lambda: int(y != 0),
        0x41fe24: lambda: x + (0x144 if y == 0 else 0x1408),
        0x1648cc: lambda: 33 if y == 0 else 32,
        0x6cd638: lambda: x + (0x1cc if y == 0 else 0x1490),
        0x6f83f4: lambda: x + 318, 0x20ccc8: lambda: int(x == 395),
        0x4f0230: lambda: 16 if x == 1 else 0,
        0x65d018: lambda: int(signed(x) < signed(y)),
        0x1649dc: lambda: 35 if y == 0 else 34,
        0x235c5c: lambda: abs(signed(x)) // 2 * (-1 if signed(x) < 0 else 1),
        0x235c74: lambda: (abs(signed(x)) % 2) * (-1 if signed(x) < 0 else 1)}
    return rules[address]() & 0xffffffff


def execute(code, address, x, y, seed, field=None, invalid=False):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    page = address & ~4095
    sentinel = 0x1000000
    cpu.mem_map(page, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(address, code)
    cpu.mem_map(sentinel, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(0x2000000, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    rng = random.Random(seed)
    initial = [rng.getrandbits(32) for _ in REGS]
    initial[0:2] = [x, y]
    initial[-2:] = [0x2001000, sentinel]
    memory = rng.randbytes(8192)
    if field is not None:
        memory = bytearray(memory)
        memory[:4] = (0x3001000 if not invalid else 0x4000000).to_bytes(4, 'little')
        cpu.mem_map(0x3000000, 8192, unicorn.UC_PROT_READ)
        cpu.mem_write(0x3000000, bytes(memory))
        initial[0] = 0x3000000
    cpu.reg_write(UC_ARM_REG_CPSR, ((rng.getrandbits(4) << 28) | 0x10))
    for reg, value in zip(REGS, initial):
        cpu.reg_write(reg, value)
    reads = []
    writes = []
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, a, size, value, user: reads.append((a, size)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, a, size, value, user: writes.append((a, size)))
    cpu.emu_start(address, sentinel, count=64)
    if cpu.reg_read(UC_ARM_REG_PC) != sentinel:
        raise RuntimeError('Instruction budget exhausted or unexpected return')
    final = [cpu.reg_read(reg) for reg in REGS]
    if final[4:12] != initial[4:12] or final[-2:] != initial[-2:]:
        raise RuntimeError('Callee-saved registers, SP or LR changed')
    wanted_reads = [] if field is None else [(0x3000000, 4), (0x3001000 + field, 4)]
    want = expected(address, x, y) if field is None else int.from_bytes(memory[4096 + field:4100 + field], 'little')
    if final[0] != want:
        raise BehaviorMismatch(final[0], want, address)
    if reads != wanted_reads or writes:
        raise RuntimeError('Undeclared memory effects')
    return final[0]


def run(argv, log, receipts):
    result = subprocess.run([str(x) for x in argv], capture_output=True, timeout=60)
    log.write_bytes(result.stdout + result.stderr)
    receipts.append({'argv': [str(x) for x in argv], 'exitCode': result.returncode,
                     'log': file_record(log)})
    if result.returncode:
        raise RuntimeError('Compiler/linker failure; private log: ' + str(log))


def functions(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    symtab = elf.get_section_by_name('.symtab')
    result = {}
    for symbol in symtab.iter_symbols():
        if not symbol.name.startswith('fn_') or not isinstance(symbol['st_shndx'], int):
            continue
        section = elf.get_section(symbol['st_shndx'])
        relocations = []
        for rel in elf.iter_sections():
            if isinstance(rel, RelocationSection) and rel['sh_info'] == symbol['st_shndx']:
                relocations.extend({'offset': r['r_offset'], 'type': r['r_info_type']} for r in rel.iter_relocations())
        start = symbol['st_value'] - section['sh_addr']
        result[int(symbol.name[3:], 16)] = {
            'symbol': symbol.name, 'section': section.name, 'bytes': symbol['st_size'],
            'data': section.data()[start:start + symbol['st_size']], 'relocations': relocations,
            'virtualAddress': symbol['st_value']}
    undefined = [s.name for s in symtab.iter_symbols() if s['st_shndx'] == 'SHN_UNDEF' and s.name]
    return result, undefined


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--optimization', choices=['O1', 'O2', 'O3', 'Os', 'Oz'], action='append')
    args = parser.parse_args()
    work = ROOT / 'work/wave001-native'
    evidence = ROOT / 'evidence/lanes/wave001-native'
    work.mkdir(parents=True, exist_ok=True)
    evidence.mkdir(parents=True, exist_ok=True)
    for name in ['packet.json', 'corpus.json']:
        target = evidence / name
        if target.exists():
            target.replace(work / (name + '.previous'))
    original_path = ROOT / 'generated/update-content0/code.bin'
    original = original_path.read_bytes()
    if digest(original) != MODULE_SHA:
        raise RuntimeError('Canonical original module hash mismatch')
    clang = ROOT / 'tools/clang-21/clang.exe'
    linker = ROOT / 'tools/clang-21/ld.lld.exe'
    sources = [ROOT / 'src/native/wave001/leaves.c', ROOT / 'src/native/wave001/record_access.c']
    sizes = {**SCALARS, **{a: 12 for a in FIELDS}}
    receipts = []
    attempts = []
    selected = {}
    for optimization in args.optimization or ['O1', 'O2', 'O3', 'Os', 'Oz']:
        folder = work / optimization
        folder.mkdir(exist_ok=True)
        for source in sources:
            obj = folder / (source.stem + '.o')
            run([clang, *COMMON, '-' + optimization, '-c', source, '-o', obj], folder / (source.stem + '.log'), receipts)
            compiled, undefined = functions(obj)
            for address, symbol in compiled.items():
                raw = original[address - 0x100000:address - 0x100000 + sizes[address]]
                exact = len(symbol['data']) == sizes[address] and symbol['data'] == raw and not symbol['relocations'] and not undefined
                attempts.append({'address': address, 'optimization': optimization, 'source': str(source.relative_to(ROOT)),
                                 'compiledBytes': symbol['bytes'], 'originalBytes': sizes[address], 'exactObjectSpan': exact})
                if optimization == 'O2' and (exact or address in SCALARS):
                    selected[address] = (source, obj, symbol, exact)
    if {a for a, row in selected.items() if row[3]} != EXPECTED_EXACT:
        raise RuntimeError('Unexpected exact-match set; manual review required')
    rng = random.Random(0x4a335057)
    edges = [0, 1, 2, 3, 5, 6, 9, 10, 11, 31, 32, 33, 395, 500, 0x7fffffff, 0x80000000, 0xfffffffe, 0xffffffff]
    vectors = [(x, y) for x in edges for y in edges] + [(rng.getrandbits(32), rng.getrandbits(32)) for _ in range(192)]
    corpus = {'schemaVersion': 1, 'moduleSha256': MODULE_SHA, 'source': file_record(sources[0]),
              'domain': 'u32 bit patterns; signed parameters interpreted as two-complement s32', 'functions': []}
    corpus['source']['path'] = sources[0].relative_to(ROOT).as_posix()
    packet_functions = []
    for address, (source, obj, symbol, exact) in sorted(selected.items()):
        raw = original[address - 0x100000:address - 0x100000 + sizes[address]]
        linked = work / (symbol['symbol'] + '.elf')
        run([linker, '-m', 'armelf', '--no-undefined', '--gc-sections', '-Ttext=' + hex(address),
             '--entry=' + symbol['symbol'], '-o', linked, obj], work / (symbol['symbol'] + '-link.log'), receipts)
        linked_symbols, unresolved = functions(linked)
        target = linked_symbols[address]
        if unresolved or target['relocations'] or target['virtualAddress'] != address:
            raise RuntimeError('Linked artifact identity or closure failed')
        exact_link = target['data'] == raw and target['bytes'] == sizes[address]
        if exact != exact_link:
            raise RuntimeError('Object and genuine linked span disagree on exactness')
        cases = []
        selected_vectors = vectors if address in SCALARS else vectors[:64] + vectors[-64:]
        for number, (x, y) in enumerate(selected_vectors):
            seed = 0x335000 + number
            actual = execute(raw, address, x, y, seed, FIELDS.get(address))
            rebuilt = execute(target['data'], address, x, y, seed, FIELDS.get(address))
            if actual != rebuilt:
                raise RuntimeError('Original and source-linked behavior mismatch')
            cases.append({'x': x, 'y': y, 'originalU32': actual})
        if address in SCALARS:
            corpus['functions'].append({'name': symbol['symbol'], 'cases': cases})
        packet_functions.append({
            'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                  'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                  'address': address, 'mode': 'ARM'},
            'source': file_record(source), 'object': file_record(obj), 'symbol': symbol['symbol'],
            'objectSection': symbol['section'], 'objectSymbolBytes': symbol['bytes'],
            'objectSymbolSha256': digest(symbol['data']), 'originalSpanSha256': digest(raw),
            'instructionBytes': sizes[address], 'poolBytes': 0,
            'bodyRelocations': symbol['relocations'], 'unresolvedSymbols': unresolved,
            'linkedElf': file_record(linked), 'linkedSymbolAddress': target['virtualAddress'],
            'linkedSymbolBytes': target['bytes'], 'linkedSymbolSha256': digest(target['data']),
            'exactObjectSpan': exact, 'exactLinkedSpan': exact_link,
            'behavior': {'cases': len(cases), 'allPassed': True, 'calleeSavedSpLrPreserved': True,
                         'semanticModelAgreed': True, 'writes': [],
                         'reads': [] if address in SCALARS else [[0x3000000, 4], [0x3001000 + FIELDS[address], 4]],
                         'caseDigest': digest(json.dumps(cases, sort_keys=True).encode())},
            'abi': 'AAPCS32; r0 return; integer args r0/r1; pointer getters require aligned valid handle and record',
            'status': 'candidate-standalone-exact' if exact else 'behavior-only-nonmatching',
            'fullModuleIntegrated': False, 'acceptedRecoveredSource': False})
    save(evidence / 'corpus.json', corpus)
    replacements = [('500u', '501u'), ('x / 2', 'x / 3'), ('x % 2', 'x % 3')]
    wrong_source = sources[0].read_text()
    for before, after in replacements:
        wrong_source = wrong_source.replace(before, after)
    wrong_path = work / 'wrong_scalar.c'
    wrong_path.write_text(wrong_source)
    wrong_obj = work / 'wrong_scalar.o'
    run([clang, *COMMON, '-O2', '-c', wrong_path, '-o', wrong_obj], work / 'wrong_scalar.log', receipts)
    wrong, _ = functions(wrong_obj)
    negatives = []
    for address in [0x3453a8, 0x235c5c, 0x235c74]:
        try:
            execute(wrong[address]['data'], address, 5, 0, 1)
        except BehaviorMismatch as failure:
            negatives.append({'address': address, 'kind': 'compiled-wrong-arithmetic', 'detected': True,
                              'failureClass': type(failure).__name__, 'reason': str(failure),
                              'returnedToSentinel': True, 'actualReturn': failure.actual,
                              'expectedReturn': failure.expected_value,
                              'wrongSource': file_record(wrong_path), 'wrongObject': file_record(wrong_obj)})
        else:
            raise RuntimeError('Wrong arithmetic unexpectedly passed')
    wrong_memory = sources[1].read_text().replace('return handle->record->field_24;', 'return handle->record->field_28;', 1)
    wrong_memory_path = work / 'wrong_record.c'
    wrong_memory_path.write_text(wrong_memory)
    wrong_memory_obj = work / 'wrong_record.o'
    run([clang, *COMMON, '-O2', '-c', wrong_memory_path, '-o', wrong_memory_obj], work / 'wrong_record.log', receipts)
    wrong_fields, _ = functions(wrong_memory_obj)
    try:
        execute(wrong_fields[0x17481c]['data'], 0x17481c, 0, 0, 1, FIELDS[0x17481c])
    except BehaviorMismatch as failure:
        negatives.append({'address': 0x17481c, 'kind': 'compiled-wrong-field', 'detected': True,
                          'failureClass': type(failure).__name__, 'reason': str(failure),
                          'returnedToSentinel': True, 'actualReturn': failure.actual,
                          'expectedReturn': failure.expected_value,
                          'wrongSource': file_record(wrong_memory_path), 'wrongObject': file_record(wrong_memory_obj)})
    else:
        raise RuntimeError('Wrong field unexpectedly passed')
    try:
        execute(selected[0x17481c][2]['data'], 0x17481c, 0, 0, 1, FIELDS[0x17481c], invalid=True)
    except unicorn.UcError as failure:
        negatives.append({'address': 0x17481c, 'kind': 'unmapped-record-pointer',
                          'detected': failure.errno == unicorn.UC_ERR_READ_UNMAPPED,
                          'failureClass': type(failure).__name__, 'reason': str(failure),
                          'returnedToSentinel': False, 'errorCode': failure.errno})
    else:
        raise RuntimeError('Unmapped pointer unexpectedly passed')
    if not all(x['detected'] for x in negatives):
        raise RuntimeError('Negative control failed')
    packet = {'schemaVersion': 1, 'lane': 'wave001-native', 'script': file_record(Path(__file__)),
              'compiler': file_record(clang), 'linker': file_record(linker),
              'compilerVersion': subprocess.check_output([str(clang), '--version'], text=True),
              'configuration': [*COMMON, '-O2'], 'historicalCompilerIdentified': False,
              'original': file_record(original_path), 'sources': [file_record(s) for s in sources],
              'pythonVersion': sys.version, 'platform': platform.platform(),
              'unicornDistributionVersion': importlib.metadata.version('unicorn'),
              'unicornNativeVersion': unicorn.uc_version(),
              'functions': packet_functions, 'attempts': attempts,
              'negativeControls': negatives, 'receipts': receipts,
              'standaloneExactFunctionCount': len(EXPECTED_EXACT),
              'standaloneExactInstructionBytes': sum(sizes[a] for a in EXPECTED_EXACT),
              'acceptedRecoveredSourceFunctions': 0,
              'limitations': ['Bounded tests are not universal behavior proofs',
                              'No complete module, container or platform execution proven',
                              'Coordinator must review independent boundaries and clean replay',
                              'Literal pools zero only for these closed spans; object unwind relocations outside bodies not source credit'],
              'reproductionArgv': [str(Path(sys.executable).resolve()), str(Path(__file__).resolve()), *sys.argv[1:]]}
    save(evidence / 'corpus.json', corpus)
    save(evidence / 'packet.json', packet)
    print(json.dumps({'standaloneExactFunctions': len(EXPECTED_EXACT),
                      'standaloneExactBytes': packet['standaloneExactInstructionBytes'],
                      'behaviorFunctions': len(packet_functions), 'negativeControlsPassed': True}))


if __name__ == '__main__':
    main()
