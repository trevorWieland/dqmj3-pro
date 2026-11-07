import random
import struct

import unicorn
from unicorn import arm64_const as arm

from squirrel_source_wave002 import sha
from squirrel_execute031_model import validate_case




HEAP, HEAP_BYTES, STACK, STOP = 0x102000000, 0x100000, 0x106000000, 0x10fff0000


def execute(component,case):
    validate_case(case)
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
    cpu.mem_write(STACK, random.Random(0x190064).randbytes(0x10000))
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

    def stop(current,address,size,unused):
        nonlocal returned
        returned=True
        current.emu_stop()
    cpu.hook_add(unicorn.UC_HOOK_CODE,stop,begin=STOP,end=STOP)

    def invoke(name, arguments, label):
        nonlocal phase, returned
        phase, returned = label, False
        sp = STACK + 0xff00
        cpu.reg_write(arm.UC_ARM64_REG_SP, sp)
        cpu.reg_write(arm.UC_ARM64_REG_LR, STOP)
        protected = {getattr(arm, 'UC_ARM64_REG_X' + str(index)): 0x190064000000 + index * 0x10001 for index in range(18, 30)}
        vectors = {getattr(arm, 'UC_ARM64_REG_Q' + str(index)): (0x1122334455667788 << 64) | (0xaabbcc0000160000 + index) for index in range(8, 16)}
        for register, value in {**protected, **vectors}.items():
            cpu.reg_write(register, value)
        for index, argument in enumerate(arguments):
            if index < 8: cpu.reg_write(getattr(arm, 'UC_ARM64_REG_X' + str(index)), argument)
            else: cpu.mem_write(sp+(index-8)*8,struct.pack('<Q',argument))
        cpu.emu_start(component['symbols'][name], STOP + 4, count=2000000, timeout=3000000)
        if not returned or cpu.reg_read(arm.UC_ARM64_REG_SP) != sp or any(cpu.reg_read(register) != value for register, value in protected.items()):
            raise ValueError('Android model failed its integer/platform ABI')
        if any((cpu.reg_read(register) & ((1 << 64) - 1)) != (value & ((1 << 64) - 1)) for register, value in vectors.items()):
            raise ValueError('Android model failed callee-saved SIMD low64 ABI')
        if cpu.reg_read(arm.UC_ARM64_REG_FPCR) != 0:
            raise ValueError('Android model changed floating-point control fields')
        return cpu.reg_read(arm.UC_ARM64_REG_X0)

    symbols=component['symbols']
    if invoke('fixture_bind028',[HEAP,HEAP_BYTES],'prepare')!=1:raise ValueError('025 A64 binding failed')
    invoke('fixture_prepare031',[case['mode'],case['value']&0xffffffff,case['flags'],1],'prepare')
    code_hook=cpu.hook_add(unicorn.UC_HOOK_CODE,instruction)
    memory_hook=cpu.hook_add(unicorn.UC_HOOK_MEM_READ|unicorn.UC_HOOK_MEM_WRITE,memory)
    invoke('fixture_run031',[case['cleanup']],'root')
    cpu.hook_del(code_hook);cpu.hook_del(memory_hook)
    raw=bytes(cpu.mem_read(HEAP,HEAP_BYTES))
    count=invoke('fixture_snapshot031',[HEAP+0xf0000,8192],'snapshot')
    if not 24<=count<=8192:raise ValueError('022 A64 observation extent invalid')
    words=list(struct.unpack('<'+'I'*count,cpu.mem_read(HEAP+0xf0000,count*4)))
    return {'words':words,'arenaSha256':sha(raw),'returned':True},{'visited':sorted(coverage),'originalModuleMapped':False,
      'highPointersAbove32Bits':True,'integerAndSimdAbiPreserved':True,'physicalAndroidExecution':False},raw
