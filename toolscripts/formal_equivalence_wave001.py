import hashlib
import importlib.metadata
import io
import json
import random
import subprocess
import sys
import zipfile
from pathlib import Path

import capstone
import unicorn
from unicorn import arm_const as u
from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
import z3
from z3.z3util import get_vars


ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'src/formal-wave001'))
import arm32_model as arm
import c_uint_model as cmodel


WORK = ROOT / 'work/formal-equivalence-wave001'
EVIDENCE = ROOT / 'evidence/lanes/formal-equivalence-wave001'
ADDRESS = 0x69180c
SYMBOL = 'fn_0069180c'
MODULE_SHA = 'd4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126'
SOURCE_SHA = 'da2ca7a59e59d2126dfe9a3992453ccd112c335ccca2a4a0f7283d2d4e1e0efb'
FLAGS = ['--target=arm-none-eabi', '-mcpu=mpcore', '-marm', '-std=c11', '-O2',
         '-ffreestanding', '-ffunction-sections', '-fno-unwind-tables', '-fno-asynchronous-unwind-tables']
REGISTERS = [getattr(u, 'UC_ARM_REG_R' + str(i)) for i in range(13)] + [u.UC_ARM_REG_SP, u.UC_ARM_REG_LR]


def sha(data):
    return hashlib.sha256(data).hexdigest()


def record(path):
    path = Path(path)
    return {'path': path.relative_to(ROOT).as_posix() if path.is_relative_to(ROOT) else str(path),
            'sha256': sha(path.read_bytes()), 'bytes': path.stat().st_size}


def save(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2) + '\n', encoding='utf-8')


def command(argv, name, receipts, input_data=None):
    result = subprocess.run([str(arg) for arg in argv], capture_output=True, input=input_data, timeout=60)
    log = WORK / (name + '.log')
    log.write_bytes(result.stdout + result.stderr)
    receipts.append({'argv': [str(arg) for arg in argv], 'exitCode': result.returncode, 'log': record(log)})
    if result.returncode:
        raise RuntimeError('Compiler/linker failed: ' + str(log))
    return result.stdout


def symbol(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf.elfclass != 32 or not elf.little_endian or elf['e_machine'] != 'EM_ARM':
        raise RuntimeError('ELF identity must be little-endian ARM32')
    table = elf.get_section_by_name('.symtab')
    symbols = [item for item in table.iter_symbols() if item.name == SYMBOL]
    undefined = [item.name for item in table.iter_symbols() if item.name and item['st_shndx'] == 'SHN_UNDEF']
    if len(symbols) != 1 or undefined:
        raise RuntimeError('Missing or ambiguous symbol or unresolved dependency')
    item = symbols[0]
    section = elf.get_section(item['st_shndx'])
    start = item['st_value'] - section['sh_addr']
    relocations = [rel for rel in elf.iter_sections() if isinstance(rel, RelocationSection) and rel.num_relocations()
                   and (rel['sh_info'] == item['st_shndx'] or elf['e_type'] == 'ET_EXEC')]
    if relocations or start != 0 or item['st_size'] != section['sh_size']:
        raise RuntimeError('Relocations, sibling bytes or unclosed instruction/pool extent')
    return section.data(), item['st_value'], section.name


def compile_source(source, label, receipts):
    clang = ROOT / 'tools/clang-21/clang.exe'
    obj, linked = WORK / (label + '.o'), WORK / (label + '.elf')
    command([clang, *FLAGS, '-c', source, '-o', obj], label + '-compile', receipts)
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'armelf', '--no-undefined', '--gc-sections',
             '-Ttext=' + hex(ADDRESS), '--entry=' + SYMBOL, '-o', linked, obj], label + '-link', receipts)
    object_data, _, object_section = symbol(obj)
    data, address, linked_section = symbol(linked)
    if address != ADDRESS or data != object_data:
        raise RuntimeError('Whole object and genuinely linked symbol disagree')
    ast_data = command([clang, *FLAGS, '-Xclang', '-ast-dump=json', '-fsyntax-only', source], label + '-ast', receipts)
    ast_path = WORK / (label + '.ast.json')
    ast_path.write_bytes(ast_data)
    return data, json.loads(ast_data), {'source': record(source), 'object': record(obj), 'linkedElf': record(linked),
                                      'objectSection': object_section, 'linkedSection': linked_section,
                                      'symbolAddress': address, 'symbolBytes': len(data), 'spanSha256': sha(data),
                                      'bodyRelocations': [], 'unresolvedSymbols': [], 'ast': record(ast_path),
                                      'scope': 'Complete target text symbol only; other object functions/unwind metadata are not proved; linked ELF has no remaining relocations'}


def query(name, domain, bad, expected_status, variables):
    solver = z3.Solver()
    solver.set(timeout=10000, random_seed=0)
    solver.add(domain, bad)
    path = WORK / (name + '.smt2')
    path.write_text(solver.to_smt2(), encoding='utf-8')
    status = solver.check()
    if str(status) != expected_status:
        raise RuntimeError('Unexpected solver status for ' + name + ': ' + str(status))
    result = {'name': name, 'status': str(status), 'query': record(path), 'timeoutMs': 10000,
              'statistics': str(solver.statistics()), 'universalInterpretation': 'No satisfying counterexample over declared domain' if status == z3.unsat else 'Counterexample found'}
    if status == z3.sat:
        model = solver.model()
        result['counterexample'] = {key: model.eval(value, model_completion=True).as_long() if z3.is_bv(value) else z3.is_true(model.eval(value, model_completion=True)) for key, value in variables.items()}
    output = WORK / (name + '.result.json')
    save(output, result)
    return result


def concrete(code, x, flags, return_thumb):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(u.UC_CPU_ARM_1176)
    page, sentinel, stack = ADDRESS & ~4095, 0x1000000, 0x2000000
    cpu.mem_map(page, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(ADDRESS, code)
    cpu.mem_map(sentinel, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(stack, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    rng = random.Random(0xF001 + x)
    memory = rng.randbytes(8192)
    cpu.mem_write(stack, memory)
    initial = [rng.getrandbits(32) for _ in REGISTERS]
    initial[0], initial[13], initial[14] = x, stack + 4096, sentinel | int(return_thumb)
    initial_cpsr = (flags << 28) | ((rng.getrandbits(1)) << 27) | (rng.getrandbits(4) << 16) | 0x10
    cpu.reg_write(u.UC_ARM_REG_CPSR, initial_cpsr)
    for register, value in zip(REGISTERS, initial):
        cpu.reg_write(register, value)
    reads, writes, visits = [], [], []
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda cpu, access, address, size, value, user: reads.append((address, size)))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda cpu, access, address, size, value, user: writes.append((address, size)))
    def visit(cpu, address, size, user):
        if not ADDRESS <= address < ADDRESS + len(code):
            raise RuntimeError('Execution left owned function before return')
        visits.append(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, visit)
    cpu.emu_start(ADDRESS, sentinel, count=32)
    final = [cpu.reg_read(register) for register in REGISTERS]
    returned = cpu.reg_read(u.UC_ARM_REG_PC) == sentinel and bool(cpu.reg_read(u.UC_ARM_REG_CPSR) & 32) == return_thumb
    if not returned or reads or writes or bytes(cpu.mem_read(stack, 8192)) != memory:
        raise RuntimeError('Actual return/memory contract failed')
    if any(final[i] != initial[i] for i in list(range(4, 12)) + [13, 14]):
        raise RuntimeError('Actual callee-saved/SP/LR contract failed')
    if cpu.reg_read(u.UC_ARM_REG_CPSR) & 0x0fffffdf != initial_cpsr & 0x0fffffdf:
        raise RuntimeError('CPSR bits other than NZCV/T changed')
    return {'x': x, 'initialNzcv': flags, 'returnThumb': return_thumb, 'actualReturnReached': True,
            'r0': final[0], 'finalNzcv': cpu.reg_read(u.UC_ARM_REG_CPSR) >> 28,
            'calleeSavedSpLrPreserved': True, 'otherCpsrBitsPreserved': True, 'reads': reads, 'writes': writes,
            'allMappedDataBytesPreserved': True, 'visitedInstructionCount': len(visits)}


def runtime():
    wheel = ROOT / 'tools/formal-wave001/z3_solver-5.3.3.0-py3-none-win_amd64.whl'
    if sha(wheel.read_bytes()) != 'd189844a586242fe3d2a701c09751a80d518645931931a7c6bf29df679044215':
        raise RuntimeError('Pinned public solver wheel archive mismatch')
    z3_dll = Path(z3.z3core._z3_lib_resource_path) / 'libz3.dll'
    with zipfile.ZipFile(wheel) as archive:
        names = [name for name in archive.namelist() if name.startswith('z3/') and name.endswith('.py')]
        installed = [Path(z3.__file__).parent.parent / name for name in names]
        if any(path.read_bytes() != archive.read(name) for path, name in zip(installed, names)):
            raise RuntimeError('Installed solver Python source disagrees with pinned public wheel')
        if z3_dll.read_bytes() != archive.read('z3/lib/libz3.dll'):
            raise RuntimeError('Effective solver DLL disagrees with pinned public wheel')
    return {'python': sys.version, 'pythonExecutable': record(Path(sys.executable)),
            'z3DistributionVersion': importlib.metadata.version('z3-solver'), 'z3CoreVersion': z3.get_full_version(),
            'z3Wheel': record(wheel), 'z3NativeLibrary': record(z3_dll),
            'z3PythonFiles': [record(path) for path in installed], 'effectiveSolverFilesMatchPinnedWheel': True,
            'capstoneDistributionVersion': importlib.metadata.version('capstone'), 'capstoneCoreVersion': capstone.cs_version(),
            'capstoneNativeLibrary': record(Path(capstone._cs._name)),
            'unicornDistributionVersion': importlib.metadata.version('unicorn'), 'unicornCoreVersion': unicorn.uc_version(),
            'unicornNativeLibrary': record(Path(unicorn.unicorn_py3.unicorn.uclib._name)),
            'cpuModel': 'UC_CPU_ARM_1176', 'publicRelease': 'https://pypi.org/project/z3-solver/5.3.3.0/',
            'wheelProvenance': record(ROOT / 'tools/formal-wave001/z3-wheel-provenance.json'),
            'wheelProvenancePublisher': 'Z3Prover/z3 .github/workflows/release.yml environment pypi; fetched metadata, not independently signature-verified'}


def main():
    WORK.mkdir(parents=True, exist_ok=True)
    EVIDENCE.mkdir(parents=True, exist_ok=True)
    for name in ('packet.json', 'runtime.json'):
        old = EVIDENCE / name
        if old.exists():
            old.replace(WORK / (name + '.previous'))
    original_path = ROOT / 'generated/update-content0/code.bin'
    source = ROOT / 'src/native/wave001/leaves.c'
    if sha(original_path.read_bytes()) != MODULE_SHA or sha(source.read_bytes()) != SOURCE_SHA:
        raise RuntimeError('Frozen original or normal C source identity mismatch')
    original = original_path.read_bytes()[ADDRESS - 0x100000:ADDRESS - 0x100000 + 20]
    boundary = ROOT / 'evidence/native-survey/ghidra-qualification.json'
    bounds = json.loads(boundary.read_text())
    if bounds['codeSha256'] != MODULE_SHA or bounds['functionEntry'] != ADDRESS or bounds['functionBodyBytes'] != len(original):
        raise RuntimeError('Frozen complete boundary descriptor mismatch')
    caller = bounds['callerReferences'][0]['from']
    caller_bytes = original_path.read_bytes()[caller - 0x100000:caller - 0x100000 + 4]
    caller_decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    caller_decoder.detail = True
    caller_rows = list(caller_decoder.disasm(caller_bytes, caller))
    if len(caller_rows) != 1 or caller_rows[0].id != capstone.arm_const.ARM_INS_BL or caller_rows[0].operands[0].imm != ADDRESS:
        raise RuntimeError('Qualified direct caller no longer targets complete function')
    receipts = []
    compiler_version = command([ROOT / 'tools/clang-21/clang.exe', '--version'], 'clang-version', receipts).decode()
    linker_version = command([ROOT / 'tools/clang-21/ld.lld.exe', '--version'], 'ld.lld-version', receipts).decode()
    rebuilt, ast, build = compile_source(source, 'normal', receipts)
    wrong, wrong_ast, wrong_build = compile_source(ROOT / 'src/formal-wave001/wrong_range.c', 'wrong', receipts)
    if original == rebuilt:
        raise RuntimeError('Pilot requires a genuinely nonmatching compiled body')
    macros = command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-dM', '-E', '-x', 'c', '-'], 'target-macros', receipts, b'').decode()
    if '#define __SIZEOF_INT__ 4' not in macros.splitlines() or '#define __CHAR_BIT__ 8' not in macros.splitlines():
        raise RuntimeError('Unsigned int32 source data-model premise failed')
    command([ROOT / 'tools/clang-21/clang.exe', *FLAGS, '-fsyntax-only', ROOT / 'src/formal-wave001/data_model.c'], 'target-value-width', receipts)
    initial = arm.initial_state(ADDRESS)
    source_value, source_domain = cmodel.translate(ast, SYMBOL, initial.registers[0])
    wrong_value, wrong_domain = cmodel.translate(wrong_ast, SYMBOL, initial.registers[0])
    original_rows, compiled_rows, wrong_rows = [arm.decode(data, ADDRESS) for data in (original, rebuilt, wrong)]
    original_state, compiled_state, wrong_state = [arm.execute(rows, initial) for rows in (original_rows, compiled_rows, wrong_rows)]
    return_target = initial.registers[14] & arm.bv(0xfffffffe)
    valid = z3.And(arm.domain(initial), z3.Or(z3.ULT(return_target, arm.bv(ADDRESS)),
                  z3.UGE(return_target, arm.bv(ADDRESS + max(len(original), len(rebuilt), len(wrong))))))
    if {str(variable) for variable in get_vars(valid)} != {'input_r13', 'input_r14', 'input_other_cpsr'}:
        raise RuntimeError('Domain unexpectedly restricts input or arithmetic flags')
    variables = {'x': initial.registers[0], 'lr': initial.registers[14], 'sp': initial.registers[13],
                 **{name: value for name, value in zip(('N', 'Z', 'C', 'V'), initial.flags)}}
    witnesses = [query('domain-' + ('thumb' if thumb else 'arm') + '-witness', valid,
                       z3.And(initial.registers[14] == arm.bv(0x1000000 | int(thumb)),
                              initial.registers[13] == arm.bv(0x2001000)), 'sat', variables) for thumb in (False, True)]
    proofs = [query(label, valid, arm.violations(state, initial, value), 'unsat', variables)
              for label, state, value in [('original-vs-c-ast', original_state, source_value),
                                           ('compiled-vs-c-ast', compiled_state, source_value),
                                           ('compiled-wrong-vs-wrong-c-ast', wrong_state, wrong_value)]]
    reference = z3.If(z3.And(z3.UGE(initial.registers[0], arm.bv(1)), z3.ULE(initial.registers[0], arm.bv(10))), arm.bv(1), arm.bv(0))
    proofs.append(query('c-ast-vs-manual-value-spec', valid, source_value != reference, 'unsat', variables))
    proofs.append(query('original-vs-linked-contract', valid,
                        z3.Or(original_state.registers[0] != compiled_state.registers[0],
                              arm.violations(original_state, initial, source_value), arm.violations(compiled_state, initial, source_value)), 'unsat', variables))
    negative = query('wrong-source-counterexample', valid, original_state.registers[0] != wrong_state.registers[0], 'sat', variables)
    flags_negative = query('overstrict-final-flags-contract', valid, z3.Or(*[a != b for a, b in zip(original_state.flags, compiled_state.flags)]), 'sat', variables)
    x = negative['counterexample']['x']
    counterexample_runs = [{'original': concrete(original, x, flags, thumb), 'wrongCompiledC': concrete(wrong, x, flags, thumb)}
                          for flags in range(16) for thumb in (False, True)]
    if any(row['original']['r0'] == row['wrongCompiledC']['r0'] for row in counterexample_runs):
        raise RuntimeError('SAT wrong-source counterexample did not reproduce after actual return')
    fixtures = []
    for x in [0, 1, 2, 9, 10, 11, 0x7fffffff, 0x80000000, 0xffffffff]:
        for flags in range(16):
            for thumb in (False, True):
                observations = [concrete(data, x, flags, thumb) for data in (original, rebuilt)]
                if observations[0]['r0'] != observations[1]['r0'] or observations[0]['r0'] != int(1 <= x <= 10):
                    raise RuntimeError('Original/compiled/C-value fixture disagreement')
                fixtures.append(observations)
    save(WORK / 'actual-execution.json', {'cases': fixtures, 'negativeCounterexampleRuns': counterexample_runs})
    decoder = capstone.Cs(capstone.CS_ARCH_ARM, capstone.CS_MODE_ARM)
    text = '\n\n'.join(label + '\n' + '\n'.join(f'{i.address:08x} {i.mnemonic} {i.op_str}' for i in decoder.disasm(data, ADDRESS))
                       for label, data in [('original', original), ('source-linked', rebuilt), ('wrong-source-linked', wrong)])
    (WORK / 'private-disassembly.txt').write_text(text + '\n')
    runtime_path = EVIDENCE / 'runtime.json'
    save(runtime_path, runtime())
    packet = {'schemaVersion': 1, 'lane': 'formal-equivalence-wave001', 'status': 'research-only modeled proof; no source admission',
              'acceptedRecoveredSourceFunctions': 0, 'acceptedRecoveredSourceBytes': 0,
              'script': record(Path(__file__)), 'modelSources': [record(ROOT / 'src/formal-wave001' / name) for name in ['arm32_model.py', 'c_uint_model.py', 'data_model.c']],
              'original': {'module': record(original_path), 'programId': '0004000e001acb00', 'address': ADDRESS, 'mode': 'ARM',
                           'bodyBytes': len(original), 'poolBytes': 0, 'spanSha256': sha(original), 'boundaryDescriptor': record(boundary),
                           'directCaller': {'address': caller, 'mode': 'ARM', 'operation': 'BL', 'target': ADDRESS, 'spanSha256': sha(caller_bytes)}},
              'compiler': record(ROOT / 'tools/clang-21/clang.exe'), 'linker': record(ROOT / 'tools/clang-21/ld.lld.exe'),
              'compilerVersion': compiler_version, 'linkerVersion': linker_version,
              'configuration': FLAGS, 'normalBuild': build, 'wrongBuild': wrong_build,
              'byteIdentical': False, 'historicalCompilerIdentified': False, 'sourceLanguageDomain': source_domain,
              'sourcePremises': ['CHAR_BIT=8', 'sizeof(unsigned int)=4', 'ordinary C11 unsigned int has 32 value bits on measured ARM ABI'],
              'abstractObservableContract': {'input': 'r0 all 2^32 unsigned int32 values; other core registers and NZCV symbolic',
                  'preserved': ['r4-r11 including platform r9', 'SP', 'LR', 'all data memory', 'CPSR bits other than NZCV/T'],
                  'return': 'actual final unconditional BX LR, target LR&~1 and Thumb=LR[0]',
                  'domain': ['user-mode ARM entry; Jazelle/IT state clear', 'SP modulo8=0', 'LR names a valid mapped executable caller return address outside all owned function extents; ARM target aligned4 or Thumb target aligned2'],
                  'callerClobberExcluded': ['r1-r3', 'r12', 'NZCV'], 'dataReads': [], 'dataWrites': []},
              'domainWitnesses': witnesses, 'domainDoesNotRestrictInputOrNzcv': True,
              'proofs': proofs, 'wrongSourceNegative': negative, 'overstrictFlagsDiagnostic': flags_negative,
              'actualExecution': {'receipt': record(WORK / 'actual-execution.json'), 'positiveCases': len(fixtures),
                                  'wrongSourceCases': len(counterexample_runs), 'counterexampleX': negative['counterexample']['x'],
                                  'actualReturnsAndMismatchConfirmed': True},
              'privateDisassembly': record(WORK / 'private-disassembly.txt'), 'runtime': record(runtime_path),
              'receipts': receipts, 'reproductionArgv': [str(ROOT / 'tools/python/Scripts/python.exe'), str(Path(__file__).resolve())],
              'trustedBase': ['pinned Clang parser AST and target data model', 'Capstone complete decoding', 'hand-authored ARM and restricted C AST SMT translators',
                              'Z3 solver and Python bindings', 'Python runtime, host hardware and files', 'Unicorn independently exercises concrete counterexamples but is not a universal proof'],
              'limitations': ['UNSAT is over the stated model/domain; no verified theorem-producing ISA or C frontend',
                             'unsupported instructions, expressions, memory, branches, loops, exceptions and interrupts are rejected or outside this pilot',
                             'no full C-language or 3DS-system theorem; no behavioral admission-policy change',
                             'no proof-object independent checker; translator/decoder/solver bugs remain trusted-base risks']}
    save(EVIDENCE / 'packet.json', packet)
    print(json.dumps({'proofs': len(proofs), 'allExpectedUnsat': True, 'wrongSourceSatInput': negative['counterexample']['x'],
                      'concretePositiveCases': len(fixtures), 'concreteWrongSourceCases': len(counterexample_runs), 'sourceCredit': 0}))


if __name__ == '__main__':
    main()
