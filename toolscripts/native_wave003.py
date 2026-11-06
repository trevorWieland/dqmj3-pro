import hashlib
import importlib.metadata
import io
import json
import random
import re
import struct
import subprocess
import sys
from pathlib import Path

import capstone
import unicorn
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/wave003-native'
OUT = ROOT / 'evidence/lanes/wave003-native'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-O2', '-ffreestanding',
         '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables']
REGS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
        UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7,
        UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
        UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]
OUTER = 0x3000000
INNER = 0x3002000
STACK = 0x2000000
RETURN = 0x1000000


def sha(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    path = Path(path)
    return {'path': str(path.relative_to(ROOT)) if path.is_relative_to(ROOT) else str(path),
            'sha256': sha(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


class MemoryMismatch(RuntimeError):
    def __init__(self, address, actual, expected, actual_hash, expected_hash):
        self.details = {'firstMismatchAddress': address, 'actualByte': actual,
                        'expectedByte': expected, 'actualMemorySha256': actual_hash,
                        'expectedMemorySha256': expected_hash, 'returnedToSentinel': True}
        super().__init__(f'Returned to sentinel; memory at {address:#x}: {actual:#x} != {expected:#x}')


def execute(code, row, value, seed, fixed=False, invalid=False, protected=False):
    address = row['address']
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    page = address & ~4095
    cpu.mem_map(page, (address + len(code) - page + 4095) // 4096 * 4096,
                unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(address, code)
    cpu.mem_map(RETURN, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(STACK, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_map(OUTER, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_map(INNER, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    rng = random.Random(seed)
    object_address = OUTER + rng.randrange(64) * 4
    inner_address = INNER + rng.randrange(64) * 4
    snapshots = {OUTER: bytearray([0xa5] * 4096) if fixed else bytearray(rng.randbytes(4096)),
                 INNER: bytearray([0xa5] * 4096) if fixed else bytearray(rng.randbytes(4096)),
                 STACK: bytearray(rng.randbytes(8192))}
    reads_expected = []
    if row['pointerOffsets']:
        pointer_offset = object_address - OUTER + row['pointerOffsets'][0]
        snapshots[OUTER][pointer_offset:pointer_offset + 4] = (
            0x4000000 if invalid else inner_address).to_bytes(4, 'little')
        reads_expected = [(object_address + row['pointerOffsets'][0], 4)]
        target = inner_address + row['fieldOffset']
    else:
        target = object_address + row['fieldOffset']
    for base, memory in snapshots.items():
        cpu.mem_write(base, bytes(memory))
    if row['pointerOffsets']:
        cpu.mem_protect(OUTER, 4096, unicorn.UC_PROT_READ)
    if protected:
        cpu.mem_protect(INNER if row['pointerOffsets'] else OUTER, 4096, unicorn.UC_PROT_READ)
    initial = [rng.getrandbits(32) for _ in REGS]
    initial[0:2] = [object_address, value]
    initial[-2:] = [STACK + 4096, RETURN]
    cpu.reg_write(UC_ARM_REG_CPSR, (rng.getrandbits(4) << 28) | 0x10)
    for reg, number in zip(REGS, initial):
        cpu.reg_write(reg, number)
    reads, writes, steps = [], [], []
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, a, n, v, user: reads.append((a, n)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, a, n, v, user: writes.append((a, n)))
    cpu.hook_add(unicorn.UC_HOOK_CODE, lambda uc, a, n, user: steps.append(a))
    cpu.emu_start(address, RETURN, count=16)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN:
        raise RuntimeError('Instruction budget or return boundary failed')
    final = [cpu.reg_read(reg) for reg in REGS]
    if final[4:12] != initial[4:12] or final[-2:] != initial[-2:]:
        raise RuntimeError('Callee-saved registers, SP or LR changed')
    expected = {a: bytearray(b) for a, b in snapshots.items()}
    width = row['fieldWidth']
    target_base = INNER if row['pointerOffsets'] else OUTER
    offset = target - target_base
    expected[target_base][offset:offset + width] = (value & ((1 << (width * 8)) - 1)).to_bytes(width, 'little')
    actual = {base: bytes(cpu.mem_read(base, len(memory))) for base, memory in snapshots.items()}
    for base in expected:
        wanted = bytes(expected[base])
        if actual[base] != wanted:
            first = next(i for i, (a, b) in enumerate(zip(actual[base], wanted)) if a != b)
            raise MemoryMismatch(base + first, actual[base][first], wanted[first], sha(actual[base]), sha(wanted))
    if reads != reads_expected or writes != [(target, width)]:
        raise RuntimeError('Undeclared read/write footprint')
    if any(not address <= pc < address + len(code) for pc in steps):
        raise RuntimeError('Execution escaped complete source span')
    return {'read': reads, 'write': writes, 'memorySha256': sha(b''.join(actual[a] for a in sorted(actual))),
            'preservedRegisters': True, 'returnedToSentinel': True, 'instructions': len(steps)}


def symbols(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    result = {}
    for symbol in table.iter_symbols():
        if not symbol.name.startswith('fn_') or not isinstance(symbol['st_shndx'], int):
            continue
        section = elf.get_section(symbol['st_shndx'])
        offset = symbol['st_value'] - section['sh_addr']
        relocs = [dict(offset=r['r_offset'], type=r['r_info_type'])
                  for rs in elf.iter_sections() if isinstance(rs, RelocationSection)
                  and rs['sh_info'] == symbol['st_shndx'] for r in rs.iter_relocations()]
        result[int(symbol.name[3:], 16)] = {'symbol': symbol.name, 'section': section.name,
                                         'address': symbol['st_value'], 'bytes': symbol['st_size'],
                                         'data': section.data()[offset:offset + symbol['st_size']],
                                         'relocations': relocs}
    undefined = [s.name for s in table.iter_symbols() if s.name and s['st_shndx'] == 'SHN_UNDEF']
    return result, undefined


def command(argv, log, receipts):
    process = subprocess.run([str(a) for a in argv], capture_output=True, timeout=60)
    log.write_bytes(process.stdout + process.stderr)
    receipts.append({'argv': [str(a) for a in argv], 'exitCode': process.returncode, 'log': record(log)})
    if process.returncode:
        raise RuntimeError('Build failed; see ' + str(log))


def call_witness(row, catalogue, original, engine):
    by_address = {f['address']: f for f in catalogue['functions']}
    for caller in row['callerFunctionAddresses']:
        function = by_address[caller]
        if function['mode'] != 'ARM':
            continue
        for span in function['ranges']:
            for address in range(span['start'], span['endExclusive'] - 3, 4):
                offset = address - 0x100000
                word = struct.unpack_from('<I', original, offset)[0]
                if word & 0x0f000000 != 0x0b000000 or word >> 28 == 15:
                    continue
                delta = (word & 0xffffff) << 2
                if delta & 0x2000000:
                    delta -= 0x4000000
                if address + 8 + delta != row['address']:
                    continue
                decoded = list(engine.disasm(original[offset:offset + 4], address))
                if decoded and decoded[0].id == capstone.arm.ARM_INS_BL:
                    return {'callerFunctionAddress': caller, 'instructionAddress': address,
                            'instructionSha256': sha(original[offset:offset + 4]), 'mode': 'ARM',
                            'referenceType': 'independently-decoded-direct-call', 'callerReferenceConfirmed': True}
    pointer_literals = []
    start = 0
    needle = row['address'].to_bytes(4, 'little')
    while (start := original.find(needle, start)) >= 0:
        if start % 4 == 0:
            pointer_literals.append({'fileOffset': start, 'virtualAddress': 0x100000 + start,
                                     'sha256': sha(original[start:start + 4])})
        start += 4
    for caller in row['callerFunctionAddresses']:
        function = by_address[caller]
        if function['mode'] != 'ARM':
            continue
        for span in function['ranges']:
            raw = original[span['start'] - 0x100000:span['endExclusive'] - 0x100000]
            for instruction in engine.disasm(raw, span['start']):
                if instruction.id == capstone.arm.ARM_INS_BLX and instruction.operands[0].type == capstone.arm.ARM_OP_REG:
                    return {'callerFunctionAddress': caller, 'instructionAddress': instruction.address,
                            'instructionSha256': sha(bytes(instruction.bytes)), 'mode': 'ARM',
                            'referenceType': 'Ghidra-indirect-call-candidate-target-not-independently-resolved',
                            'callerReferenceConfirmed': False, 'pointerLiteralWitnesses': pointer_literals}
    raise RuntimeError('No independently decoded call instruction for ' + hex(row['address']))


def wrong_layout(header):
    widths = {'u8': 1, 'u16': 2, 'u32': 4}
    pattern = r'typedef struct \{ u8 unknown\[(0x[0-9a-f]+)\]; (u8|u16|u32) (field_[0-9a-f]+); \} ((?:Byte|Half|Word)_[0-9a-f]+);'
    def shifted(match):
        offset, kind, field, name = match.groups()
        return f'typedef struct {{ u8 unknown[{int(offset, 16) + widths[kind]:#x}]; {kind} {field}; }} {name};'
    header = re.sub(pattern, shifted, header)
    for name, kind in [('Byte_00', 'u8'), ('Word_00', 'u32')]:
        header = header.replace(f'typedef struct {{ {kind} field_00; }} {name};',
                                f'typedef struct {{ u8 unknown[{widths[kind]}]; {kind} field_00; }} {name};')
    return header


def main():
    WORK.mkdir(parents=True, exist_ok=True)
    OUT.mkdir(parents=True, exist_ok=True)
    for name in ['packet.json', 'boundary.json']:
        path = OUT / name
        if path.exists():
            path.replace(WORK / (name + '.previous'))
    claim_path = OUT / 'claim.json'
    claim = json.loads(claim_path.read_text())
    original_path = ROOT / 'generated/update-content0/code.bin'
    original = original_path.read_bytes()
    catalogue_path = ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json'
    catalogue = json.loads(catalogue_path.read_text())
    if sha(original) != MODULE_SHA or claim['moduleSha256'] != MODULE_SHA or catalogue['codeSha256'] != MODULE_SHA:
        raise RuntimeError('Original module identity mismatch')
    if sha(catalogue_path.read_bytes()) != claim['ghidraFunctionsSha256']:
        raise RuntimeError('Ghidra catalogue changed')
    source = ROOT / 'src/native/wave003/setters.c'
    header = source.with_name('views.h')
    clang = ROOT / 'tools/clang-21/clang.exe'
    linker = ROOT / 'tools/clang-21/ld.lld.exe'
    receipts = []
    obj = WORK / 'setters.o'
    command([clang, *FLAGS, '-c', source, '-o', obj], WORK / 'compile.log', receipts)
    compiled, undefined = symbols(obj)
    rows = claim['intervals']
    if undefined or set(compiled) != {r['address'] for r in rows}:
        raise RuntimeError('Source/object completeness failed')
    for directory, negative_header, negative_source in [
            ('negative-value', header.read_text(), source.read_text().replace('= value;', '= value + 1u;')),
            ('negative-field', wrong_layout(header.read_text()), source.read_text())]:
        folder = WORK / directory
        folder.mkdir(exist_ok=True)
        (folder / 'views.h').write_text(negative_header)
        (folder / 'setters.c').write_text(negative_source)
        command([clang, *FLAGS, '-c', folder / 'setters.c', '-o', folder / 'setters.o'], folder / 'compile.log', receipts)
    bad_value, undef_value = symbols(WORK / 'negative-value/setters.o')
    bad_field, undef_field = symbols(WORK / 'negative-field/setters.o')
    if undef_value or undef_field or set(bad_value) != set(compiled) or set(bad_field) != set(compiled):
        raise RuntimeError('Negative fixture completeness failed')
    rng = random.Random(0x33574156)
    values = [0, 1, 127, 128, 255, 256, 257, 32767, 32768, 65535, 65536, 0x80000000, 0xffffffff]
    values += [rng.getrandbits(32) for _ in range(48)]
    engine = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    engine.detail = True
    packets, boundaries, negatives = [], [], []
    for row in rows:
        address = row['address']
        raw = original[address - 0x100000:row['endExclusive'] - 0x100000]
        target = compiled[address]
        if sha(raw) != row['sha256'] or target['data'] != raw or target['bytes'] != row['bytes'] or target['relocations']:
            raise RuntimeError('Full object symbol mismatch at ' + hex(address))
        linked = WORK / (target['symbol'] + '.elf')
        command([linker, '-m', 'armelf', '--no-undefined', '--gc-sections', '-Ttext=' + hex(address),
                 '--entry=' + target['symbol'], '-o', linked, obj], WORK / (target['symbol'] + '-link.log'), receipts)
        linked_symbols, unresolved = symbols(linked)
        placement = linked_symbols[address]
        if unresolved or placement['relocations'] or placement['address'] != address or placement['data'] != raw:
            raise RuntimeError('Genuine source-linked span mismatch')
        evidence = []
        for i, value in enumerate(values):
            observed = execute(raw, row, value, i + address)
            restored = execute(placement['data'], row, value, i + address)
            if observed != restored:
                raise RuntimeError('Source and original effects differ')
            evidence.append({'value': value, 'seed': i + address, 'effect': observed})
        for kind, negative in [('compiled-wrong-value', bad_value), ('compiled-wrong-field', bad_field)]:
            try:
                execute(negative[address]['data'], row, 0, 1, fixed=True)
            except MemoryMismatch as failure:
                negatives.append({'address': address, 'kind': kind, 'detected': True,
                                  'failureClass': type(failure).__name__, 'reason': str(failure), **failure.details})
            else:
                raise RuntimeError('Wrong semantic source unexpectedly passed')
        witness = call_witness(row, catalogue, original, engine)
        boundaries.append({'address': address, 'bodyMin': address, 'bodyMax': row['endExclusive'] - 1,
                           'bodyBytes': row['bytes'], 'mode': row['mode'], 'originalSpanSha256': row['sha256'],
                           **witness})
        packets.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                             'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                             'address': address, 'mode': 'ARM'},
                        'source': record(source), 'headers': [record(header)], 'object': record(obj),
                        'symbol': target['symbol'], 'objectSection': target['section'],
                        'instructionBytes': row['bytes'], 'poolBytes': 0,
                        'objectSymbolBytes': target['bytes'], 'objectSymbolSha256': sha(target['data']),
                        'originalSpanSha256': row['sha256'], 'bodyRelocations': [], 'unresolvedSymbols': [],
                        'linkedElf': record(linked), 'linkedSymbolAddress': placement['address'],
                        'linkedSymbolBytes': placement['bytes'], 'linkedSymbolSha256': sha(placement['data']),
                        'exactObjectSpan': True, 'exactLinkedSpan': True,
                        'directCallerQualified': witness['callerReferenceConfirmed'],
                        'memoryModel': {'pointerOffsets': row['pointerOffsets'], 'fieldOffset': row['fieldOffset'],
                                        'fieldWidth': row['fieldWidth'], 'returnType': 'void', 'argumentType': 'u32'},
                        'behavior': {'cases': len(values), 'allPassed': True, 'fullMemorySnapshotsCompared': True,
                                     'semanticModelAgreed': True, 'calleeSavedSpLrPreserved': True,
                                     'exactDeclaredReadWriteFootprint': True, 'caseDigest': sha(json.dumps(evidence, sort_keys=True).encode())},
                        'status': 'candidate-standalone-exact', 'acceptedRecoveredSource': False,
                        'fullModuleIntegrated': False})
    pointer_row = next(r for r in rows if r['pointerOffsets'])
    for kind, options, expected_errno in [('unmapped-record-write', {'invalid': True}, unicorn.UC_ERR_WRITE_UNMAPPED),
                                          ('protected-record-write', {'protected': True}, unicorn.UC_ERR_WRITE_PROT)]:
        try:
            execute(compiled[pointer_row['address']]['data'], pointer_row, 0, 1, **options)
        except unicorn.UcError as failure:
            if failure.errno != expected_errno:
                raise RuntimeError('Unexpected memory guard failure class') from failure
            negatives.append({'address': pointer_row['address'], 'kind': kind, 'detected': True,
                              'failureClass': type(failure).__name__, 'reason': str(failure),
                              'returnedToSentinel': False, 'errorCode': failure.errno})
        else:
            raise RuntimeError('Invalid memory access unexpectedly passed')
    packet = {'schemaVersion': 1, 'lane': 'wave003-native', 'moduleSha256': MODULE_SHA,
              'script': record(Path(__file__)), 'claim': record(claim_path),
              'sources': [record(source)], 'headers': [record(header)],
              'compiler': record(clang), 'linker': record(linker), 'configuration': FLAGS,
              'compilerVersion': subprocess.check_output([str(clang), '--version'], text=True),
              'historicalCompilerIdentified': False, 'functions': packets, 'negativeControls': negatives,
              'negativeArtifacts': [record(WORK / d / f) for d in ['negative-value', 'negative-field'] for f in ['setters.c', 'views.h', 'setters.o']],
              'unicornDistributionVersion': importlib.metadata.version('unicorn'), 'unicornNativeVersion': unicorn.uc_version(),
              'runtimeFiles': [record(Path(sys.executable)), record(Path(unicorn.unicorn_py3.unicorn.uclib._name)), record(Path(capstone._cs._name))],
              'receipts': receipts, 'standaloneExactFunctionCount': len(rows),
              'standaloneExactInstructionBytes': sum(r['bytes'] for r in rows),
              'directCallerQualifiedFunctions': sum(r['callerReferenceConfirmed'] for r in boundaries),
              'acceptedRecoveredSourceFunctions': 0,
              'reproductionArgv': [str(Path(sys.executable).resolve()), str(Path(__file__).resolve())],
              'limitations': ['Bounded execution is not universal equivalence', 'Pointer and field names express partial views, not recovered original classes',
                              'Typed views target measured 32-bit ARM ABI; host pointer layout needs an explicit port adapter',
                              'No complete game/platform execution proven; full-module integration is coordinator-owned']}
    save(OUT / 'boundary.json', {'schemaVersion': 1, 'moduleSha256': MODULE_SHA, 'ghidraCatalogue': record(catalogue_path),
                                 'scope': 'single Ghidra range corroborated by independently decoded direct ARM call', 'functions': boundaries})
    save(OUT / 'packet.json', packet)
    print(json.dumps({'exactFunctions': len(rows), 'exactBytes': packet['standaloneExactInstructionBytes'],
                      'behaviorCasesPerFunction': len(values), 'negativeControls': len(negatives), 'allPassed': True}))


if __name__ == '__main__':
    main()
