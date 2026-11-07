import struct

from unicorn import Uc, UC_ARCH_ARM, UC_HOOK_CODE, UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_C1_C0_2, UC_ARM_REG_CPSR, UC_ARM_REG_D8, UC_ARM_REG_FPEXC
from unicorn.arm_const import UC_ARM_REG_FPSCR, UC_ARM_REG_LR, UC_ARM_REG_R0, UC_ARM_REG_R4, UC_ARM_REG_SP

from native_wave014_oracle import original_image
from platform_engine_wave005_original import construct


RAM, STACK, STOP = 0x2000000, 0x6000000, 0xfff0000


def matrix(original, world, width, height, reference, mapping):
    data = bytearray(0x20000)
    header = bytearray(original['object'])
    header[120:124] = struct.pack('<I', RAM + 0x6000)
    data[0x4000:0x4000 + len(header)] = header
    storage = original['storage']
    data[0x6000:0x6000 + len(storage)] = storage
    capacity = struct.unpack_from('<H', header, 116)[0]
    data[0x8000 + 116:0x8000 + 164] = struct.pack('<12f', 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0)
    data[0x8000 + 176:0x8000 + 180] = struct.pack('<I', RAM + 0xa000)
    data[0x9000 + 60:0x9000 + 68] = struct.pack('<2f', width, height)
    data[0x9000 + 72:0x9000 + 120] = struct.pack('<12f', *world)
    data[0xa000 + 24:0xa000 + 32] = struct.pack('<2f', 320, 240)
    if mapping == 4:
        entry, amount = 0x54befc, 32
        args = [RAM + 0x1000, RAM + 0x8000, RAM + 0x9000, RAM + 0x4000, reference, 4, 0]
    else:
        entry, amount = 0x55492c, 24
        args = [RAM + 0x1000, RAM + 0x6000 + 32 * (capacity & 3) + reference * 20,
            RAM + 0x6000 + reference * 32]
    image = original_image()
    cpu = Uc(UC_ARCH_ARM, UC_MODE_ARM)
    cpu.mem_map(0x100000, (len(image) + 4095) & -4096)
    cpu.mem_write(0x100000, image)
    cpu.mem_map(RAM, len(data))
    cpu.mem_write(RAM, bytes(data))
    cpu.mem_map(STACK, 0x20000)
    cpu.mem_map(STOP, 4096)
    cpu.reg_write(UC_ARM_REG_CPSR, 0x10)
    cpu.reg_write(UC_ARM_REG_C1_C0_2, cpu.reg_read(UC_ARM_REG_C1_C0_2) | 0xf00000)
    cpu.reg_write(UC_ARM_REG_FPEXC, 0x40000000)
    cpu.reg_write(UC_ARM_REG_FPSCR, 0)
    cpu.reg_write(UC_ARM_REG_SP, STACK + 0x10000)
    cpu.reg_write(UC_ARM_REG_LR, STOP)
    for index in range(8):
        cpu.reg_write(UC_ARM_REG_R4 + index, 0x4a000000 + index * 149)
        cpu.reg_write(UC_ARM_REG_D8 + index, 0x3ff0000000000000 + index * 173)
    for index, argument in enumerate(args[:4]):
        cpu.reg_write(UC_ARM_REG_R0 + index, argument)
    for index, argument in enumerate(args[4:]):
        cpu.mem_write(STACK + 0x10000 + 4 * index, struct.pack('<I', argument))
    returned = False
    def observe(machine, address, length, context):
        nonlocal returned
        if address == STOP:
            returned = True
            machine.emu_stop()
        elif not 0x100000 <= address < 0x100000 + 7051280:
            raise ValueError('Original asset-coordinate math escaped executable scope')
    cpu.hook_add(UC_HOOK_CODE, observe)
    cpu.emu_start(entry, STOP + 4, count=100000)
    if not returned or cpu.reg_read(UC_ARM_REG_SP) != STACK + 0x10000:
        raise ValueError('Original asset-coordinate math did not return with its stack')
    for index in range(8):
        if cpu.reg_read(UC_ARM_REG_R4 + index) != 0x4a000000 + index * 149 or cpu.reg_read(UC_ARM_REG_D8 + index) != 0x3ff0000000000000 + index * 173:
            raise ValueError('Original asset-coordinate math changed saved state')
    after = bytes(cpu.mem_read(RAM, len(data)))
    if after[:0x1000] != data[:0x1000] or after[0x1000 + amount:] != data[0x1000 + amount:]:
        raise ValueError('Original asset-coordinate math wrote outside its output')
    values = struct.unpack('<' + 'f' * (amount // 4), after[0x1000:0x1000 + amount])
    if mapping != 4:
        values = (values[0], values[1], 0., values[2], values[3], values[4], 0., values[5])
    return values
