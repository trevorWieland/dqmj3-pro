import hashlib
import importlib.util
import json
import random
import re
import sys
from pathlib import Path

import unicorn
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/wave003-abi/closed-packet'
OUT = ROOT / 'evidence/lanes/wave003-abi'
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


class MemoryMismatch(RuntimeError):
    def __init__(self, address, actual, expected):
        self.details = {'firstMismatchAddress': address, 'actualByte': actual,
                        'expectedByte': expected, 'returnedToSentinel': True}
        super().__init__(f'Returned to sentinel; memory {address:#x}: {actual:#x} != {expected:#x}')


class ReturnMismatch(RuntimeError):
    def __init__(self, actual, expected):
        self.details = {'actualReturnPointer': actual, 'expectedReturnPointer': expected,
                        'returnedToSentinel': True, 'allMemorySnapshotsMatched': True}
        super().__init__(f'Returned to sentinel; pointer {actual:#x} != {expected:#x}; memory model matched')


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
    if len(row['pointerOffsets']) != 1:
        raise RuntimeError('Qualified packet requires exactly one pointer dereference')
    pointer_offset = object_address - OUTER + row['pointerOffsets'][0]
    snapshots[OUTER][pointer_offset:pointer_offset + 4] = (
        0x4000000 if invalid else inner_address).to_bytes(4, 'little')
    reads_expected = [(object_address + row['pointerOffsets'][0], 4)]
    target = inner_address + row['fieldOffset']
    for base, memory in snapshots.items():
        cpu.mem_write(base, bytes(memory))
    cpu.mem_protect(OUTER, 4096, unicorn.UC_PROT_READ)
    if protected:
        cpu.mem_protect(INNER, 4096, unicorn.UC_PROT_READ)
    initial = [rng.getrandbits(32) for _ in REGS]
    initial[0:2] = [object_address, value]
    initial[-2:] = [STACK + 4096, RETURN]
    cpu.reg_write(UC_ARM_REG_CPSR, (rng.getrandbits(4) << 28) | 0x10)
    for register, number in zip(REGS, initial):
        cpu.reg_write(register, number)
    reads, writes, steps = [], [], []
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda uc, access, a, n, v, user: reads.append((a, n)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda uc, access, a, n, v, user: writes.append((a, n)))
    cpu.hook_add(unicorn.UC_HOOK_CODE, lambda uc, a, n, user: steps.append(a))
    cpu.emu_start(address, RETURN, count=32)
    if cpu.reg_read(UC_ARM_REG_PC) != RETURN:
        raise RuntimeError('Instruction budget or return boundary failed')
    final = [cpu.reg_read(register) for register in REGS]
    if final[4:12] != initial[4:12] or final[-2:] != initial[-2:]:
        raise RuntimeError('Callee-saved registers, SP or LR changed')
    expected = {a: bytearray(b) for a, b in snapshots.items()}
    width = row['fieldWidth']
    offset = target - INNER
    expected[INNER][offset:offset + width] = (value & ((1 << (width * 8)) - 1)).to_bytes(width, 'little')
    actual = {base: bytes(cpu.mem_read(base, len(memory))) for base, memory in snapshots.items()}
    for base in expected:
        wanted = bytes(expected[base])
        if actual[base] != wanted:
            first = next(i for i, (a, b) in enumerate(zip(actual[base], wanted)) if a != b)
            raise MemoryMismatch(base + first, actual[base][first], wanted[first])
    if final[0] != inner_address:
        raise ReturnMismatch(final[0], inner_address)
    if reads != reads_expected or writes != [(target, width)]:
        raise RuntimeError('Undeclared read/write footprint')
    if any(not address <= pc < address + len(code) for pc in steps):
        raise RuntimeError('Execution escaped complete source span')
    return {'reads': reads, 'writes': writes, 'expectedReturnPointer': inner_address,
            'observedReturnPointer': final[0], 'allMemorySnapshotsMatched': True,
            'memorySha256': sha(b''.join(actual[a] for a in sorted(actual))),
            'preservedRegisters': True, 'returnedToSentinel': True, 'instructions': len(steps)}


def main():
    WORK.mkdir(parents=True, exist_ok=True)
    OUT.mkdir(parents=True, exist_ok=True)
    old_packet_path = ROOT / 'evidence/lanes/wave003-native/packet.json'
    old_boundary_path = ROOT / 'evidence/lanes/wave003-native/boundary.json'
    old_claim_path = ROOT / 'evidence/lanes/wave003-native/claim.json'
    old_source = ROOT / 'src/native/wave003/setters.c'
    prior_source_hash = sha(old_source.read_bytes())
    prior_packet_hash = sha(old_packet_path.read_bytes())
    old_packet = json.loads(old_packet_path.read_text())
    qualified = {f['canonicalIdentity']['address'] for f in old_packet['functions'] if f['directCallerQualified']}
    rows = [r for r in json.loads(old_claim_path.read_text())['intervals'] if r['address'] in qualified]
    if len(rows) != 58 or any(len(r['pointerOffsets']) != 1 for r in rows):
        raise RuntimeError('Unexpected qualified interval set')
    original_path = ROOT / 'generated/update-content0/code.bin'
    original = original_path.read_bytes()
    if sha(original) != MODULE_SHA:
        raise RuntimeError('Canonical original module changed')
    for name in ['packet.json', 'boundary.json']:
        path = OUT / name
        if path.exists():
            path.replace(WORK / (name + '.previous'))
    dependency = ROOT / 'toolscripts/native_wave003.py'
    spec = importlib.util.spec_from_file_location('wave003_frozen_helpers', dependency)
    base = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(base)
    source = ROOT / 'src/native/wave003/abi-qualified/setters.c'
    header = source.with_name('views.h')
    clang, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    receipts = []
    obj = WORK / 'setters.o'
    base.command([clang, *base.FLAGS, '-c', source, '-o', obj], WORK / 'compile.log', receipts)
    compiled, undefined = base.symbols(obj)
    if undefined or set(compiled) != qualified:
        raise RuntimeError('Source/object completeness failed')
    return_types = {int(a, 16): kind for kind, a in re.findall(r'^(\w+) \*fn_([0-9a-f]+)\(', source.read_text(), re.MULTILINE)}
    if set(return_types) != qualified:
        raise RuntimeError('Typed return interface completeness failed')
    negative_sources = {
        'wrong-value': (source.read_text().replace('= value;', '= value + 1u;'), header.read_text()),
        'wrong-field': (source.read_text(), base.wrong_layout(header.read_text())),
        'wrong-return': (source.read_text().replace('return record;', 'return (void *)h;'), header.read_text())}
    negative_objects = {}
    negative_artifacts = []
    for kind, (text, layout) in negative_sources.items():
        directory = WORK / kind
        directory.mkdir(exist_ok=True)
        (directory / 'setters.c').write_text(text)
        (directory / 'views.h').write_text(layout)
        path = directory / 'setters.o'
        base.command([clang, *base.FLAGS, '-c', directory / 'setters.c', '-o', path], directory / 'compile.log', receipts)
        negative_objects[kind], missing = base.symbols(path)
        if missing or set(negative_objects[kind]) != qualified:
            raise RuntimeError('Negative source/object completeness failed')
        negative_artifacts.extend(record(directory / f) for f in ['setters.c', 'views.h', 'setters.o'])
    rng = random.Random(0x33574156)
    values = [0, 1, 127, 128, 255, 256, 257, 32767, 32768, 65535, 65536, 0x80000000, 0xffffffff]
    values += [rng.getrandbits(32) for _ in range(48)]
    packets, negatives = [], []
    for row in rows:
        address = row['address']
        raw = original[address - 0x100000:row['endExclusive'] - 0x100000]
        target = compiled[address]
        if sha(raw) != row['sha256'] or target['data'] != raw or target['bytes'] != row['bytes'] or target['relocations']:
            raise RuntimeError('Complete typed-return object span mismatch')
        linked = WORK / (target['symbol'] + '.elf')
        base.command([linker, '-m', 'armelf', '--no-undefined', '--gc-sections', '-Ttext=' + hex(address),
                      '--entry=' + target['symbol'], '-o', linked, obj], WORK / (target['symbol'] + '-link.log'), receipts)
        linked_symbols, unresolved = base.symbols(linked)
        placement = linked_symbols[address]
        if unresolved or placement['relocations'] or placement['address'] != address or placement['data'] != raw:
            raise RuntimeError('Genuine typed-return source link mismatch')
        cases = []
        for i, value in enumerate(values):
            observed = execute(raw, row, value, address + i)
            restored = execute(placement['data'], row, value, address + i)
            if observed != restored:
                raise RuntimeError('Original/source memory or return ABI differs')
            cases.append({'value': value, 'seed': address + i, 'observation': observed})
        for kind, expected_failure in [('wrong-value', MemoryMismatch), ('wrong-field', MemoryMismatch), ('wrong-return', ReturnMismatch)]:
            try:
                execute(negative_objects[kind][address]['data'], row, 0, 1, fixed=True)
            except expected_failure as failure:
                negatives.append({'address': address, 'kind': kind, 'detected': True,
                                  'failureClass': type(failure).__name__, 'reason': str(failure), **failure.details})
            else:
                raise RuntimeError('Wrong source unexpectedly passed')
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
                        'exactObjectSpan': True, 'exactLinkedSpan': True, 'directCallerQualified': True,
                        'memoryModel': {'pointerOffsets': row['pointerOffsets'], 'fieldOffset': row['fieldOffset'],
                                        'fieldWidth': row['fieldWidth'], 'returnType': 'typed-record-pointer',
                                        'sourceReturnType': return_types[address] + ' *', 'argumentType': 'u32',
                                        'returnRule': 'return the loaded record pointer held before the field write'},
                        'behavior': {'cases': len(values), 'allPassed': True, 'fullMemorySnapshotsCompared': True,
                                     'actualOriginalAndSourceR0Compared': True, 'declaredTypedReturnAgreed': True,
                                     'semanticModelAgreed': True, 'calleeSavedSpLrPreserved': True,
                                     'exactDeclaredReadWriteFootprint': True, 'caseDigest': sha(json.dumps(cases, sort_keys=True).encode())},
                        'status': 'candidate-standalone-exact', 'acceptedRecoveredSource': False,
                        'fullModuleIntegrated': False})
    for kind, options, expected_errno in [('unmapped-record-write', {'invalid': True}, unicorn.UC_ERR_WRITE_UNMAPPED),
                                          ('protected-record-write', {'protected': True}, unicorn.UC_ERR_WRITE_PROT)]:
        try:
            execute(compiled[rows[0]['address']]['data'], rows[0], 0, 1, **options)
        except unicorn.UcError as failure:
            if failure.errno != expected_errno:
                raise RuntimeError('Unexpected memory guard failure class') from failure
            negatives.append({'address': rows[0]['address'], 'kind': kind, 'detected': True,
                              'failureClass': type(failure).__name__, 'reason': str(failure),
                              'returnedToSentinel': False, 'errorCode': failure.errno})
        else:
            raise RuntimeError('Invalid memory access unexpectedly passed')
    if sha(old_source.read_bytes()) != prior_source_hash or sha(old_packet_path.read_bytes()) != prior_packet_hash:
        raise RuntimeError('Historical void source or receipt changed')
    boundary = json.loads(old_boundary_path.read_text())
    boundary['functions'] = [f for f in boundary['functions'] if f['address'] in qualified]
    boundary['priorBoundaryReceipt'] = record(old_boundary_path)
    packet = {'schemaVersion': 2, 'lane': 'wave003-abi', 'moduleSha256': MODULE_SHA,
              'priorVoidPacket': record(old_packet_path), 'priorVoidSource': record(old_source),
              'historicalVoidArtifactsUnchanged': True, 'script': record(Path(__file__)),
              'helperDependency': record(dependency), 'claim': record(old_claim_path),
              'sources': [record(source)], 'headers': [record(header)], 'compiler': record(clang),
              'linker': record(linker), 'configuration': base.FLAGS, 'historicalCompilerIdentified': False,
              'functions': packets, 'negativeControls': negatives, 'negativeArtifacts': negative_artifacts,
              'runtimeFiles': [record(Path(sys.executable)), record(Path(unicorn.unicorn_py3.unicorn.uclib._name))],
              'receipts': receipts, 'standaloneExactFunctionCount': len(rows),
              'standaloneExactInstructionBytes': sum(r['bytes'] for r in rows),
              'acceptedRecoveredSourceFunctions': 0,
              'reproductionArgv': [str(Path(sys.executable).resolve()), str(Path(__file__).resolve())],
              'limitations': ['Bounded trials do not prove universal behavior', 'Call graph audit is overapproximating and leaves unresolved indirect edges',
                              'Three indirect-call candidates remain excluded', 'Use explicit source lists; prior void source is historical, not a second active definition',
                              'Host pointer-layout adapters and complete game/platform execution remain separate']}
    save(OUT / 'boundary.json', boundary)
    save(OUT / 'packet.json', packet)
    print(json.dumps({'exactTypedReturnFunctions': len(rows), 'exactBytes': packet['standaloneExactInstructionBytes'],
                      'casesPerFunction': len(values), 'negativeControls': len(negatives), 'allPassed': True}))


if __name__ == '__main__':
    main()
