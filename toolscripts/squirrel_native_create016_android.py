import random
import struct

import unicorn
from unicorn import arm64_const as arm

from squirrel_source_wave002 import sha


HEAP, HEAP_BYTES, STACK, STOP = 0x102000000, 0x10000, 0x106000000, 0x10fff0000


def execute(component, case):
    cpu = unicorn.Uc(unicorn.UC_ARCH_ARM64, unicorn.UC_MODE_ARM)
    pages = {page for section in component['sections']
             for page in range(section['address'] & -4096, (section['address'] + section['size'] + 4095) & -4096, 4096)}
    for page in sorted(pages):
        cpu.mem_map(page, 4096)
    for section in component['sections']:
        cpu.mem_write(section['address'], section['data'])
    cpu.mem_map(HEAP, HEAP_BYTES)
    cpu.mem_map(STACK, 0x10000)
    cpu.mem_map(STOP, 4096)
    cpu.mem_write(STACK, random.Random(0x160064).randbytes(0x10000))
    cpu.reg_write(arm.UC_ARM64_REG_CPACR_EL1, 3 << 20)
    cpu.reg_write(arm.UC_ARM64_REG_FPCR, 0)
    cpu.reg_write(arm.UC_ARM64_REG_FPSR, 0)
    phase, returned, coverage = '', False, set()
    writable = [section for section in component['sections'] if section['flags'] & 1]

    def instruction(current, address, size, unused):
        nonlocal returned
        if address == STOP:
            returned = True
            current.emu_stop()
            return
        if phase != 'root':
            return
        if address == component['symbols']['fixture_native_callable016']:
            raise ValueError('Stored Android callable was unexpectedly invoked')
        if not any(row['address'] <= address < row['address'] + row['size'] for row in component['functions']):
            raise ValueError('Android object model left authored source: ' + hex(address))
        coverage.add(address)

    def memory(current, kind, address, size, value, unused):
        if phase != 'root':
            return
        mutable = HEAP <= address < address + size <= HEAP + HEAP_BYTES or STACK <= address < address + size <= STACK + 0x10000 or any(
            section['address'] <= address < address + size <= section['address'] + section['size'] for section in writable)
        if kind == unicorn.UC_MEM_WRITE and not mutable:
            raise ValueError('Android model write escaped declared storage')
        if kind == unicorn.UC_MEM_READ and not mutable and not any(
                section['address'] <= address < address + size <= section['address'] + section['size'] for section in component['sections']):
            raise ValueError('Android model read escaped declared storage')

    cpu.hook_add(unicorn.UC_HOOK_CODE, instruction)
    cpu.hook_add(unicorn.UC_HOOK_MEM_READ | unicorn.UC_HOOK_MEM_WRITE, memory)

    def invoke(name, arguments, label):
        nonlocal phase, returned
        phase, returned = label, False
        sp = STACK + 0xff00
        cpu.reg_write(arm.UC_ARM64_REG_SP, sp)
        cpu.reg_write(arm.UC_ARM64_REG_LR, STOP)
        protected = {getattr(arm, 'UC_ARM64_REG_X' + str(index)): 0x160064000000 + index * 0x10001 for index in range(18, 30)}
        vectors = {getattr(arm, 'UC_ARM64_REG_Q' + str(index)): (0x1122334455667788 << 64) | (0xaabbcc0000160000 + index) for index in range(8, 16)}
        for register, value in {**protected, **vectors}.items():
            cpu.reg_write(register, value)
        for index, argument in enumerate(arguments):
            cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), argument)
        cpu.emu_start(component['symbols'][name], STOP + 4, count=2000000, timeout=3000000)
        if not returned or cpu.reg_read(arm.UC_ARM64_REG_SP) != sp or any(cpu.reg_read(register) != value for register, value in protected.items()):
            raise ValueError('Android model failed its integer/platform ABI')
        if any((cpu.reg_read(register) & ((1 << 64) - 1)) != (value & ((1 << 64) - 1)) for register, value in vectors.items()):
            raise ValueError('Android model failed callee-saved SIMD low64 ABI')
        if cpu.reg_read(arm.UC_ARM64_REG_FPCR) != 0:
            raise ValueError('Android model changed floating-point control fields')
        return cpu.reg_read(arm.UC_ARM64_REG_X0)

    symbols = component['symbols']
    if invoke('fixture_native_bind016', [HEAP, HEAP_BYTES, symbols['sq_native_closure_vtable013'],
             symbols['sq_prototype_vtable011'], symbols['sq_prototype_base_vtable011']], 'prepare') != 1:
        raise ValueError('Android model rejected its actual high-pointer objects')
    invoke('fixture_native_prepare016', [case['captures'], case['flags']], 'prepare')
    invoke('fixture_native_run016', [1, case['captures'], case['cleanup']], 'root')
    raw = bytes(cpu.mem_read(HEAP, HEAP_BYTES))
    count = invoke('fixture_native_snapshot016', [HEAP + 0xf000, 512], 'snapshot')
    if not 21 <= count <= 512:
        raise ValueError('Android model snapshot size is invalid')
    words = list(struct.unpack('<' + 'I' * count, cpu.mem_read(HEAP + 0xf000, count * 4)))
    return {'words': words, 'arenaSha256': sha(raw), 'returned': True}, {'visited': sorted(coverage),
        'originalModuleMapped': False, 'highPointersAbove32Bits': True, 'integerAndSimdAbiPreserved': True,
        'physicalAndroidExecution': False}, raw
