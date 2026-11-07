import io

from elftools.elf.elffile import ELFFile
import unicorn
import unicorn.arm64_const as arm

from native_wave014_build import ROOT, WORK, command, pin
from native_wave014_vectors import ENTRIES, memory


def link():
    folder = WORK / 'android-model'
    folder.mkdir(parents=True, exist_ok=True)
    objects = sorted((WORK / 'android').glob('source-*.o'))
    if len(objects) != 3:
        raise ValueError('Actual Android math object inventory differs')
    script, linked = folder / 'family.ld', folder / 'family.elf'
    script.write_text('SECTIONS { .text 0x4000000 : { *(.text*) } .rodata : { *(.rodata*) }\n' +
        '.data : { *(.data*) *(.got*) } .bss : { *(.bss*) *(COMMON) }\n' +
        '/DISCARD/ : { *(.eh_frame*) *(.comment) *(.note*) *(.llvm_addrsig) } }\n')
    command([ROOT / 'tools/clang-21/ld.lld.exe', '-m', 'aarch64elf', '--no-undefined', '--build-id=none',
        '--entry=fn_0054befc', '-T', script, *objects, '-o', linked], folder / 'link.json')
    elf = ELFFile(io.BytesIO(linked.read_bytes()))
    table = elf.get_section_by_name('.symtab')
    if any(row.name and row['st_shndx'] == 'SHN_UNDEF' for row in table.iter_symbols()):
        raise ValueError('Android math model contains unresolved dependencies')
    symbols = {row.name: row['st_value'] for row in table.iter_symbols() if row.name and
        isinstance(row['st_shndx'], int) and row['st_info']['type'] in ['STT_FUNC', 'STT_OBJECT']}
    sections = [(row['sh_addr'], row['sh_size'], row['sh_flags'], row.data()) for row in elf.iter_sections()
        if row['sh_flags'] & 2 and row['sh_size']]
    return sections, symbols, {'linkedElf': pin(linked), 'linkerScript': pin(script),
        'actualAndroidObjects': [pin(path) for path in objects], 'originalInstructionDependencies': []}


class Android:
    def __init__(self, sections, symbols):
        self.sections, self.symbols, self.calls, self.coverage = sections, symbols, 0, set()

    def execute(self, case):
        base, stack, stop = 0x110000004, 0x130000000, 0x140000000
        data, args, s0, out, size = memory(case, base, 8)
        cpu = unicorn.Uc(unicorn.UC_ARCH_ARM64, unicorn.UC_MODE_ARM)
        cpu.ctl_set_cpu_model(arm.UC_CPU_ARM64_A72)
        permissions = {}
        for address, length, flags, blob in self.sections:
            bits = unicorn.UC_PROT_READ | (unicorn.UC_PROT_WRITE if flags & 1 else 0) | (unicorn.UC_PROT_EXEC if flags & 4 else 0)
            for page in range(address & -4096, (address + length + 4095) & -4096, 4096):
                permissions[page] = permissions.get(page, 0) | bits
        for page in permissions:
            cpu.mem_map(page, 4096)
        for address, length, flags, blob in self.sections:
            cpu.mem_write(address, blob)
        for page, bits in permissions.items():
            cpu.mem_protect(page, 4096, bits)
        cpu.mem_map(base & -4096, 0x21000, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
        cpu.mem_write(base, bytes(data))
        cpu.mem_map(stack, 0x20000, unicorn.UC_PROT_READ | unicorn.UC_PROT_WRITE)
        cpu.mem_map(stop, 4096, unicorn.UC_PROT_READ | unicorn.UC_PROT_EXEC)
        cpu.reg_write(arm.UC_ARM64_REG_CPACR_EL1, 3 << 20)
        cpu.reg_write(arm.UC_ARM64_REG_FPCR, 0)
        for index in range(18, 30):
            cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), 0x4d00000000 + index * 113)
        for index in range(8, 16):
            cpu.reg_write(getattr(arm, 'UC_ARM64_REG_D' + str(index)), 0x3ff0000000000000 + index * 157)
        for index, value in enumerate(args):
            cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), value & 0xffffffffffffffff)
        if s0 is not None:
            cpu.reg_write(arm.UC_ARM64_REG_S0, s0)
        cpu.reg_write(arm.UC_ARM64_REG_SP, stack + 0x10000)
        cpu.reg_write(arm.UC_ARM64_REG_X30, stop)
        steps = 0
        def observe(machine, address, instruction_size, context):
            nonlocal steps
            if not any(start <= address < start + length for start, length, flags, blob in self.sections if flags & 4):
                raise ValueError('Android math execution escaped actual compiled objects')
            self.coverage.add(address)
            steps += 1
        cpu.hook_add(unicorn.UC_HOOK_CODE, observe)
        cpu.emu_start(self.symbols[ENTRIES[case['operation']]], stop, count=100000)
        if cpu.reg_read(arm.UC_ARM64_REG_PC) != stop or cpu.reg_read(arm.UC_ARM64_REG_SP) != stack + 0x10000:
            raise ValueError('Android math call failed normal return/stack preservation')
        for index in range(18, 30):
            if cpu.reg_read(getattr(arm, 'UC_ARM64_REG_X' + str(index))) != 0x4d00000000 + index * 113:
                raise ValueError('Android math changed x18 or callee-saved integer state')
        for index in range(8, 16):
            if cpu.reg_read(getattr(arm, 'UC_ARM64_REG_D' + str(index))) != 0x3ff0000000000000 + index * 157:
                raise ValueError('Android math changed callee-saved VFP state')
        after = bytes(cpu.mem_read(base, len(data)))
        if after[:out] != data[:out] or after[out + size:] != data[out + size:]:
            raise ValueError('Android math modified memory outside output span')
        self.calls += 1
        status = cpu.reg_read(arm.UC_ARM64_REG_X0) if case['operation'] == 'inverse' else None
        return after[out:out + size], status, steps
