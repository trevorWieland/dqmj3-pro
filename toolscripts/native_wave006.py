import hashlib
import importlib.util
import json
import random
import sys
from pathlib import Path

import unicorn
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7, UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11, UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_CPSR, UC_CPU_ARM_1176


ROOT = Path(__file__).resolve().parents[1]
WORK = ROOT / 'work/wave006-native'
OUT = ROOT / 'evidence/lanes/wave006-native'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
REGS = [UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3,
        UC_ARM_REG_R4, UC_ARM_REG_R5, UC_ARM_REG_R6, UC_ARM_REG_R7,
        UC_ARM_REG_R8, UC_ARM_REG_R9, UC_ARM_REG_R10, UC_ARM_REG_R11,
        UC_ARM_REG_R12, UC_ARM_REG_SP, UC_ARM_REG_LR]


def sha(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    return {'path': str(path.relative_to(ROOT)), 'sha256': sha(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, data):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(data, indent=2) + '\n')


class ConstantMismatch(RuntimeError):
    def __init__(self, actual, expected):
        self.details = {'actualU32': actual, 'expectedU32': expected,
                        'returnedToSentinel': True, 'allMemoryAndOtherRegistersMatched': True}
        super().__init__(f'Returned to sentinel; constant {actual:#x} != {expected:#x}')


def execute(code, row, seed, flags, return_thumb=False):
    address, sentinel, stack, scratch = row['address'], 0x1000000, 0x2000000, 0x3000000
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(UC_CPU_ARM_1176)
    page = address & ~4095
    cpu.mem_map(page, (address + len(code) - page + 4095) // 4096 * 4096,
                unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(address, code)
    cpu.mem_map(sentinel, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(stack, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    cpu.mem_map(scratch, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    rng = random.Random(seed)
    memories = {stack: rng.randbytes(8192), scratch: rng.randbytes(8192)}
    for base, data in memories.items():
        cpu.mem_write(base, data)
    initial = [rng.getrandbits(32) for _ in REGS]
    initial[-2:] = [stack + 4096, sentinel | int(return_thumb)]
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10 | (flags << 28))
    for register, number in zip(REGS, initial):
        cpu.reg_write(register, number)
    effects, steps = [], []
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE,
                 lambda uc, access, a, n, value, user: effects.append((access, a, n)))
    cpu.hook_add(unicorn.UC_HOOK_CODE, lambda uc, a, n, user: steps.append(a))
    cpu.emu_start(address, sentinel, count=16)
    if cpu.reg_read(UC_ARM_REG_PC) != sentinel:
        raise RuntimeError('Instruction budget or unexpected return')
    final = [cpu.reg_read(register) for register in REGS]
    if final[1:] != initial[1:]:
        raise RuntimeError('An unrelated register, SP or LR changed')
    if effects or any(bytes(cpu.mem_read(base, len(data))) != data for base, data in memories.items()):
        raise RuntimeError('Unexpected memory effect')
    if cpu.reg_read(UC_ARM_REG_CPSR) & 0xf000003f != (0x10 | (flags << 28) | (0x20 if return_thumb else 0)):
        raise RuntimeError('Unexpected flags or execution-mode change')
    if steps != [address, address + 4]:
        raise RuntimeError('Complete constant body instruction path changed')
    if final[0] != row['value']:
        raise ConstantMismatch(final[0], row['value'])
    return {'seed': seed, 'initialFlags': flags, 'returnedU32': final[0], 'returnedToThumb': return_thumb,
            'allOtherRegistersPreserved': True, 'noMemoryAccess': True,
            'memorySha256': sha(b''.join(memories[a] for a in sorted(memories)))}


def main():
    WORK.mkdir(parents=True, exist_ok=True)
    OUT.mkdir(parents=True, exist_ok=True)
    for name in ['packet.json', 'boundary.json']:
        existing = OUT / name
        if existing.exists():
            existing.replace(WORK / (name + '.previous'))
    claim_path = OUT / 'claim.json'
    claim = json.loads(claim_path.read_text())
    original_path = ROOT / 'generated/update-content0/code.bin'
    original = original_path.read_bytes()
    catalogue_path = ROOT / 'evidence/lanes/inventory-wave001/ghidra-functions.json'
    if sha(original) != MODULE_SHA or claim['moduleSha256'] != MODULE_SHA:
        raise RuntimeError('Original module changed')
    if sha(catalogue_path.read_bytes()) != claim['ghidraFunctionsSha256']:
        raise RuntimeError('Frozen Ghidra catalogue changed')
    rows = claim['intervals']
    if len(rows) != 3 or {r['mode'] for r in rows} != {'ARM'}:
        raise RuntimeError('Unreviewed constant family scope')
    helper_path = ROOT / 'toolscripts/native_wave003.py'
    spec = importlib.util.spec_from_file_location('frozen_object_helpers', helper_path)
    base = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(base)
    source = ROOT / 'src/native/wave006/constants.c'
    clang, linker = ROOT / 'tools/clang-21/clang.exe', ROOT / 'tools/clang-21/ld.lld.exe'
    obj = WORK / 'constants.o'
    receipts = []
    base.command([clang, *base.FLAGS, '-c', source, '-o', obj], WORK / 'compile.log', receipts)
    compiled, unresolved = base.symbols(obj)
    if unresolved or set(compiled) != {r['address'] for r in rows}:
        raise RuntimeError('Compiled source completeness failed')
    wrong_source = WORK / 'wrong_constants.c'
    wrong_source.write_text(source.read_text().replace('return 0u;', 'return 1u;').replace('return -1;', 'return -2;'))
    wrong_object = WORK / 'wrong_constants.o'
    base.command([clang, *base.FLAGS, '-c', wrong_source, '-o', wrong_object], WORK / 'wrong-compile.log', receipts)
    wrong, missing = base.symbols(wrong_object)
    if missing or set(wrong) != set(compiled):
        raise RuntimeError('Wrong-source completeness failed')
    packets, negatives, boundaries = [], [], []
    for row in rows:
        address = row['address']
        raw = original[address - 0x100000:row['endExclusive'] - 0x100000]
        symbol = compiled[address]
        if sha(raw) != row['sha256'] or symbol['data'] != raw or symbol['bytes'] != row['bytes'] or symbol['relocations']:
            raise RuntimeError('Complete constant object mismatch')
        linked = WORK / (symbol['symbol'] + '.elf')
        base.command([linker, '-m', 'armelf', '--no-undefined', '--gc-sections', '-Ttext=' + hex(address),
                      '--entry=' + symbol['symbol'], '-o', linked, obj], WORK / (symbol['symbol'] + '-link.log'), receipts)
        linked_symbols, undefined = base.symbols(linked)
        placement = linked_symbols[address]
        if undefined or placement['relocations'] or placement['address'] != address or placement['data'] != raw:
            raise RuntimeError('Genuine constant source-linked span mismatch')
        cases = []
        for flags in range(16):
            for trial in range(8):
                for return_thumb in [False, True]:
                    seed = address + flags * 8 + trial
                    actual = execute(raw, row, seed, flags, return_thumb)
                    rebuilt = execute(placement['data'], row, seed, flags, return_thumb)
                    if actual != rebuilt:
                        raise RuntimeError('Original/source constant behavior differs')
                    cases.append(actual)
        try:
            execute(wrong[address]['data'], row, 1, 15, return_thumb=True)
        except ConstantMismatch as failure:
            negatives.append({'address': address, 'kind': 'compiled-wrong-constant', 'detected': True,
                              'failureClass': type(failure).__name__, 'reason': str(failure), **failure.details})
        else:
            raise RuntimeError('Wrong constant unexpectedly passed')
        packets.append({'canonicalIdentity': {'build': 'owner-archive-update', 'programId': '0004000e001acb00',
                                             'module': 'content0/.code-decompressed', 'moduleSha256': MODULE_SHA,
                                             'address': address, 'mode': row['mode']},
                        'source': record(source), 'object': record(obj), 'symbol': symbol['symbol'],
                        'objectSection': symbol['section'], 'instructionBytes': row['bytes'], 'poolBytes': 0,
                        'objectSymbolBytes': symbol['bytes'], 'objectSymbolSha256': sha(symbol['data']),
                        'originalSpanSha256': row['sha256'], 'bodyRelocations': [], 'unresolvedSymbols': [],
                        'linkedElf': record(linked), 'linkedSymbolAddress': placement['address'],
                        'linkedSymbolBytes': placement['bytes'], 'linkedSymbolSha256': sha(placement['data']),
                        'exactObjectSpan': True, 'exactLinkedSpan': True, 'directCallerQualified': True,
                        'scalarModel': {'returnType': 'u32' if address == 0x2ff9c0 else 's32',
                                        'returnValueBitsU32': row['value'], 'inputsRead': [],
                                        'sourceParameterList': 'u32 ignored_value, u32 ignored_mask' if address == 0x2ff9c0 else 'u32 ignored_handle',
                                        'historicalUnusedParametersIdentified': False,
                                        'sourceInterfaceScope': 'observed caller-compatible minimal slots; unused historical arity not identified'},
                        'behavior': {'cases': len(cases), 'allPassed': True, 'allSixteenInputFlagCombinations': True,
                                     'ARMThumbReturnInterworkingTested': True,
                                     'generalRegistersVaried': True, 'allOtherRegistersPreserved': True,
                                     'noMemoryAccess': True, 'fullStackAndScratchSnapshotsCompared': True,
                                     'caseDigest': sha(json.dumps(cases, sort_keys=True).encode())},
                        'status': 'candidate-standalone-exact', 'acceptedRecoveredSource': False, 'fullModuleIntegrated': False})
        boundaries.append({'address': address, 'bodyMin': address, 'bodyMax': row['endExclusive'] - 1,
                           'bodyBytes': row['bytes'], 'mode': row['mode'], 'originalSpanSha256': row['sha256'],
                           'callerReferenceConfirmed': True, 'directCallWitnesses': row['directCallWitnesses']})
    save(OUT / 'boundary.json', {'schemaVersion': 1, 'moduleSha256': MODULE_SHA,
                                 'ghidraCatalogue': record(catalogue_path), 'functions': boundaries})
    save(OUT / 'packet.json', {'schemaVersion': 1, 'lane': 'wave006-native', 'moduleSha256': MODULE_SHA,
                               'script': record(Path(__file__)), 'helperDependency': record(helper_path), 'claim': record(claim_path),
                               'sources': [record(source)], 'compiler': record(clang), 'linker': record(linker),
                               'configuration': base.FLAGS, 'historicalCompilerIdentified': False,
                               'functions': packets, 'negativeControls': negatives,
                               'negativeArtifacts': [record(wrong_source), record(wrong_object)],
                               'runtimeFiles': [record(Path(sys.executable)), record(Path(unicorn.unicorn_py3.unicorn.uclib._name))],
                               'receipts': receipts, 'standaloneExactFunctionCount': len(rows),
                               'standaloneExactInstructionBytes': sum(r['bytes'] for r in rows),
                               'acceptedRecoveredSourceFunctions': 0,
                               'reproductionArgv': [str(Path(sys.executable).resolve()), str(Path(__file__).resolve())],
                               'sourceABIQualification': 'Discovery claim used a u32 bit-pattern lens; current source preserves signed status use in observed callers',
                               'limitations': ['Body reads no inputs; source argument slots preserve observed caller setup, original unused parameter list not identified',
                                               'No original high-level purpose asserted', 'Bounded behavior is not universal proof',
                                               'No complete game or platform execution established']})
    print(json.dumps({'exactFunctions': len(rows), 'exactBytes': sum(r['bytes'] for r in rows),
                      'casesPerFunction': 256, 'negativeControls': len(negatives), 'allPassed': True}))


if __name__ == '__main__':
    main()
