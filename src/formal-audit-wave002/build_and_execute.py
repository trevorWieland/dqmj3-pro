import hashlib
import io
import json
import random
import subprocess
from pathlib import Path

from elftools.elf.elffile import ELFFile
from elftools.elf.relocation import RelocationSection
import unicorn
from unicorn import arm_const as u


ADDRESS = 0x69180c
SYMBOL = 'fn_0069180c'
CORE = ['r' + str(i) for i in range(13)] + ['sp', 'lr']
REGISTERS = [getattr(u, 'UC_ARM_REG_R' + str(i)) for i in range(13)] + [u.UC_ARM_REG_SP, u.UC_ARM_REG_LR]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def record(root, path):
    path = Path(path).resolve()
    return {'path': path.relative_to(root).as_posix() if path.is_relative_to(root) else str(path),
            'sha256': digest(path.read_bytes()), 'bytes': path.stat().st_size}


def command(root, folder, argv, label, receipts, input_data=None):
    result = subprocess.run([str(value) for value in argv], capture_output=True, input=input_data, timeout=60)
    path = folder / (label + '.log')
    path.write_bytes(result.stdout + result.stderr)
    receipts.append({'argv': [str(value) for value in argv], 'exitCode': result.returncode, 'log': record(root, path)})
    if result.returncode:
        raise RuntimeError('Compiler/linker failed: ' + str(path))
    return result.stdout


def symbol(path):
    elf = ELFFile(io.BytesIO(path.read_bytes()))
    if elf.elfclass != 32 or not elf.little_endian or elf['e_machine'] != 'EM_ARM':
        raise RuntimeError('Expected little-endian ARM32 ELF')
    table = elf.get_section_by_name('.symtab')
    selected = [item for item in table.iter_symbols() if item.name == SYMBOL]
    undefined = [item.name for item in table.iter_symbols() if item.name and item['st_shndx'] == 'SHN_UNDEF']
    if len(selected) != 1 or undefined:
        raise RuntimeError('Missing/ambiguous symbol or unresolved dependency')
    item = selected[0]
    section = elf.get_section(item['st_shndx'])
    if item['st_value'] != section['sh_addr'] or item['st_size'] != section['sh_size']:
        raise RuntimeError('Sibling bytes, symbol offset or unclosed section extent')
    for relocation in elf.iter_sections():
        if isinstance(relocation, RelocationSection) and relocation.num_relocations() and (elf['e_type'] == 'ET_EXEC' or relocation['sh_info'] == item['st_shndx']):
            raise RuntimeError('Body relocation or unresolved linked relocation')
    return section.data(), item['st_value'], section.name


def build(root, folder, source, label, flags, receipts):
    obj, linked = folder / (label + '.o'), folder / (label + '.elf')
    compiler, linker = root / 'tools/clang-21/clang.exe', root / 'tools/clang-21/ld.lld.exe'
    command(root, folder, [compiler, *flags, '-c', source, '-o', obj], label + '-compile', receipts)
    command(root, folder, [linker, '-m', 'armelf', '--no-undefined', '--gc-sections', '-Ttext=' + hex(ADDRESS),
                          '--entry=' + SYMBOL, '-o', linked, obj], label + '-link', receipts)
    object_bytes, _, object_section = symbol(obj)
    body, address, linked_section = symbol(linked)
    if address != ADDRESS or body != object_bytes:
        raise RuntimeError('Genuine linked function identity differs from object')
    ast = command(root, folder, [compiler, *flags, '-Xclang', '-ast-dump=json', '-fsyntax-only', source], label + '-ast', receipts)
    ast_path = folder / (label + '.ast.json')
    ast_path.write_bytes(ast)
    return body, json.loads(ast), {'source': record(root, source), 'object': record(root, obj), 'linkedElf': record(root, linked),
                                  'objectSection': object_section, 'linkedSection': linked_section,
                                  'bodyBytes': len(body), 'bodySha256': digest(body), 'bodyRelocations': [],
                                  'unresolvedSymbols': [], 'poolBytes': 0, 'ast': record(root, ast_path)}


def execute(code, x, nzcv, thumb, return_delta=0):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM, unicorn.UC_MODE_ARM)
    cpu.ctl_set_cpu_model(u.UC_CPU_ARM_1176)
    if return_delta % (2 if thumb else 4):
        raise ValueError('Caller continuation alignment invalid')
    sentinel, stack = 0x1000000 + return_delta, 0x2000000
    cpu.mem_map(ADDRESS & ~4095, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_write(ADDRESS, code)
    cpu.mem_map(sentinel & ~4095, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
    cpu.mem_map(stack, 8192, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
    rng = random.Random(0xa002 + x)
    memory = rng.randbytes(8192)
    cpu.mem_write(stack, memory)
    initial = [rng.getrandbits(32) for _ in CORE]
    initial[0], initial[13], initial[14] = x, stack + 4096, sentinel | int(thumb)
    cpsr = (nzcv << 28) | (rng.getrandbits(1) << 27) | (rng.getrandbits(4) << 16) | 0x10
    cpu.reg_write(u.UC_ARM_REG_CPSR, cpsr)
    for register, value in zip(REGISTERS, initial):
        cpu.reg_write(register, value)
    reads, writes, visits = [], [], []
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ, lambda cpu, access, address, size, value, user: reads.append([address, size]))
    cpu.hook_add(unicorn.UC_HOOK_MEM_WRITE, lambda cpu, access, address, size, value, user: writes.append([address, size]))
    def visit(cpu, address, size, user):
        if not ADDRESS <= address < ADDRESS + len(code):
            raise RuntimeError('Execution escaped owned body before return')
        visits.append(address)
    cpu.hook_add(unicorn.UC_HOOK_CODE, visit)
    cpu.emu_start(ADDRESS, sentinel, count=64)
    final = [cpu.reg_read(register) for register in REGISTERS]
    final_cpsr = cpu.reg_read(u.UC_ARM_REG_CPSR)
    if cpu.reg_read(u.UC_ARM_REG_PC) != sentinel or bool(final_cpsr & 32) != thumb:
        raise RuntimeError('Actual ARM/Thumb return sentinel not reached')
    if reads or writes or bytes(cpu.mem_read(stack, 8192)) != memory:
        raise RuntimeError('Undeclared actual data-memory effect')
    if any(final[index] != initial[index] for index in list(range(4, 12)) + [13, 14]):
        raise RuntimeError('Actual callee-saved/SP/LR corruption')
    if final_cpsr & 0x0fffffdf != cpsr & 0x0fffffdf:
        raise RuntimeError('Actual CPSR control bits changed')
    return {'input': dict(zip(CORE, initial)), 'initialNzcv': nzcv, 'initialOtherCpsr': cpsr & 0x0fffffdf,
            'output': dict(zip(CORE, final)), 'finalNzcv': final_cpsr >> 28,
            'returnTarget': cpu.reg_read(u.UC_ARM_REG_PC), 'returnThumb': bool(final_cpsr & 32),
            'returned': True, 'reads': reads, 'writes': writes, 'memoryPreserved': True,
            'calleeSavedSpLrPreserved': True, 'otherCpsrBitsPreserved': True, 'visits': visits}
