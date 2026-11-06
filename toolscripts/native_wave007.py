import hashlib
import importlib.util
import json
import random
import re
import sys
from collections import defaultdict
from pathlib import Path

import capstone
import unicorn
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/wave007-native'
OUT = ROOT / 'evidence/lanes/wave007-native'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
REGS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
        UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7,
        UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
        UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]
OUTER, INNER, STACK, RETURN = 0x3000000, 0x3002000, 0x2000000, 0x1000000


def sha(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    return {'path': str(path.relative_to(ROOT)), 'sha256': sha(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2) + '\n')


def expected(row, value):
    value &= (1 << (row['fieldWidth'] * 8)) - 1
    model = row['semanticModel']
    kind = model['kind']
    constant = model.get('constant', 0)
    signed = value if value < 0x80000000 else value - 0x100000000
    if kind == 'eq': return int(value == constant)
    if kind == 'ne': return int(value != constant)
    if kind == 'uge': return int(value >= constant)
    if kind == 'ugt': return int(value > constant)
    if kind == 'sge': return int(signed >= constant)
    if kind == 'sle': return int(signed <= constant)
    if kind == 'any-eq': return int(value in model['constants'])
    if kind == 'none-eq': return int(value not in model['constants'])
    if kind == 'select-eq': return model['trueValue'] if value == constant else model['falseValue']
    if kind == 'mask': return value & model['mask']
    if kind == 'masked-ne': return int(value & model['mask'] != 0)
    if kind == 'extract': return (value >> model['shift']) & model['mask']
    raise RuntimeError('Unknown independent field semantic model')


def condition(cc, cpsr):
    n, z, c, v = [bool(cpsr & (1 << shift)) for shift in [31, 30, 29, 28]]
    a = capstone.arm
    decisions = {a.ARM_CC_EQ: z, a.ARM_CC_NE: not z, a.ARM_CC_HS: c, a.ARM_CC_LO: not c,
                 a.ARM_CC_MI: n, a.ARM_CC_PL: not n, a.ARM_CC_VS: v, a.ARM_CC_VC: not v,
                 a.ARM_CC_HI: c and not z, a.ARM_CC_LS: not c or z,
                 a.ARM_CC_GE: n == v, a.ARM_CC_LT: n != v, a.ARM_CC_GT: not z and n == v,
                 a.ARM_CC_LE: z or n != v, a.ARM_CC_AL: True}
    if cc not in decisions:
        raise RuntimeError('Unmodeled ARM condition')
    return decisions[cc]


class ReturnMismatch(RuntimeError):
    def __init__(self, actual, want):
        self.details = {'actualReturnU32': actual, 'expectedReturnU32': want,
                        'returnedToSentinel': True, 'allMemorySnapshotsMatched': True}
        super().__init__(f'Returned to sentinel; field result {actual:#x} != {want:#x}; memory unchanged')


def execute(code, row, value, seed, return_thumb=False, fixed=False):
    address = row['address']
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    page = address & ~4095
    cpu.mem_map(page, (address + len(code) - page + 4095) // 4096 * 4096,
                unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(address, code)
    for base, size, access in [(RETURN, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC),
                               (STACK, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE),
                               (OUTER, 4096, unicorn.UC_PROT_READ), (INNER, 4096, unicorn.UC_PROT_READ)]:
        cpu.mem_map(base, size, access)
    rng = random.Random(seed)
    outer, inner = OUTER + rng.randrange(64) * 4, INNER + rng.randrange(64) * 4
    memories = {OUTER: bytearray(4096) if fixed else bytearray(rng.randbytes(4096)),
                INNER: bytearray(4096) if fixed else bytearray(rng.randbytes(4096)),
                STACK: bytearray(rng.randbytes(8192))}
    reads_expected = []
    if row['pointerOffsets']:
        pointer = outer + row['pointerOffsets'][0]
        memories[OUTER][pointer - OUTER:pointer - OUTER + 4] = inner.to_bytes(4, 'little')
        reads_expected.append((pointer, 4))
        argument = outer
    else:
        argument = inner
    field = inner + row['fieldOffset']
    width = row['fieldWidth']
    raw_value = value & ((1 << (width * 8)) - 1)
    memories[INNER][field - INNER:field - INNER + width] = raw_value.to_bytes(width, 'little')
    reads_expected.append((field, width))
    for base, memory in memories.items():
        cpu.mem_write(base, bytes(memory))
    initial = [rng.getrandbits(32) for _ in REGS]
    initial[0] = argument
    initial[-2:] = [STACK + 4096, RETURN | int(return_thumb)]
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10 | ((seed & 15) << 28))
    for register, number in zip(REGS, initial):
        cpu.reg_write(register, number)
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    decoder.detail = True
    instructions = {i.address: i for i in decoder.disasm(code, address)}
    if sum(i.size for i in instructions.values()) != len(code):
        raise RuntimeError('Incomplete owned instruction decode')
    reads, writes = [], []
    decisions = defaultdict(set)
    issued = set()
    def inspect(uc, pc, size, user):
        if pc not in instructions:
            raise RuntimeError('Execution escaped owned instruction span')
        issued.add(pc)
        decisions[pc].add(condition(instructions[pc].cc, uc.reg_read(UC_ARM_REG_CPSR)))
    cpu.hook_add(unicorn.UC_HOOK_CODE, inspect)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, a, n, v, user: reads.append((a, n)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, a, n, v, user: writes.append((a, n)))
    cpu.reg_write(UC_ARM_REG_PC, address)
    steps = 0
    while cpu.reg_read(UC_ARM_REG_PC) != RETURN:
        pc = cpu.reg_read(UC_ARM_REG_PC)
        if pc not in instructions or steps >= 32:
            raise RuntimeError('Instruction budget or control-flow boundary failed')
        issued.add(pc)
        decisions[pc].add(condition(instructions[pc].cc, cpu.reg_read(UC_ARM_REG_CPSR)))
        cpu.emu_start(pc, RETURN, count=1)
        steps += 1
    final = [cpu.reg_read(register) for register in REGS]
    if final[4:12] != initial[4:12] or final[-2:] != initial[-2:]:
        raise RuntimeError('Callee-saved registers, SP or LR changed')
    if writes or any(bytes(cpu.mem_read(base, len(memory))) != bytes(memory) for base, memory in memories.items()):
        raise RuntimeError('Unexpected memory side effect')
    if final[0] != expected(row, raw_value):
        raise ReturnMismatch(final[0], expected(row, raw_value))
    if reads != reads_expected:
        raise RuntimeError('Undeclared field/pointer read footprint')
    if bool(cpu.reg_read(UC_ARM_REG_CPSR) & 0x20) != return_thumb:
        raise RuntimeError('Return interworking mode mismatch')
    return {'returnU32': final[0], 'reads': reads, 'flags': cpu.reg_read(UC_ARM_REG_CPSR),
            'issuedAddresses': sorted(issued), 'conditionEvaluations': {str(k): sorted(v) for k, v in decisions.items()},
            'memorySha256': sha(b''.join(bytes(memories[a]) for a in sorted(memories)))}


def values(row):
    bits = row['fieldWidth'] * 8
    mask = (1 << bits) - 1
    if bits == 8:
        return list(range(256))
    result = {0, 1, 2, 3, mask, mask - 1, 1 << (bits - 1), 0x55555555 & mask, 0xaaaaaaaa & mask}
    for bit in range(bits):
        result.add(1 << bit)
        result.add(mask ^ (1 << bit))
    for constant in [row['semanticModel'].get('constant', 0), *row['semanticModel'].get('constants', [])]:
        result.update((v & mask) for v in [constant - 1, constant, constant + 1])
    rng = random.Random(row['address'])
    result.update(rng.getrandbits(bits) for _ in range(16))
    return sorted(result)


def wrong_layout(header):
    pattern = r'typedef struct \{ (?:u8 unknown\[(0x[0-9a-f]+)\]; )?(u8|u16|u32|s32) value; \} (P7_[BHSW]_[0-9a-f]+);'
    def shifted(match):
        offset, kind, name = match.groups()
        width = {'u8': 1, 'u16': 2, 'u32': 4, 's32': 4}[kind]
        return f'typedef struct {{ u8 unknown[{int(offset or "0", 0) + width:#x}]; {kind} value; }} {name};'
    return re.sub(pattern, shifted, header)


def main():
    WORK.mkdir(parents=True, exist_ok=True)
    OUT.mkdir(parents=True, exist_ok=True)
    for name in ['packet.json', 'boundary.json']:
        path = OUT / name
        if path.exists(): path.replace(WORK / (name + '.previous'))
    claim_path = OUT / 'claim.json'
    claim = json.loads(claim_path.read_text())
    original_path = ROOT / 'generated/update-content0/code.bin'
    original = original_path.read_bytes()
    catalogue_path = ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json'
    if sha(original) != MODULE_SHA or sha(catalogue_path.read_bytes()) != claim['ghidraFunctionsSha256']:
        raise RuntimeError('Frozen original or Ghidra identity mismatch')
    helper_path = ROOT / 'toolscripts/native_wave003.py'
    spec = importlib.util.spec_from_file_location('frozen_object_helpers', helper_path)
    base = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(base)
    source = ROOT / 'src/native/wave007/predicates.c'
    header = source.with_name('views.h')
    clang, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    receipts, attempts = [], []
    selected = {}
    for optimization in ['O2', 'O1', 'Os', 'Oz']:
        folder = WORK / optimization
        folder.mkdir(exist_ok=True)
        obj = folder / 'predicates.o'
        flags = [f for f in base.FLAGS if f != '-O2'] + ['-' + optimization]
        base.command([clang, *flags, '-c', source, '-o', obj], folder / 'compile.log', receipts)
        compiled, unresolved = base.symbols(obj)
        if unresolved or set(compiled) != {r['address'] for r in claim['intervals']}:
            raise RuntimeError('Source/object scope incomplete')
        for row in claim['intervals']:
            address = row['address']
            raw = original[address - 0x100000:row['endExclusive'] - 0x100000]
            symbol = compiled[address]
            if sha(raw) != row['sha256']:
                raise RuntimeError('Original span changed')
            exact = symbol['data'] == raw and symbol['bytes'] == row['bytes'] and not symbol['relocations']
            attempts.append({'address': address, 'profile': optimization, 'compiledBytes': symbol['bytes'],
                             'originalBytes': row['bytes'], 'compiledSpanSha256': sha(symbol['data']), 'exact': exact})
            if exact and optimization == 'O2': selected[address] = (row, symbol, obj)
    if len(selected) != 50 or sum(row['bytes'] for row, _, _ in selected.values()) != 852:
        raise RuntimeError('Unreviewed exact subset')
    negative_sources = {'wrong-predicate': (re.sub(r'return (.*?); \}', r'return (\1) ^ 1u; }', source.read_text()), header.read_text()),
                        'wrong-field': (source.read_text(), wrong_layout(header.read_text()))}
    negative_objects, negative_artifacts = {}, []
    for kind, (text, layout) in negative_sources.items():
        folder = WORK / kind
        folder.mkdir(exist_ok=True)
        (folder / 'predicates.c').write_text(text)
        (folder / 'views.h').write_text(layout)
        obj = folder / 'predicates.o'
        base.command([clang, *base.FLAGS, '-c', folder / 'predicates.c', '-o', obj], folder / 'compile.log', receipts)
        negative_objects[kind], undefined = base.symbols(obj)
        if undefined: raise RuntimeError('Negative object unresolved')
        negative_artifacts.extend(record(folder / f) for f in ['predicates.c', 'views.h', 'predicates.o'])
    packets, boundaries, negatives = [], [], []
    total_cases = 0
    for address, (row, symbol, obj) in sorted(selected.items()):
        raw = original[address - 0x100000:row['endExclusive'] - 0x100000]
        linked = WORK / (symbol['symbol'] + '.elf')
        base.command([linker, '-m', 'armelf', '--no-undefined', '--gc-sections', '-Ttext=' + hex(address),
                      '--entry=' + symbol['symbol'], '-o', linked, obj], WORK / (symbol['symbol'] + '-link.log'), receipts)
        linked_symbols, undefined = base.symbols(linked)
        placement = linked_symbols[address]
        if undefined or placement['relocations'] or placement['address'] != address or placement['data'] != raw:
            raise RuntimeError('Genuine source-linked span mismatch')
        cases = []
        coverage = defaultdict(set)
        issued = set()
        test_values = values(row)
        for i, value in enumerate(test_values):
            for return_thumb in [False, True]:
                seed = address + i
                observed = execute(raw, row, value, seed, return_thumb)
                restored = execute(placement['data'], row, value, seed, return_thumb)
                if observed != restored: raise RuntimeError('Original/source field behavior differs')
                cases.append({'value': value, 'seed': seed, 'returnThumb': return_thumb, 'observation': observed})
                issued.update(observed['issuedAddresses'])
                for pc, outcomes in observed['conditionEvaluations'].items(): coverage[int(pc)].update(outcomes)
        decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
        decoder.detail = True
        owned = list(decoder.disasm(raw, address))
        if issued != {i.address for i in owned}: raise RuntimeError('Missing owned instruction coverage')
        conditional = [i.address for i in owned if i.cc != capstone.arm.ARM_CC_AL]
        if any(coverage[pc] != {False, True} for pc in conditional):
            raise RuntimeError('Missing true/false condition coverage')
        witness = next((v for v in test_values if expected(row, v) != expected(row, 0)), None)
        if witness is None: raise RuntimeError('No meaningful wrong-field witness')
        for kind, value in [('wrong-predicate', 0), ('wrong-field', witness)]:
            try:
                execute(negative_objects[kind][address]['data'], row, value, 1, return_thumb=True, fixed=True)
            except ReturnMismatch as failure:
                negatives.append({'address': address, 'kind': kind, 'fieldValue': value, 'detected': True,
                                  'failureClass': type(failure).__name__, 'reason': str(failure), **failure.details})
            else: raise RuntimeError('Wrong source unexpectedly passed')
        total_cases += len(cases)
        packets.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                             'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                             'address': address, 'mode': 'ARM'},
                        'source': record(source), 'headers': [record(header)], 'object': record(obj),
                        'symbol': symbol['symbol'], 'objectSection': symbol['section'], 'instructionBytes': row['bytes'], 'poolBytes': 0,
                        'objectSymbolBytes': symbol['bytes'], 'objectSymbolSha256': sha(symbol['data']),
                        'originalSpanSha256': row['sha256'], 'bodyRelocations': [], 'unresolvedSymbols': [],
                        'linkedElf': record(linked), 'linkedSymbolAddress': placement['address'],
                        'linkedSymbolBytes': placement['bytes'], 'linkedSymbolSha256': sha(placement['data']),
                        'exactObjectSpan': True, 'exactLinkedSpan': True, 'directCallerQualified': True,
                        'memoryModel': {'pointerOffsets': row['pointerOffsets'], 'fieldOffset': row['fieldOffset'],
                                        'fieldWidth': row['fieldWidth'], 'returnType': 'u32', 'semanticModel': row['semanticModel']},
                        'behavior': {'cases': len(cases), 'allPassed': True, 'allOwnedInstructionsCovered': True,
                                     'conditionalInstructionAddresses': conditional, 'allOwnedConditionsTrueAndFalse': True,
                                     'bothReturnModesTested': True, 'fullMemorySnapshotsCompared': True,
                                     'exactDeclaredReadFootprint': True, 'noWrites': True,
                                     'caseDigest': sha(json.dumps(cases, sort_keys=True).encode())},
                        'status': 'candidate-standalone-exact', 'acceptedRecoveredSource': False, 'fullModuleIntegrated': False})
        boundaries.append({'address': address, 'bodyMin': address, 'bodyMax': row['endExclusive'] - 1,
                           'bodyBytes': row['bytes'], 'mode': 'ARM', 'originalSpanSha256': row['sha256'],
                           'callerReferenceConfirmed': True, 'directCallWitnesses': row['directCallWitnesses']})
    save(OUT / 'boundary.json', {'schemaVersion': 1, 'moduleSha256': MODULE_SHA, 'ghidraCatalogue': record(catalogue_path), 'functions': boundaries})
    save(OUT / 'packet.json', {'schemaVersion': 1, 'lane': 'wave007-native', 'moduleSha256': MODULE_SHA,
                               'script': record(Path(__file__)), 'helperDependency': record(helper_path), 'claim': record(claim_path),
                               'sources': [record(source)], 'headers': [record(header)], 'compiler': record(clang), 'linker': record(linker),
                               'configuration': base.FLAGS, 'historicalCompilerIdentified': False, 'functions': packets,
                               'attempts': attempts, 'negativeControls': negatives, 'negativeArtifacts': negative_artifacts,
                               'runtimeFiles': [record(Path(sys.executable)), record(Path(unicorn.unicorn_py3.unicorn.uclib._name))],
                               'receipts': receipts, 'claimedFunctions': len(claim['intervals']), 'standaloneExactFunctionCount': len(packets),
                               'standaloneExactInstructionBytes': sum(f['instructionBytes'] for f in packets),
                               'nonmatchingDraftFunctions': len(claim['intervals']) - len(packets), 'draftSourceCredit': 0,
                               'totalBehaviorCases': total_cases, 'acceptedRecoveredSourceFunctions': 0,
                               'reproductionArgv': [str(Path(sys.executable).resolve()), str(Path(__file__).resolve())],
                               'limitations': ['Only exact subset receives proposed credit; other authored models remain unvalidated drafts',
                                               'Mapped nonalias RAM fixtures do not prove universal behavior or MMIO contracts',
                                               'Partial views record observed widths and offsets; original classes/purposes remain unidentified',
                                               'Independent replay, integration and native platform game execution remain separate']})
    print(json.dumps({'exactFunctions': len(packets), 'exactBytes': sum(f['instructionBytes'] for f in packets),
                      'drafts': len(claim['intervals']) - len(packets), 'behaviorCases': total_cases, 'negativeControls': len(negatives), 'allPassed': True}))


if __name__ == '__main__':
    main()
